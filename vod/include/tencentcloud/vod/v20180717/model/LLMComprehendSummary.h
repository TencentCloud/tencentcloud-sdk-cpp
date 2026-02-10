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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_LLMCOMPREHENDSUMMARY_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_LLMCOMPREHENDSUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * 大模型解析分段摘要解析配置
                */
                class LLMComprehendSummary : public AbstractModel
                {
                public:
                    LLMComprehendSummary();
                    ~LLMComprehendSummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分段摘要任务开关，可选值：
- ON：开启分段摘要任务；
- OFF：关闭分段摘要任
                     * @return Switch 分段摘要任务开关，可选值：
- ON：开启分段摘要任务；
- OFF：关闭分段摘要任
                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置分段摘要任务开关，可选值：
- ON：开启分段摘要任务；
- OFF：关闭分段摘要任
                     * @param _switch 分段摘要任务开关，可选值：
- ON：开启分段摘要任务；
- OFF：关闭分段摘要任
                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取扩展参数，其值为序列化的 json字符串。可参考[扩展参数说明](/document/product/862/104493#note)
                     * @return ExtendedParameter 扩展参数，其值为序列化的 json字符串。可参考[扩展参数说明](/document/product/862/104493#note)
                     * 
                     */
                    std::string GetExtendedParameter() const;

                    /**
                     * 设置扩展参数，其值为序列化的 json字符串。可参考[扩展参数说明](/document/product/862/104493#note)
                     * @param _extendedParameter 扩展参数，其值为序列化的 json字符串。可参考[扩展参数说明](/document/product/862/104493#note)
                     * 
                     */
                    void SetExtendedParameter(const std::string& _extendedParameter);

                    /**
                     * 判断参数 ExtendedParameter 是否已赋值
                     * @return ExtendedParameter 是否已赋值
                     * 
                     */
                    bool ExtendedParameterHasBeenSet() const;

                private:

                    /**
                     * 分段摘要任务开关，可选值：
- ON：开启分段摘要任务；
- OFF：关闭分段摘要任
                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 扩展参数，其值为序列化的 json字符串。可参考[扩展参数说明](/document/product/862/104493#note)
                     */
                    std::string m_extendedParameter;
                    bool m_extendedParameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_LLMCOMPREHENDSUMMARY_H_
