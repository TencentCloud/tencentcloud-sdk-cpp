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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBECLUSTERGROUPCLUSTERSREQUEST_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBECLUSTERGROUPCLUSTERSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeClusterGroupClusters请求参数结构体
                */
                class DescribeClusterGroupClustersRequest : public AbstractModel
                {
                public:
                    DescribeClusterGroupClustersRequest();
                    ~DescribeClusterGroupClustersRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>计算组 ID</p>
                     * @return Id <p>计算组 ID</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>计算组 ID</p>
                     * @param _id <p>计算组 ID</p>
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>返回样例 ClusterId 的最大数量（默认 5）</p>
                     * @return SampleLimit <p>返回样例 ClusterId 的最大数量（默认 5）</p>
                     * 
                     */
                    int64_t GetSampleLimit() const;

                    /**
                     * 设置<p>返回样例 ClusterId 的最大数量（默认 5）</p>
                     * @param _sampleLimit <p>返回样例 ClusterId 的最大数量（默认 5）</p>
                     * 
                     */
                    void SetSampleLimit(const int64_t& _sampleLimit);

                    /**
                     * 判断参数 SampleLimit 是否已赋值
                     * @return SampleLimit 是否已赋值
                     * 
                     */
                    bool SampleLimitHasBeenSet() const;

                    /**
                     * 获取<p>Cluster 状态列表</p><p>枚举值：</p><ul><li>running： 运行中</li></ul>
                     * @return Status <p>Cluster 状态列表</p><p>枚举值：</p><ul><li>running： 运行中</li></ul>
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置<p>Cluster 状态列表</p><p>枚举值：</p><ul><li>running： 运行中</li></ul>
                     * @param _status <p>Cluster 状态列表</p><p>枚举值：</p><ul><li>running： 运行中</li></ul>
                     * 
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>计算组 ID</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>返回样例 ClusterId 的最大数量（默认 5）</p>
                     */
                    int64_t m_sampleLimit;
                    bool m_sampleLimitHasBeenSet;

                    /**
                     * <p>Cluster 状态列表</p><p>枚举值：</p><ul><li>running： 运行中</li></ul>
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBECLUSTERGROUPCLUSTERSREQUEST_H_
