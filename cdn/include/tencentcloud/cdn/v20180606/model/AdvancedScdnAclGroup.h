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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDSCDNACLGROUP_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDSCDNACLGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/AdvancedScdnAclRule.h>
#include <tencentcloud/cdn/v20180606/model/ScdnErrorPage.h>


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
                class AdvancedScdnAclGroup : public AbstractModel
                {
                public:
                    AdvancedScdnAclGroup();
                    ~AdvancedScdnAclGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则名称
                     * @return RuleName 规则名称
                     * 
                     */
                    std::string GetRuleName() const;

                    /**
                     * 设置规则名称
                     * @param _ruleName 规则名称
                     * 
                     */
                    void SetRuleName(const std::string& _ruleName);

                    /**
                     * 判断参数 RuleName 是否已赋值
                     * @return RuleName 是否已赋值
                     * 
                     */
                    bool RuleNameHasBeenSet() const;

                    /**
                     * 获取具体配置
                     * @return Configure 具体配置
                     * 
                     */
                    std::vector<AdvancedScdnAclRule> GetConfigure() const;

                    /**
                     * 设置具体配置
                     * @param _configure 具体配置
                     * 
                     */
                    void SetConfigure(const std::vector<AdvancedScdnAclRule>& _configure);

                    /**
                     * 判断参数 Configure 是否已赋值
                     * @return Configure 是否已赋值
                     * 
                     */
                    bool ConfigureHasBeenSet() const;

                    /**
                     * 获取执行动作，intercept|redirect
                     * @return Result 执行动作，intercept|redirect
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置执行动作，intercept|redirect
                     * @param _result 执行动作，intercept|redirect
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取规则是否生效，active|inactive
                     * @return Status 规则是否生效，active|inactive
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置规则是否生效，active|inactive
                     * @param _status 规则是否生效，active|inactive
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取错误页面配置
                     * @return ErrorPage 错误页面配置
                     * 
                     */
                    ScdnErrorPage GetErrorPage() const;

                    /**
                     * 设置错误页面配置
                     * @param _errorPage 错误页面配置
                     * 
                     */
                    void SetErrorPage(const ScdnErrorPage& _errorPage);

                    /**
                     * 判断参数 ErrorPage 是否已赋值
                     * @return ErrorPage 是否已赋值
                     * 
                     */
                    bool ErrorPageHasBeenSet() const;

                private:

                    /**
                     * 规则名称
                     */
                    std::string m_ruleName;
                    bool m_ruleNameHasBeenSet;

                    /**
                     * 具体配置
                     */
                    std::vector<AdvancedScdnAclRule> m_configure;
                    bool m_configureHasBeenSet;

                    /**
                     * 执行动作，intercept|redirect
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 规则是否生效，active|inactive
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 错误页面配置
                     */
                    ScdnErrorPage m_errorPage;
                    bool m_errorPageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_ADVANCEDSCDNACLGROUP_H_
