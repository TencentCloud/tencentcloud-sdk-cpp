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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_RESTOREDBINSTANCEOBJECTSREQUEST_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_RESTOREDBINSTANCEOBJECTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * RestoreDBInstanceObjects请求参数结构体
                */
                class RestoreDBInstanceObjectsRequest : public AbstractModel
                {
                public:
                    RestoreDBInstanceObjectsRequest();
                    ~RestoreDBInstanceObjectsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID。
                     * @return DBInstanceId 实例ID。
                     * 
                     */
                    std::string GetDBInstanceId() const;

                    /**
                     * 设置实例ID。
                     * @param _dBInstanceId 实例ID。
                     * 
                     */
                    void SetDBInstanceId(const std::string& _dBInstanceId);

                    /**
                     * 判断参数 DBInstanceId 是否已赋值
                     * @return DBInstanceId 是否已赋值
                     * 
                     */
                    bool DBInstanceIdHasBeenSet() const;

                    /**
                     * 获取需要恢复的对象列表。假设需要恢复的对象名为user，则恢复后的名称为user_bak_${LinuxTime}。${LinuxTime}无法指定，由系统根据任务发起的linux时间设定。
                     * @return RestoreObjects 需要恢复的对象列表。假设需要恢复的对象名为user，则恢复后的名称为user_bak_${LinuxTime}。${LinuxTime}无法指定，由系统根据任务发起的linux时间设定。
                     * 
                     */
                    std::vector<std::string> GetRestoreObjects() const;

                    /**
                     * 设置需要恢复的对象列表。假设需要恢复的对象名为user，则恢复后的名称为user_bak_${LinuxTime}。${LinuxTime}无法指定，由系统根据任务发起的linux时间设定。
                     * @param _restoreObjects 需要恢复的对象列表。假设需要恢复的对象名为user，则恢复后的名称为user_bak_${LinuxTime}。${LinuxTime}无法指定，由系统根据任务发起的linux时间设定。
                     * 
                     */
                    void SetRestoreObjects(const std::vector<std::string>& _restoreObjects);

                    /**
                     * 判断参数 RestoreObjects 是否已赋值
                     * @return RestoreObjects 是否已赋值
                     * 
                     */
                    bool RestoreObjectsHasBeenSet() const;

                    /**
                     * 获取恢复所用备份集。BackupSetId与RestoreTargetTime有且只能传一个。
                     * @return BackupSetId 恢复所用备份集。BackupSetId与RestoreTargetTime有且只能传一个。
                     * 
                     */
                    std::string GetBackupSetId() const;

                    /**
                     * 设置恢复所用备份集。BackupSetId与RestoreTargetTime有且只能传一个。
                     * @param _backupSetId 恢复所用备份集。BackupSetId与RestoreTargetTime有且只能传一个。
                     * 
                     */
                    void SetBackupSetId(const std::string& _backupSetId);

                    /**
                     * 判断参数 BackupSetId 是否已赋值
                     * @return BackupSetId 是否已赋值
                     * 
                     */
                    bool BackupSetIdHasBeenSet() const;

                    /**
                     * 获取恢复目标时间，北京时间。BackupSetId与RestoreTargetTime有且只能传一个。
                     * @return RestoreTargetTime 恢复目标时间，北京时间。BackupSetId与RestoreTargetTime有且只能传一个。
                     * 
                     */
                    std::string GetRestoreTargetTime() const;

                    /**
                     * 设置恢复目标时间，北京时间。BackupSetId与RestoreTargetTime有且只能传一个。
                     * @param _restoreTargetTime 恢复目标时间，北京时间。BackupSetId与RestoreTargetTime有且只能传一个。
                     * 
                     */
                    void SetRestoreTargetTime(const std::string& _restoreTargetTime);

                    /**
                     * 判断参数 RestoreTargetTime 是否已赋值
                     * @return RestoreTargetTime 是否已赋值
                     * 
                     */
                    bool RestoreTargetTimeHasBeenSet() const;

                private:

                    /**
                     * 实例ID。
                     */
                    std::string m_dBInstanceId;
                    bool m_dBInstanceIdHasBeenSet;

                    /**
                     * 需要恢复的对象列表。假设需要恢复的对象名为user，则恢复后的名称为user_bak_${LinuxTime}。${LinuxTime}无法指定，由系统根据任务发起的linux时间设定。
                     */
                    std::vector<std::string> m_restoreObjects;
                    bool m_restoreObjectsHasBeenSet;

                    /**
                     * 恢复所用备份集。BackupSetId与RestoreTargetTime有且只能传一个。
                     */
                    std::string m_backupSetId;
                    bool m_backupSetIdHasBeenSet;

                    /**
                     * 恢复目标时间，北京时间。BackupSetId与RestoreTargetTime有且只能传一个。
                     */
                    std::string m_restoreTargetTime;
                    bool m_restoreTargetTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_RESTOREDBINSTANCEOBJECTSREQUEST_H_
