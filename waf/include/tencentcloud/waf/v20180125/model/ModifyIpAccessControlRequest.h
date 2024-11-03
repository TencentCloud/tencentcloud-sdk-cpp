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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYIPACCESSCONTROLREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYIPACCESSCONTROLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/waf/v20180125/model/JobDateTime.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * ModifyIpAccessControl请求参数结构体
                */
                class ModifyIpAccessControlRequest : public AbstractModel
                {
                public:
                    ModifyIpAccessControlRequest();
                    ~ModifyIpAccessControlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取具体域名如：test.qcloudwaf.com
全局域名为：global
                     * @return Domain 具体域名如：test.qcloudwaf.com
全局域名为：global
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置具体域名如：test.qcloudwaf.com
全局域名为：global
                     * @param _domain 具体域名如：test.qcloudwaf.com
全局域名为：global
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
                     * 获取ip参数列表
                     * @return IpList ip参数列表
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置ip参数列表
                     * @param _ipList ip参数列表
                     * 
                     */
                    void SetIpList(const std::vector<std::string>& _ipList);

                    /**
                     * 判断参数 IpList 是否已赋值
                     * @return IpList 是否已赋值
                     * 
                     */
                    bool IpListHasBeenSet() const;

                    /**
                     * 获取42为黑名单，40为白名单
                     * @return ActionType 42为黑名单，40为白名单
                     * 
                     */
                    int64_t GetActionType() const;

                    /**
                     * 设置42为黑名单，40为白名单
                     * @param _actionType 42为黑名单，40为白名单
                     * 
                     */
                    void SetActionType(const int64_t& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

                    /**
                     * 获取规则ID
                     * @return RuleId 规则ID
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置规则ID
                     * @param _ruleId 规则ID
                     * 
                     */
                    void SetRuleId(const uint64_t& _ruleId);

                    /**
                     * 判断参数 RuleId 是否已赋值
                     * @return RuleId 是否已赋值
                     * 
                     */
                    bool RuleIdHasBeenSet() const;

                    /**
                     * 获取valid_ts为有效日期，值为秒级时间戳（（如1680570420代表2023-04-04 09:07:00））
                     * @return ValidTS valid_ts为有效日期，值为秒级时间戳（（如1680570420代表2023-04-04 09:07:00））
                     * @deprecated
                     */
                    int64_t GetValidTS() const;

                    /**
                     * 设置valid_ts为有效日期，值为秒级时间戳（（如1680570420代表2023-04-04 09:07:00））
                     * @param _validTS valid_ts为有效日期，值为秒级时间戳（（如1680570420代表2023-04-04 09:07:00））
                     * @deprecated
                     */
                    void SetValidTS(const int64_t& _validTS);

                    /**
                     * 判断参数 ValidTS 是否已赋值
                     * @return ValidTS 是否已赋值
                     * @deprecated
                     */
                    bool ValidTSHasBeenSet() const;

                    /**
                     * 获取实例Id
                     * @return InstanceId 实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id
                     * @param _instanceId 实例Id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取WAF实例类型，sparta-waf表示SAAS型WAF，clb-waf表示负载均衡型WAF
                     * @return Edition WAF实例类型，sparta-waf表示SAAS型WAF，clb-waf表示负载均衡型WAF
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置WAF实例类型，sparta-waf表示SAAS型WAF，clb-waf表示负载均衡型WAF
                     * @param _edition WAF实例类型，sparta-waf表示SAAS型WAF，clb-waf表示负载均衡型WAF
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取是否为批量防护IP黑白名单，当为批量防护IP黑白名单时，取值为batch，否则为空
                     * @return SourceType 是否为批量防护IP黑白名单，当为批量防护IP黑白名单时，取值为batch，否则为空
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置是否为批量防护IP黑白名单，当为批量防护IP黑白名单时，取值为batch，否则为空
                     * @param _sourceType 是否为批量防护IP黑白名单，当为批量防护IP黑白名单时，取值为batch，否则为空
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Note 备注
                     * 
                     */
                    std::string GetNote() const;

                    /**
                     * 设置备注
                     * @param _note 备注
                     * 
                     */
                    void SetNote(const std::string& _note);

                    /**
                     * 判断参数 Note 是否已赋值
                     * @return Note 是否已赋值
                     * 
                     */
                    bool NoteHasBeenSet() const;

                    /**
                     * 获取规则执行的方式，TimedJob为定时执行，CronJob为周期执行
                     * @return JobType 规则执行的方式，TimedJob为定时执行，CronJob为周期执行
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置规则执行的方式，TimedJob为定时执行，CronJob为周期执行
                     * @param _jobType 规则执行的方式，TimedJob为定时执行，CronJob为周期执行
                     * 
                     */
                    void SetJobType(const std::string& _jobType);

                    /**
                     * 判断参数 JobType 是否已赋值
                     * @return JobType 是否已赋值
                     * 
                     */
                    bool JobTypeHasBeenSet() const;

                    /**
                     * 获取定时配置详情
                     * @return JobDateTime 定时配置详情
                     * 
                     */
                    JobDateTime GetJobDateTime() const;

                    /**
                     * 设置定时配置详情
                     * @param _jobDateTime 定时配置详情
                     * 
                     */
                    void SetJobDateTime(const JobDateTime& _jobDateTime);

                    /**
                     * 判断参数 JobDateTime 是否已赋值
                     * @return JobDateTime 是否已赋值
                     * 
                     */
                    bool JobDateTimeHasBeenSet() const;

                private:

                    /**
                     * 具体域名如：test.qcloudwaf.com
全局域名为：global
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * ip参数列表
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                    /**
                     * 42为黑名单，40为白名单
                     */
                    int64_t m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 规则ID
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * valid_ts为有效日期，值为秒级时间戳（（如1680570420代表2023-04-04 09:07:00））
                     */
                    int64_t m_validTS;
                    bool m_validTSHasBeenSet;

                    /**
                     * 实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * WAF实例类型，sparta-waf表示SAAS型WAF，clb-waf表示负载均衡型WAF
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * 是否为批量防护IP黑白名单，当为批量防护IP黑白名单时，取值为batch，否则为空
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * 规则执行的方式，TimedJob为定时执行，CronJob为周期执行
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * 定时配置详情
                     */
                    JobDateTime m_jobDateTime;
                    bool m_jobDateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYIPACCESSCONTROLREQUEST_H_
