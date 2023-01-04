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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULEFFECTHOSTLIST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULEFFECTHOSTLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/Tags.h>
#include <tencentcloud/cwp/v20180228/model/MachineExtraInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 漏洞影响主机列表
                */
                class VulEffectHostList : public AbstractModel
                {
                public:
                    VulEffectHostList();
                    ~VulEffectHostList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventId 事件id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetEventId() const;

                    /**
                     * 设置事件id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EventId 事件id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEventId(const uint64_t& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取状态：0: 待处理 1:忽略  3:已修复  5:检测中 6:修复中 7: 回滚中 8:修复失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 状态：0: 待处理 1:忽略  3:已修复  5:检测中 6:修复中 7: 回滚中 8:修复失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态：0: 待处理 1:忽略  3:已修复  5:检测中 6:修复中 7: 回滚中 8:修复失败
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Status 状态：0: 待处理 1:忽略  3:已修复  5:检测中 6:修复中 7: 回滚中 8:修复失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取最后检测时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastTime 最后检测时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置最后检测时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param LastTime 最后检测时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLastTime(const std::string& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     */
                    bool LastTimeHasBeenSet() const;

                    /**
                     * 获取危害等级：1-低危；2-中危；3-高危；4-严重
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Level 危害等级：1-低危；2-中危；3-高危；4-严重
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置危害等级：1-低危；2-中危；3-高危；4-严重
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Level 危害等级：1-低危；2-中危；3-高危；4-严重
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取主机Quuid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Quuid 主机Quuid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetQuuid() const;

                    /**
                     * 设置主机Quuid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Quuid 主机Quuid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetQuuid(const std::string& _quuid);

                    /**
                     * 判断参数 Quuid 是否已赋值
                     * @return Quuid 是否已赋值
                     */
                    bool QuuidHasBeenSet() const;

                    /**
                     * 获取主机Uuid
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Uuid 主机Uuid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机Uuid
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Uuid 主机Uuid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     */
                    bool UuidHasBeenSet() const;

                    /**
                     * 获取主机HostIp
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostIp 主机HostIp
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetHostIp() const;

                    /**
                     * 设置主机HostIp
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HostIp 主机HostIp
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHostIp(const std::string& _hostIp);

                    /**
                     * 判断参数 HostIp 是否已赋值
                     * @return HostIp 是否已赋值
                     */
                    bool HostIpHasBeenSet() const;

                    /**
                     * 获取主机别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AliasName 主机别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetAliasName() const;

                    /**
                     * 设置主机别名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AliasName 主机别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAliasName(const std::string& _aliasName);

                    /**
                     * 判断参数 AliasName 是否已赋值
                     * @return AliasName 是否已赋值
                     */
                    bool AliasNameHasBeenSet() const;

                    /**
                     * 获取主机标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 主机标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置主机标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Tags 主机标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置说明
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Description 说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取版本信息：0-基础版 1-专业版 2-旗舰版 3-普惠版
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostVersion 版本信息：0-基础版 1-专业版 2-旗舰版 3-普惠版
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetHostVersion() const;

                    /**
                     * 设置版本信息：0-基础版 1-专业版 2-旗舰版 3-普惠版
注意：此字段可能返回 null，表示取不到有效值。
                     * @param HostVersion 版本信息：0-基础版 1-专业版 2-旗舰版 3-普惠版
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetHostVersion(const uint64_t& _hostVersion);

                    /**
                     * 判断参数 HostVersion 是否已赋值
                     * @return HostVersion 是否已赋值
                     */
                    bool HostVersionHasBeenSet() const;

                    /**
                     * 获取是否能自动修复 0 :漏洞不可自动修复，  1：可自动修复， 2：客户端已离线， 3：主机不是旗舰版只能手动修复， 4：机型不允许 ，5：修复中 ，6：已修复， 7：检测中  9:修复失败，10:已忽略 11:漏洞只支持linux不支持Windows 12：漏洞只支持Windows不支持linux，13:修复失败但此时主机已离线，14:修复失败但此时主机不是旗舰版， 15:已手动修复
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsSupportAutoFix 是否能自动修复 0 :漏洞不可自动修复，  1：可自动修复， 2：客户端已离线， 3：主机不是旗舰版只能手动修复， 4：机型不允许 ，5：修复中 ，6：已修复， 7：检测中  9:修复失败，10:已忽略 11:漏洞只支持linux不支持Windows 12：漏洞只支持Windows不支持linux，13:修复失败但此时主机已离线，14:修复失败但此时主机不是旗舰版， 15:已手动修复
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetIsSupportAutoFix() const;

                    /**
                     * 设置是否能自动修复 0 :漏洞不可自动修复，  1：可自动修复， 2：客户端已离线， 3：主机不是旗舰版只能手动修复， 4：机型不允许 ，5：修复中 ，6：已修复， 7：检测中  9:修复失败，10:已忽略 11:漏洞只支持linux不支持Windows 12：漏洞只支持Windows不支持linux，13:修复失败但此时主机已离线，14:修复失败但此时主机不是旗舰版， 15:已手动修复
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsSupportAutoFix 是否能自动修复 0 :漏洞不可自动修复，  1：可自动修复， 2：客户端已离线， 3：主机不是旗舰版只能手动修复， 4：机型不允许 ，5：修复中 ，6：已修复， 7：检测中  9:修复失败，10:已忽略 11:漏洞只支持linux不支持Windows 12：漏洞只支持Windows不支持linux，13:修复失败但此时主机已离线，14:修复失败但此时主机不是旗舰版， 15:已手动修复
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsSupportAutoFix(const uint64_t& _isSupportAutoFix);

                    /**
                     * 判断参数 IsSupportAutoFix 是否已赋值
                     * @return IsSupportAutoFix 是否已赋值
                     */
                    bool IsSupportAutoFixHasBeenSet() const;

                    /**
                     * 获取失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FixStatusMsg 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFixStatusMsg() const;

                    /**
                     * 设置失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FixStatusMsg 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFixStatusMsg(const std::string& _fixStatusMsg);

                    /**
                     * 判断参数 FixStatusMsg 是否已赋值
                     * @return FixStatusMsg 是否已赋值
                     */
                    bool FixStatusMsgHasBeenSet() const;

                    /**
                     * 获取首次发现时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirstDiscoveryTime 首次发现时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFirstDiscoveryTime() const;

                    /**
                     * 设置首次发现时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FirstDiscoveryTime 首次发现时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFirstDiscoveryTime(const std::string& _firstDiscoveryTime);

                    /**
                     * 判断参数 FirstDiscoveryTime 是否已赋值
                     * @return FirstDiscoveryTime 是否已赋值
                     */
                    bool FirstDiscoveryTimeHasBeenSet() const;

                    /**
                     * 获取实例状态："PENDING"-创建中 "LAUNCH_FAILED"-创建失败 "RUNNING"-运行中 "STOPPED"-关机 "STARTING"-表示开机中 "STOPPING"-表示关机中 "REBOOTING"-重启中 "SHUTDOWN"-表示停止待销毁 "TERMINATING"-表示销毁中 "
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceState 实例状态："PENDING"-创建中 "LAUNCH_FAILED"-创建失败 "RUNNING"-运行中 "STOPPED"-关机 "STARTING"-表示开机中 "STOPPING"-表示关机中 "REBOOTING"-重启中 "SHUTDOWN"-表示停止待销毁 "TERMINATING"-表示销毁中 "
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置实例状态："PENDING"-创建中 "LAUNCH_FAILED"-创建失败 "RUNNING"-运行中 "STOPPED"-关机 "STARTING"-表示开机中 "STOPPING"-表示关机中 "REBOOTING"-重启中 "SHUTDOWN"-表示停止待销毁 "TERMINATING"-表示销毁中 "
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceState 实例状态："PENDING"-创建中 "LAUNCH_FAILED"-创建失败 "RUNNING"-运行中 "STOPPED"-关机 "STARTING"-表示开机中 "STOPPING"-表示关机中 "REBOOTING"-重启中 "SHUTDOWN"-表示停止待销毁 "TERMINATING"-表示销毁中 "
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取外网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PublicIpAddresses 外网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPublicIpAddresses() const;

                    /**
                     * 设置外网ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PublicIpAddresses 外网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPublicIpAddresses(const std::string& _publicIpAddresses);

                    /**
                     * 判断参数 PublicIpAddresses 是否已赋值
                     * @return PublicIpAddresses 是否已赋值
                     */
                    bool PublicIpAddressesHasBeenSet() const;

                    /**
                     * 获取云标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CloudTags 云标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tags> GetCloudTags() const;

                    /**
                     * 设置云标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CloudTags 云标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCloudTags(const std::vector<Tags>& _cloudTags);

                    /**
                     * 判断参数 CloudTags 是否已赋值
                     * @return CloudTags 是否已赋值
                     */
                    bool CloudTagsHasBeenSet() const;

                    /**
                     * 获取主机额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MachineExtraInfo 主机额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MachineExtraInfo GetMachineExtraInfo() const;

                    /**
                     * 设置主机额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MachineExtraInfo 主机额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMachineExtraInfo(const MachineExtraInfo& _machineExtraInfo);

                    /**
                     * 判断参数 MachineExtraInfo 是否已赋值
                     * @return MachineExtraInfo 是否已赋值
                     */
                    bool MachineExtraInfoHasBeenSet() const;

                private:

                    /**
                     * 事件id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 状态：0: 待处理 1:忽略  3:已修复  5:检测中 6:修复中 7: 回滚中 8:修复失败
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 最后检测时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * 危害等级：1-低危；2-中危；3-高危；4-严重
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 主机Quuid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_quuid;
                    bool m_quuidHasBeenSet;

                    /**
                     * 主机Uuid
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                    /**
                     * 主机HostIp
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hostIp;
                    bool m_hostIpHasBeenSet;

                    /**
                     * 主机别名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_aliasName;
                    bool m_aliasNameHasBeenSet;

                    /**
                     * 主机标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 说明
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 版本信息：0-基础版 1-专业版 2-旗舰版 3-普惠版
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_hostVersion;
                    bool m_hostVersionHasBeenSet;

                    /**
                     * 是否能自动修复 0 :漏洞不可自动修复，  1：可自动修复， 2：客户端已离线， 3：主机不是旗舰版只能手动修复， 4：机型不允许 ，5：修复中 ，6：已修复， 7：检测中  9:修复失败，10:已忽略 11:漏洞只支持linux不支持Windows 12：漏洞只支持Windows不支持linux，13:修复失败但此时主机已离线，14:修复失败但此时主机不是旗舰版， 15:已手动修复
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_isSupportAutoFix;
                    bool m_isSupportAutoFixHasBeenSet;

                    /**
                     * 失败原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fixStatusMsg;
                    bool m_fixStatusMsgHasBeenSet;

                    /**
                     * 首次发现时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_firstDiscoveryTime;
                    bool m_firstDiscoveryTimeHasBeenSet;

                    /**
                     * 实例状态："PENDING"-创建中 "LAUNCH_FAILED"-创建失败 "RUNNING"-运行中 "STOPPED"-关机 "STARTING"-表示开机中 "STOPPING"-表示关机中 "REBOOTING"-重启中 "SHUTDOWN"-表示停止待销毁 "TERMINATING"-表示销毁中 "
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * 外网ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                    /**
                     * 云标签信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tags> m_cloudTags;
                    bool m_cloudTagsHasBeenSet;

                    /**
                     * 主机额外信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MachineExtraInfo m_machineExtraInfo;
                    bool m_machineExtraInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULEFFECTHOSTLIST_H_
