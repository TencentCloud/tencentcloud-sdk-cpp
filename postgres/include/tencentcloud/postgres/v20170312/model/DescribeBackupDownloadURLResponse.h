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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEBACKUPDOWNLOADURLRESPONSE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEBACKUPDOWNLOADURLRESPONSE_H_

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
                * DescribeBackupDownloadURL返回参数结构体
                */
                class DescribeBackupDownloadURLResponse : public AbstractModel
                {
                public:
                    DescribeBackupDownloadURLResponse();
                    ~DescribeBackupDownloadURLResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取备份的下载地址。
                     * @return BackupDownloadURL 备份的下载地址。
                     * 
                     */
                    std::string GetBackupDownloadURL() const;

                    /**
                     * 判断参数 BackupDownloadURL 是否已赋值
                     * @return BackupDownloadURL 是否已赋值
                     * 
                     */
                    bool BackupDownloadURLHasBeenSet() const;

                private:

                    /**
                     * 备份的下载地址。
                     */
                    std::string m_backupDownloadURL;
                    bool m_backupDownloadURLHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_DESCRIBEBACKUPDOWNLOADURLRESPONSE_H_
