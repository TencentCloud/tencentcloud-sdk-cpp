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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULSUMMARYRESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeVulSummary返回参数结构体
                */
                class DescribeVulSummaryResponse : public AbstractModel
                {
                public:
                    DescribeVulSummaryResponse();
                    ~DescribeVulSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取漏洞总数量
                     * @return VulTotalCount 漏洞总数量
                     */
                    int64_t GetVulTotalCount() const;

                    /**
                     * 判断参数 VulTotalCount 是否已赋值
                     * @return VulTotalCount 是否已赋值
                     */
                    bool VulTotalCountHasBeenSet() const;

                    /**
                     * 获取严重及高危漏洞数量
                     * @return SeriousVulCount 严重及高危漏洞数量
                     */
                    int64_t GetSeriousVulCount() const;

                    /**
                     * 判断参数 SeriousVulCount 是否已赋值
                     * @return SeriousVulCount 是否已赋值
                     */
                    bool SeriousVulCountHasBeenSet() const;

                    /**
                     * 获取重点关注漏洞数量
                     * @return SuggestVulCount 重点关注漏洞数量
                     */
                    int64_t GetSuggestVulCount() const;

                    /**
                     * 判断参数 SuggestVulCount 是否已赋值
                     * @return SuggestVulCount 是否已赋值
                     */
                    bool SuggestVulCountHasBeenSet() const;

                    /**
                     * 获取有Poc或者Exp的漏洞数量
                     * @return PocExpLevelVulCount 有Poc或者Exp的漏洞数量
                     */
                    int64_t GetPocExpLevelVulCount() const;

                    /**
                     * 判断参数 PocExpLevelVulCount 是否已赋值
                     * @return PocExpLevelVulCount 是否已赋值
                     */
                    bool PocExpLevelVulCountHasBeenSet() const;

                    /**
                     * 获取有远程Exp的漏洞数量
                     * @return RemoteExpLevelVulCount 有远程Exp的漏洞数量
                     */
                    int64_t GetRemoteExpLevelVulCount() const;

                    /**
                     * 判断参数 RemoteExpLevelVulCount 是否已赋值
                     * @return RemoteExpLevelVulCount 是否已赋值
                     */
                    bool RemoteExpLevelVulCountHasBeenSet() const;

                    /**
                     * 获取受严重或高危漏洞影响的最新版本镜像数
                     * @return SeriousVulNewestImageCount 受严重或高危漏洞影响的最新版本镜像数
                     */
                    int64_t GetSeriousVulNewestImageCount() const;

                    /**
                     * 判断参数 SeriousVulNewestImageCount 是否已赋值
                     * @return SeriousVulNewestImageCount 是否已赋值
                     */
                    bool SeriousVulNewestImageCountHasBeenSet() const;

                private:

                    /**
                     * 漏洞总数量
                     */
                    int64_t m_vulTotalCount;
                    bool m_vulTotalCountHasBeenSet;

                    /**
                     * 严重及高危漏洞数量
                     */
                    int64_t m_seriousVulCount;
                    bool m_seriousVulCountHasBeenSet;

                    /**
                     * 重点关注漏洞数量
                     */
                    int64_t m_suggestVulCount;
                    bool m_suggestVulCountHasBeenSet;

                    /**
                     * 有Poc或者Exp的漏洞数量
                     */
                    int64_t m_pocExpLevelVulCount;
                    bool m_pocExpLevelVulCountHasBeenSet;

                    /**
                     * 有远程Exp的漏洞数量
                     */
                    int64_t m_remoteExpLevelVulCount;
                    bool m_remoteExpLevelVulCountHasBeenSet;

                    /**
                     * 受严重或高危漏洞影响的最新版本镜像数
                     */
                    int64_t m_seriousVulNewestImageCount;
                    bool m_seriousVulNewestImageCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEVULSUMMARYRESPONSE_H_
