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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_AGGRSOFTDEVICEROW_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_AGGRSOFTDEVICEROW_H_

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
                * 聚合软件的已安装终端列表中的一行数据
                */
                class AggrSoftDeviceRow : public AbstractModel
                {
                public:
                    AggrSoftDeviceRow();
                    ~AggrSoftDeviceRow() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>终端名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceName <p>终端名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置<p>终端名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deviceName <p>终端名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取<p>最近登录账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastLoginAccount <p>最近登录账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastLoginAccount() const;

                    /**
                     * 设置<p>最近登录账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastLoginAccount <p>最近登录账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastLoginAccount(const std::string& _lastLoginAccount);

                    /**
                     * 判断参数 LastLoginAccount 是否已赋值
                     * @return LastLoginAccount 是否已赋值
                     * 
                     */
                    bool LastLoginAccountHasBeenSet() const;

                    /**
                     * 获取<p>终端用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceUserName <p>终端用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeviceUserName() const;

                    /**
                     * 设置<p>终端用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deviceUserName <p>终端用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeviceUserName(const std::string& _deviceUserName);

                    /**
                     * 判断参数 DeviceUserName 是否已赋值
                     * @return DeviceUserName 是否已赋值
                     * 
                     */
                    bool DeviceUserNameHasBeenSet() const;

                    /**
                     * 获取<p>软件版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version <p>软件版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置<p>软件版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version <p>软件版本</p>
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
                     * 获取<p>是否盗版</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PiracyRisk <p>是否盗版</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPiracyRisk() const;

                    /**
                     * 设置<p>是否盗版</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _piracyRisk <p>是否盗版</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPiracyRisk(const int64_t& _piracyRisk);

                    /**
                     * 判断参数 PiracyRisk 是否已赋值
                     * @return PiracyRisk 是否已赋值
                     * 
                     */
                    bool PiracyRiskHasBeenSet() const;

                    /**
                     * 获取<p>盗版原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PiracyReason <p>盗版原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPiracyReason() const;

                    /**
                     * 设置<p>盗版原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _piracyReason <p>盗版原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPiracyReason(const std::string& _piracyReason);

                    /**
                     * 判断参数 PiracyReason 是否已赋值
                     * @return PiracyReason 是否已赋值
                     * 
                     */
                    bool PiracyReasonHasBeenSet() const;

                    /**
                     * 获取<p>安装时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstallTime <p>安装时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstallTime() const;

                    /**
                     * 设置<p>安装时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _installTime <p>安装时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInstallTime(const std::string& _installTime);

                    /**
                     * 判断参数 InstallTime 是否已赋值
                     * @return InstallTime 是否已赋值
                     * 
                     */
                    bool InstallTimeHasBeenSet() const;

                    /**
                     * 获取<p>用户目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserPath <p>用户目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserPath() const;

                    /**
                     * 设置<p>用户目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userPath <p>用户目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserPath(const std::string& _userPath);

                    /**
                     * 判断参数 UserPath 是否已赋值
                     * @return UserPath 是否已赋值
                     * 
                     */
                    bool UserPathHasBeenSet() const;

                    /**
                     * 获取<p>所在分组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserGroup <p>所在分组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserGroup() const;

                    /**
                     * 设置<p>所在分组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userGroup <p>所在分组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserGroup(const std::string& _userGroup);

                    /**
                     * 判断参数 UserGroup 是否已赋值
                     * @return UserGroup 是否已赋值
                     * 
                     */
                    bool UserGroupHasBeenSet() const;

                    /**
                     * 获取<p>IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IP <p>IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置<p>IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iP <p>IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                    /**
                     * 获取<p>MAC</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MAC <p>MAC</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMAC() const;

                    /**
                     * 设置<p>MAC</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mAC <p>MAC</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMAC(const std::string& _mAC);

                    /**
                     * 判断参数 MAC 是否已赋值
                     * @return MAC 是否已赋值
                     * 
                     */
                    bool MACHasBeenSet() const;

                    /**
                     * 获取<p>使用时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UseTime <p>使用时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUseTime() const;

                    /**
                     * 设置<p>使用时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _useTime <p>使用时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUseTime(const int64_t& _useTime);

                    /**
                     * 判断参数 UseTime 是否已赋值
                     * @return UseTime 是否已赋值
                     * 
                     */
                    bool UseTimeHasBeenSet() const;

                    /**
                     * 获取<p>设备ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceId <p>设备ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDeviceId() const;

                    /**
                     * 设置<p>设备ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deviceId <p>设备ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDeviceId(const int64_t& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取<p>软件全名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FullSoftName <p>软件全名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFullSoftName() const;

                    /**
                     * 设置<p>软件全名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fullSoftName <p>软件全名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFullSoftName(const std::string& _fullSoftName);

                    /**
                     * 判断参数 FullSoftName 是否已赋值
                     * @return FullSoftName 是否已赋值
                     * 
                     */
                    bool FullSoftNameHasBeenSet() const;

                    /**
                     * 获取<p>数据ID（唯一）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id <p>数据ID（唯一）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>数据ID（唯一）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id <p>数据ID（唯一）</p>
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
                     * 获取<p>该终端此款软件可升级到的目标版本号</p>
                     * @return NewVersion <p>该终端此款软件可升级到的目标版本号</p>
                     * 
                     */
                    std::string GetNewVersion() const;

                    /**
                     * 设置<p>该终端此款软件可升级到的目标版本号</p>
                     * @param _newVersion <p>该终端此款软件可升级到的目标版本号</p>
                     * 
                     */
                    void SetNewVersion(const std::string& _newVersion);

                    /**
                     * 判断参数 NewVersion 是否已赋值
                     * @return NewVersion 是否已赋值
                     * 
                     */
                    bool NewVersionHasBeenSet() const;

                    /**
                     * 获取<p>该软件对应运营配置的可升级id</p>
                     * @return UpgradeSoftId <p>该软件对应运营配置的可升级id</p>
                     * 
                     */
                    int64_t GetUpgradeSoftId() const;

                    /**
                     * 设置<p>该软件对应运营配置的可升级id</p>
                     * @param _upgradeSoftId <p>该软件对应运营配置的可升级id</p>
                     * 
                     */
                    void SetUpgradeSoftId(const int64_t& _upgradeSoftId);

                    /**
                     * 判断参数 UpgradeSoftId 是否已赋值
                     * @return UpgradeSoftId 是否已赋值
                     * 
                     */
                    bool UpgradeSoftIdHasBeenSet() const;

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

                    /**
                     * 获取<p>软件id</p>
                     * @return SoftwareId <p>软件id</p>
                     * 
                     */
                    int64_t GetSoftwareId() const;

                    /**
                     * 设置<p>软件id</p>
                     * @param _softwareId <p>软件id</p>
                     * 
                     */
                    void SetSoftwareId(const int64_t& _softwareId);

                    /**
                     * 判断参数 SoftwareId 是否已赋值
                     * @return SoftwareId 是否已赋值
                     * 
                     */
                    bool SoftwareIdHasBeenSet() const;

                    /**
                     * 获取<p>0:win 2:mac</p>
                     * @return OsType <p>0:win 2:mac</p>
                     * 
                     */
                    int64_t GetOsType() const;

                    /**
                     * 设置<p>0:win 2:mac</p>
                     * @param _osType <p>0:win 2:mac</p>
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
                     * 获取<p>所有权</p>
                     * @return AssetType <p>所有权</p>
                     * 
                     */
                    std::string GetAssetType() const;

                    /**
                     * 设置<p>所有权</p>
                     * @param _assetType <p>所有权</p>
                     * 
                     */
                    void SetAssetType(const std::string& _assetType);

                    /**
                     * 判断参数 AssetType 是否已赋值
                     * @return AssetType 是否已赋值
                     * 
                     */
                    bool AssetTypeHasBeenSet() const;

                private:

                    /**
                     * <p>终端名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>最近登录账号</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastLoginAccount;
                    bool m_lastLoginAccountHasBeenSet;

                    /**
                     * <p>终端用户名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deviceUserName;
                    bool m_deviceUserNameHasBeenSet;

                    /**
                     * <p>软件版本</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * <p>是否盗版</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_piracyRisk;
                    bool m_piracyRiskHasBeenSet;

                    /**
                     * <p>盗版原因</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_piracyReason;
                    bool m_piracyReasonHasBeenSet;

                    /**
                     * <p>安装时间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_installTime;
                    bool m_installTimeHasBeenSet;

                    /**
                     * <p>用户目录</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userPath;
                    bool m_userPathHasBeenSet;

                    /**
                     * <p>所在分组</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userGroup;
                    bool m_userGroupHasBeenSet;

                    /**
                     * <p>IP</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * <p>MAC</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mAC;
                    bool m_mACHasBeenSet;

                    /**
                     * <p>使用时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_useTime;
                    bool m_useTimeHasBeenSet;

                    /**
                     * <p>设备ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * <p>软件全名</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fullSoftName;
                    bool m_fullSoftNameHasBeenSet;

                    /**
                     * <p>数据ID（唯一）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>该终端此款软件可升级到的目标版本号</p>
                     */
                    std::string m_newVersion;
                    bool m_newVersionHasBeenSet;

                    /**
                     * <p>该软件对应运营配置的可升级id</p>
                     */
                    int64_t m_upgradeSoftId;
                    bool m_upgradeSoftIdHasBeenSet;

                    /**
                     * <p>终端备注名</p>
                     */
                    std::string m_remarkName;
                    bool m_remarkNameHasBeenSet;

                    /**
                     * <p>软件id</p>
                     */
                    int64_t m_softwareId;
                    bool m_softwareIdHasBeenSet;

                    /**
                     * <p>0:win 2:mac</p>
                     */
                    int64_t m_osType;
                    bool m_osTypeHasBeenSet;

                    /**
                     * <p>所有权</p>
                     */
                    std::string m_assetType;
                    bool m_assetTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_AGGRSOFTDEVICEROW_H_
