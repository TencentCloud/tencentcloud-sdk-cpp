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

#ifndef TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RESTOREINSTANCEREQUEST_H_
#define TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RESTOREINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/sqlserver/v20180328/model/RenameRestoreDatabase.h>


namespace TencentCloud
{
    namespace Sqlserver
    {
        namespace V20180328
        {
            namespace Model
            {
                /**
                * RestoreInstance请求参数结构体
                */
                class RestoreInstanceRequest : public AbstractModel
                {
                public:
                    RestoreInstanceRequest();
                    ~RestoreInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，形如mssql-j8kv137v
                     * @return InstanceId 实例ID，形如mssql-j8kv137v
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，形如mssql-j8kv137v
                     * @param _instanceId 实例ID，形如mssql-j8kv137v
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
                     * 获取备份文件ID，该ID可以通过DescribeBackups接口返回数据中的Id字段获得
                     * @return BackupId 备份文件ID，该ID可以通过DescribeBackups接口返回数据中的Id字段获得
                     * 
                     */
                    int64_t GetBackupId() const;

                    /**
                     * 设置备份文件ID，该ID可以通过DescribeBackups接口返回数据中的Id字段获得
                     * @param _backupId 备份文件ID，该ID可以通过DescribeBackups接口返回数据中的Id字段获得
                     * 
                     */
                    void SetBackupId(const int64_t& _backupId);

                    /**
                     * 判断参数 BackupId 是否已赋值
                     * @return BackupId 是否已赋值
                     * 
                     */
                    bool BackupIdHasBeenSet() const;

                    /**
                     * 获取备份恢复到的同一个APPID下的实例ID，不填则恢复到原实例ID
                     * @return TargetInstanceId 备份恢复到的同一个APPID下的实例ID，不填则恢复到原实例ID
                     * 
                     */
                    std::string GetTargetInstanceId() const;

                    /**
                     * 设置备份恢复到的同一个APPID下的实例ID，不填则恢复到原实例ID
                     * @param _targetInstanceId 备份恢复到的同一个APPID下的实例ID，不填则恢复到原实例ID
                     * 
                     */
                    void SetTargetInstanceId(const std::string& _targetInstanceId);

                    /**
                     * 判断参数 TargetInstanceId 是否已赋值
                     * @return TargetInstanceId 是否已赋值
                     * 
                     */
                    bool TargetInstanceIdHasBeenSet() const;

                    /**
                     * 获取按照ReNameRestoreDatabase中的库进行恢复，并重命名，不填则按照默认方式命名恢复的库，且恢复所有的库。
                     * @return RenameRestore 按照ReNameRestoreDatabase中的库进行恢复，并重命名，不填则按照默认方式命名恢复的库，且恢复所有的库。
                     * 
                     */
                    std::vector<RenameRestoreDatabase> GetRenameRestore() const;

                    /**
                     * 设置按照ReNameRestoreDatabase中的库进行恢复，并重命名，不填则按照默认方式命名恢复的库，且恢复所有的库。
                     * @param _renameRestore 按照ReNameRestoreDatabase中的库进行恢复，并重命名，不填则按照默认方式命名恢复的库，且恢复所有的库。
                     * 
                     */
                    void SetRenameRestore(const std::vector<RenameRestoreDatabase>& _renameRestore);

                    /**
                     * 判断参数 RenameRestore 是否已赋值
                     * @return RenameRestore 是否已赋值
                     * 
                     */
                    bool RenameRestoreHasBeenSet() const;

                    /**
                     * 获取回档类型，0-覆盖方式；1-重命名方式，默认1
                     * @return Type 回档类型，0-覆盖方式；1-重命名方式，默认1
                     * 
                     */
                    uint64_t GetType() const;

                    /**
                     * 设置回档类型，0-覆盖方式；1-重命名方式，默认1
                     * @param _type 回档类型，0-覆盖方式；1-重命名方式，默认1
                     * 
                     */
                    void SetType(const uint64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取需要覆盖回档的数据库，只有覆盖回档时必填
                     * @return DBList 需要覆盖回档的数据库，只有覆盖回档时必填
                     * 
                     */
                    std::vector<std::string> GetDBList() const;

                    /**
                     * 设置需要覆盖回档的数据库，只有覆盖回档时必填
                     * @param _dBList 需要覆盖回档的数据库，只有覆盖回档时必填
                     * 
                     */
                    void SetDBList(const std::vector<std::string>& _dBList);

                    /**
                     * 判断参数 DBList 是否已赋值
                     * @return DBList 是否已赋值
                     * 
                     */
                    bool DBListHasBeenSet() const;

                    /**
                     * 获取备份任务组ID，在单库备份文件模式下
                     * @return GroupId 备份任务组ID，在单库备份文件模式下
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置备份任务组ID，在单库备份文件模式下
                     * @param _groupId 备份任务组ID，在单库备份文件模式下
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * 实例ID，形如mssql-j8kv137v
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 备份文件ID，该ID可以通过DescribeBackups接口返回数据中的Id字段获得
                     */
                    int64_t m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * 备份恢复到的同一个APPID下的实例ID，不填则恢复到原实例ID
                     */
                    std::string m_targetInstanceId;
                    bool m_targetInstanceIdHasBeenSet;

                    /**
                     * 按照ReNameRestoreDatabase中的库进行恢复，并重命名，不填则按照默认方式命名恢复的库，且恢复所有的库。
                     */
                    std::vector<RenameRestoreDatabase> m_renameRestore;
                    bool m_renameRestoreHasBeenSet;

                    /**
                     * 回档类型，0-覆盖方式；1-重命名方式，默认1
                     */
                    uint64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 需要覆盖回档的数据库，只有覆盖回档时必填
                     */
                    std::vector<std::string> m_dBList;
                    bool m_dBListHasBeenSet;

                    /**
                     * 备份任务组ID，在单库备份文件模式下
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SQLSERVER_V20180328_MODEL_RESTOREINSTANCEREQUEST_H_
