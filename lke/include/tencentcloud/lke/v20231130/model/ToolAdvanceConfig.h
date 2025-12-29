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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_TOOLADVANCECONFIG_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_TOOLADVANCECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/OutputWidgetConfig.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 工具高级设置
                */
                class ToolAdvanceConfig : public AbstractModel
                {
                public:
                    ToolAdvanceConfig();
                    ~ToolAdvanceConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工具调用结果是否直接返回给用户
                     * @return EnableDirectResultReturn 工具调用结果是否直接返回给用户
                     * 
                     */
                    bool GetEnableDirectResultReturn() const;

                    /**
                     * 设置工具调用结果是否直接返回给用户
                     * @param _enableDirectResultReturn 工具调用结果是否直接返回给用户
                     * 
                     */
                    void SetEnableDirectResultReturn(const bool& _enableDirectResultReturn);

                    /**
                     * 判断参数 EnableDirectResultReturn 是否已赋值
                     * @return EnableDirectResultReturn 是否已赋值
                     * 
                     */
                    bool EnableDirectResultReturnHasBeenSet() const;

                    /**
                     * 获取输出样式 1-文本 2-json 3-widget
                     * @return OutputType 输出样式 1-文本 2-json 3-widget
                     * 
                     */
                    int64_t GetOutputType() const;

                    /**
                     * 设置输出样式 1-文本 2-json 3-widget
                     * @param _outputType 输出样式 1-文本 2-json 3-widget
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
                     * 获取原始结构化JSON输出
                     * @return RawStructuredOutput 原始结构化JSON输出
                     * 
                     */
                    std::string GetRawStructuredOutput() const;

                    /**
                     * 设置原始结构化JSON输出
                     * @param _rawStructuredOutput 原始结构化JSON输出
                     * 
                     */
                    void SetRawStructuredOutput(const std::string& _rawStructuredOutput);

                    /**
                     * 判断参数 RawStructuredOutput 是否已赋值
                     * @return RawStructuredOutput 是否已赋值
                     * 
                     */
                    bool RawStructuredOutputHasBeenSet() const;

                    /**
                     * 获取自定义文本输出，多行展示
                     * @return CustomTextOutputs 自定义文本输出，多行展示
                     * 
                     */
                    std::string GetCustomTextOutputs() const;

                    /**
                     * 设置自定义文本输出，多行展示
                     * @param _customTextOutputs 自定义文本输出，多行展示
                     * 
                     */
                    void SetCustomTextOutputs(const std::string& _customTextOutputs);

                    /**
                     * 判断参数 CustomTextOutputs 是否已赋值
                     * @return CustomTextOutputs 是否已赋值
                     * 
                     */
                    bool CustomTextOutputsHasBeenSet() const;

                    /**
                     * 获取Widget输出配置
                     * @return OutputWidgetConfig Widget输出配置
                     * 
                     */
                    OutputWidgetConfig GetOutputWidgetConfig() const;

                    /**
                     * 设置Widget输出配置
                     * @param _outputWidgetConfig Widget输出配置
                     * 
                     */
                    void SetOutputWidgetConfig(const OutputWidgetConfig& _outputWidgetConfig);

                    /**
                     * 判断参数 OutputWidgetConfig 是否已赋值
                     * @return OutputWidgetConfig 是否已赋值
                     * 
                     */
                    bool OutputWidgetConfigHasBeenSet() const;

                private:

                    /**
                     * 工具调用结果是否直接返回给用户
                     */
                    bool m_enableDirectResultReturn;
                    bool m_enableDirectResultReturnHasBeenSet;

                    /**
                     * 输出样式 1-文本 2-json 3-widget
                     */
                    int64_t m_outputType;
                    bool m_outputTypeHasBeenSet;

                    /**
                     * 原始结构化JSON输出
                     */
                    std::string m_rawStructuredOutput;
                    bool m_rawStructuredOutputHasBeenSet;

                    /**
                     * 自定义文本输出，多行展示
                     */
                    std::string m_customTextOutputs;
                    bool m_customTextOutputsHasBeenSet;

                    /**
                     * Widget输出配置
                     */
                    OutputWidgetConfig m_outputWidgetConfig;
                    bool m_outputWidgetConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_TOOLADVANCECONFIG_H_
