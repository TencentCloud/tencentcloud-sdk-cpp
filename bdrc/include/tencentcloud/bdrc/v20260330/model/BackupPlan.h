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

#ifndef TENCENTCLOUD_BDRC_V20260330_MODEL_BACKUPPLAN_H_
#define TENCENTCLOUD_BDRC_V20260330_MODEL_BACKUPPLAN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bdrc
    {
        namespace V20260330
        {
            namespace Model
            {
                /**
                * 整机备份计划
                */
                class BackupPlan : public AbstractModel
                {
                public:
                    BackupPlan();
                    ~BackupPlan() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param _instanceId 实例ID
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
                     * 获取备份策略ID
                     * @return AutoBackupPolicyId 备份策略ID
                     * 
                     */
                    std::string GetAutoBackupPolicyId() const;

                    /**
                     * 设置备份策略ID
                     * @param _autoBackupPolicyId 备份策略ID
                     * 
                     */
                    void SetAutoBackupPolicyId(const std::string& _autoBackupPolicyId);

                    /**
                     * 判断参数 AutoBackupPolicyId 是否已赋值
                     * @return AutoBackupPolicyId 是否已赋值
                     * 
                     */
                    bool AutoBackupPolicyIdHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifyTime 修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
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
                     * 获取APP ID
                     * @return AppId APP ID
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置APP ID
                     * @param _appId APP ID
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取备份数量
                     * @return BackupCount 备份数量
                     * 
                     */
                    uint64_t GetBackupCount() const;

                    /**
                     * 设置备份数量
                     * @param _backupCount 备份数量
                     * 
                     */
                    void SetBackupCount(const uint64_t& _backupCount);

                    /**
                     * 判断参数 BackupCount 是否已赋值
                     * @return BackupCount 是否已赋值
                     * 
                     */
                    bool BackupCountHasBeenSet() const;

                    /**
                     * 获取上次执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastTriggerTime 上次执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastTriggerTime() const;

                    /**
                     * 设置上次执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastTriggerTime 上次执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastTriggerTime(const std::string& _lastTriggerTime);

                    /**
                     * 判断参数 LastTriggerTime 是否已赋值
                     * @return LastTriggerTime 是否已赋值
                     * 
                     */
                    bool LastTriggerTimeHasBeenSet() const;

                    /**
                     * 获取上次执行错误信息，如果为空表示上次执行成功。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LastTriggerError 上次执行错误信息，如果为空表示上次执行成功。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLastTriggerError() const;

                    /**
                     * 设置上次执行错误信息，如果为空表示上次执行成功。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lastTriggerError 上次执行错误信息，如果为空表示上次执行成功。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLastTriggerError(const std::string& _lastTriggerError);

                    /**
                     * 判断参数 LastTriggerError 是否已赋值
                     * @return LastTriggerError 是否已赋值
                     * 
                     */
                    bool LastTriggerErrorHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 备份策略ID
                     */
                    std::string m_autoBackupPolicyId;
                    bool m_autoBackupPolicyIdHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * APP ID
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 备份数量
                     */
                    uint64_t m_backupCount;
                    bool m_backupCountHasBeenSet;

                    /**
                     * 上次执行时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastTriggerTime;
                    bool m_lastTriggerTimeHasBeenSet;

                    /**
                     * 上次执行错误信息，如果为空表示上次执行成功。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lastTriggerError;
                    bool m_lastTriggerErrorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BDRC_V20260330_MODEL_BACKUPPLAN_H_
