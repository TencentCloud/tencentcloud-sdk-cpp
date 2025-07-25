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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYCOSRULES_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYCOSRULES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dsgc/v20190723/model/DspaDiscoveryCOSDataRule.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * 分类分级任务COS识别规则
                */
                class DspaDiscoveryCOSRules : public AbstractModel
                {
                public:
                    DspaDiscoveryCOSRules();
                    ~DspaDiscoveryCOSRules() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则状态；0 不启用, 1 启用
                     * @return Status 规则状态；0 不启用, 1 启用
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置规则状态；0 不启用, 1 启用
                     * @param _status 规则状态；0 不启用, 1 启用
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取regex规则内容
                     * @return RegexRule regex规则内容
                     * 
                     */
                    DspaDiscoveryCOSDataRule GetRegexRule() const;

                    /**
                     * 设置regex规则内容
                     * @param _regexRule regex规则内容
                     * 
                     */
                    void SetRegexRule(const DspaDiscoveryCOSDataRule& _regexRule);

                    /**
                     * 判断参数 RegexRule 是否已赋值
                     * @return RegexRule 是否已赋值
                     * 
                     */
                    bool RegexRuleHasBeenSet() const;

                    /**
                     * 获取关键词规则内容组，最大支持5个关键词。
                     * @return KeywordRule 关键词规则内容组，最大支持5个关键词。
                     * 
                     */
                    DspaDiscoveryCOSDataRule GetKeywordRule() const;

                    /**
                     * 设置关键词规则内容组，最大支持5个关键词。
                     * @param _keywordRule 关键词规则内容组，最大支持5个关键词。
                     * 
                     */
                    void SetKeywordRule(const DspaDiscoveryCOSDataRule& _keywordRule);

                    /**
                     * 判断参数 KeywordRule 是否已赋值
                     * @return KeywordRule 是否已赋值
                     * 
                     */
                    bool KeywordRuleHasBeenSet() const;

                    /**
                     * 获取忽略词规则内容组，最大支持5个忽略词。
                     * @return IgnoreStringRule 忽略词规则内容组，最大支持5个忽略词。
                     * 
                     */
                    DspaDiscoveryCOSDataRule GetIgnoreStringRule() const;

                    /**
                     * 设置忽略词规则内容组，最大支持5个忽略词。
                     * @param _ignoreStringRule 忽略词规则内容组，最大支持5个忽略词。
                     * 
                     */
                    void SetIgnoreStringRule(const DspaDiscoveryCOSDataRule& _ignoreStringRule);

                    /**
                     * 判断参数 IgnoreStringRule 是否已赋值
                     * @return IgnoreStringRule 是否已赋值
                     * 
                     */
                    bool IgnoreStringRuleHasBeenSet() const;

                    /**
                     * 获取最大匹配距离，默认值为100。上限为500.
                     * @return MaxMatch 最大匹配距离，默认值为100。上限为500.
                     * 
                     */
                    int64_t GetMaxMatch() const;

                    /**
                     * 设置最大匹配距离，默认值为100。上限为500.
                     * @param _maxMatch 最大匹配距离，默认值为100。上限为500.
                     * 
                     */
                    void SetMaxMatch(const int64_t& _maxMatch);

                    /**
                     * 判断参数 MaxMatch 是否已赋值
                     * @return MaxMatch 是否已赋值
                     * 
                     */
                    bool MaxMatchHasBeenSet() const;

                private:

                    /**
                     * 规则状态；0 不启用, 1 启用
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * regex规则内容
                     */
                    DspaDiscoveryCOSDataRule m_regexRule;
                    bool m_regexRuleHasBeenSet;

                    /**
                     * 关键词规则内容组，最大支持5个关键词。
                     */
                    DspaDiscoveryCOSDataRule m_keywordRule;
                    bool m_keywordRuleHasBeenSet;

                    /**
                     * 忽略词规则内容组，最大支持5个忽略词。
                     */
                    DspaDiscoveryCOSDataRule m_ignoreStringRule;
                    bool m_ignoreStringRuleHasBeenSet;

                    /**
                     * 最大匹配距离，默认值为100。上限为500.
                     */
                    int64_t m_maxMatch;
                    bool m_maxMatchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_DSPADISCOVERYCOSRULES_H_
