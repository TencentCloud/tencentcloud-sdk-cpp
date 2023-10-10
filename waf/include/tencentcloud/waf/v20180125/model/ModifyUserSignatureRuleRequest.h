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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYUSERSIGNATURERULEREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYUSERSIGNATURERULEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/ReqUserRule.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyUserSignatureRule请求参数结构体
                */
                class ModifyUserSignatureRuleRequest : public AbstractModel
                {
                public:
                    ModifyUserSignatureRuleRequest();
                    ~ModifyUserSignatureRuleRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取主类id
                     * @return MainClassID 主类id
                     * 
                     */
                    std::string GetMainClassID() const;

                    /**
                     * 设置主类id
                     * @param _mainClassID 主类id
                     * 
                     */
                    void SetMainClassID(const std::string& _mainClassID);

                    /**
                     * 判断参数 MainClassID 是否已赋值
                     * @return MainClassID 是否已赋值
                     * 
                     */
                    bool MainClassIDHasBeenSet() const;

                    /**
                     * 获取主类开关0=关闭，1=开启，2=只告警
                     * @return Status 主类开关0=关闭，1=开启，2=只告警
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置主类开关0=关闭，1=开启，2=只告警
                     * @param _status 主类开关0=关闭，1=开启，2=只告警
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
                     * 获取下发修改的规则列表
                     * @return RuleID 下发修改的规则列表
                     * 
                     */
                    std::vector<ReqUserRule> GetRuleID() const;

                    /**
                     * 设置下发修改的规则列表
                     * @param _ruleID 下发修改的规则列表
                     * 
                     */
                    void SetRuleID(const std::vector<ReqUserRule>& _ruleID);

                    /**
                     * 判断参数 RuleID 是否已赋值
                     * @return RuleID 是否已赋值
                     * 
                     */
                    bool RuleIDHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 主类id
                     */
                    std::string m_mainClassID;
                    bool m_mainClassIDHasBeenSet;

                    /**
                     * 主类开关0=关闭，1=开启，2=只告警
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 下发修改的规则列表
                     */
                    std::vector<ReqUserRule> m_ruleID;
                    bool m_ruleIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYUSERSIGNATURERULEREQUEST_H_
