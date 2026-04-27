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
                     * 获取<p>设备ID</p>
                     * @return Id <p>设备ID</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>设备ID</p>
                     * @param _id <p>设备ID</p>
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
                     * 获取<p>设备唯一标识码，在ioa中每个设备有唯一标识码</p>
                     * @return Mid <p>设备唯一标识码，在ioa中每个设备有唯一标识码</p>
                     * 
                     */
                    std::string GetMid() const;

                    /**
                     * 设置<p>设备唯一标识码，在ioa中每个设备有唯一标识码</p>
                     * @param _mid <p>设备唯一标识码，在ioa中每个设备有唯一标识码</p>
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
                     * 获取<p>终端名（设备名）</p>
                     * @return Name <p>终端名（设备名）</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>终端名（设备名）</p>
                     * @param _name <p>终端名（设备名）</p>
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
                     * 获取<p>设备所在分组ID</p>
                     * @return GroupId <p>设备所在分组ID</p>
                     * 
                     */
                    int64_t GetGroupId() const;

                    /**
                     * 设置<p>设备所在分组ID</p>
                     * @param _groupId <p>设备所在分组ID</p>
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
                     * 获取<p>OS平台，0：Windows 、1： Linux、 2：macOS 、4： Android、 5: iOS。默认是0</p>
                     * @return OsType <p>OS平台，0：Windows 、1： Linux、 2：macOS 、4： Android、 5: iOS。默认是0</p>
                     * 
                     */
                    int64_t GetOsType() const;

                    /**
                     * 设置<p>OS平台，0：Windows 、1： Linux、 2：macOS 、4： Android、 5: iOS。默认是0</p>
                     * @param _osType <p>OS平台，0：Windows 、1： Linux、 2：macOS 、4： Android、 5: iOS。默认是0</p>
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
                     * 获取<p>设备IP地址（出口IP）</p>
                     * @return Ip <p>设备IP地址（出口IP）</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>设备IP地址（出口IP）</p>
                     * @param _ip <p>设备IP地址（出口IP）</p>
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
                     * 获取<p>在线状态，2：在线、0或者1:离线</p>
                     * @return OnlineStatus <p>在线状态，2：在线、0或者1:离线</p>
                     * 
                     */
                    int64_t GetOnlineStatus() const;

                    /**
                     * 设置<p>在线状态，2：在线、0或者1:离线</p>
                     * @param _onlineStatus <p>在线状态，2：在线、0或者1:离线</p>
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
                     * 获取<p>客户端版本号-大整数</p>
                     * @return Version <p>客户端版本号-大整数</p>
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>客户端版本号-大整数</p>
                     * @param _version <p>客户端版本号-大整数</p>
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
                     * 获取<p>客户端版本号-点分字符串</p>
                     * @return StrVersion <p>客户端版本号-点分字符串</p>
                     * 
                     */
                    std::string GetStrVersion() const;

                    /**
                     * 设置<p>客户端版本号-点分字符串</p>
                     * @param _strVersion <p>客户端版本号-点分字符串</p>
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
                     * 获取<p>首次在线时间</p>
                     * @return Itime <p>首次在线时间</p>
                     * 
                     */
                    std::string GetItime() const;

                    /**
                     * 设置<p>首次在线时间</p>
                     * @param _itime <p>首次在线时间</p>
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
                     * 获取<p>最后一次在线时间</p>
                     * @return ConnActiveTime <p>最后一次在线时间</p>
                     * 
                     */
                    std::string GetConnActiveTime() const;

                    /**
                     * 设置<p>最后一次在线时间</p>
                     * @param _connActiveTime <p>最后一次在线时间</p>
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
                     * 获取<p>设备是否加锁 ，1：锁定 0或者2：未锁定。</p>
                     * @return Locked <p>设备是否加锁 ，1：锁定 0或者2：未锁定。</p>
                     * 
                     */
                    int64_t GetLocked() const;

                    /**
                     * 设置<p>设备是否加锁 ，1：锁定 0或者2：未锁定。</p>
                     * @param _locked <p>设备是否加锁 ，1：锁定 0或者2：未锁定。</p>
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
                     * 获取<p>设备本地IP列表, 包括IP</p>
                     * @return LocalIpList <p>设备本地IP列表, 包括IP</p>
                     * 
                     */
                    std::string GetLocalIpList() const;

                    /**
                     * 设置<p>设备本地IP列表, 包括IP</p>
                     * @param _localIpList <p>设备本地IP列表, 包括IP</p>
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
                     * 获取<p>宿主机id（需要宿主机也安装iOA才能显示）</p>
                     * @return HostId <p>宿主机id（需要宿主机也安装iOA才能显示）</p>
                     * 
                     */
                    int64_t GetHostId() const;

                    /**
                     * 设置<p>宿主机id（需要宿主机也安装iOA才能显示）</p>
                     * @param _hostId <p>宿主机id（需要宿主机也安装iOA才能显示）</p>
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
                     * 获取<p>设备所属分组名</p>
                     * @return GroupName <p>设备所属分组名</p>
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置<p>设备所属分组名</p>
                     * @param _groupName <p>设备所属分组名</p>
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
                     * 获取<p>设备所属分组路径</p>
                     * @return GroupNamePath <p>设备所属分组路径</p>
                     * 
                     */
                    std::string GetGroupNamePath() const;

                    /**
                     * 设置<p>设备所属分组路径</p>
                     * @param _groupNamePath <p>设备所属分组路径</p>
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
                     * 获取<p>未修复高危漏洞数(只支持32位)</p>
                     * @return CriticalVulListCount <p>未修复高危漏洞数(只支持32位)</p>
                     * 
                     */
                    int64_t GetCriticalVulListCount() const;

                    /**
                     * 设置<p>未修复高危漏洞数(只支持32位)</p>
                     * @param _criticalVulListCount <p>未修复高危漏洞数(只支持32位)</p>
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
                     * 获取<p>操作系统名称</p>
                     * @return Os <p>操作系统名称</p>
                     * 
                     */
                    std::string GetOs() const;

                    /**
                     * 设置<p>操作系统名称</p>
                     * @param _os <p>操作系统名称</p>
                     * 
                     */
                    void SetOs(const std::string& _os);

                    /**
                     * 判断参数 Os 是否已赋值
                     * @return Os 是否已赋值
                     * 
                     */
                    bool OsHasBeenSet() const;

                    /**
                     * 获取<p>操作系统位数</p>
                     * @return OsBits <p>操作系统位数</p>
                     * 
                     */
                    int64_t GetOsBits() const;

                    /**
                     * 设置<p>操作系统位数</p>
                     * @param _osBits <p>操作系统位数</p>
                     * 
                     */
                    void SetOsBits(const int64_t& _osBits);

                    /**
                     * 判断参数 OsBits 是否已赋值
                     * @return OsBits 是否已赋值
                     * 
                     */
                    bool OsBitsHasBeenSet() const;

                    /**
                     * 获取<p>操作系统版本</p>
                     * @return OsVersion <p>操作系统版本</p>
                     * 
                     */
                    std::string GetOsVersion() const;

                    /**
                     * 设置<p>操作系统版本</p>
                     * @param _osVersion <p>操作系统版本</p>
                     * 
                     */
                    void SetOsVersion(const std::string& _osVersion);

                    /**
                     * 判断参数 OsVersion 是否已赋值
                     * @return OsVersion 是否已赋值
                     * 
                     */
                    bool OsVersionHasBeenSet() const;

                    /**
                     * 获取<p>操作系统语言</p>
                     * @return OsLanguage <p>操作系统语言</p>
                     * 
                     */
                    std::string GetOsLanguage() const;

                    /**
                     * 设置<p>操作系统语言</p>
                     * @param _osLanguage <p>操作系统语言</p>
                     * 
                     */
                    void SetOsLanguage(const std::string& _osLanguage);

                    /**
                     * 判断参数 OsLanguage 是否已赋值
                     * @return OsLanguage 是否已赋值
                     * 
                     */
                    bool OsLanguageHasBeenSet() const;

                    /**
                     * 获取<p>操作系统安装时间</p>
                     * @return OsInstallDate <p>操作系统安装时间</p>
                     * 
                     */
                    std::string GetOsInstallDate() const;

                    /**
                     * 设置<p>操作系统安装时间</p>
                     * @param _osInstallDate <p>操作系统安装时间</p>
                     * 
                     */
                    void SetOsInstallDate(const std::string& _osInstallDate);

                    /**
                     * 判断参数 OsInstallDate 是否已赋值
                     * @return OsInstallDate 是否已赋值
                     * 
                     */
                    bool OsInstallDateHasBeenSet() const;

                    /**
                     * 获取<p>设备名，和Name相同</p>
                     * @return ComputerName <p>设备名，和Name相同</p>
                     * 
                     */
                    std::string GetComputerName() const;

                    /**
                     * 设置<p>设备名，和Name相同</p>
                     * @param _computerName <p>设备名，和Name相同</p>
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
                     * 获取<p>登录域名</p>
                     * @return DomainName <p>登录域名</p>
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置<p>登录域名</p>
                     * @param _domainName <p>登录域名</p>
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
                     * 获取<p>MAC地址</p>
                     * @return MacAddr <p>MAC地址</p>
                     * 
                     */
                    std::string GetMacAddr() const;

                    /**
                     * 设置<p>MAC地址</p>
                     * @param _macAddr <p>MAC地址</p>
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
                     * 获取<p>漏洞数</p>
                     * @return VulCount <p>漏洞数</p>
                     * 
                     */
                    int64_t GetVulCount() const;

                    /**
                     * 设置<p>漏洞数</p>
                     * @param _vulCount <p>漏洞数</p>
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
                     * 获取<p>病毒风险数</p>
                     * @return RiskCount <p>病毒风险数</p>
                     * 
                     */
                    int64_t GetRiskCount() const;

                    /**
                     * 设置<p>病毒风险数</p>
                     * @param _riskCount <p>病毒风险数</p>
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
                     * 获取<p>病毒库版本</p>
                     * @return VirusVer <p>病毒库版本</p>
                     * 
                     */
                    std::string GetVirusVer() const;

                    /**
                     * 设置<p>病毒库版本</p>
                     * @param _virusVer <p>病毒库版本</p>
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
                     * 获取<p>漏洞库版本</p>
                     * @return VulVersion <p>漏洞库版本</p>
                     * 
                     */
                    std::string GetVulVersion() const;

                    /**
                     * 设置<p>漏洞库版本</p>
                     * @param _vulVersion <p>漏洞库版本</p>
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
                     * 获取<p>系统修复引擎版本</p>
                     * @return SysRepVersion <p>系统修复引擎版本</p>
                     * 
                     */
                    std::string GetSysRepVersion() const;

                    /**
                     * 设置<p>系统修复引擎版本</p>
                     * @param _sysRepVersion <p>系统修复引擎版本</p>
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
                     * 获取<p>高危补丁列表</p>
                     * @return VulCriticalList <p>高危补丁列表</p>
                     * 
                     */
                    std::vector<std::string> GetVulCriticalList() const;

                    /**
                     * 设置<p>高危补丁列表</p>
                     * @param _vulCriticalList <p>高危补丁列表</p>
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
                     * 获取<p>标签</p>
                     * @return Tags <p>标签</p>
                     * 
                     */
                    std::string GetTags() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _tags <p>标签</p>
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
                     * 获取<p>终端用户名</p>
                     * @return UserName <p>终端用户名</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>终端用户名</p>
                     * @param _userName <p>终端用户名</p>
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
                     * 获取<p>防火墙状态，不等于0表示开启</p>
                     * @return FirewallStatus <p>防火墙状态，不等于0表示开启</p>
                     * 
                     */
                    int64_t GetFirewallStatus() const;

                    /**
                     * 设置<p>防火墙状态，不等于0表示开启</p>
                     * @param _firewallStatus <p>防火墙状态，不等于0表示开启</p>
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
                     * 获取<p>SN序列号</p>
                     * @return SerialNum <p>SN序列号</p>
                     * 
                     */
                    std::string GetSerialNum() const;

                    /**
                     * 设置<p>SN序列号</p>
                     * @param _serialNum <p>SN序列号</p>
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
                     * 获取<p>设备管控策略版本</p>
                     * @return DeviceStrategyVer <p>设备管控策略版本</p>
                     * 
                     */
                    std::string GetDeviceStrategyVer() const;

                    /**
                     * 设置<p>设备管控策略版本</p>
                     * @param _deviceStrategyVer <p>设备管控策略版本</p>
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
                     * 获取<p>NGN策略版本</p>
                     * @return NGNStrategyVer <p>NGN策略版本</p>
                     * 
                     */
                    std::string GetNGNStrategyVer() const;

                    /**
                     * 设置<p>NGN策略版本</p>
                     * @param _nGNStrategyVer <p>NGN策略版本</p>
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
                     * 获取<p>最近登录账户的账号(账号系统用户账号)</p>
                     * @return IOAUserName <p>最近登录账户的账号(账号系统用户账号)</p>
                     * 
                     */
                    std::string GetIOAUserName() const;

                    /**
                     * 设置<p>最近登录账户的账号(账号系统用户账号)</p>
                     * @param _iOAUserName <p>最近登录账户的账号(账号系统用户账号)</p>
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
                     * 获取<p>设备管控新策略</p>
                     * @return DeviceNewStrategyVer <p>设备管控新策略</p>
                     * 
                     */
                    std::string GetDeviceNewStrategyVer() const;

                    /**
                     * 设置<p>设备管控新策略</p>
                     * @param _deviceNewStrategyVer <p>设备管控新策略</p>
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
                     * 获取<p>NGN策略新版本</p>
                     * @return NGNNewStrategyVer <p>NGN策略新版本</p>
                     * 
                     */
                    std::string GetNGNNewStrategyVer() const;

                    /**
                     * 设置<p>NGN策略新版本</p>
                     * @param _nGNNewStrategyVer <p>NGN策略新版本</p>
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
                     * 获取<p>宿主机名称（需要宿主机也安装iOA才能显示）</p>
                     * @return HostName <p>宿主机名称（需要宿主机也安装iOA才能显示）</p>
                     * 
                     */
                    std::string GetHostName() const;

                    /**
                     * 设置<p>宿主机名称（需要宿主机也安装iOA才能显示）</p>
                     * @param _hostName <p>宿主机名称（需要宿主机也安装iOA才能显示）</p>
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
                     * 获取<p>主板序列号</p>
                     * @return BaseBoardSn <p>主板序列号</p>
                     * 
                     */
                    std::string GetBaseBoardSn() const;

                    /**
                     * 设置<p>主板序列号</p>
                     * @param _baseBoardSn <p>主板序列号</p>
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
                     * 获取<p>绑定账户名称</p>
                     * @return AccountUsers <p>绑定账户名称</p>
                     * 
                     */
                    std::string GetAccountUsers() const;

                    /**
                     * 设置<p>绑定账户名称</p>
                     * @param _accountUsers <p>绑定账户名称</p>
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
                     * 获取<p>身份策略版本</p>
                     * @return IdentityStrategyVer <p>身份策略版本</p>
                     * 
                     */
                    std::string GetIdentityStrategyVer() const;

                    /**
                     * 设置<p>身份策略版本</p>
                     * @param _identityStrategyVer <p>身份策略版本</p>
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
                     * 获取<p>身份策略新版本</p>
                     * @return IdentityNewStrategyVer <p>身份策略新版本</p>
                     * 
                     */
                    std::string GetIdentityNewStrategyVer() const;

                    /**
                     * 设置<p>身份策略新版本</p>
                     * @param _identityNewStrategyVer <p>身份策略新版本</p>
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
                     * 获取<p>最近登录账号部门</p>
                     * @return AccountGroupName <p>最近登录账号部门</p>
                     * 
                     */
                    std::string GetAccountGroupName() const;

                    /**
                     * 设置<p>最近登录账号部门</p>
                     * @param _accountGroupName <p>最近登录账号部门</p>
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
                     * 获取<p>最近登录账户的姓名(账号系统用户姓名)</p>
                     * @return AccountName <p>最近登录账户的姓名(账号系统用户姓名)</p>
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置<p>最近登录账户的姓名(账号系统用户姓名)</p>
                     * @param _accountName <p>最近登录账户的姓名(账号系统用户姓名)</p>
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
                     * 获取<p>账号组id</p>
                     * @return AccountGroupId <p>账号组id</p>
                     * 
                     */
                    int64_t GetAccountGroupId() const;

                    /**
                     * 设置<p>账号组id</p>
                     * @param _accountGroupId <p>账号组id</p>
                     * 
                     */
                    void SetAccountGroupId(const int64_t& _accountGroupId);

                    /**
                     * 判断参数 AccountGroupId 是否已赋值
                     * @return AccountGroupId 是否已赋值
                     * 
                     */
                    bool AccountGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>是否开启录屏权限，仅macOS， 0： 未开启 、1： 开启</p>
                     * @return ScreenRecordingPermission <p>是否开启录屏权限，仅macOS， 0： 未开启 、1： 开启</p>
                     * 
                     */
                    int64_t GetScreenRecordingPermission() const;

                    /**
                     * 设置<p>是否开启录屏权限，仅macOS， 0： 未开启 、1： 开启</p>
                     * @param _screenRecordingPermission <p>是否开启录屏权限，仅macOS， 0： 未开启 、1： 开启</p>
                     * 
                     */
                    void SetScreenRecordingPermission(const int64_t& _screenRecordingPermission);

                    /**
                     * 判断参数 ScreenRecordingPermission 是否已赋值
                     * @return ScreenRecordingPermission 是否已赋值
                     * 
                     */
                    bool ScreenRecordingPermissionHasBeenSet() const;

                    /**
                     * 获取<p>是否开启磁盘访问权限，仅macOS， 0： 未开启、 1： 开启</p>
                     * @return DiskAccessPermission <p>是否开启磁盘访问权限，仅macOS， 0： 未开启、 1： 开启</p>
                     * 
                     */
                    int64_t GetDiskAccessPermission() const;

                    /**
                     * 设置<p>是否开启磁盘访问权限，仅macOS， 0： 未开启、 1： 开启</p>
                     * @param _diskAccessPermission <p>是否开启磁盘访问权限，仅macOS， 0： 未开启、 1： 开启</p>
                     * 
                     */
                    void SetDiskAccessPermission(const int64_t& _diskAccessPermission);

                    /**
                     * 判断参数 DiskAccessPermission 是否已赋值
                     * @return DiskAccessPermission 是否已赋值
                     * 
                     */
                    bool DiskAccessPermissionHasBeenSet() const;

                    /**
                     * 获取<p>终端备注名</p>
                     * @return RemarkName <p>终端备注名</p>
                     * 
                     */
                    std::string GetRemarkName() const;

                    /**
                     * 设置<p>终端备注名</p>
                     * @param _remarkName <p>终端备注名</p>
                     * 
                     */
                    void SetRemarkName(const std::string& _remarkName);

                    /**
                     * 判断参数 RemarkName 是否已赋值
                     * @return RemarkName 是否已赋值
                     * 
                     */
                    bool RemarkNameHasBeenSet() const;

                private:

                    /**
                     * <p>设备ID</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>设备唯一标识码，在ioa中每个设备有唯一标识码</p>
                     */
                    std::string m_mid;
                    bool m_midHasBeenSet;

                    /**
                     * <p>终端名（设备名）</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>设备所在分组ID</p>
                     */
                    int64_t m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * <p>OS平台，0：Windows 、1： Linux、 2：macOS 、4： Android、 5: iOS。默认是0</p>
                     */
                    int64_t m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * <p>设备IP地址（出口IP）</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * <p>在线状态，2：在线、0或者1:离线</p>
                     */
                    int64_t m_onlineStatus;
                    bool m_onlineStatusHasBeenSet;

                    /**
                     * <p>客户端版本号-大整数</p>
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>客户端版本号-点分字符串</p>
                     */
                    std::string m_strVersion;
                    bool m_strVersionHasBeenSet;

                    /**
                     * <p>首次在线时间</p>
                     */
                    std::string m_itime;
                    bool m_itimeHasBeenSet;

                    /**
                     * <p>最后一次在线时间</p>
                     */
                    std::string m_connActiveTime;
                    bool m_connActiveTimeHasBeenSet;

                    /**
                     * <p>设备是否加锁 ，1：锁定 0或者2：未锁定。</p>
                     */
                    int64_t m_locked;
                    bool m_lockedHasBeenSet;

                    /**
                     * <p>设备本地IP列表, 包括IP</p>
                     */
                    std::string m_localIpList;
                    bool m_localIpListHasBeenSet;

                    /**
                     * <p>宿主机id（需要宿主机也安装iOA才能显示）</p>
                     */
                    int64_t m_hostId;
                    bool m_hostIdHasBeenSet;

                    /**
                     * <p>设备所属分组名</p>
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * <p>设备所属分组路径</p>
                     */
                    std::string m_groupNamePath;
                    bool m_groupNamePathHasBeenSet;

                    /**
                     * <p>未修复高危漏洞数(只支持32位)</p>
                     */
                    int64_t m_criticalVulListCount;
                    bool m_criticalVulListCountHasBeenSet;

                    /**
                     * <p>操作系统名称</p>
                     */
                    std::string m_os;
                    bool m_osHasBeenSet;

                    /**
                     * <p>操作系统位数</p>
                     */
                    int64_t m_osBits;
                    bool m_osBitsHasBeenSet;

                    /**
                     * <p>操作系统版本</p>
                     */
                    std::string m_osVersion;
                    bool m_osVersionHasBeenSet;

                    /**
                     * <p>操作系统语言</p>
                     */
                    std::string m_osLanguage;
                    bool m_osLanguageHasBeenSet;

                    /**
                     * <p>操作系统安装时间</p>
                     */
                    std::string m_osInstallDate;
                    bool m_osInstallDateHasBeenSet;

                    /**
                     * <p>设备名，和Name相同</p>
                     */
                    std::string m_computerName;
                    bool m_computerNameHasBeenSet;

                    /**
                     * <p>登录域名</p>
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * <p>MAC地址</p>
                     */
                    std::string m_macAddr;
                    bool m_macAddrHasBeenSet;

                    /**
                     * <p>漏洞数</p>
                     */
                    int64_t m_vulCount;
                    bool m_vulCountHasBeenSet;

                    /**
                     * <p>病毒风险数</p>
                     */
                    int64_t m_riskCount;
                    bool m_riskCountHasBeenSet;

                    /**
                     * <p>病毒库版本</p>
                     */
                    std::string m_virusVer;
                    bool m_virusVerHasBeenSet;

                    /**
                     * <p>漏洞库版本</p>
                     */
                    std::string m_vulVersion;
                    bool m_vulVersionHasBeenSet;

                    /**
                     * <p>系统修复引擎版本</p>
                     */
                    std::string m_sysRepVersion;
                    bool m_sysRepVersionHasBeenSet;

                    /**
                     * <p>高危补丁列表</p>
                     */
                    std::vector<std::string> m_vulCriticalList;
                    bool m_vulCriticalListHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>终端用户名</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>防火墙状态，不等于0表示开启</p>
                     */
                    int64_t m_firewallStatus;
                    bool m_firewallStatusHasBeenSet;

                    /**
                     * <p>SN序列号</p>
                     */
                    std::string m_serialNum;
                    bool m_serialNumHasBeenSet;

                    /**
                     * <p>设备管控策略版本</p>
                     */
                    std::string m_deviceStrategyVer;
                    bool m_deviceStrategyVerHasBeenSet;

                    /**
                     * <p>NGN策略版本</p>
                     */
                    std::string m_nGNStrategyVer;
                    bool m_nGNStrategyVerHasBeenSet;

                    /**
                     * <p>最近登录账户的账号(账号系统用户账号)</p>
                     */
                    std::string m_iOAUserName;
                    bool m_iOAUserNameHasBeenSet;

                    /**
                     * <p>设备管控新策略</p>
                     */
                    std::string m_deviceNewStrategyVer;
                    bool m_deviceNewStrategyVerHasBeenSet;

                    /**
                     * <p>NGN策略新版本</p>
                     */
                    std::string m_nGNNewStrategyVer;
                    bool m_nGNNewStrategyVerHasBeenSet;

                    /**
                     * <p>宿主机名称（需要宿主机也安装iOA才能显示）</p>
                     */
                    std::string m_hostName;
                    bool m_hostNameHasBeenSet;

                    /**
                     * <p>主板序列号</p>
                     */
                    std::string m_baseBoardSn;
                    bool m_baseBoardSnHasBeenSet;

                    /**
                     * <p>绑定账户名称</p>
                     */
                    std::string m_accountUsers;
                    bool m_accountUsersHasBeenSet;

                    /**
                     * <p>身份策略版本</p>
                     */
                    std::string m_identityStrategyVer;
                    bool m_identityStrategyVerHasBeenSet;

                    /**
                     * <p>身份策略新版本</p>
                     */
                    std::string m_identityNewStrategyVer;
                    bool m_identityNewStrategyVerHasBeenSet;

                    /**
                     * <p>最近登录账号部门</p>
                     */
                    std::string m_accountGroupName;
                    bool m_accountGroupNameHasBeenSet;

                    /**
                     * <p>最近登录账户的姓名(账号系统用户姓名)</p>
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * <p>账号组id</p>
                     */
                    int64_t m_accountGroupId;
                    bool m_accountGroupIdHasBeenSet;

                    /**
                     * <p>是否开启录屏权限，仅macOS， 0： 未开启 、1： 开启</p>
                     */
                    int64_t m_screenRecordingPermission;
                    bool m_screenRecordingPermissionHasBeenSet;

                    /**
                     * <p>是否开启磁盘访问权限，仅macOS， 0： 未开启、 1： 开启</p>
                     */
                    int64_t m_diskAccessPermission;
                    bool m_diskAccessPermissionHasBeenSet;

                    /**
                     * <p>终端备注名</p>
                     */
                    std::string m_remarkName;
                    bool m_remarkNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_DEVICEDETAIL_H_
