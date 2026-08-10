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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEUSERCOSSNAPSHOTLISTREQUEST_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEUSERCOSSNAPSHOTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * DescribeUserCosSnapshotList请求参数结构体
                */
                class DescribeUserCosSnapshotListRequest : public AbstractModel
                {
                public:
                    DescribeUserCosSnapshotListRequest();
                    ~DescribeUserCosSnapshotListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>cos桶名</p>
                     * @return CosBucket <p>cos桶名</p>
                     * 
                     */
                    std::string GetCosBucket() const;

                    /**
                     * 设置<p>cos桶名</p>
                     * @param _cosBucket <p>cos桶名</p>
                     * 
                     */
                    void SetCosBucket(const std::string& _cosBucket);

                    /**
                     * 判断参数 CosBucket 是否已赋值
                     * @return CosBucket 是否已赋值
                     * 
                     */
                    bool CosBucketHasBeenSet() const;

                    /**
                     * 获取<p>bucket 桶下的备份路径</p>
                     * @return BasePath <p>bucket 桶下的备份路径</p>
                     * 
                     */
                    std::string GetBasePath() const;

                    /**
                     * 设置<p>bucket 桶下的备份路径</p>
                     * @param _basePath <p>bucket 桶下的备份路径</p>
                     * 
                     */
                    void SetBasePath(const std::string& _basePath);

                    /**
                     * 判断参数 BasePath 是否已赋值
                     * @return BasePath 是否已赋值
                     * 
                     */
                    bool BasePathHasBeenSet() const;

                    /**
                     * 获取<p>云上集群迁移集群名</p>
                     * @return ClusterInstanceId <p>云上集群迁移集群名</p>
                     * 
                     */
                    std::string GetClusterInstanceId() const;

                    /**
                     * 设置<p>云上集群迁移集群名</p>
                     * @param _clusterInstanceId <p>云上集群迁移集群名</p>
                     * 
                     */
                    void SetClusterInstanceId(const std::string& _clusterInstanceId);

                    /**
                     * 判断参数 ClusterInstanceId 是否已赋值
                     * @return ClusterInstanceId 是否已赋值
                     * 
                     */
                    bool ClusterInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>es 集群仓库</p>
                     * @return PaasEsRepository <p>es 集群仓库</p>
                     * 
                     */
                    std::string GetPaasEsRepository() const;

                    /**
                     * 设置<p>es 集群仓库</p>
                     * @param _paasEsRepository <p>es 集群仓库</p>
                     * 
                     */
                    void SetPaasEsRepository(const std::string& _paasEsRepository);

                    /**
                     * 判断参数 PaasEsRepository 是否已赋值
                     * @return PaasEsRepository 是否已赋值
                     * 
                     */
                    bool PaasEsRepositoryHasBeenSet() const;

                private:

                    /**
                     * <p>cos桶名</p>
                     */
                    std::string m_cosBucket;
                    bool m_cosBucketHasBeenSet;

                    /**
                     * <p>bucket 桶下的备份路径</p>
                     */
                    std::string m_basePath;
                    bool m_basePathHasBeenSet;

                    /**
                     * <p>云上集群迁移集群名</p>
                     */
                    std::string m_clusterInstanceId;
                    bool m_clusterInstanceIdHasBeenSet;

                    /**
                     * <p>es 集群仓库</p>
                     */
                    std::string m_paasEsRepository;
                    bool m_paasEsRepositoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEUSERCOSSNAPSHOTLISTREQUEST_H_
