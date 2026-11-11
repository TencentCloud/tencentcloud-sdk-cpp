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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERBASELINERISKPOLICYLISTREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERBASELINERISKPOLICYLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeClusterBaselineRiskPolicyList请求参数结构体
                */
                class DescribeClusterBaselineRiskPolicyListRequest : public AbstractModel
                {
                public:
                    DescribeClusterBaselineRiskPolicyListRequest();
                    ~DescribeClusterBaselineRiskPolicyListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群所属账号的 Appid，用于指定查询基线风险策略的账号。</p>
                     * @return ClusterAppid <p>集群所属账号的 Appid，用于指定查询基线风险策略的账号。</p>
                     * 
                     */
                    uint64_t GetClusterAppid() const;

                    /**
                     * 设置<p>集群所属账号的 Appid，用于指定查询基线风险策略的账号。</p>
                     * @param _clusterAppid <p>集群所属账号的 Appid，用于指定查询基线风险策略的账号。</p>
                     * 
                     */
                    void SetClusterAppid(const uint64_t& _clusterAppid);

                    /**
                     * 判断参数 ClusterAppid 是否已赋值
                     * @return ClusterAppid 是否已赋值
                     * 
                     */
                    bool ClusterAppidHasBeenSet() const;

                    /**
                     * 获取<p>集群CaMD5</p>
                     * @return ClusterCaMD5 <p>集群CaMD5</p>
                     * 
                     */
                    std::string GetClusterCaMD5() const;

                    /**
                     * 设置<p>集群CaMD5</p>
                     * @param _clusterCaMD5 <p>集群CaMD5</p>
                     * 
                     */
                    void SetClusterCaMD5(const std::string& _clusterCaMD5);

                    /**
                     * 判断参数 ClusterCaMD5 是否已赋值
                     * @return ClusterCaMD5 是否已赋值
                     * 
                     */
                    bool ClusterCaMD5HasBeenSet() const;

                    /**
                     * 获取集团账号的成员 ID 列表。
                     * @return MemberId 集团账号的成员 ID 列表。
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置集团账号的成员 ID 列表。
                     * @param _memberId 集团账号的成员 ID 列表。
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                private:

                    /**
                     * <p>集群所属账号的 Appid，用于指定查询基线风险策略的账号。</p>
                     */
                    uint64_t m_clusterAppid;
                    bool m_clusterAppidHasBeenSet;

                    /**
                     * <p>集群CaMD5</p>
                     */
                    std::string m_clusterCaMD5;
                    bool m_clusterCaMD5HasBeenSet;

                    /**
                     * 集团账号的成员 ID 列表。
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERBASELINERISKPOLICYLISTREQUEST_H_
