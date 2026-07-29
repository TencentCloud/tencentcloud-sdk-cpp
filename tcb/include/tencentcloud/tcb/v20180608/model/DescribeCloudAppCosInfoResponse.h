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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDAPPCOSINFORESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDAPPCOSINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/KVPair.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeCloudAppCosInfo返回参数结构体
                */
                class DescribeCloudAppCosInfoResponse : public AbstractModel
                {
                public:
                    DescribeCloudAppCosInfoResponse();
                    ~DescribeCloudAppCosInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取上传url
                     * @return UploadUrl 上传url
                     * 
                     */
                    std::string GetUploadUrl() const;

                    /**
                     * 判断参数 UploadUrl 是否已赋值
                     * @return UploadUrl 是否已赋值
                     * 
                     */
                    bool UploadUrlHasBeenSet() const;

                    /**
                     * 获取上传header
                     * @return UploadHeaders 上传header
                     * 
                     */
                    std::vector<KVPair> GetUploadHeaders() const;

                    /**
                     * 判断参数 UploadHeaders 是否已赋值
                     * @return UploadHeaders 是否已赋值
                     * 
                     */
                    bool UploadHeadersHasBeenSet() const;

                    /**
                     * 获取下载链接
                     * @return DownloadUrl 下载链接
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
                     * 获取下载Httpheader
                     * @return DownloadHeaders 下载Httpheader
                     * 
                     */
                    std::vector<KVPair> GetDownloadHeaders() const;

                    /**
                     * 判断参数 DownloadHeaders 是否已赋值
                     * @return DownloadHeaders 是否已赋值
                     * 
                     */
                    bool DownloadHeadersHasBeenSet() const;

                    /**
                     * 获取时间戳
                     * @return UnixTimestamp 时间戳
                     * 
                     */
                    std::string GetUnixTimestamp() const;

                    /**
                     * 判断参数 UnixTimestamp 是否已赋值
                     * @return UnixTimestamp 是否已赋值
                     * 
                     */
                    bool UnixTimestampHasBeenSet() const;

                private:

                    /**
                     * 上传url
                     */
                    std::string m_uploadUrl;
                    bool m_uploadUrlHasBeenSet;

                    /**
                     * 上传header
                     */
                    std::vector<KVPair> m_uploadHeaders;
                    bool m_uploadHeadersHasBeenSet;

                    /**
                     * 下载链接
                     */
                    std::string m_downloadUrl;
                    bool m_downloadUrlHasBeenSet;

                    /**
                     * 下载Httpheader
                     */
                    std::vector<KVPair> m_downloadHeaders;
                    bool m_downloadHeadersHasBeenSet;

                    /**
                     * 时间戳
                     */
                    std::string m_unixTimestamp;
                    bool m_unixTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBECLOUDAPPCOSINFORESPONSE_H_
