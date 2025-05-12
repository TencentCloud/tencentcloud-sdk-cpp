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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPURLRESPONSE_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/redis/v20180412/model/BackupDownloadInfo.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * DescribeBackupUrl返回参数结构体
                */
                class DescribeBackupUrlResponse : public AbstractModel
                {
                public:
                    DescribeBackupUrlResponse();
                    ~DescribeBackupUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取外网下载地址（6小时内链接有效），该字段正在逐步废弃中。
                     * @return DownloadUrl 外网下载地址（6小时内链接有效），该字段正在逐步废弃中。
                     * @deprecated
                     */
                    std::vector<std::string> GetDownloadUrl() const;

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * @deprecated
                     */
                    bool DownloadUrlHasBeenSet() const;

                    /**
                     * 获取内网下载地址（6小时内链接有效），该字段正在逐步废弃中。
                     * @return InnerDownloadUrl 内网下载地址（6小时内链接有效），该字段正在逐步废弃中。
                     * @deprecated
                     */
                    std::vector<std::string> GetInnerDownloadUrl() const;

                    /**
                     * 判断参数 InnerDownloadUrl 是否已赋值
                     * @return InnerDownloadUrl 是否已赋值
                     * @deprecated
                     */
                    bool InnerDownloadUrlHasBeenSet() const;

                    /**
                     * 获取文件名称，该字段正在逐步废弃中。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Filenames 文件名称，该字段正在逐步废弃中。
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::vector<std::string> GetFilenames() const;

                    /**
                     * 判断参数 Filenames 是否已赋值
                     * @return Filenames 是否已赋值
                     * @deprecated
                     */
                    bool FilenamesHasBeenSet() const;

                    /**
                     * 获取备份文件信息列表。
                     * @return BackupInfos 备份文件信息列表。
                     * 
                     */
                    std::vector<BackupDownloadInfo> GetBackupInfos() const;

                    /**
                     * 判断参数 BackupInfos 是否已赋值
                     * @return BackupInfos 是否已赋值
                     * 
                     */
                    bool BackupInfosHasBeenSet() const;

                private:

                    /**
                     * 外网下载地址（6小时内链接有效），该字段正在逐步废弃中。
                     */
                    std::vector<std::string> m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * 内网下载地址（6小时内链接有效），该字段正在逐步废弃中。
                     */
                    std::vector<std::string> m_innerDownloadUrl;
                    bool m_innerDownloadUrlHasBeenSet;

                    /**
                     * 文件名称，该字段正在逐步废弃中。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_filenames;
                    bool m_filenamesHasBeenSet;

                    /**
                     * 备份文件信息列表。
                     */
                    std::vector<BackupDownloadInfo> m_backupInfos;
                    bool m_backupInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_DESCRIBEBACKUPURLRESPONSE_H_
