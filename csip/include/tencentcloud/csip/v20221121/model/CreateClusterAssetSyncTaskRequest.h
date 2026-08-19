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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECLUSTERASSETSYNCTASKREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECLUSTERASSETSYNCTASKREQUEST_H_

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
                * CreateClusterAssetSyncTask请求参数结构体
                */
                class CreateClusterAssetSyncTaskRequest : public AbstractModel
                {
                public:
                    CreateClusterAssetSyncTaskRequest();
                    ~CreateClusterAssetSyncTaskRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>集群资产id</p>
                     * @return ClusterAssetIds <p>集群资产id</p>
                     * @deprecated
                     */
                    std::vector<std::string> GetClusterAssetIds() const;

                    /**
                     * 设置<p>集群资产id</p>
                     * @param _clusterAssetIds <p>集群资产id</p>
                     * @deprecated
                     */
                    void SetClusterAssetIds(const std::vector<std::string>& _clusterAssetIds);

                    /**
                     * 判断参数 ClusterAssetIds 是否已赋值
                     * @return ClusterAssetIds 是否已赋值
                     * @deprecated
                     */
                    bool ClusterAssetIdsHasBeenSet() const;

                    /**
                     * 获取<p>集群ca证书md5值，集群的唯一标识</p>
                     * @return ClusterCaMD5List <p>集群ca证书md5值，集群的唯一标识</p>
                     * 
                     */
                    std::vector<std::string> GetClusterCaMD5List() const;

                    /**
                     * 设置<p>集群ca证书md5值，集群的唯一标识</p>
                     * @param _clusterCaMD5List <p>集群ca证书md5值，集群的唯一标识</p>
                     * 
                     */
                    void SetClusterCaMD5List(const std::vector<std::string>& _clusterCaMD5List);

                    /**
                     * 判断参数 ClusterCaMD5List 是否已赋值
                     * @return ClusterCaMD5List 是否已赋值
                     * 
                     */
                    bool ClusterCaMD5ListHasBeenSet() const;

                private:

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>集群资产id</p>
                     */
                    std::vector<std::string> m_clusterAssetIds;
                    bool m_clusterAssetIdsHasBeenSet;

                    /**
                     * <p>集群ca证书md5值，集群的唯一标识</p>
                     */
                    std::vector<std::string> m_clusterCaMD5List;
                    bool m_clusterCaMD5ListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_CREATECLUSTERASSETSYNCTASKREQUEST_H_
