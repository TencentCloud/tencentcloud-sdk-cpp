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
                     * 获取cos桶名
                     * @return CosBucket cos桶名
                     * 
                     */
                    std::string GetCosBucket() const;

                    /**
                     * 设置cos桶名
                     * @param _cosBucket cos桶名
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
                     * 获取bucket 桶下的备份路径
                     * @return BasePath bucket 桶下的备份路径
                     * 
                     */
                    std::string GetBasePath() const;

                    /**
                     * 设置bucket 桶下的备份路径
                     * @param _basePath bucket 桶下的备份路径
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
                     * 获取云上集群迁移集群名
                     * @return ClusterInstanceId 云上集群迁移集群名
                     * 
                     */
                    std::string GetClusterInstanceId() const;

                    /**
                     * 设置云上集群迁移集群名
                     * @param _clusterInstanceId 云上集群迁移集群名
                     * 
                     */
                    void SetClusterInstanceId(const std::string& _clusterInstanceId);

                    /**
                     * 判断参数 ClusterInstanceId 是否已赋值
                     * @return ClusterInstanceId 是否已赋值
                     * 
                     */
                    bool ClusterInstanceIdHasBeenSet() const;

                private:

                    /**
                     * cos桶名
                     */
                    std::string m_cosBucket;
                    bool m_cosBucketHasBeenSet;

                    /**
                     * bucket 桶下的备份路径
                     */
                    std::string m_basePath;
                    bool m_basePathHasBeenSet;

                    /**
                     * 云上集群迁移集群名
                     */
                    std::string m_clusterInstanceId;
                    bool m_clusterInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DESCRIBEUSERCOSSNAPSHOTLISTREQUEST_H_
