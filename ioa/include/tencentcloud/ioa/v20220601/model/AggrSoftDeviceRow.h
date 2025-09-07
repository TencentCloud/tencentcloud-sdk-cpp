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
                     * 获取终端名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceName 终端名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置终端名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deviceName 终端名
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
                     * 获取最近登录账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastLoginAccount 最近登录账号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastLoginAccount() const;

                    /**
                     * 设置最近登录账号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastLoginAccount 最近登录账号
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
                     * 获取终端用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceUserName 终端用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDeviceUserName() const;

                    /**
                     * 设置终端用户名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deviceUserName 终端用户名
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
                     * 获取软件版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Version 软件版本
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVersion() const;

                    /**
                     * 设置软件版本
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _version 软件版本
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
                     * 获取是否盗版
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PiracyRisk 是否盗版
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPiracyRisk() const;

                    /**
                     * 设置是否盗版
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _piracyRisk 是否盗版
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
                     * 获取盗版原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PiracyReason 盗版原因
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPiracyReason() const;

                    /**
                     * 设置盗版原因
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _piracyReason 盗版原因
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
                     * 获取安装时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstallTime 安装时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInstallTime() const;

                    /**
                     * 设置安装时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _installTime 安装时间
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
                     * 获取用户目录
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserPath 用户目录
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserPath() const;

                    /**
                     * 设置用户目录
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userPath 用户目录
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
                     * 获取所在分组
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserGroup 所在分组
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserGroup() const;

                    /**
                     * 设置所在分组
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userGroup 所在分组
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
                     * 获取IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IP IP
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置IP
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iP IP
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
                     * 获取MAC
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MAC MAC
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMAC() const;

                    /**
                     * 设置MAC
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mAC MAC
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
                     * 获取使用时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UseTime 使用时长
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUseTime() const;

                    /**
                     * 设置使用时长
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _useTime 使用时长
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
                     * 获取设备ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DeviceId 设备ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetDeviceId() const;

                    /**
                     * 设置设备ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _deviceId 设备ID
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
                     * 获取软件全名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FullSoftName 软件全名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFullSoftName() const;

                    /**
                     * 设置软件全名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fullSoftName 软件全名
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
                     * 获取数据ID（唯一）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 数据ID（唯一）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置数据ID（唯一）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 数据ID（唯一）
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
                     * 获取该终端此款软件可升级到的目标版本号
                     * @return NewVersion 该终端此款软件可升级到的目标版本号
                     * 
                     */
                    std::string GetNewVersion() const;

                    /**
                     * 设置该终端此款软件可升级到的目标版本号
                     * @param _newVersion 该终端此款软件可升级到的目标版本号
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
                     * 获取该软件对应运营配置的可升级id
                     * @return UpgradeSoftId 该软件对应运营配置的可升级id
                     * 
                     */
                    int64_t GetUpgradeSoftId() const;

                    /**
                     * 设置该软件对应运营配置的可升级id
                     * @param _upgradeSoftId 该软件对应运营配置的可升级id
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
                     * 获取终端备注名
                     * @return RemarkName 终端备注名
                     * 
                     */
                    std::string GetRemarkName() const;

                    /**
                     * 设置终端备注名
                     * @param _remarkName 终端备注名
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
                     * 终端名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 最近登录账号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastLoginAccount;
                    bool m_lastLoginAccountHasBeenSet;

                    /**
                     * 终端用户名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_deviceUserName;
                    bool m_deviceUserNameHasBeenSet;

                    /**
                     * 软件版本
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_version;
                    bool m_versionHasBeenSet;

                    /**
                     * 是否盗版
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_piracyRisk;
                    bool m_piracyRiskHasBeenSet;

                    /**
                     * 盗版原因
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_piracyReason;
                    bool m_piracyReasonHasBeenSet;

                    /**
                     * 安装时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_installTime;
                    bool m_installTimeHasBeenSet;

                    /**
                     * 用户目录
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userPath;
                    bool m_userPathHasBeenSet;

                    /**
                     * 所在分组
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userGroup;
                    bool m_userGroupHasBeenSet;

                    /**
                     * IP
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                    /**
                     * MAC
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mAC;
                    bool m_mACHasBeenSet;

                    /**
                     * 使用时长
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_useTime;
                    bool m_useTimeHasBeenSet;

                    /**
                     * 设备ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 软件全名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fullSoftName;
                    bool m_fullSoftNameHasBeenSet;

                    /**
                     * 数据ID（唯一）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 该终端此款软件可升级到的目标版本号
                     */
                    std::string m_newVersion;
                    bool m_newVersionHasBeenSet;

                    /**
                     * 该软件对应运营配置的可升级id
                     */
                    int64_t m_upgradeSoftId;
                    bool m_upgradeSoftIdHasBeenSet;

                    /**
                     * 终端备注名
                     */
                    std::string m_remarkName;
                    bool m_remarkNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_AGGRSOFTDEVICEROW_H_
