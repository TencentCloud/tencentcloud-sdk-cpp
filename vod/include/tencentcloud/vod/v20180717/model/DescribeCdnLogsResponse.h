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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNLOGSRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/CdnLogInfo.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeCdnLogs返回参数结构体
                */
                class DescribeCdnLogsResponse : public AbstractModel
                {
                public:
                    DescribeCdnLogsResponse();
                    ~DescribeCdnLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取日志下载链接总数量。
                     * @return TotalCount 日志下载链接总数量。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取海外CDN节点的日志下载列表。如果域名没有开启海外加速，忽略该参数。
                     * @return OverseaCdnLogs 海外CDN节点的日志下载列表。如果域名没有开启海外加速，忽略该参数。
                     * 
                     */
                    std::vector<CdnLogInfo> GetOverseaCdnLogs() const;

                    /**
                     * 判断参数 OverseaCdnLogs 是否已赋值
                     * @return OverseaCdnLogs 是否已赋值
                     * 
                     */
                    bool OverseaCdnLogsHasBeenSet() const;

                    /**
                     * 获取国内CDN节点的日志下载列表。
                     * @return DomesticCdnLogs 国内CDN节点的日志下载列表。
                     * 
                     */
                    std::vector<CdnLogInfo> GetDomesticCdnLogs() const;

                    /**
                     * 判断参数 DomesticCdnLogs 是否已赋值
                     * @return DomesticCdnLogs 是否已赋值
                     * 
                     */
                    bool DomesticCdnLogsHasBeenSet() const;

                private:

                    /**
                     * 日志下载链接总数量。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 海外CDN节点的日志下载列表。如果域名没有开启海外加速，忽略该参数。
                     */
                    std::vector<CdnLogInfo> m_overseaCdnLogs;
                    bool m_overseaCdnLogsHasBeenSet;

                    /**
                     * 国内CDN节点的日志下载列表。
                     */
                    std::vector<CdnLogInfo> m_domesticCdnLogs;
                    bool m_domesticCdnLogsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBECDNLOGSRESPONSE_H_
