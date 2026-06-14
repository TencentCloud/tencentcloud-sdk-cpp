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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEBACKUPDBINSTANCEREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEBACKUPDBINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * CreateBackupDBInstance请求参数结构体
                */
                class CreateBackupDBInstanceRequest : public AbstractModel
                {
                public:
                    CreateBackupDBInstanceRequest();
                    ~CreateBackupDBInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID。例如：cmgo-p8vn****。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * @return InstanceId <p>实例 ID。例如：cmgo-p8vn****。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID。例如：cmgo-p8vn****。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     * @param _instanceId <p>实例 ID。例如：cmgo-p8vn****。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
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
                     * 获取<p>设置备份方式。</p><ul><li>0：逻辑备份。</li><li>1：物理备份。</li><li>3：快照备份。<br><strong>说明</strong>:</li><li>通用版实例支持逻辑备份与物理备份。云盘版实例支持物理备份与快照备份，暂不支持逻辑备份。</li><li>实例开通存储加密，则备份方式不能为物理备份。</li></ul>
                     * @return BackupMethod <p>设置备份方式。</p><ul><li>0：逻辑备份。</li><li>1：物理备份。</li><li>3：快照备份。<br><strong>说明</strong>:</li><li>通用版实例支持逻辑备份与物理备份。云盘版实例支持物理备份与快照备份，暂不支持逻辑备份。</li><li>实例开通存储加密，则备份方式不能为物理备份。</li></ul>
                     * 
                     */
                    int64_t GetBackupMethod() const;

                    /**
                     * 设置<p>设置备份方式。</p><ul><li>0：逻辑备份。</li><li>1：物理备份。</li><li>3：快照备份。<br><strong>说明</strong>:</li><li>通用版实例支持逻辑备份与物理备份。云盘版实例支持物理备份与快照备份，暂不支持逻辑备份。</li><li>实例开通存储加密，则备份方式不能为物理备份。</li></ul>
                     * @param _backupMethod <p>设置备份方式。</p><ul><li>0：逻辑备份。</li><li>1：物理备份。</li><li>3：快照备份。<br><strong>说明</strong>:</li><li>通用版实例支持逻辑备份与物理备份。云盘版实例支持物理备份与快照备份，暂不支持逻辑备份。</li><li>实例开通存储加密，则备份方式不能为物理备份。</li></ul>
                     * 
                     */
                    void SetBackupMethod(const int64_t& _backupMethod);

                    /**
                     * 判断参数 BackupMethod 是否已赋值
                     * @return BackupMethod 是否已赋值
                     * 
                     */
                    bool BackupMethodHasBeenSet() const;

                    /**
                     * 获取<p>备份备注信息。</p>
                     * @return BackupRemark <p>备份备注信息。</p>
                     * 
                     */
                    std::string GetBackupRemark() const;

                    /**
                     * 设置<p>备份备注信息。</p>
                     * @param _backupRemark <p>备份备注信息。</p>
                     * 
                     */
                    void SetBackupRemark(const std::string& _backupRemark);

                    /**
                     * 判断参数 BackupRemark 是否已赋值
                     * @return BackupRemark 是否已赋值
                     * 
                     */
                    bool BackupRemarkHasBeenSet() const;

                    /**
                     * 获取<p>保存天数，-2-永久保留（不定期保留），-1-跟随长期保留时长，0-按配置天数，1~7300-自定义天数（最长20年）</p><p>单位：天</p>
                     * @return BackupRetentionDays <p>保存天数，-2-永久保留（不定期保留），-1-跟随长期保留时长，0-按配置天数，1~7300-自定义天数（最长20年）</p><p>单位：天</p>
                     * 
                     */
                    int64_t GetBackupRetentionDays() const;

                    /**
                     * 设置<p>保存天数，-2-永久保留（不定期保留），-1-跟随长期保留时长，0-按配置天数，1~7300-自定义天数（最长20年）</p><p>单位：天</p>
                     * @param _backupRetentionDays <p>保存天数，-2-永久保留（不定期保留），-1-跟随长期保留时长，0-按配置天数，1~7300-自定义天数（最长20年）</p><p>单位：天</p>
                     * 
                     */
                    void SetBackupRetentionDays(const int64_t& _backupRetentionDays);

                    /**
                     * 判断参数 BackupRetentionDays 是否已赋值
                     * @return BackupRetentionDays 是否已赋值
                     * 
                     */
                    bool BackupRetentionDaysHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID。例如：cmgo-p8vn****。请登录 <a href="https://console.cloud.tencent.com/mongodb">MongoDB 控制台</a>在实例列表复制实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>设置备份方式。</p><ul><li>0：逻辑备份。</li><li>1：物理备份。</li><li>3：快照备份。<br><strong>说明</strong>:</li><li>通用版实例支持逻辑备份与物理备份。云盘版实例支持物理备份与快照备份，暂不支持逻辑备份。</li><li>实例开通存储加密，则备份方式不能为物理备份。</li></ul>
                     */
                    int64_t m_backupMethod;
                    bool m_backupMethodHasBeenSet;

                    /**
                     * <p>备份备注信息。</p>
                     */
                    std::string m_backupRemark;
                    bool m_backupRemarkHasBeenSet;

                    /**
                     * <p>保存天数，-2-永久保留（不定期保留），-1-跟随长期保留时长，0-按配置天数，1~7300-自定义天数（最长20年）</p><p>单位：天</p>
                     */
                    int64_t m_backupRetentionDays;
                    bool m_backupRetentionDaysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEBACKUPDBINSTANCEREQUEST_H_
