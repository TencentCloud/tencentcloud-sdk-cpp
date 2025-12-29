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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_AGENTOUTPUTCONFIG_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_AGENTOUTPUTCONFIG_H_

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
                * Agent输出配置
                */
                class AgentOutputConfig : public AbstractModel
                {
                public:
                    AgentOutputConfig();
                    ~AgentOutputConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输出类型，1-文本 2-json 3-widget
                     * @return OutputType 输出类型，1-文本 2-json 3-widget
                     * 
                     */
                    int64_t GetOutputType() const;

                    /**
                     * 设置输出类型，1-文本 2-json 3-widget
                     * @param _outputType 输出类型，1-文本 2-json 3-widget
                     * 
                     */
                    void SetOutputType(const int64_t& _outputType);

                    /**
                     * 判断参数 OutputType 是否已赋值
                     * @return OutputType 是否已赋值
                     * 
                     */
                    bool OutputTypeHasBeenSet() const;

                    /**
                     * 获取Json结构化输出参数列表
                     * @return StructuredOutputParams Json结构化输出参数列表
                     * 
                     */
                    std::vector<ParameterConfig> GetStructuredOutputParams() const;

                    /**
                     * 设置Json结构化输出参数列表
                     * @param _structuredOutputParams Json结构化输出参数列表
                     * 
                     */
                    void SetStructuredOutputParams(const std::vector<ParameterConfig>& _structuredOutputParams);

                    /**
                     * 判断参数 StructuredOutputParams 是否已赋值
                     * @return StructuredOutputParams 是否已赋值
                     * 
                     */
                    bool StructuredOutputParamsHasBeenSet() const;

                    /**
                     * 获取widget id
                     * @return WidgetId widget id
                     * 
                     */
                    std::string GetWidgetId() const;

                    /**
                     * 设置widget id
                     * @param _widgetId widget id
                     * 
                     */
                    void SetWidgetId(const std::string& _widgetId);

                    /**
                     * 判断参数 WidgetId 是否已赋值
                     * @return WidgetId 是否已赋值
                     * 
                     */
                    bool WidgetIdHasBeenSet() const;

                private:

                    /**
                     * 输出类型，1-文本 2-json 3-widget
                     */
                    int64_t m_outputType;
                    bool m_outputTypeHasBeenSet;

                    /**
                     * Json结构化输出参数列表
                     */
                    std::vector<ParameterConfig> m_structuredOutputParams;
                    bool m_structuredOutputParamsHasBeenSet;

                    /**
                     * widget id
                     */
                    std::string m_widgetId;
                    bool m_widgetIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_AGENTOUTPUTCONFIG_H_
