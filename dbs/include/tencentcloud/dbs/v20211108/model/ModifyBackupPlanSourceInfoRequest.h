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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_MODIFYBACKUPPLANSOURCEINFOREQUEST_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_MODIFYBACKUPPLANSOURCEINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbs/v20211108/model/BackupEndpoint.h>
#include <tencentcloud/dbs/v20211108/model/BackupObject.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * ModifyBackupPlanSourceInfo请求参数结构体
                */
                class ModifyBackupPlanSourceInfoRequest : public AbstractModel
                {
                public:
                    ModifyBackupPlanSourceInfoRequest();
                    ~ModifyBackupPlanSourceInfoRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取新的备份源实例信息。
                     * @return SourceEndPoint 新的备份源实例信息。
                     * 
                     */
                    BackupEndpoint GetSourceEndPoint() const;

                    /**
                     * 设置新的备份源实例信息。
                     * @param _sourceEndPoint 新的备份源实例信息。
                     * 
                     */
                    void SetSourceEndPoint(const BackupEndpoint& _sourceEndPoint);

                    /**
                     * 判断参数 SourceEndPoint 是否已赋值
                     * @return SourceEndPoint 是否已赋值
                     * 
                     */
                    bool SourceEndPointHasBeenSet() const;

                    /**
                     * 获取新的备份名称。
                     * @return BackupPlanName 新的备份名称。
                     * 
                     */
                    std::string GetBackupPlanName() const;

                    /**
                     * 设置新的备份名称。
                     * @param _backupPlanName 新的备份名称。
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
                     * 获取新的备份对象信息。
                     * @return BackupObject 新的备份对象信息。
                     * 
                     */
                    BackupObject GetBackupObject() const;

                    /**
                     * 设置新的备份对象信息。
                     * @param _backupObject 新的备份对象信息。
                     * 
                     */
                    void SetBackupObject(const BackupObject& _backupObject);

                    /**
                     * 判断参数 BackupObject 是否已赋值
                     * @return BackupObject 是否已赋值
                     * 
                     */
                    bool BackupObjectHasBeenSet() const;

                    /**
                     * 获取是否立即启动新的备份任务。支持的取值为：1 - 立即启动；0 - 按备份策略配置的时间启动。
                     * @return BackupNow 是否立即启动新的备份任务。支持的取值为：1 - 立即启动；0 - 按备份策略配置的时间启动。
                     * 
                     */
                    int64_t GetBackupNow() const;

                    /**
                     * 设置是否立即启动新的备份任务。支持的取值为：1 - 立即启动；0 - 按备份策略配置的时间启动。
                     * @param _backupNow 是否立即启动新的备份任务。支持的取值为：1 - 立即启动；0 - 按备份策略配置的时间启动。
                     * 
                     */
                    void SetBackupNow(const int64_t& _backupNow);

                    /**
                     * 判断参数 BackupNow 是否已赋值
                     * @return BackupNow 是否已赋值
                     * 
                     */
                    bool BackupNowHasBeenSet() const;

                private:

                    /**
                     * 备份计划 ID。
                     */
                    std::string m_backupPlanId;
                    bool m_backupPlanIdHasBeenSet;

                    /**
                     * 新的备份源实例信息。
                     */
                    BackupEndpoint m_sourceEndPoint;
                    bool m_sourceEndPointHasBeenSet;

                    /**
                     * 新的备份名称。
                     */
                    std::string m_backupPlanName;
                    bool m_backupPlanNameHasBeenSet;

                    /**
                     * 新的备份对象信息。
                     */
                    BackupObject m_backupObject;
                    bool m_backupObjectHasBeenSet;

                    /**
                     * 是否立即启动新的备份任务。支持的取值为：1 - 立即启动；0 - 按备份策略配置的时间启动。
                     */
                    int64_t m_backupNow;
                    bool m_backupNowHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_MODIFYBACKUPPLANSOURCEINFOREQUEST_H_
