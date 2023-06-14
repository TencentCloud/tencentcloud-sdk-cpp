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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBESECURITYAUDITLOGDOWNLOADURLSRESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBESECURITYAUDITLOGDOWNLOADURLSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            namespace Model
            {
                /**
                * DescribeSecurityAuditLogDownloadUrls返回参数结构体
                */
                class DescribeSecurityAuditLogDownloadUrlsResponse : public AbstractModel
                {
                public:
                    DescribeSecurityAuditLogDownloadUrlsResponse();
                    ~DescribeSecurityAuditLogDownloadUrlsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取导出结果的COS链接列表。当结果集很大时，可能会切分为多个url下载。
                     * @return Urls 导出结果的COS链接列表。当结果集很大时，可能会切分为多个url下载。
                     * 
                     */
                    std::vector<std::string> GetUrls() const;

                    /**
                     * 判断参数 Urls 是否已赋值
                     * @return Urls 是否已赋值
                     * 
                     */
                    bool UrlsHasBeenSet() const;

                private:

                    /**
                     * 导出结果的COS链接列表。当结果集很大时，可能会切分为多个url下载。
                     */
                    std::vector<std::string> m_urls;
                    bool m_urlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_DESCRIBESECURITYAUDITLOGDOWNLOADURLSRESPONSE_H_
