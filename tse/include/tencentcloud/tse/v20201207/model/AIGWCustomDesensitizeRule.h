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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_AIGWCUSTOMDESENSITIZERULE_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_AIGWCUSTOMDESENSITIZERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * AI 网关自定义脱敏规则（A 层 / B 层共用结构体，MaskFormat 含义随所属层不同）
                */
                class AIGWCustomDesensitizeRule : public AbstractModel
                {
                public:
                    AIGWCustomDesensitizeRule();
                    ~AIGWCustomDesensitizeRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>自定义脱敏规则名称</p>
                     * @return Name <p>自定义脱敏规则名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>自定义脱敏规则名称</p>
                     * @param _name <p>自定义脱敏规则名称</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>自定义脱敏规则匹配正则</p>
                     * @return Pattern <p>自定义脱敏规则匹配正则</p>
                     * 
                     */
                    std::string GetPattern() const;

                    /**
                     * 设置<p>自定义脱敏规则匹配正则</p>
                     * @param _pattern <p>自定义脱敏规则匹配正则</p>
                     * 
                     */
                    void SetPattern(const std::string& _pattern);

                    /**
                     * 判断参数 Pattern 是否已赋值
                     * @return Pattern 是否已赋值
                     * 
                     */
                    bool PatternHasBeenSet() const;

                    /**
                     * 获取<p>自定义脱敏规则掩码</p>
                     * @return MaskFormat <p>自定义脱敏规则掩码</p>
                     * 
                     */
                    std::string GetMaskFormat() const;

                    /**
                     * 设置<p>自定义脱敏规则掩码</p>
                     * @param _maskFormat <p>自定义脱敏规则掩码</p>
                     * 
                     */
                    void SetMaskFormat(const std::string& _maskFormat);

                    /**
                     * 判断参数 MaskFormat 是否已赋值
                     * @return MaskFormat 是否已赋值
                     * 
                     */
                    bool MaskFormatHasBeenSet() const;

                    /**
                     * 获取<p>自定义脱敏规则开关</p>
                     * @return Enabled <p>自定义脱敏规则开关</p>
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置<p>自定义脱敏规则开关</p>
                     * @param _enabled <p>自定义脱敏规则开关</p>
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                private:

                    /**
                     * <p>自定义脱敏规则名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>自定义脱敏规则匹配正则</p>
                     */
                    std::string m_pattern;
                    bool m_patternHasBeenSet;

                    /**
                     * <p>自定义脱敏规则掩码</p>
                     */
                    std::string m_maskFormat;
                    bool m_maskFormatHasBeenSet;

                    /**
                     * <p>自定义脱敏规则开关</p>
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_AIGWCUSTOMDESENSITIZERULE_H_
