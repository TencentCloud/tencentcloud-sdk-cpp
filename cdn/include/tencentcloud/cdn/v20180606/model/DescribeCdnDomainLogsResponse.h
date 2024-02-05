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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECDNDOMAINLOGSRESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECDNDOMAINLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/DomainLog.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeCdnDomainLogs返回参数结构体
                */
                class DescribeCdnDomainLogsResponse : public AbstractModel
                {
                public:
                    DescribeCdnDomainLogsResponse();
                    ~DescribeCdnDomainLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取日志包下载链接。
下载内容是gz后缀的压缩包，解压后是无扩展名的文本文件。链接有效期1天。
                     * @return DomainLogs 日志包下载链接。
下载内容是gz后缀的压缩包，解压后是无扩展名的文本文件。链接有效期1天。
                     * 
                     */
                    std::vector<DomainLog> GetDomainLogs() const;

                    /**
                     * 判断参数 DomainLogs 是否已赋值
                     * @return DomainLogs 是否已赋值
                     * 
                     */
                    bool DomainLogsHasBeenSet() const;

                    /**
                     * 获取查询到的总条数
                     * @return TotalCount 查询到的总条数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 日志包下载链接。
下载内容是gz后缀的压缩包，解压后是无扩展名的文本文件。链接有效期1天。
                     */
                    std::vector<DomainLog> m_domainLogs;
                    bool m_domainLogsHasBeenSet;

                    /**
                     * 查询到的总条数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECDNDOMAINLOGSRESPONSE_H_
