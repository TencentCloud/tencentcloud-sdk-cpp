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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RISKDNSLIST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RISKDNSLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 恶意请求列表
                */
                class RiskDnsList : public AbstractModel
                {
                public:
                    RiskDnsList();
                    ~RiskDnsList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对外访问域名
                     * @return Url 对外访问域名
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置对外访问域名
                     * @param _url 对外访问域名
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取访问次数
                     * @return AccessCount 访问次数
                     * 
                     */
                    uint64_t GetAccessCount() const;

                    /**
                     * 设置访问次数
                     * @param _accessCount 访问次数
                     * 
                     */
                    void SetAccessCount(const uint64_t& _accessCount);

                    /**
                     * 判断参数 AccessCount 是否已赋值
                     * @return AccessCount 是否已赋值
                     * 
                     */
                    bool AccessCountHasBeenSet() const;

                    /**
                     * 获取进程名
                     * @return ProcessName 进程名
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置进程名
                     * @param _processName 进程名
                     * 
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     * 
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取进程MD5
                     * @return ProcessMd5 进程MD5
                     * 
                     */
                    std::string GetProcessMd5() const;

                    /**
                     * 设置进程MD5
                     * @param _processMd5 进程MD5
                     * 
                     */
                    void SetProcessMd5(const std::string& _processMd5);

                    /**
                     * 判断参数 ProcessMd5 是否已赋值
                     * @return ProcessMd5 是否已赋值
                     * 
                     */
                    bool ProcessMd5HasBeenSet() const;

                    /**
                     * 获取是否为全局规则，0否，1是
                     * @return GlobalRuleId 是否为全局规则，0否，1是
                     * 
                     */
                    uint64_t GetGlobalRuleId() const;

                    /**
                     * 设置是否为全局规则，0否，1是
                     * @param _globalRuleId 是否为全局规则，0否，1是
                     * 
                     */
                    void SetGlobalRuleId(const uint64_t& _globalRuleId);

                    /**
                     * 判断参数 GlobalRuleId 是否已赋值
                     * @return GlobalRuleId 是否已赋值
                     * 
                     */
                    bool GlobalRuleIdHasBeenSet() const;

                    /**
                     * 获取用户规则id
                     * @return UserRuleId 用户规则id
                     * 
                     */
                    uint64_t GetUserRuleId() const;

                    /**
                     * 设置用户规则id
                     * @param _userRuleId 用户规则id
                     * 
                     */
                    void SetUserRuleId(const uint64_t& _userRuleId);

                    /**
                     * 判断参数 UserRuleId 是否已赋值
                     * @return UserRuleId 是否已赋值
                     * 
                     */
                    bool UserRuleIdHasBeenSet() const;

                    /**
                     * 获取状态；0-待处理，2-已加白，3-非信任状态，4-已处理，5-已忽略
                     * @return Status 状态；0-待处理，2-已加白，3-非信任状态，4-已处理，5-已忽略
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态；0-待处理，2-已加白，3-非信任状态，4-已处理，5-已忽略
                     * @param _status 状态；0-待处理，2-已加白，3-非信任状态，4-已处理，5-已忽略
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
                     * 获取首次访问时间
                     * @return CreateTime 首次访问时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置首次访问时间
                     * @param _createTime 首次访问时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取最近访问时间
                     * @return MergeTime 最近访问时间
                     * 
                     */
                    std::string GetMergeTime() const;

                    /**
                     * 设置最近访问时间
                     * @param _mergeTime 最近访问时间
                     * 
                     */
                    void SetMergeTime(const std::string& _mergeTime);

                    /**
                     * 判断参数 MergeTime 是否已赋值
                     * @return MergeTime 是否已赋值
                     * 
                     */
                    bool MergeTimeHasBeenSet() const;

                    /**
                     * 获取唯一 Quuid
                     * @return Quuid 唯一 Quuid
                     * 
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置唯一 Quuid
                     * @param _quuid 唯一 Quuid
                     * 
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     * 
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取主机ip
                     * @return HostIp 主机ip
                     * 
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置主机ip
                     * @param _hostIp 主机ip
                     * 
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     * 
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取别名
                     * @return Alias 别名
                     * 
                     */
                    std::string GetAlias() const;

                    /**
                     * 设置别名
                     * @param _alias 别名
                     * 
                     */
                    void SetAlias(const std::string& _alias);

                    /**
                     * 判断参数 Alias 是否已赋值
                     * @return Alias 是否已赋值
                     * 
                     */
                    bool AliasHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param _description 描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取唯一ID
                     * @return Id 唯一ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置唯一ID
                     * @param _id 唯一ID
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取参考
                     * @return Reference 参考
                     * 
                     */
                    std::string GetReference() const;

                    /**
                     * 设置参考
                     * @param _reference 参考
                     * 
                     */
                    void SetReference(const std::string& _reference);

                    /**
                     * 判断参数 Reference 是否已赋值
                     * @return Reference 是否已赋值
                     * 
                     */
                    bool ReferenceHasBeenSet() const;

                    /**
                     * 获取命令行
                     * @return CmdLine 命令行
                     * 
                     */
                    std::string GetCmdLine() const;

                    /**
                     * 设置命令行
                     * @param _cmdLine 命令行
                     * 
                     */
                    void SetCmdLine(const std::string& _cmdLine);

                    /**
                     * 判断参数 CmdLine 是否已赋值
                     * @return CmdLine 是否已赋值
                     * 
                     */
                    bool CmdLineHasBeenSet() const;

                    /**
                     * 获取进程号
                     * @return Pid 进程号
                     * 
                     */
                    uint64_t GetPid() const;

                    /**
                     * 设置进程号
                     * @param _pid 进程号
                     * 
                     */
                    void SetPid(const uint64_t& _pid);

                    /**
                     * 判断参数 Pid 是否已赋值
                     * @return Pid 是否已赋值
                     * 
                     */
                    bool PidHasBeenSet() const;

                    /**
                     * 获取唯一UUID
                     * @return Uuid 唯一UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置唯一UUID
                     * @param _uuid 唯一UUID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取建议方案
                     * @return SuggestScheme 建议方案
                     * 
                     */
                    std::string GetSuggestScheme() const;

                    /**
                     * 设置建议方案
                     * @param _suggestScheme 建议方案
                     * 
                     */
                    void SetSuggestScheme(const std::string& _suggestScheme);

                    /**
                     * 判断参数 SuggestScheme 是否已赋值
                     * @return SuggestScheme 是否已赋值
                     * 
                     */
                    bool SuggestSchemeHasBeenSet() const;

                    /**
                     * 获取标签特性
                     * @return Tags 标签特性
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置标签特性
                     * @param _tags 标签特性
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取外网ip
                     * @return MachineWanIp 外网ip
                     * 
                     */
                    std::string GetMachineWanIp() const;

                    /**
                     * 设置外网ip
                     * @param _machineWanIp 外网ip
                     * 
                     */
                    void SetMachineWanIp(const std::string& _machineWanIp);

                    /**
                     * 判断参数 MachineWanIp 是否已赋值
                     * @return MachineWanIp 是否已赋值
                     * 
                     */
                    bool MachineWanIpHasBeenSet() const;

                    /**
                     * 获取主机在线状态[OFFLINE:离线|ONLINE:在线|UNKNOWN:未知]
                     * @return MachineStatus 主机在线状态[OFFLINE:离线|ONLINE:在线|UNKNOWN:未知]
                     * 
                     */
                    std::string GetMachineStatus() const;

                    /**
                     * 设置主机在线状态[OFFLINE:离线|ONLINE:在线|UNKNOWN:未知]
                     * @param _machineStatus 主机在线状态[OFFLINE:离线|ONLINE:在线|UNKNOWN:未知]
                     * 
                     */
                    void SetMachineStatus(const std::string& _machineStatus);

                    /**
                     * 判断参数 MachineStatus 是否已赋值
                     * @return MachineStatus 是否已赋值
                     * 
                     */
                    bool MachineStatusHasBeenSet() const;

                private:

                    /**
                     * 对外访问域名
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 访问次数
                     */
                    uint64_t m_accessCount;
                    bool m_accessCountHasBeenSet;

                    /**
                     * 进程名
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * 进程MD5
                     */
                    std::string m_processMd5;
                    bool m_processMd5HasBeenSet;

                    /**
                     * 是否为全局规则，0否，1是
                     */
                    uint64_t m_globalRuleId;
                    bool m_globalRuleIdHasBeenSet;

                    /**
                     * 用户规则id
                     */
                    uint64_t m_userRuleId;
                    bool m_userRuleIdHasBeenSet;

                    /**
                     * 状态；0-待处理，2-已加白，3-非信任状态，4-已处理，5-已忽略
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 首次访问时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最近访问时间
                     */
                    std::string m_mergeTime;
                    bool m_mergeTimeHasBeenSet;

                    /**
                     * 唯一 Quuid
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 主机ip
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 别名
                     */
                    std::string m_alias;
                    bool m_aliasHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 唯一ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 参考
                     */
                    std::string m_reference;
                    bool m_referenceHasBeenSet;

                    /**
                     * 命令行
                     */
                    std::string m_cmdLine;
                    bool m_cmdLineHasBeenSet;

                    /**
                     * 进程号
                     */
                    uint64_t m_pid;
                    bool m_pidHasBeenSet;

                    /**
                     * 唯一UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 建议方案
                     */
                    std::string m_suggestScheme;
                    bool m_suggestSchemeHasBeenSet;

                    /**
                     * 标签特性
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 外网ip
                     */
                    std::string m_machineWanIp;
                    bool m_machineWanIpHasBeenSet;

                    /**
                     * 主机在线状态[OFFLINE:离线|ONLINE:在线|UNKNOWN:未知]
                     */
                    std::string m_machineStatus;
                    bool m_machineStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RISKDNSLIST_H_
