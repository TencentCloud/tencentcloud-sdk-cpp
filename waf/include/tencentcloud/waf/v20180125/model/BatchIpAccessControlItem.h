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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_BATCHIPACCESSCONTROLITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_BATCHIPACCESSCONTROLITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 批量多域名黑白名单列表Ip
                */
                class BatchIpAccessControlItem : public AbstractModel
                {
                public:
                    BatchIpAccessControlItem();
                    ~BatchIpAccessControlItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取mongo表自增Id
                     * @return Id mongo表自增Id
                     * @deprecated
                     */
                    std::string GetId() const;

                    /**
                     * 设置mongo表自增Id
                     * @param _id mongo表自增Id
                     * @deprecated
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * @deprecated
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取黑名单42或白名单40
                     * @return ActionType 黑名单42或白名单40
                     * 
                     */
                    int64_t GetActionType() const;

                    /**
                     * 设置黑名单42或白名单40
                     * @param _actionType 黑名单42或白名单40
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
                     * 获取黑白名单的IP
                     * @return Ip 黑白名单的IP
                     * @deprecated
                     */
                    std::string GetIp() const;

                    /**
                     * 设置黑白名单的IP
                     * @param _ip 黑白名单的IP
                     * @deprecated
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * @deprecated
                     */
                    bool IpHasBeenSet() const;

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
                     * 获取batch为批量域名，batch-group为防护对象组
                     * @return Source batch为批量域名，batch-group为防护对象组
                     * 
                     */
                    std::string GetSource() const;

                    /**
                     * 设置batch为批量域名，batch-group为防护对象组
                     * @param _source batch为批量域名，batch-group为防护对象组
                     * 
                     */
                    void SetSource(const std::string& _source);

                    /**
                     * 判断参数 Source 是否已赋值
                     * @return Source 是否已赋值
                     * 
                     */
                    bool SourceHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return TsVersion 修改时间
                     * 
                     */
                    uint64_t GetTsVersion() const;

                    /**
                     * 设置修改时间
                     * @param _tsVersion 修改时间
                     * 
                     */
                    void SetTsVersion(const uint64_t& _tsVersion);

                    /**
                     * 判断参数 TsVersion 是否已赋值
                     * @return TsVersion 是否已赋值
                     * 
                     */
                    bool TsVersionHasBeenSet() const;

                    /**
                     * 获取超时时间
                     * @return ValidTs 超时时间
                     * 
                     */
                    int64_t GetValidTs() const;

                    /**
                     * 设置超时时间
                     * @param _validTs 超时时间
                     * 
                     */
                    void SetValidTs(const int64_t& _validTs);

                    /**
                     * 判断参数 ValidTs 是否已赋值
                     * @return ValidTs 是否已赋值
                     * 
                     */
                    bool ValidTsHasBeenSet() const;

                    /**
                     * 获取域名列表
                     * @return Hosts 域名列表
                     * 
                     */
                    std::vector<std::string> GetHosts() const;

                    /**
                     * 设置域名列表
                     * @param _hosts 域名列表
                     * 
                     */
                    void SetHosts(const std::vector<std::string>& _hosts);

                    /**
                     * 判断参数 Hosts 是否已赋值
                     * @return Hosts 是否已赋值
                     * 
                     */
                    bool HostsHasBeenSet() const;

                    /**
                     * 获取55101145
                     * @return RuleId 55101145
                     * 
                     */
                    uint64_t GetRuleId() const;

                    /**
                     * 设置55101145
                     * @param _ruleId 55101145
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
                     * 获取IP列表
                     * @return IpList IP列表
                     * 
                     */
                    std::vector<std::string> GetIpList() const;

                    /**
                     * 设置IP列表
                     * @param _ipList IP列表
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
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取定时任务类型
                     * @return JobType 定时任务类型
                     * 
                     */
                    std::string GetJobType() const;

                    /**
                     * 设置定时任务类型
                     * @param _jobType 定时任务类型
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
                     * 获取周期任务类型
                     * @return CronType 周期任务类型
                     * 
                     */
                    std::string GetCronType() const;

                    /**
                     * 设置周期任务类型
                     * @param _cronType 周期任务类型
                     * 
                     */
                    void SetCronType(const std::string& _cronType);

                    /**
                     * 判断参数 CronType 是否已赋值
                     * @return CronType 是否已赋值
                     * 
                     */
                    bool CronTypeHasBeenSet() const;

                    /**
                     * 获取定时任务配置详情
                     * @return JobDateTime 定时任务配置详情
                     * 
                     */
                    JobDateTime GetJobDateTime() const;

                    /**
                     * 设置定时任务配置详情
                     * @param _jobDateTime 定时任务配置详情
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
                     * 获取生效状态
                     * @return ValidStatus 生效状态
                     * 
                     */
                    int64_t GetValidStatus() const;

                    /**
                     * 设置生效状态
                     * @param _validStatus 生效状态
                     * 
                     */
                    void SetValidStatus(const int64_t& _validStatus);

                    /**
                     * 判断参数 ValidStatus 是否已赋值
                     * @return ValidStatus 是否已赋值
                     * 
                     */
                    bool ValidStatusHasBeenSet() const;

                    /**
                     * 获取防护对象组ID列表，如果绑定的是防护对象组
                     * @return GroupIds 防护对象组ID列表，如果绑定的是防护对象组
                     * 
                     */
                    std::vector<uint64_t> GetGroupIds() const;

                    /**
                     * 设置防护对象组ID列表，如果绑定的是防护对象组
                     * @param _groupIds 防护对象组ID列表，如果绑定的是防护对象组
                     * 
                     */
                    void SetGroupIds(const std::vector<uint64_t>& _groupIds);

                    /**
                     * 判断参数 GroupIds 是否已赋值
                     * @return GroupIds 是否已赋值
                     * 
                     */
                    bool GroupIdsHasBeenSet() const;

                private:

                    /**
                     * mongo表自增Id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 黑名单42或白名单40
                     */
                    int64_t m_actionType;
                    bool m_actionTypeHasBeenSet;

                    /**
                     * 黑白名单的IP
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_note;
                    bool m_noteHasBeenSet;

                    /**
                     * batch为批量域名，batch-group为防护对象组
                     */
                    std::string m_source;
                    bool m_sourceHasBeenSet;

                    /**
                     * 修改时间
                     */
                    uint64_t m_tsVersion;
                    bool m_tsVersionHasBeenSet;

                    /**
                     * 超时时间
                     */
                    int64_t m_validTs;
                    bool m_validTsHasBeenSet;

                    /**
                     * 域名列表
                     */
                    std::vector<std::string> m_hosts;
                    bool m_hostsHasBeenSet;

                    /**
                     * 55101145
                     */
                    uint64_t m_ruleId;
                    bool m_ruleIdHasBeenSet;

                    /**
                     * IP列表
                     */
                    std::vector<std::string> m_ipList;
                    bool m_ipListHasBeenSet;

                    /**
                     * 创建时间
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 定时任务类型
                     */
                    std::string m_jobType;
                    bool m_jobTypeHasBeenSet;

                    /**
                     * 周期任务类型
                     */
                    std::string m_cronType;
                    bool m_cronTypeHasBeenSet;

                    /**
                     * 定时任务配置详情
                     */
                    JobDateTime m_jobDateTime;
                    bool m_jobDateTimeHasBeenSet;

                    /**
                     * 生效状态
                     */
                    int64_t m_validStatus;
                    bool m_validStatusHasBeenSet;

                    /**
                     * 防护对象组ID列表，如果绑定的是防护对象组
                     */
                    std::vector<uint64_t> m_groupIds;
                    bool m_groupIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_BATCHIPACCESSCONTROLITEM_H_
