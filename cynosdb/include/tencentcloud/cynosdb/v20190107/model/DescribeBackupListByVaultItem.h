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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPLISTBYVAULTITEM_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPLISTBYVAULTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/BackupFileInfo.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeBackupListByVaultItem
                */
                class DescribeBackupListByVaultItem : public AbstractModel
                {
                public:
                    DescribeBackupListByVaultItem();
                    ~DescribeBackupListByVaultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集群id
                     * @return ClusterId 集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param _clusterId 集群id
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取集群name
                     * @return ClusterName 集群name
                     * 
                     */
                    std::string GetClusterName() const;

                    /**
                     * 设置集群name
                     * @param _clusterName 集群name
                     * 
                     */
                    void SetClusterName(const std::string& _clusterName);

                    /**
                     * 判断参数 ClusterName 是否已赋值
                     * @return ClusterName 是否已赋值
                     * 
                     */
                    bool ClusterNameHasBeenSet() const;

                    /**
                     * 获取备份信息
                     * @return BackupFileInfo 备份信息
                     * 
                     */
                    BackupFileInfo GetBackupFileInfo() const;

                    /**
                     * 设置备份信息
                     * @param _backupFileInfo 备份信息
                     * 
                     */
                    void SetBackupFileInfo(const BackupFileInfo& _backupFileInfo);

                    /**
                     * 判断参数 BackupFileInfo 是否已赋值
                     * @return BackupFileInfo 是否已赋值
                     * 
                     */
                    bool BackupFileInfoHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 集群name
                     */
                    std::string m_clusterName;
                    bool m_clusterNameHasBeenSet;

                    /**
                     * 备份信息
                     */
                    BackupFileInfo m_backupFileInfo;
                    bool m_backupFileInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPLISTBYVAULTITEM_H_
