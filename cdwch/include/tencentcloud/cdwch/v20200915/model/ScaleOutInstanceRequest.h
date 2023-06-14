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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_SCALEOUTINSTANCEREQUEST_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_SCALEOUTINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * ScaleOutInstance请求参数结构体
                */
                class ScaleOutInstanceRequest : public AbstractModel
                {
                public:
                    ScaleOutInstanceRequest();
                    ~ScaleOutInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例唯一ID
                     * @return InstanceId 实例唯一ID
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例唯一ID
                     * @param _instanceId 实例唯一ID
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取节点类型，DATA：clickhouse节点，COMMON：为zookeeper节点
                     * @return Type 节点类型，DATA：clickhouse节点，COMMON：为zookeeper节点
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置节点类型，DATA：clickhouse节点，COMMON：为zookeeper节点
                     * @param _type 节点类型，DATA：clickhouse节点，COMMON：为zookeeper节点
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取调整clickhouse节点数量
                     * @return NodeCount 调整clickhouse节点数量
                     * 
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 设置调整clickhouse节点数量
                     * @param _nodeCount 调整clickhouse节点数量
                     * 
                     */
                    void SetNodeCount(const int64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     * 
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取v_cluster分组，	
新增扩容节点将加入到已选择的v_cluster分组中，提交同步VIP生效.
                     * @return ScaleOutCluster v_cluster分组，	
新增扩容节点将加入到已选择的v_cluster分组中，提交同步VIP生效.
                     * 
                     */
                    std::string GetScaleOutCluster() const;

                    /**
                     * 设置v_cluster分组，	
新增扩容节点将加入到已选择的v_cluster分组中，提交同步VIP生效.
                     * @param _scaleOutCluster v_cluster分组，	
新增扩容节点将加入到已选择的v_cluster分组中，提交同步VIP生效.
                     * 
                     */
                    void SetScaleOutCluster(const std::string& _scaleOutCluster);

                    /**
                     * 判断参数 ScaleOutCluster 是否已赋值
                     * @return ScaleOutCluster 是否已赋值
                     * 
                     */
                    bool ScaleOutClusterHasBeenSet() const;

                    /**
                     * 获取子网剩余ip数量，用于判断当前实例子网剩余ip数是否能扩容。需要根据实际填写
                     * @return UserSubnetIPNum 子网剩余ip数量，用于判断当前实例子网剩余ip数是否能扩容。需要根据实际填写
                     * 
                     */
                    int64_t GetUserSubnetIPNum() const;

                    /**
                     * 设置子网剩余ip数量，用于判断当前实例子网剩余ip数是否能扩容。需要根据实际填写
                     * @param _userSubnetIPNum 子网剩余ip数量，用于判断当前实例子网剩余ip数是否能扩容。需要根据实际填写
                     * 
                     */
                    void SetUserSubnetIPNum(const int64_t& _userSubnetIPNum);

                    /**
                     * 判断参数 UserSubnetIPNum 是否已赋值
                     * @return UserSubnetIPNum 是否已赋值
                     * 
                     */
                    bool UserSubnetIPNumHasBeenSet() const;

                    /**
                     * 获取同步元数据节点IP （uip），扩容的时候必填
                     * @return ScaleOutNodeIp 同步元数据节点IP （uip），扩容的时候必填
                     * 
                     */
                    std::string GetScaleOutNodeIp() const;

                    /**
                     * 设置同步元数据节点IP （uip），扩容的时候必填
                     * @param _scaleOutNodeIp 同步元数据节点IP （uip），扩容的时候必填
                     * 
                     */
                    void SetScaleOutNodeIp(const std::string& _scaleOutNodeIp);

                    /**
                     * 判断参数 ScaleOutNodeIp 是否已赋值
                     * @return ScaleOutNodeIp 是否已赋值
                     * 
                     */
                    bool ScaleOutNodeIpHasBeenSet() const;

                    /**
                     * 获取缩容节点shard的节点IP （uip），其中ha集群需要主副节点ip都传入以逗号分隔，缩容的时候必填
                     * @return ReduceShardInfo 缩容节点shard的节点IP （uip），其中ha集群需要主副节点ip都传入以逗号分隔，缩容的时候必填
                     * 
                     */
                    std::vector<std::string> GetReduceShardInfo() const;

                    /**
                     * 设置缩容节点shard的节点IP （uip），其中ha集群需要主副节点ip都传入以逗号分隔，缩容的时候必填
                     * @param _reduceShardInfo 缩容节点shard的节点IP （uip），其中ha集群需要主副节点ip都传入以逗号分隔，缩容的时候必填
                     * 
                     */
                    void SetReduceShardInfo(const std::vector<std::string>& _reduceShardInfo);

                    /**
                     * 判断参数 ReduceShardInfo 是否已赋值
                     * @return ReduceShardInfo 是否已赋值
                     * 
                     */
                    bool ReduceShardInfoHasBeenSet() const;

                private:

                    /**
                     * 实例唯一ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 节点类型，DATA：clickhouse节点，COMMON：为zookeeper节点
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 调整clickhouse节点数量
                     */
                    int64_t m_nodeCount;
                    bool m_nodeCountHasBeenSet;

                    /**
                     * v_cluster分组，	
新增扩容节点将加入到已选择的v_cluster分组中，提交同步VIP生效.
                     */
                    std::string m_scaleOutCluster;
                    bool m_scaleOutClusterHasBeenSet;

                    /**
                     * 子网剩余ip数量，用于判断当前实例子网剩余ip数是否能扩容。需要根据实际填写
                     */
                    int64_t m_userSubnetIPNum;
                    bool m_userSubnetIPNumHasBeenSet;

                    /**
                     * 同步元数据节点IP （uip），扩容的时候必填
                     */
                    std::string m_scaleOutNodeIp;
                    bool m_scaleOutNodeIpHasBeenSet;

                    /**
                     * 缩容节点shard的节点IP （uip），其中ha集群需要主副节点ip都传入以逗号分隔，缩容的时候必填
                     */
                    std::vector<std::string> m_reduceShardInfo;
                    bool m_reduceShardInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_SCALEOUTINSTANCEREQUEST_H_
