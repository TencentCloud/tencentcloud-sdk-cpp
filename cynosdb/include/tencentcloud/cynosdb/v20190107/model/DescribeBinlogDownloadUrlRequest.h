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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBINLOGDOWNLOADURLREQUEST_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBINLOGDOWNLOADURLREQUEST_H_

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
                * DescribeBinlogDownloadUrl请求参数结构体
                */
                class DescribeBinlogDownloadUrlRequest : public AbstractModel
                {
                public:
                    DescribeBinlogDownloadUrlRequest();
                    ~DescribeBinlogDownloadUrlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群ID
                     * @return ClusterId 集群ID
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群ID
                     * @param _clusterId 集群ID
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
                     * 获取Binlog文件ID
                     * @return BinlogId Binlog文件ID
                     * 
                     */
                    int64_t GetBinlogId() const;

                    /**
                     * 设置Binlog文件ID
                     * @param _binlogId Binlog文件ID
                     * 
                     */
                    void SetBinlogId(const int64_t& _binlogId);

                    /**
                     * 判断参数 BinlogId 是否已赋值
                     * @return BinlogId 是否已赋值
                     * 
                     */
                    bool BinlogIdHasBeenSet() const;

                    /**
                     * 获取备份下载来源限制条件
                     * @return DownloadRestriction 备份下载来源限制条件
                     * 
                     */
                    BackupLimitRestriction GetDownloadRestriction() const;

                    /**
                     * 设置备份下载来源限制条件
                     * @param _downloadRestriction 备份下载来源限制条件
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
                     * 集群ID
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * Binlog文件ID
                     */
                    int64_t m_binlogId;
                    bool m_binlogIdHasBeenSet;

                    /**
                     * 备份下载来源限制条件
                     */
                    BackupLimitRestriction m_downloadRestriction;
                    bool m_downloadRestrictionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_DESCRIBEBINLOGDOWNLOADURLREQUEST_H_
