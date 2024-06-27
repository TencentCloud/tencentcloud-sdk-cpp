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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_DEVICEDETAIL_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_DEVICEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * 业务响应数据
                */
                class DeviceDetail : public AbstractModel
                {
                public:
                    DeviceDetail();
                    ~DeviceDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取设备ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 设备ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置设备ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 设备ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取设备唯一标识码，在ioa中每个设备有唯一标识码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mid 设备唯一标识码，在ioa中每个设备有唯一标识码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMid() const;

                    /**
                     * 设置设备唯一标识码，在ioa中每个设备有唯一标识码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mid 设备唯一标识码，在ioa中每个设备有唯一标识码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMid(const std::string& _mid);

                    /**
                     * 判断参数 Mid 是否已赋值
                     * @return Mid 是否已赋值
                     * 
                     */
                    bool MidHasBeenSet() const;

                    /**
                     * 获取终端名（设备名）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 终端名（设备名）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置终端名（设备名）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 终端名（设备名）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取设备所在分组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupId 设备所在分组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置设备所在分组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupId 设备所在分组ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupId(const int64_t& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取OS平台，0：Windows 、1： Linux、 2：macOS 、4： Android、 5: iOS。默认是0
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OsType OS平台，0：Windows 、1： Linux、 2：macOS 、4： Android、 5: iOS。默认是0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOsType() const;

                    /**
                     * 设置OS平台，0：Windows 、1： Linux、 2：macOS 、4： Android、 5: iOS。默认是0
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _osType OS平台，0：Windows 、1： Linux、 2：macOS 、4： Android、 5: iOS。默认是0
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOsType(const int64_t& _osType);

                    /**
                     * 判断参数 OsType 是否已赋值
                     * @return OsType 是否已赋值
                     * 
                     */
                    bool OsTypeHasBeenSet() const;

                    /**
                     * 获取设备IP地址（出口IP）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ip 设备IP地址（出口IP）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置设备IP地址（出口IP）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ip 设备IP地址（出口IP）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取在线状态，2：在线、0或者1:离线
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OnlineStatus 在线状态，2：在线、0或者1:离线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetOnlineStatus() const;

                    /**
                     * 设置在线状态，2：在线、0或者1:离线
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _onlineStatus 在线状态，2：在线、0或者1:离线
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOnlineStatus(const int64_t& _onlineStatus);

                    /**
                     * 判断参数 OnlineStatus 是否已赋值
                     * @return OnlineStatus 是否已赋值
                     * 
                     */
                    bool OnlineStatusHasBeenSet() const;

                    /**
                     * 获取客户端版本号-大整数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 客户端版本号-大整数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置客户端版本号-大整数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version 客户端版本号-大整数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersion(const std::string& _version);

                    /**
                     * 判断参数 Version 是否已赋值
                     * @return Version 是否已赋值
                     * 
                     */
                    bool VersionHasBeenSet() const;

                    /**
                     * 获取客户端版本号-点分字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StrVersion 客户端版本号-点分字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStrVersion() const;

                    /**
                     * 设置客户端版本号-点分字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _strVersion 客户端版本号-点分字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStrVersion(const std::string& _strVersion);

                    /**
                     * 判断参数 StrVersion 是否已赋值
                     * @return StrVersion 是否已赋值
                     * 
                     */
                    bool StrVersionHasBeenSet() const;

                    /**
                     * 获取首次在线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Itime 首次在线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetItime() const;

                    /**
                     * 设置首次在线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _itime 首次在线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItime(const std::string& _itime);

                    /**
                     * 判断参数 Itime 是否已赋值
                     * @return Itime 是否已赋值
                     * 
                     */
                    bool ItimeHasBeenSet() const;

                    /**
                     * 获取最后一次在线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ConnActiveTime 最后一次在线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetConnActiveTime() const;

                    /**
                     * 设置最后一次在线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _connActiveTime 最后一次在线时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetConnActiveTime(const std::string& _connActiveTime);

                    /**
                     * 判断参数 ConnActiveTime 是否已赋值
                     * @return ConnActiveTime 是否已赋值
                     * 
                     */
                    bool ConnActiveTimeHasBeenSet() const;

                    /**
                     * 获取设备是否加锁 ，1：锁定 0或者2：未锁定。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Locked 设备是否加锁 ，1：锁定 0或者2：未锁定。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetLocked() const;

                    /**
                     * 设置设备是否加锁 ，1：锁定 0或者2：未锁定。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _locked 设备是否加锁 ，1：锁定 0或者2：未锁定。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocked(const int64_t& _locked);

                    /**
                     * 判断参数 Locked 是否已赋值
                     * @return Locked 是否已赋值
                     * 
                     */
                    bool LockedHasBeenSet() const;

                    /**
                     * 获取设备本地IP列表, 包括IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LocalIpList 设备本地IP列表, 包括IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLocalIpList() const;

                    /**
                     * 设置设备本地IP列表, 包括IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _localIpList 设备本地IP列表, 包括IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLocalIpList(const std::string& _localIpList);

                    /**
                     * 判断参数 LocalIpList 是否已赋值
                     * @return LocalIpList 是否已赋值
                     * 
                     */
                    bool LocalIpListHasBeenSet() const;

                    /**
                     * 获取主机ID(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostId 主机ID(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetHostId() const;

                    /**
                     * 设置主机ID(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostId 主机ID(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostId(const int64_t& _hostId);

                    /**
                     * 判断参数 HostId 是否已赋值
                     * @return HostId 是否已赋值
                     * 
                     */
                    bool HostIdHasBeenSet() const;

                    /**
                     * 获取设备所属分组名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupName 设备所属分组名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置设备所属分组名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupName 设备所属分组名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取设备所属分组路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GroupNamePath 设备所属分组路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetGroupNamePath() const;

                    /**
                     * 设置设备所属分组路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _groupNamePath 设备所属分组路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGroupNamePath(const std::string& _groupNamePath);

                    /**
                     * 判断参数 GroupNamePath 是否已赋值
                     * @return GroupNamePath 是否已赋值
                     * 
                     */
                    bool GroupNamePathHasBeenSet() const;

                    /**
                     * 获取未修复高危漏洞数(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CriticalVulListCount 未修复高危漏洞数(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetCriticalVulListCount() const;

                    /**
                     * 设置未修复高危漏洞数(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _criticalVulListCount 未修复高危漏洞数(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCriticalVulListCount(const int64_t& _criticalVulListCount);

                    /**
                     * 判断参数 CriticalVulListCount 是否已赋值
                     * @return CriticalVulListCount 是否已赋值
                     * 
                     */
                    bool CriticalVulListCountHasBeenSet() const;

                    /**
                     * 获取设备名，和Name相同
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ComputerName 设备名，和Name相同
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetComputerName() const;

                    /**
                     * 设置设备名，和Name相同
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _computerName 设备名，和Name相同
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetComputerName(const std::string& _computerName);

                    /**
                     * 判断参数 ComputerName 是否已赋值
                     * @return ComputerName 是否已赋值
                     * 
                     */
                    bool ComputerNameHasBeenSet() const;

                    /**
                     * 获取登录域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DomainName 登录域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置登录域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domainName 登录域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取MAC地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MacAddr MAC地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMacAddr() const;

                    /**
                     * 设置MAC地址
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _macAddr MAC地址
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMacAddr(const std::string& _macAddr);

                    /**
                     * 判断参数 MacAddr 是否已赋值
                     * @return MacAddr 是否已赋值
                     * 
                     */
                    bool MacAddrHasBeenSet() const;

                    /**
                     * 获取漏洞数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VulCount 漏洞数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetVulCount() const;

                    /**
                     * 设置漏洞数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vulCount 漏洞数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVulCount(const int64_t& _vulCount);

                    /**
                     * 判断参数 VulCount 是否已赋值
                     * @return VulCount 是否已赋值
                     * 
                     */
                    bool VulCountHasBeenSet() const;

                    /**
                     * 获取病毒风险数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RiskCount 病毒风险数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRiskCount() const;

                    /**
                     * 设置病毒风险数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _riskCount 病毒风险数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRiskCount(const int64_t& _riskCount);

                    /**
                     * 判断参数 RiskCount 是否已赋值
                     * @return RiskCount 是否已赋值
                     * 
                     */
                    bool RiskCountHasBeenSet() const;

                    /**
                     * 获取病毒库版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VirusVer 病毒库版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVirusVer() const;

                    /**
                     * 设置病毒库版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _virusVer 病毒库版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVirusVer(const std::string& _virusVer);

                    /**
                     * 判断参数 VirusVer 是否已赋值
                     * @return VirusVer 是否已赋值
                     * 
                     */
                    bool VirusVerHasBeenSet() const;

                    /**
                     * 获取漏洞库版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VulVersion 漏洞库版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVulVersion() const;

                    /**
                     * 设置漏洞库版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vulVersion 漏洞库版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVulVersion(const std::string& _vulVersion);

                    /**
                     * 判断参数 VulVersion 是否已赋值
                     * @return VulVersion 是否已赋值
                     * 
                     */
                    bool VulVersionHasBeenSet() const;

                    /**
                     * 获取系统修复引擎版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SysRepVersion 系统修复引擎版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSysRepVersion() const;

                    /**
                     * 设置系统修复引擎版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sysRepVersion 系统修复引擎版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSysRepVersion(const std::string& _sysRepVersion);

                    /**
                     * 判断参数 SysRepVersion 是否已赋值
                     * @return SysRepVersion 是否已赋值
                     * 
                     */
                    bool SysRepVersionHasBeenSet() const;

                    /**
                     * 获取高危补丁列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VulCriticalList 高危补丁列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetVulCriticalList() const;

                    /**
                     * 设置高危补丁列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vulCriticalList 高危补丁列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVulCriticalList(const std::vector<std::string>& _vulCriticalList);

                    /**
                     * 判断参数 VulCriticalList 是否已赋值
                     * @return VulCriticalList 是否已赋值
                     * 
                     */
                    bool VulCriticalListHasBeenSet() const;

                    /**
                     * 获取标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTags() const;

                    /**
                     * 设置标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::string& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取终端用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserName 终端用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置终端用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userName 终端用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取防火墙状态，不等于0表示开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FirewallStatus 防火墙状态，不等于0表示开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFirewallStatus() const;

                    /**
                     * 设置防火墙状态，不等于0表示开启
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _firewallStatus 防火墙状态，不等于0表示开启
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFirewallStatus(const int64_t& _firewallStatus);

                    /**
                     * 判断参数 FirewallStatus 是否已赋值
                     * @return FirewallStatus 是否已赋值
                     * 
                     */
                    bool FirewallStatusHasBeenSet() const;

                    /**
                     * 获取SN序列号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SerialNum SN序列号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSerialNum() const;

                    /**
                     * 设置SN序列号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _serialNum SN序列号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSerialNum(const std::string& _serialNum);

                    /**
                     * 判断参数 SerialNum 是否已赋值
                     * @return SerialNum 是否已赋值
                     * 
                     */
                    bool SerialNumHasBeenSet() const;

                    /**
                     * 获取设备管控策略版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceStrategyVer 设备管控策略版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeviceStrategyVer() const;

                    /**
                     * 设置设备管控策略版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deviceStrategyVer 设备管控策略版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeviceStrategyVer(const std::string& _deviceStrategyVer);

                    /**
                     * 判断参数 DeviceStrategyVer 是否已赋值
                     * @return DeviceStrategyVer 是否已赋值
                     * 
                     */
                    bool DeviceStrategyVerHasBeenSet() const;

                    /**
                     * 获取NGN策略版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NGNStrategyVer NGN策略版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNGNStrategyVer() const;

                    /**
                     * 设置NGN策略版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nGNStrategyVer NGN策略版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNGNStrategyVer(const std::string& _nGNStrategyVer);

                    /**
                     * 判断参数 NGNStrategyVer 是否已赋值
                     * @return NGNStrategyVer 是否已赋值
                     * 
                     */
                    bool NGNStrategyVerHasBeenSet() const;

                    /**
                     * 获取最近登录账户的账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IOAUserName 最近登录账户的账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIOAUserName() const;

                    /**
                     * 设置最近登录账户的账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iOAUserName 最近登录账户的账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIOAUserName(const std::string& _iOAUserName);

                    /**
                     * 判断参数 IOAUserName 是否已赋值
                     * @return IOAUserName 是否已赋值
                     * 
                     */
                    bool IOAUserNameHasBeenSet() const;

                    /**
                     * 获取设备管控新策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceNewStrategyVer 设备管控新策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeviceNewStrategyVer() const;

                    /**
                     * 设置设备管控新策略
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deviceNewStrategyVer 设备管控新策略
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeviceNewStrategyVer(const std::string& _deviceNewStrategyVer);

                    /**
                     * 判断参数 DeviceNewStrategyVer 是否已赋值
                     * @return DeviceNewStrategyVer 是否已赋值
                     * 
                     */
                    bool DeviceNewStrategyVerHasBeenSet() const;

                    /**
                     * 获取NGN策略新版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NGNNewStrategyVer NGN策略新版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNGNNewStrategyVer() const;

                    /**
                     * 设置NGN策略新版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nGNNewStrategyVer NGN策略新版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNGNNewStrategyVer(const std::string& _nGNNewStrategyVer);

                    /**
                     * 判断参数 NGNNewStrategyVer 是否已赋值
                     * @return NGNNewStrategyVer 是否已赋值
                     * 
                     */
                    bool NGNNewStrategyVerHasBeenSet() const;

                    /**
                     * 获取主机名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostName 主机名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置主机名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostName 主机名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostName(const std::string& _hostName);

                    /**
                     * 判断参数 HostName 是否已赋值
                     * @return HostName 是否已赋值
                     * 
                     */
                    bool HostNameHasBeenSet() const;

                    /**
                     * 获取主板序列号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BaseBoardSn 主板序列号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBaseBoardSn() const;

                    /**
                     * 设置主板序列号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _baseBoardSn 主板序列号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBaseBoardSn(const std::string& _baseBoardSn);

                    /**
                     * 判断参数 BaseBoardSn 是否已赋值
                     * @return BaseBoardSn 是否已赋值
                     * 
                     */
                    bool BaseBoardSnHasBeenSet() const;

                    /**
                     * 获取绑定账户只有名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountUsers 绑定账户只有名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountUsers() const;

                    /**
                     * 设置绑定账户只有名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountUsers 绑定账户只有名字
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountUsers(const std::string& _accountUsers);

                    /**
                     * 判断参数 AccountUsers 是否已赋值
                     * @return AccountUsers 是否已赋值
                     * 
                     */
                    bool AccountUsersHasBeenSet() const;

                    /**
                     * 获取身份策略版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdentityStrategyVer 身份策略版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIdentityStrategyVer() const;

                    /**
                     * 设置身份策略版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _identityStrategyVer 身份策略版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdentityStrategyVer(const std::string& _identityStrategyVer);

                    /**
                     * 判断参数 IdentityStrategyVer 是否已赋值
                     * @return IdentityStrategyVer 是否已赋值
                     * 
                     */
                    bool IdentityStrategyVerHasBeenSet() const;

                    /**
                     * 获取身份策略新版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdentityNewStrategyVer 身份策略新版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIdentityNewStrategyVer() const;

                    /**
                     * 设置身份策略新版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _identityNewStrategyVer 身份策略新版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIdentityNewStrategyVer(const std::string& _identityNewStrategyVer);

                    /**
                     * 判断参数 IdentityNewStrategyVer 是否已赋值
                     * @return IdentityNewStrategyVer 是否已赋值
                     * 
                     */
                    bool IdentityNewStrategyVerHasBeenSet() const;

                    /**
                     * 获取最近登录账号部门
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountGroupName 最近登录账号部门
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountGroupName() const;

                    /**
                     * 设置最近登录账号部门
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountGroupName 最近登录账号部门
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountGroupName(const std::string& _accountGroupName);

                    /**
                     * 判断参数 AccountGroupName 是否已赋值
                     * @return AccountGroupName 是否已赋值
                     * 
                     */
                    bool AccountGroupNameHasBeenSet() const;

                    /**
                     * 获取最近登录账户的姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountName 最近登录账户的姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置最近登录账户的姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountName 最近登录账户的姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取账号组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccountGroupId 账号组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAccountGroupId() const;

                    /**
                     * 设置账号组id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accountGroupId 账号组id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccountGroupId(const int64_t& _accountGroupId);

                    /**
                     * 判断参数 AccountGroupId 是否已赋值
                     * @return AccountGroupId 是否已赋值
                     * 
                     */
                    bool AccountGroupIdHasBeenSet() const;

                private:

                    /**
                     * 设备ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 设备唯一标识码，在ioa中每个设备有唯一标识码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mid;
                    bool m_midHasBeenSet;

                    /**
                     * 终端名（设备名）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 设备所在分组ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * OS平台，0：Windows 、1： Linux、 2：macOS 、4： Android、 5: iOS。默认是0
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * 设备IP地址（出口IP）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 在线状态，2：在线、0或者1:离线
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_onlineStatus;
                    bool m_onlineStatusHasBeenSet;

                    /**
                     * 客户端版本号-大整数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 客户端版本号-点分字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_strVersion;
                    bool m_strVersionHasBeenSet;

                    /**
                     * 首次在线时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_itime;
                    bool m_itimeHasBeenSet;

                    /**
                     * 最后一次在线时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_connActiveTime;
                    bool m_connActiveTimeHasBeenSet;

                    /**
                     * 设备是否加锁 ，1：锁定 0或者2：未锁定。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_locked;
                    bool m_lockedHasBeenSet;

                    /**
                     * 设备本地IP列表, 包括IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_localIpList;
                    bool m_localIpListHasBeenSet;

                    /**
                     * 主机ID(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_hostId;
                    bool m_hostIdHasBeenSet;

                    /**
                     * 设备所属分组名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 设备所属分组路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_groupNamePath;
                    bool m_groupNamePathHasBeenSet;

                    /**
                     * 未修复高危漏洞数(只支持32位)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_criticalVulListCount;
                    bool m_criticalVulListCountHasBeenSet;

                    /**
                     * 设备名，和Name相同
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_computerName;
                    bool m_computerNameHasBeenSet;

                    /**
                     * 登录域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * MAC地址
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_macAddr;
                    bool m_macAddrHasBeenSet;

                    /**
                     * 漏洞数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_vulCount;
                    bool m_vulCountHasBeenSet;

                    /**
                     * 病毒风险数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * 病毒库版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_virusVer;
                    bool m_virusVerHasBeenSet;

                    /**
                     * 漏洞库版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vulVersion;
                    bool m_vulVersionHasBeenSet;

                    /**
                     * 系统修复引擎版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_sysRepVersion;
                    bool m_sysRepVersionHasBeenSet;

                    /**
                     * 高危补丁列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_vulCriticalList;
                    bool m_vulCriticalListHasBeenSet;

                    /**
                     * 标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 终端用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 防火墙状态，不等于0表示开启
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_firewallStatus;
                    bool m_firewallStatusHasBeenSet;

                    /**
                     * SN序列号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serialNum;
                    bool m_serialNumHasBeenSet;

                    /**
                     * 设备管控策略版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deviceStrategyVer;
                    bool m_deviceStrategyVerHasBeenSet;

                    /**
                     * NGN策略版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nGNStrategyVer;
                    bool m_nGNStrategyVerHasBeenSet;

                    /**
                     * 最近登录账户的账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iOAUserName;
                    bool m_iOAUserNameHasBeenSet;

                    /**
                     * 设备管控新策略
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deviceNewStrategyVer;
                    bool m_deviceNewStrategyVerHasBeenSet;

                    /**
                     * NGN策略新版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nGNNewStrategyVer;
                    bool m_nGNNewStrategyVerHasBeenSet;

                    /**
                     * 主机名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * 主板序列号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_baseBoardSn;
                    bool m_baseBoardSnHasBeenSet;

                    /**
                     * 绑定账户只有名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountUsers;
                    bool m_accountUsersHasBeenSet;

                    /**
                     * 身份策略版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_identityStrategyVer;
                    bool m_identityStrategyVerHasBeenSet;

                    /**
                     * 身份策略新版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_identityNewStrategyVer;
                    bool m_identityNewStrategyVerHasBeenSet;

                    /**
                     * 最近登录账号部门
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountGroupName;
                    bool m_accountGroupNameHasBeenSet;

                    /**
                     * 最近登录账户的姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * 账号组id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DEVICEDETAIL_H_
