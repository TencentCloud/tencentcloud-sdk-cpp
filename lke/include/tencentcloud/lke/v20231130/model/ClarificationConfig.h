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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_CLARIFICATIONCONFIG_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_CLARIFICATIONCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/ClarificationWidgetConfig.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 澄清询问配置
                */
                class ClarificationConfig : public AbstractModel
                {
                public:
                    ClarificationConfig();
                    ~ClarificationConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输出类型，1-文本 3-widget
                     * @return OutputType 输出类型，1-文本 3-widget
                     * 
                     */
                    int64_t GetOutputType() const;

                    /**
                     * 设置输出类型，1-文本 3-widget
                     * @param _outputType 输出类型，1-文本 3-widget
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
                     * 获取澄清widget配置
                     * @return WidgetConfigs 澄清widget配置
                     * 
                     */
                    std::vector<ClarificationWidgetConfig> GetWidgetConfigs() const;

                    /**
                     * 设置澄清widget配置
                     * @param _widgetConfigs 澄清widget配置
                     * 
                     */
                    void SetWidgetConfigs(const std::vector<ClarificationWidgetConfig>& _widgetConfigs);

                    /**
                     * 判断参数 WidgetConfigs 是否已赋值
                     * @return WidgetConfigs 是否已赋值
                     * 
                     */
                    bool WidgetConfigsHasBeenSet() const;

                private:

                    /**
                     * 输出类型，1-文本 3-widget
                     */
                    int64_t m_outputType;
                    bool m_outputTypeHasBeenSet;

                    /**
                     * 澄清widget配置
                     */
                    std::vector<ClarificationWidgetConfig> m_widgetConfigs;
                    bool m_widgetConfigsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_CLARIFICATIONCONFIG_H_
