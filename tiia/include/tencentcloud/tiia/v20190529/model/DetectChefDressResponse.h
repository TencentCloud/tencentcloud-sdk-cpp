/*
 * Copyright (c) 2017-2019 THL A29 Limited, a Tencent company. All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_DETECTCHEFDRESSRESPONSE_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_DETECTCHEFDRESSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tiia/v20190529/model/AttributesForBody.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * DetectChefDress返回参数结构体
                */
                class DetectChefDressResponse : public AbstractModel
                {
                public:
                    DetectChefDressResponse();
                    ~DetectChefDressResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取识别到的人体属性信息。单个人体属性信息包括人体检测置信度，属性信息，人体检测框。
                     * @return Bodies 识别到的人体属性信息。单个人体属性信息包括人体检测置信度，属性信息，人体检测框。
                     * 
                     */
                    std::vector<AttributesForBody> GetBodies() const;

                    /**
                     * 判断参数 Bodies 是否已赋值
                     * @return Bodies 是否已赋值
                     * 
                     */
                    bool BodiesHasBeenSet() const;

                private:

                    /**
                     * 识别到的人体属性信息。单个人体属性信息包括人体检测置信度，属性信息，人体检测框。
                     */
                    std::vector<AttributesForBody> m_bodies;
                    bool m_bodiesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_DETECTCHEFDRESSRESPONSE_H_
