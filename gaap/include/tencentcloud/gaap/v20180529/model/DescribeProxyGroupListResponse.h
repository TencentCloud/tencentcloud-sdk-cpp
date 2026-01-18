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

#ifndef TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXYGROUPLISTRESPONSE_H_
#define TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXYGROUPLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gaap/v20180529/model/ProxyGroupInfo.h>


namespace TencentCloud
{
    namespace Gaap
    {
        namespace V20180529
        {
            namespace Model
            {
                /**
                * DescribeProxyGroupList返回参数结构体
                */
                class DescribeProxyGroupListResponse : public AbstractModel
                {
                public:
                    DescribeProxyGroupListResponse();
                    ~DescribeProxyGroupListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>通道组总数。</p>
                     * @return TotalCount <p>通道组总数。</p>
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
                     * 获取<p>通道组列表。</p>
                     * @return ProxyGroupList <p>通道组列表。</p>
                     * 
                     */
                    std::vector<ProxyGroupInfo> GetProxyGroupList() const;

                    /**
                     * 判断参数 ProxyGroupList 是否已赋值
                     * @return ProxyGroupList 是否已赋值
                     * 
                     */
                    bool ProxyGroupListHasBeenSet() const;

                private:

                    /**
                     * <p>通道组总数。</p>
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>通道组列表。</p>
                     */
                    std::vector<ProxyGroupInfo> m_proxyGroupList;
                    bool m_proxyGroupListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GAAP_V20180529_MODEL_DESCRIBEPROXYGROUPLISTRESPONSE_H_
