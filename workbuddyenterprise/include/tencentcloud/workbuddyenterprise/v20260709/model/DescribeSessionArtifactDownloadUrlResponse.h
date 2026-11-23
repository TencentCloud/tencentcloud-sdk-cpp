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

#ifndef TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBESESSIONARTIFACTDOWNLOADURLRESPONSE_H_
#define TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBESESSIONARTIFACTDOWNLOADURLRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Workbuddyenterprise
    {
        namespace V20260709
        {
            namespace Model
            {
                /**
                * DescribeSessionArtifactDownloadUrl返回参数结构体
                */
                class DescribeSessionArtifactDownloadUrlResponse : public AbstractModel
                {
                public:
                    DescribeSessionArtifactDownloadUrlResponse();
                    ~DescribeSessionArtifactDownloadUrlResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>产物下载地址</p>
                     * @return DownloadUrl <p>产物下载地址</p>
                     * 
                     */
                    std::string GetDownloadUrl() const;

                    /**
                     * 判断参数 DownloadUrl 是否已赋值
                     * @return DownloadUrl 是否已赋值
                     * 
                     */
                    bool DownloadUrlHasBeenSet() const;

                    /**
                     * 获取<p>产物过期时间</p>
                     * @return ExpiredTime <p>产物过期时间</p>
                     * 
                     */
                    std::string GetExpiredTime() const;

                    /**
                     * 判断参数 ExpiredTime 是否已赋值
                     * @return ExpiredTime 是否已赋值
                     * 
                     */
                    bool ExpiredTimeHasBeenSet() const;

                    /**
                     * 获取<p>产物对应文件名</p>
                     * @return FileName <p>产物对应文件名</p>
                     * 
                     */
                    std::string GetFileName() const;

                    /**
                     * 判断参数 FileName 是否已赋值
                     * @return FileName 是否已赋值
                     * 
                     */
                    bool FileNameHasBeenSet() const;

                    /**
                     * 获取<p>产物文件大小</p>
                     * @return FileSizeBytes <p>产物文件大小</p>
                     * 
                     */
                    int64_t GetFileSizeBytes() const;

                    /**
                     * 判断参数 FileSizeBytes 是否已赋值
                     * @return FileSizeBytes 是否已赋值
                     * 
                     */
                    bool FileSizeBytesHasBeenSet() const;

                    /**
                     * 获取<p>文件摘要</p>
                     * @return FileSha256 <p>文件摘要</p>
                     * 
                     */
                    std::string GetFileSha256() const;

                    /**
                     * 判断参数 FileSha256 是否已赋值
                     * @return FileSha256 是否已赋值
                     * 
                     */
                    bool FileSha256HasBeenSet() const;

                private:

                    /**
                     * <p>产物下载地址</p>
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * <p>产物过期时间</p>
                     */
                    std::string m_expiredTime;
                    bool m_expiredTimeHasBeenSet;

                    /**
                     * <p>产物对应文件名</p>
                     */
                    std::string m_fileName;
                    bool m_fileNameHasBeenSet;

                    /**
                     * <p>产物文件大小</p>
                     */
                    int64_t m_fileSizeBytes;
                    bool m_fileSizeBytesHasBeenSet;

                    /**
                     * <p>文件摘要</p>
                     */
                    std::string m_fileSha256;
                    bool m_fileSha256HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WORKBUDDYENTERPRISE_V20260709_MODEL_DESCRIBESESSIONARTIFACTDOWNLOADURLRESPONSE_H_
