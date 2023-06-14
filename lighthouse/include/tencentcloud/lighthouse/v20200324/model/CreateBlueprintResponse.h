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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEBLUEPRINTRESPONSE_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEBLUEPRINTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * CreateBlueprint返回参数结构体
                */
                class CreateBlueprintResponse : public AbstractModel
                {
                public:
                    CreateBlueprintResponse();
                    ~CreateBlueprintResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取自定义镜像ID。
                     * @return BlueprintId 自定义镜像ID。
                     * 
                     */
                    std::string GetBlueprintId() const;

                    /**
                     * 判断参数 BlueprintId 是否已赋值
                     * @return BlueprintId 是否已赋值
                     * 
                     */
                    bool BlueprintIdHasBeenSet() const;

                private:

                    /**
                     * 自定义镜像ID。
                     */
                    std::string m_blueprintId;
                    bool m_blueprintIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_CREATEBLUEPRINTRESPONSE_H_
