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

#ifndef TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEBACKUPFILESRESPONSE_H_
#define TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEBACKUPFILESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mariadb/v20170312/model/InstanceBackupFileItem.h>


namespace TencentCloud
{
    namespace Mariadb
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeBackupFiles返回参数结构体
                */
                class DescribeBackupFilesResponse : public AbstractModel
                {
                public:
                    DescribeBackupFilesResponse();
                    ~DescribeBackupFilesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取备份文件列表
                     * @return Files 备份文件列表
                     * 
                     */
                    std::vector<InstanceBackupFileItem> GetFiles() const;

                    /**
                     * 判断参数 Files 是否已赋值
                     * @return Files 是否已赋值
                     * 
                     */
                    bool FilesHasBeenSet() const;

                    /**
                     * 获取总条目数
                     * @return TotalCount 总条目数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取文件下载链接路径前缀
                     * @return UrlPrefix 文件下载链接路径前缀
                     * 
                     */
                    std::string GetUrlPrefix() const;

                    /**
                     * 判断参数 UrlPrefix 是否已赋值
                     * @return UrlPrefix 是否已赋值
                     * 
                     */
                    bool UrlPrefixHasBeenSet() const;

                private:

                    /**
                     * 备份文件列表
                     */
                    std::vector<InstanceBackupFileItem> m_files;
                    bool m_filesHasBeenSet;

                    /**
                     * 总条目数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 文件下载链接路径前缀
                     */
                    std::string m_urlPrefix;
                    bool m_urlPrefixHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARIADB_V20170312_MODEL_DESCRIBEBACKUPFILESRESPONSE_H_
