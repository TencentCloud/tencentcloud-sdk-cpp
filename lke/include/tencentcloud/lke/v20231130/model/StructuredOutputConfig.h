/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_STRUCTUREDOUTPUTCONFIG_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_STRUCTUREDOUTPUTCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/ParameterConfig.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 结构化输出的配置项
                */
                class StructuredOutputConfig : public AbstractModel
                {
                public:
                    StructuredOutputConfig();
                    ~StructuredOutputConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取参数列表
                     * @return StructuredOutputParams 参数列表
                     * 
                     */
                    std::vector<ParameterConfig> GetStructuredOutputParams() const;

                    /**
                     * 设置参数列表
                     * @param _structuredOutputParams 参数列表
                     * 
                     */
                    void SetStructuredOutputParams(const std::vector<ParameterConfig>& _structuredOutputParams);

                    /**
                     * 判断参数 StructuredOutputParams 是否已赋值
                     * @return StructuredOutputParams 是否已赋值
                     * 
                     */
                    bool StructuredOutputParamsHasBeenSet() const;

                private:

                    /**
                     * 参数列表
                     */
                    std::vector<ParameterConfig> m_structuredOutputParams;
                    bool m_structuredOutputParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_STRUCTUREDOUTPUTCONFIG_H_
