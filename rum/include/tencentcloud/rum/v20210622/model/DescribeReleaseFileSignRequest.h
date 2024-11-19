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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERELEASEFILESIGNREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERELEASEFILESIGNREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeReleaseFileSign请求参数结构体
                */
                class DescribeReleaseFileSignRequest : public AbstractModel
                {
                public:
                    DescribeReleaseFileSignRequest();
                    ~DescribeReleaseFileSignRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取超时时间，不填默认是 5 分钟
                     * @return Timeout 超时时间，不填默认是 5 分钟
                     * 
                     */
                    int64_t GetTimeout() const;

                    /**
                     * 设置超时时间，不填默认是 5 分钟
                     * @param _timeout 超时时间，不填默认是 5 分钟
                     * 
                     */
                    void SetTimeout(const int64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取bucket类型，不填默认1:web，2:app
                     * @return FileType bucket类型，不填默认1:web，2:app
                     * 
                     */
                    int64_t GetFileType() const;

                    /**
                     * 设置bucket类型，不填默认1:web，2:app
                     * @param _fileType bucket类型，不填默认1:web，2:app
                     * 
                     */
                    void SetFileType(const int64_t& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取获取临时签名的bucket是国内站还是国际站（1表示国际站，其它表示国内站）
                     * @return Site 获取临时签名的bucket是国内站还是国际站（1表示国际站，其它表示国内站）
                     * 
                     */
                    int64_t GetSite() const;

                    /**
                     * 设置获取临时签名的bucket是国内站还是国际站（1表示国际站，其它表示国内站）
                     * @param _site 获取临时签名的bucket是国内站还是国际站（1表示国际站，其它表示国内站）
                     * 
                     */
                    void SetSite(const int64_t& _site);

                    /**
                     * 判断参数 Site 是否已赋值
                     * @return Site 是否已赋值
                     * 
                     */
                    bool SiteHasBeenSet() const;

                    /**
                     * 获取ProjectID
                     * @return ID ProjectID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置ProjectID
                     * @param _iD ProjectID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                private:

                    /**
                     * 超时时间，不填默认是 5 分钟
                     */
                    int64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * bucket类型，不填默认1:web，2:app
                     */
                    int64_t m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 获取临时签名的bucket是国内站还是国际站（1表示国际站，其它表示国内站）
                     */
                    int64_t m_site;
                    bool m_siteHasBeenSet;

                    /**
                     * ProjectID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERELEASEFILESIGNREQUEST_H_
