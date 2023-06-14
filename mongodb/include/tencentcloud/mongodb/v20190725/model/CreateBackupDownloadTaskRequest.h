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

#ifndef TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEBACKUPDOWNLOADTASKREQUEST_H_
#define TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEBACKUPDOWNLOADTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mongodb/v20190725/model/ReplicaSetInfo.h>


namespace TencentCloud
{
    namespace Mongodb
    {
        namespace V20190725
        {
            namespace Model
            {
                /**
                * CreateBackupDownloadTask请求参数结构体
                */
                class CreateBackupDownloadTaskRequest : public AbstractModel
                {
                public:
                    CreateBackupDownloadTaskRequest();
                    ~CreateBackupDownloadTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同。
                     * @return InstanceId 实例ID，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同。
                     * @param _instanceId 实例ID，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同。
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
                     * 获取要下载的备份文件名，可通过DescribeDBBackups接口获取。
                     * @return BackupName 要下载的备份文件名，可通过DescribeDBBackups接口获取。
                     * 
                     */
                    std::string GetBackupName() const;

                    /**
                     * 设置要下载的备份文件名，可通过DescribeDBBackups接口获取。
                     * @param _backupName 要下载的备份文件名，可通过DescribeDBBackups接口获取。
                     * 
                     */
                    void SetBackupName(const std::string& _backupName);

                    /**
                     * 判断参数 BackupName 是否已赋值
                     * @return BackupName 是否已赋值
                     * 
                     */
                    bool BackupNameHasBeenSet() const;

                    /**
                     * 获取指定要下载的副本集的节点名称 或 分片集群的分片名称列表。
如副本集cmgo-p8vnipr5，示例(固定取值)：BackupSets.0=cmgo-p8vnipr5_0，可下载全量数据。
如分片集群cmgo-p8vnipr5，示例：BackupSets.0=cmgo-p8vnipr5_0&BackupSets.1=cmgo-p8vnipr5_1，即下载分片0和分片1的数据，分片集群如需全量下载，请按示例方式传入全部分片名称。
                     * @return BackupSets 指定要下载的副本集的节点名称 或 分片集群的分片名称列表。
如副本集cmgo-p8vnipr5，示例(固定取值)：BackupSets.0=cmgo-p8vnipr5_0，可下载全量数据。
如分片集群cmgo-p8vnipr5，示例：BackupSets.0=cmgo-p8vnipr5_0&BackupSets.1=cmgo-p8vnipr5_1，即下载分片0和分片1的数据，分片集群如需全量下载，请按示例方式传入全部分片名称。
                     * 
                     */
                    std::vector<ReplicaSetInfo> GetBackupSets() const;

                    /**
                     * 设置指定要下载的副本集的节点名称 或 分片集群的分片名称列表。
如副本集cmgo-p8vnipr5，示例(固定取值)：BackupSets.0=cmgo-p8vnipr5_0，可下载全量数据。
如分片集群cmgo-p8vnipr5，示例：BackupSets.0=cmgo-p8vnipr5_0&BackupSets.1=cmgo-p8vnipr5_1，即下载分片0和分片1的数据，分片集群如需全量下载，请按示例方式传入全部分片名称。
                     * @param _backupSets 指定要下载的副本集的节点名称 或 分片集群的分片名称列表。
如副本集cmgo-p8vnipr5，示例(固定取值)：BackupSets.0=cmgo-p8vnipr5_0，可下载全量数据。
如分片集群cmgo-p8vnipr5，示例：BackupSets.0=cmgo-p8vnipr5_0&BackupSets.1=cmgo-p8vnipr5_1，即下载分片0和分片1的数据，分片集群如需全量下载，请按示例方式传入全部分片名称。
                     * 
                     */
                    void SetBackupSets(const std::vector<ReplicaSetInfo>& _backupSets);

                    /**
                     * 判断参数 BackupSets 是否已赋值
                     * @return BackupSets 是否已赋值
                     * 
                     */
                    bool BackupSetsHasBeenSet() const;

                private:

                    /**
                     * 实例ID，格式如：cmgo-p8vnipr5。与云数据库控制台页面中显示的实例ID相同。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 要下载的备份文件名，可通过DescribeDBBackups接口获取。
                     */
                    std::string m_backupName;
                    bool m_backupNameHasBeenSet;

                    /**
                     * 指定要下载的副本集的节点名称 或 分片集群的分片名称列表。
如副本集cmgo-p8vnipr5，示例(固定取值)：BackupSets.0=cmgo-p8vnipr5_0，可下载全量数据。
如分片集群cmgo-p8vnipr5，示例：BackupSets.0=cmgo-p8vnipr5_0&BackupSets.1=cmgo-p8vnipr5_1，即下载分片0和分片1的数据，分片集群如需全量下载，请按示例方式传入全部分片名称。
                     */
                    std::vector<ReplicaSetInfo> m_backupSets;
                    bool m_backupSetsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MONGODB_V20190725_MODEL_CREATEBACKUPDOWNLOADTASKREQUEST_H_
