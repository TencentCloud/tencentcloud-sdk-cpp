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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERRELEASESREQUEST_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERRELEASESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeClusterReleases请求参数结构体
                */
                class DescribeClusterReleasesRequest : public AbstractModel
                {
                public:
                    DescribeClusterReleasesRequest();
                    ~DescribeClusterReleasesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取集群id
                     * @return ClusterId 集群id
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置集群id
                     * @param _clusterId 集群id
                     * 
                     */
                    void SetClusterId(const std::string& _clusterId);

                    /**
                     * 判断参数 ClusterId 是否已赋值
                     * @return ClusterId 是否已赋值
                     * 
                     */
                    bool ClusterIdHasBeenSet() const;

                    /**
                     * 获取每页数量限制
                     * @return Limit 每页数量限制
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页数量限制
                     * @param _limit 每页数量限制
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取页偏移量
                     * @return Offset 页偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置页偏移量
                     * @param _offset 页偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取集群类型, 目前支持传入 tke, eks, tkeedge, external 
                     * @return ClusterType 集群类型, 目前支持传入 tke, eks, tkeedge, external 
                     * 
                     */
                    std::string GetClusterType() const;

                    /**
                     * 设置集群类型, 目前支持传入 tke, eks, tkeedge, external 
                     * @param _clusterType 集群类型, 目前支持传入 tke, eks, tkeedge, external 
                     * 
                     */
                    void SetClusterType(const std::string& _clusterType);

                    /**
                     * 判断参数 ClusterType 是否已赋值
                     * @return ClusterType 是否已赋值
                     * 
                     */
                    bool ClusterTypeHasBeenSet() const;

                    /**
                     * 获取helm Release 安装的namespace
                     * @return Namespace helm Release 安装的namespace
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置helm Release 安装的namespace
                     * @param _namespace helm Release 安装的namespace
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                    /**
                     * 获取helm Release 的名字
                     * @return ReleaseName helm Release 的名字
                     * 
                     */
                    std::string GetReleaseName() const;

                    /**
                     * 设置helm Release 的名字
                     * @param _releaseName helm Release 的名字
                     * 
                     */
                    void SetReleaseName(const std::string& _releaseName);

                    /**
                     * 判断参数 ReleaseName 是否已赋值
                     * @return ReleaseName 是否已赋值
                     * 
                     */
                    bool ReleaseNameHasBeenSet() const;

                    /**
                     * 获取helm Chart 的名字
                     * @return ChartName helm Chart 的名字
                     * 
                     */
                    std::string GetChartName() const;

                    /**
                     * 设置helm Chart 的名字
                     * @param _chartName helm Chart 的名字
                     * 
                     */
                    void SetChartName(const std::string& _chartName);

                    /**
                     * 判断参数 ChartName 是否已赋值
                     * @return ChartName 是否已赋值
                     * 
                     */
                    bool ChartNameHasBeenSet() const;

                private:

                    /**
                     * 集群id
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * 每页数量限制
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 页偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 集群类型, 目前支持传入 tke, eks, tkeedge, external 
                     */
                    std::string m_clusterType;
                    bool m_clusterTypeHasBeenSet;

                    /**
                     * helm Release 安装的namespace
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                    /**
                     * helm Release 的名字
                     */
                    std::string m_releaseName;
                    bool m_releaseNameHasBeenSet;

                    /**
                     * helm Chart 的名字
                     */
                    std::string m_chartName;
                    bool m_chartNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBECLUSTERRELEASESREQUEST_H_
