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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERDETAILREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERDETAILREQUEST_H_

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
                * DescribeClusterDetail请求参数结构体
                */
                class DescribeClusterDetailRequest : public AbstractModel
                {
                public:
                    DescribeClusterDetailRequest();
                    ~DescribeClusterDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集群资产id</p>
                     * @return ClusterAssetId <p>集群资产id</p>
                     * @deprecated
                     */
                    std::string GetClusterAssetId() const;

                    /**
                     * 设置<p>集群资产id</p>
                     * @param _clusterAssetId <p>集群资产id</p>
                     * @deprecated
                     */
                    void SetClusterAssetId(const std::string& _clusterAssetId);

                    /**
                     * 判断参数 ClusterAssetId 是否已赋值
                     * @return ClusterAssetId 是否已赋值
                     * @deprecated
                     */
                    bool ClusterAssetIdHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>集群ca证书md5值，集群的唯一标识</p>
                     * @return ClusterCaMD5 <p>集群ca证书md5值，集群的唯一标识</p>
                     * 
                     */
                    std::string GetClusterCaMD5() const;

                    /**
                     * 设置<p>集群ca证书md5值，集群的唯一标识</p>
                     * @param _clusterCaMD5 <p>集群ca证书md5值，集群的唯一标识</p>
                     * 
                     */
                    void SetClusterCaMD5(const std::string& _clusterCaMD5);

                    /**
                     * 判断参数 ClusterCaMD5 是否已赋值
                     * @return ClusterCaMD5 是否已赋值
                     * 
                     */
                    bool ClusterCaMD5HasBeenSet() const;

                private:

                    /**
                     * <p>集群资产id</p>
                     */
                    std::string m_clusterAssetId;
                    bool m_clusterAssetIdHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>集群ca证书md5值，集群的唯一标识</p>
                     */
                    std::string m_clusterCaMD5;
                    bool m_clusterCaMD5HasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBECLUSTERDETAILREQUEST_H_
