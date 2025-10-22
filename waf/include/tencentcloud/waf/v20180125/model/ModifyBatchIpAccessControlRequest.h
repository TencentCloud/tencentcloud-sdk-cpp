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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYBATCHIPACCESSCONTROLREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYBATCHIPACCESSCONTROLREQUEST_H_

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
                * ModifyBatchIpAccessControl请求参数结构体
                */
                class ModifyBatchIpAccessControlRequest : public AbstractModel
                {
                public:
                    ModifyBatchIpAccessControlRequest();
                    ~ModifyBatchIpAccessControlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取编辑的批量规则ID
                     * @return RuleId 编辑的批量规则ID
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置编辑的批量规则ID
                     * @param _ruleId 编辑的批量规则ID
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
                     * 获取IP参数列表
                     * @return IpList IP参数列表
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置IP参数列表
                     * @param _ipList IP参数列表
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
                     * 获取定时任务配置
                     * @return JobDateTime 定时任务配置
                     * 
                     */
                    JobDateTime GetJobDateTime() const;

                    /**
                     * 设置定时任务配置
                     * @param _jobDateTime 定时任务配置
                     * 
                     */
                    void SetJobDateTime(const JobDateTime& _jobDateTime);

                    /**
                     * 判断参数 JobDateTime 是否已赋值
                     * @return JobDateTime 是否已赋值
                     * 
                     */
                    bool JobDateTimeHasBeenSet() const;

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
                     * 获取防护对象组ID列表，如果绑定的是防护对象组，和Domains参数二选一
                     * @return GroupIds 防护对象组ID列表，如果绑定的是防护对象组，和Domains参数二选一
                     * 
                     */
                    std::vector<uint64_t> GetGroupIds() const;

                    /**
                     * 设置防护对象组ID列表，如果绑定的是防护对象组，和Domains参数二选一
                     * @param _groupIds 防护对象组ID列表，如果绑定的是防护对象组，和Domains参数二选一
                     * 
                     */
                    void SetGroupIds(const std::vector<uint64_t>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                    /**
                     * 获取域名列表，如果绑定的是批量域名，和GroupIds参数二选一
                     * @return Domains 域名列表，如果绑定的是批量域名，和GroupIds参数二选一
                     * 
                     */
                    std::vector<std::string> GetDomains() const;

                    /**
                     * 设置域名列表，如果绑定的是批量域名，和GroupIds参数二选一
                     * @param _domains 域名列表，如果绑定的是批量域名，和GroupIds参数二选一
                     * 
                     */
                    void SetDomains(const std::vector<std::string>& _domains);

                    /**
                     * 判断参数 Domains 是否已赋值
                     * @return Domains 是否已赋值
                     * 
                     */
                    bool DomainsHasBeenSet() const;

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

                private:

                    /**
                     * 编辑的批量规则ID
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * IP参数列表
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                    /**
                     * 规则执行的方式，TimedJob为定时执行，CronJob为周期执行
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * 定时任务配置
                     */
                    JobDateTime m_jobDateTime;
                    bool m_jobDateTimeHasBeenSet;

                    /**
                     * 42为黑名单，40为白名单
                     */
                    int64_t m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 防护对象组ID列表，如果绑定的是防护对象组，和Domains参数二选一
                     */
                    std::vector<uint64_t> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                    /**
                     * 域名列表，如果绑定的是批量域名，和GroupIds参数二选一
                     */
                    std::vector<std::string> m_domains;
                    bool m_domainsHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_MODIFYBATCHIPACCESSCONTROLREQUEST_H_
