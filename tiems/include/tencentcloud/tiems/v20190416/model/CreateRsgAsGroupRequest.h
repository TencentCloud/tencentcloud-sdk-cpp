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

#ifndef TENCENTCLOUD_TIEMS_V20190416_MODEL_CREATERSGASGROUPREQUEST_H_
#define TENCENTCLOUD_TIEMS_V20190416_MODEL_CREATERSGASGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiems
    {
        namespace V20190416
        {
            namespace Model
            {
                /**
                * CreateRsgAsGroup请求参数结构体
                */
                class CreateRsgAsGroupRequest : public AbstractModel
                {
                public:
                    CreateRsgAsGroupRequest();
                    ~CreateRsgAsGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源组 ID
                     * @return RsgId 资源组 ID
                     * 
                     */
                    std::string GetRsgId() const;

                    /**
                     * 设置资源组 ID
                     * @param _rsgId 资源组 ID
                     * 
                     */
                    void SetRsgId(const std::string& _rsgId);

                    /**
                     * 判断参数 RsgId 是否已赋值
                     * @return RsgId 是否已赋值
                     * 
                     */
                    bool RsgIdHasBeenSet() const;

                    /**
                     * 获取伸缩组允许的最大节点数
                     * @return MaxSize 伸缩组允许的最大节点数
                     * 
                     */
                    uint64_t GetMaxSize() const;

                    /**
                     * 设置伸缩组允许的最大节点数
                     * @param _maxSize 伸缩组允许的最大节点数
                     * 
                     */
                    void SetMaxSize(const uint64_t& _maxSize);

                    /**
                     * 判断参数 MaxSize 是否已赋值
                     * @return MaxSize 是否已赋值
                     * 
                     */
                    bool MaxSizeHasBeenSet() const;

                    /**
                     * 获取伸缩组允许的最小节点数
                     * @return MinSize 伸缩组允许的最小节点数
                     * 
                     */
                    uint64_t GetMinSize() const;

                    /**
                     * 设置伸缩组允许的最小节点数
                     * @param _minSize 伸缩组允许的最小节点数
                     * 
                     */
                    void SetMinSize(const uint64_t& _minSize);

                    /**
                     * 判断参数 MinSize 是否已赋值
                     * @return MinSize 是否已赋值
                     * 
                     */
                    bool MinSizeHasBeenSet() const;

                    /**
                     * 获取伸缩组的节点规格
                     * @return InstanceType 伸缩组的节点规格
                     * 
                     */
                    std::string GetInstanceType() const;

                    /**
                     * 设置伸缩组的节点规格
                     * @param _instanceType 伸缩组的节点规格
                     * 
                     */
                    void SetInstanceType(const std::string& _instanceType);

                    /**
                     * 判断参数 InstanceType 是否已赋值
                     * @return InstanceType 是否已赋值
                     * 
                     */
                    bool InstanceTypeHasBeenSet() const;

                    /**
                     * 获取资源组所在的集群名
                     * @return Cluster 资源组所在的集群名
                     * 
                     */
                    std::string GetCluster() const;

                    /**
                     * 设置资源组所在的集群名
                     * @param _cluster 资源组所在的集群名
                     * 
                     */
                    void SetCluster(const std::string& _cluster);

                    /**
                     * 判断参数 Cluster 是否已赋值
                     * @return Cluster 是否已赋值
                     * 
                     */
                    bool ClusterHasBeenSet() const;

                    /**
                     * 获取伸缩组名称
                     * @return Name 伸缩组名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置伸缩组名称
                     * @param _name 伸缩组名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取伸缩组期望的节点数
                     * @return DesiredSize 伸缩组期望的节点数
                     * 
                     */
                    uint64_t GetDesiredSize() const;

                    /**
                     * 设置伸缩组期望的节点数
                     * @param _desiredSize 伸缩组期望的节点数
                     * 
                     */
                    void SetDesiredSize(const uint64_t& _desiredSize);

                    /**
                     * 判断参数 DesiredSize 是否已赋值
                     * @return DesiredSize 是否已赋值
                     * 
                     */
                    bool DesiredSizeHasBeenSet() const;

                private:

                    /**
                     * 资源组 ID
                     */
                    std::string m_rsgId;
                    bool m_rsgIdHasBeenSet;

                    /**
                     * 伸缩组允许的最大节点数
                     */
                    uint64_t m_maxSize;
                    bool m_maxSizeHasBeenSet;

                    /**
                     * 伸缩组允许的最小节点数
                     */
                    uint64_t m_minSize;
                    bool m_minSizeHasBeenSet;

                    /**
                     * 伸缩组的节点规格
                     */
                    std::string m_instanceType;
                    bool m_instanceTypeHasBeenSet;

                    /**
                     * 资源组所在的集群名
                     */
                    std::string m_cluster;
                    bool m_clusterHasBeenSet;

                    /**
                     * 伸缩组名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 伸缩组期望的节点数
                     */
                    uint64_t m_desiredSize;
                    bool m_desiredSizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIEMS_V20190416_MODEL_CREATERSGASGROUPREQUEST_H_
