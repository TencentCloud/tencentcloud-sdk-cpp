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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_TRANSFORM_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_TRANSFORM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eb/v20210416/model/OutputStructParam.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * 描述如何数据转换

                */
                class Transform : public AbstractModel
                {
                public:
                    Transform();
                    ~Transform() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取描述如何数据转换
                     * @return OutputStructs 描述如何数据转换
                     * 
                     */
                    std::vector<OutputStructParam> GetOutputStructs() const;

                    /**
                     * 设置描述如何数据转换
                     * @param _outputStructs 描述如何数据转换
                     * 
                     */
                    void SetOutputStructs(const std::vector<OutputStructParam>& _outputStructs);

                    /**
                     * 判断参数 OutputStructs 是否已赋值
                     * @return OutputStructs 是否已赋值
                     * 
                     */
                    bool OutputStructsHasBeenSet() const;

                private:

                    /**
                     * 描述如何数据转换
                     */
                    std::vector<OutputStructParam> m_outputStructs;
                    bool m_outputStructsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_TRANSFORM_H_
