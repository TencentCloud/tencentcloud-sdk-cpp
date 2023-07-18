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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_BACKUPDOWNLOADINFO_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_BACKUPDOWNLOADINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 备份文件下载信息
                */
                class BackupDownloadInfo : public AbstractModel
                {
                public:
                    BackupDownloadInfo();
                    ~BackupDownloadInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取备份文件名称。
                     * @return FileName 备份文件名称。
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 设置备份文件名称。
                     * @param _fileName 备份文件名称。
                     * 
                     */
                    void SetFileName(const std::string& _fileName);

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取备份文件大小，单位B，如果为0，表示无效。
                     * @return FileSize 备份文件大小，单位B，如果为0，表示无效。
                     * 
                     */
                    int64_t GetFileSize() const;

                    /**
                     * 设置备份文件大小，单位B，如果为0，表示无效。
                     * @param _fileSize 备份文件大小，单位B，如果为0，表示无效。
                     * 
                     */
                    void SetFileSize(const int64_t& _fileSize);

                    /**
                     * 判断参数 FileSize 是否已赋值
                     * @return FileSize 是否已赋值
                     * 
                     */
                    bool FileSizeHasBeenSet() const;

                    /**
                     * 获取备份文件外网下载地址。下载地址的有效时长为6小时，过期后请重新获取。
                     * @return DownloadUrl 备份文件外网下载地址。下载地址的有效时长为6小时，过期后请重新获取。
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 设置备份文件外网下载地址。下载地址的有效时长为6小时，过期后请重新获取。
                     * @param _downloadUrl 备份文件外网下载地址。下载地址的有效时长为6小时，过期后请重新获取。
                     * 
                     */
                    void SetDownloadUrl(const std::string& _downloadUrl);

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                    /**
                     * 获取备份文件内网下载地址。下载地址的有效时长为6小时，过期后请重新获取。
                     * @return InnerDownloadUrl 备份文件内网下载地址。下载地址的有效时长为6小时，过期后请重新获取。
                     * 
                     */
                    std::string GetInnerDownloadUrl() const;

                    /**
                     * 设置备份文件内网下载地址。下载地址的有效时长为6小时，过期后请重新获取。
                     * @param _innerDownloadUrl 备份文件内网下载地址。下载地址的有效时长为6小时，过期后请重新获取。
                     * 
                     */
                    void SetInnerDownloadUrl(const std::string& _innerDownloadUrl);

                    /**
                     * 判断参数 InnerDownloadUrl 是否已赋值
                     * @return InnerDownloadUrl 是否已赋值
                     * 
                     */
                    bool InnerDownloadUrlHasBeenSet() const;

                private:

                    /**
                     * 备份文件名称。
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * 备份文件大小，单位B，如果为0，表示无效。
                     */
                    int64_t m_fileSize;
                    bool m_fileSizeHasBeenSet;

                    /**
                     * 备份文件外网下载地址。下载地址的有效时长为6小时，过期后请重新获取。
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * 备份文件内网下载地址。下载地址的有效时长为6小时，过期后请重新获取。
                     */
                    std::string m_innerDownloadUrl;
                    bool m_innerDownloadUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_BACKUPDOWNLOADINFO_H_
