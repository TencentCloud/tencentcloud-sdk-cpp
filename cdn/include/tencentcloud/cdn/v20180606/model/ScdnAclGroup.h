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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SCDNACLGROUP_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SCDNACLGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ScdnAclRule.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * SCDN精准访问控制配置
                */
                class ScdnAclGroup : public AbstractModel
                {
                public:
                    ScdnAclGroup();
                    ~ScdnAclGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则名称
                     * @return RuleName 规则名称
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
                     * @param RuleName 规则名称
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取具体配置
                     * @return Configure 具体配置
                     */
                    std::vector<ScdnAclRule> GetConfigure() const;

                    /**
                     * 设置具体配置
                     * @param Configure 具体配置
                     */
                    void SetConfigure(const std::vector<ScdnAclRule>& _configure);

                    /**
                     * 判断参数 Configure 是否已赋值
                     * @return Configure 是否已赋值
                     */
                    bool ConfigureHasBeenSet() const;

                    /**
                     * 获取规则行为，一般为refuse
                     * @return Result 规则行为，一般为refuse
                     */
                    std::string GetResult() const;

                    /**
                     * 设置规则行为，一般为refuse
                     * @param Result 规则行为，一般为refuse
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取规则是否生效中active|inactive
                     * @return Status 规则是否生效中active|inactive
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置规则是否生效中active|inactive
                     * @param Status 规则是否生效中active|inactive
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 具体配置
                     */
                    std::vector<ScdnAclRule> m_configure;
                    bool m_configureHasBeenSet;

                    /**
                     * 规则行为，一般为refuse
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 规则是否生效中active|inactive
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SCDNACLGROUP_H_
