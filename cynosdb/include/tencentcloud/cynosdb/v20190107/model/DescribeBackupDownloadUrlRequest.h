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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPDOWNLOADURLREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPDOWNLOADURLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cynosdb/v20190107/model/BackupLimitRestriction.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * DescribeBackupDownloadUrl请求参数结构体
                */
                class DescribeBackupDownloadUrlRequest : public AbstractModel
                {
                public:
                    DescribeBackupDownloadUrlRequest();
                    ~DescribeBackupDownloadUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
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
                     * 获取<p>备份ID</p>
                     * @return BackupId <p>备份ID</p>
                     * 
                     */
                    int64_t GetBackupId() const;

                    /**
                     * 设置<p>备份ID</p>
                     * @param _backupId <p>备份ID</p>
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
                     * 获取<p>备份下载来源限制条件</p>
                     * @return DownloadRestriction <p>备份下载来源限制条件</p>
                     * 
                     */
                    BackupLimitRestriction GetDownloadRestriction() const;

                    /**
                     * 设置<p>备份下载来源限制条件</p>
                     * @param _downloadRestriction <p>备份下载来源限制条件</p>
                     * 
                     */
                    void SetDownloadRestriction(const BackupLimitRestriction& _downloadRestriction);

                    /**
                     * 判断参数 DownloadRestriction 是否已赋值
                     * @return DownloadRestriction 是否已赋值
                     * 
                     */
                    bool DownloadRestrictionHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>备份ID</p>
                     */
                    int64_t m_backupId;
                    bool m_backupIdHasBeenSet;

                    /**
                     * <p>备份下载来源限制条件</p>
                     */
                    BackupLimitRestriction m_downloadRestriction;
                    bool m_downloadRestrictionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBACKUPDOWNLOADURLREQUEST_H_
