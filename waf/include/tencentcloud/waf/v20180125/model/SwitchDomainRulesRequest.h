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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_SWITCHDOMAINRULESREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_SWITCHDOMAINRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * SwitchDomainRules请求参数结构体
                */
                class SwitchDomainRulesRequest : public AbstractModel
                {
                public:
                    SwitchDomainRulesRequest();
                    ~SwitchDomainRulesRequest() = default;
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
                     * 获取规则列表
                     * @return Ids 规则列表
                     * 
                     */
                    std::vector<uint64_t> GetIds() const;

                    /**
                     * 设置规则列表
                     * @param _ids 规则列表
                     * 
                     */
                    void SetIds(const std::vector<uint64_t>& _ids);

                    /**
                     * 判断参数 Ids 是否已赋值
                     * @return Ids 是否已赋值
                     * 
                     */
                    bool IdsHasBeenSet() const;

                    /**
                     * 获取开关状态，0表示关闭，1表示开启，2表示只观察
                     * @return Status 开关状态，0表示关闭，1表示开启，2表示只观察
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置开关状态，0表示关闭，1表示开启，2表示只观察
                     * @param _status 开关状态，0表示关闭，1表示开启，2表示只观察
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取设置为观察模式原因，
1表示业务自身原因观察，2表示系统规则误报上报，3表示核心业务灰度观察，4表示其他
                     * @return Reason 设置为观察模式原因，
1表示业务自身原因观察，2表示系统规则误报上报，3表示核心业务灰度观察，4表示其他
                     * 
                     */
                    uint64_t GetReason() const;

                    /**
                     * 设置设置为观察模式原因，
1表示业务自身原因观察，2表示系统规则误报上报，3表示核心业务灰度观察，4表示其他
                     * @param _reason 设置为观察模式原因，
1表示业务自身原因观察，2表示系统规则误报上报，3表示核心业务灰度观察，4表示其他
                     * 
                     */
                    void SetReason(const uint64_t& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 规则列表
                     */
                    std::vector<uint64_t> m_ids;
                    bool m_idsHasBeenSet;

                    /**
                     * 开关状态，0表示关闭，1表示开启，2表示只观察
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 设置为观察模式原因，
1表示业务自身原因观察，2表示系统规则误报上报，3表示核心业务灰度观察，4表示其他
                     */
                    uint64_t m_reason;
                    bool m_reasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_SWITCHDOMAINRULESREQUEST_H_
