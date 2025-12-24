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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_BACKUPPLANINFO_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_BACKUPPLANINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbs/v20211108/model/Tag.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * 备份计划信息
                */
                class BackupPlanInfo : public AbstractModel
                {
                public:
                    BackupPlanInfo();
                    ~BackupPlanInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取地域信息。
                     * @return Region 地域信息。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置地域信息。
                     * @param _region 地域信息。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取备份计划 ID。
                     * @return BackupPlanId 备份计划 ID。
                     * 
                     */
                    std::string GetBackupPlanId() const;

                    /**
                     * 设置备份计划 ID。
                     * @param _backupPlanId 备份计划 ID。
                     * 
                     */
                    void SetBackupPlanId(const std::string& _backupPlanId);

                    /**
                     * 判断参数 BackupPlanId 是否已赋值
                     * @return BackupPlanId 是否已赋值
                     * 
                     */
                    bool BackupPlanIdHasBeenSet() const;

                    /**
                     * 获取备份计划名称。
                     * @return BackupPlanName 备份计划名称。
                     * 
                     */
                    std::string GetBackupPlanName() const;

                    /**
                     * 设置备份计划名称。
                     * @param _backupPlanName 备份计划名称。
                     * 
                     */
                    void SetBackupPlanName(const std::string& _backupPlanName);

                    /**
                     * 判断参数 BackupPlanName 是否已赋值
                     * @return BackupPlanName 是否已赋值
                     * 
                     */
                    bool BackupPlanNameHasBeenSet() const;

                    /**
                     * 获取备份计划状态。可能的取值为：
"notStarted" - 未启动;
"checking" - 校验中;
"checkPass" - 校验通过;
"checkNotPass" - 校验未通过;
"running" - 运行中;
"fullBacking" - 全量备份中;
"isolating" - 隔离中;
"isolated" - 已隔离;
"offlining" - 下线中;
"offlined" - 已下线;
"paused" - 已暂停。
                     * @return Status 备份计划状态。可能的取值为：
"notStarted" - 未启动;
"checking" - 校验中;
"checkPass" - 校验通过;
"checkNotPass" - 校验未通过;
"running" - 运行中;
"fullBacking" - 全量备份中;
"isolating" - 隔离中;
"isolated" - 已隔离;
"offlining" - 下线中;
"offlined" - 已下线;
"paused" - 已暂停。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置备份计划状态。可能的取值为：
"notStarted" - 未启动;
"checking" - 校验中;
"checkPass" - 校验通过;
"checkNotPass" - 校验未通过;
"running" - 运行中;
"fullBacking" - 全量备份中;
"isolating" - 隔离中;
"isolated" - 已隔离;
"offlining" - 下线中;
"offlined" - 已下线;
"paused" - 已暂停。
                     * @param _status 备份计划状态。可能的取值为：
"notStarted" - 未启动;
"checking" - 校验中;
"checkPass" - 校验通过;
"checkNotPass" - 校验未通过;
"running" - 运行中;
"fullBacking" - 全量备份中;
"isolating" - 隔离中;
"isolated" - 已隔离;
"offlining" - 下线中;
"offlined" - 已下线;
"paused" - 已暂停。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取数据库类型。
                     * @return DatabaseType 数据库类型。
                     * 
                     */
                    std::string GetDatabaseType() const;

                    /**
                     * 设置数据库类型。
                     * @param _databaseType 数据库类型。
                     * 
                     */
                    void SetDatabaseType(const std::string& _databaseType);

                    /**
                     * 判断参数 DatabaseType 是否已赋值
                     * @return DatabaseType 是否已赋值
                     * 
                     */
                    bool DatabaseTypeHasBeenSet() const;

                    /**
                     * 获取访问类型。可能的取值为：
"extranet" - 外网;
"cvm" - cvm 自建实例;
"dcg" - 专线接入;
"vpncloud" - 云vpn接入;
"cdb" - 腾讯云数据库实例;
"ccn" - 云联网。
                     * @return AccessType 访问类型。可能的取值为：
"extranet" - 外网;
"cvm" - cvm 自建实例;
"dcg" - 专线接入;
"vpncloud" - 云vpn接入;
"cdb" - 腾讯云数据库实例;
"ccn" - 云联网。
                     * 
                     */
                    std::string GetAccessType() const;

                    /**
                     * 设置访问类型。可能的取值为：
"extranet" - 外网;
"cvm" - cvm 自建实例;
"dcg" - 专线接入;
"vpncloud" - 云vpn接入;
"cdb" - 腾讯云数据库实例;
"ccn" - 云联网。
                     * @param _accessType 访问类型。可能的取值为：
"extranet" - 外网;
"cvm" - cvm 自建实例;
"dcg" - 专线接入;
"vpncloud" - 云vpn接入;
"cdb" - 腾讯云数据库实例;
"ccn" - 云联网。
                     * 
                     */
                    void SetAccessType(const std::string& _accessType);

                    /**
                     * 判断参数 AccessType 是否已赋值
                     * @return AccessType 是否已赋值
                     * 
                     */
                    bool AccessTypeHasBeenSet() const;

                    /**
                     * 获取源实例信息。
                     * @return SourceInfo 源实例信息。
                     * 
                     */
                    std::vector<std::string> GetSourceInfo() const;

                    /**
                     * 设置源实例信息。
                     * @param _sourceInfo 源实例信息。
                     * 
                     */
                    void SetSourceInfo(const std::vector<std::string>& _sourceInfo);

                    /**
                     * 判断参数 SourceInfo 是否已赋值
                     * @return SourceInfo 是否已赋值
                     * 
                     */
                    bool SourceInfoHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
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
                     * 获取到期时间。
                     * @return ExpireTime 到期时间。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置到期时间。
                     * @param _expireTime 到期时间。
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取下线时间。
                     * @return OfflineTime 下线时间。
                     * 
                     */
                    std::string GetOfflineTime() const;

                    /**
                     * 设置下线时间。
                     * @param _offlineTime 下线时间。
                     * 
                     */
                    void SetOfflineTime(const std::string& _offlineTime);

                    /**
                     * 判断参数 OfflineTime 是否已赋值
                     * @return OfflineTime 是否已赋值
                     * 
                     */
                    bool OfflineTimeHasBeenSet() const;

                    /**
                     * 获取实例规格类型。可能的取值为：["micro", "small", "medium", "large", "xlarge"]。
                     * @return InstanceClass 实例规格类型。可能的取值为：["micro", "small", "medium", "large", "xlarge"]。
                     * 
                     */
                    std::string GetInstanceClass() const;

                    /**
                     * 设置实例规格类型。可能的取值为：["micro", "small", "medium", "large", "xlarge"]。
                     * @param _instanceClass 实例规格类型。可能的取值为：["micro", "small", "medium", "large", "xlarge"]。
                     * 
                     */
                    void SetInstanceClass(const std::string& _instanceClass);

                    /**
                     * 判断参数 InstanceClass 是否已赋值
                     * @return InstanceClass 是否已赋值
                     * 
                     */
                    bool InstanceClassHasBeenSet() const;

                    /**
                     * 获取备份方式。可能的取值为：
"logical" - 逻辑备份;
"physical" - 物理备份。
                     * @return BackupMethod 备份方式。可能的取值为：
"logical" - 逻辑备份;
"physical" - 物理备份。
                     * 
                     */
                    std::string GetBackupMethod() const;

                    /**
                     * 设置备份方式。可能的取值为：
"logical" - 逻辑备份;
"physical" - 物理备份。
                     * @param _backupMethod 备份方式。可能的取值为：
"logical" - 逻辑备份;
"physical" - 物理备份。
                     * 
                     */
                    void SetBackupMethod(const std::string& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取标签信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tags 标签信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置标签信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tags 标签信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取自动续费标记。可能的取值为：
0 - 未开启自动续费;
1 - 已开启自动续费;
2 - 已关闭自动续费。
                     * @return AutoRenewFlag 自动续费标记。可能的取值为：
0 - 未开启自动续费;
1 - 已开启自动续费;
2 - 已关闭自动续费。
                     * 
                     */
                    int64_t GetAutoRenewFlag() const;

                    /**
                     * 设置自动续费标记。可能的取值为：
0 - 未开启自动续费;
1 - 已开启自动续费;
2 - 已关闭自动续费。
                     * @param _autoRenewFlag 自动续费标记。可能的取值为：
0 - 未开启自动续费;
1 - 已开启自动续费;
2 - 已关闭自动续费。
                     * 
                     */
                    void SetAutoRenewFlag(const int64_t& _autoRenewFlag);

                    /**
                     * 判断参数 AutoRenewFlag 是否已赋值
                     * @return AutoRenewFlag 是否已赋值
                     * 
                     */
                    bool AutoRenewFlagHasBeenSet() const;

                    /**
                     * 获取是否开启增量备份标记。
                     * @return EnableIncrement 是否开启增量备份标记。
                     * 
                     */
                    bool GetEnableIncrement() const;

                    /**
                     * 设置是否开启增量备份标记。
                     * @param _enableIncrement 是否开启增量备份标记。
                     * 
                     */
                    void SetEnableIncrement(const bool& _enableIncrement);

                    /**
                     * 判断参数 EnableIncrement 是否已赋值
                     * @return EnableIncrement 是否已赋值
                     * 
                     */
                    bool EnableIncrementHasBeenSet() const;

                    /**
                     * 获取付费类型。可能的取值为：
"prePay" - 预付费类型;
"postPay" - 后付费类型。
                     * @return PayType 付费类型。可能的取值为：
"prePay" - 预付费类型;
"postPay" - 后付费类型。
                     * 
                     */
                    std::string GetPayType() const;

                    /**
                     * 设置付费类型。可能的取值为：
"prePay" - 预付费类型;
"postPay" - 后付费类型。
                     * @param _payType 付费类型。可能的取值为：
"prePay" - 预付费类型;
"postPay" - 后付费类型。
                     * 
                     */
                    void SetPayType(const std::string& _payType);

                    /**
                     * 判断参数 PayType 是否已赋值
                     * @return PayType 是否已赋值
                     * 
                     */
                    bool PayTypeHasBeenSet() const;

                    /**
                     * 获取源端信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SetSourceInfo 源端信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSetSourceInfo() const;

                    /**
                     * 设置源端信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _setSourceInfo 源端信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSetSourceInfo(const std::vector<std::string>& _setSourceInfo);

                    /**
                     * 判断参数 SetSourceInfo 是否已赋值
                     * @return SetSourceInfo 是否已赋值
                     * 
                     */
                    bool SetSourceInfoHasBeenSet() const;

                private:

                    /**
                     * 地域信息。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 备份计划 ID。
                     */
                    std::string m_backupPlanId;
                    bool m_backupPlanIdHasBeenSet;

                    /**
                     * 备份计划名称。
                     */
                    std::string m_backupPlanName;
                    bool m_backupPlanNameHasBeenSet;

                    /**
                     * 备份计划状态。可能的取值为：
"notStarted" - 未启动;
"checking" - 校验中;
"checkPass" - 校验通过;
"checkNotPass" - 校验未通过;
"running" - 运行中;
"fullBacking" - 全量备份中;
"isolating" - 隔离中;
"isolated" - 已隔离;
"offlining" - 下线中;
"offlined" - 已下线;
"paused" - 已暂停。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 数据库类型。
                     */
                    std::string m_databaseType;
                    bool m_databaseTypeHasBeenSet;

                    /**
                     * 访问类型。可能的取值为：
"extranet" - 外网;
"cvm" - cvm 自建实例;
"dcg" - 专线接入;
"vpncloud" - 云vpn接入;
"cdb" - 腾讯云数据库实例;
"ccn" - 云联网。
                     */
                    std::string m_accessType;
                    bool m_accessTypeHasBeenSet;

                    /**
                     * 源实例信息。
                     */
                    std::vector<std::string> m_sourceInfo;
                    bool m_sourceInfoHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 到期时间。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 下线时间。
                     */
                    std::string m_offlineTime;
                    bool m_offlineTimeHasBeenSet;

                    /**
                     * 实例规格类型。可能的取值为：["micro", "small", "medium", "large", "xlarge"]。
                     */
                    std::string m_instanceClass;
                    bool m_instanceClassHasBeenSet;

                    /**
                     * 备份方式。可能的取值为：
"logical" - 逻辑备份;
"physical" - 物理备份。
                     */
                    std::string m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * 标签信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 自动续费标记。可能的取值为：
0 - 未开启自动续费;
1 - 已开启自动续费;
2 - 已关闭自动续费。
                     */
                    int64_t m_autoRenewFlag;
                    bool m_autoRenewFlagHasBeenSet;

                    /**
                     * 是否开启增量备份标记。
                     */
                    bool m_enableIncrement;
                    bool m_enableIncrementHasBeenSet;

                    /**
                     * 付费类型。可能的取值为：
"prePay" - 预付费类型;
"postPay" - 后付费类型。
                     */
                    std::string m_payType;
                    bool m_payTypeHasBeenSet;

                    /**
                     * 源端信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_setSourceInfo;
                    bool m_setSourceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_BACKUPPLANINFO_H_
