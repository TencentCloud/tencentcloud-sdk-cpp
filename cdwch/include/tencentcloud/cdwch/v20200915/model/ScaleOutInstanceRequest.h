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
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例唯一ID
                     * @param InstanceId 实例唯一ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取节点类型，DATA：clickhouse节点，COMMON：为zookeeper节点
                     * @return Type 节点类型，DATA：clickhouse节点，COMMON：为zookeeper节点
                     */
                    std::string GetType() const;

                    /**
                     * 设置节点类型，DATA：clickhouse节点，COMMON：为zookeeper节点
                     * @param Type 节点类型，DATA：clickhouse节点，COMMON：为zookeeper节点
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取调整clickhouse节点数量
                     * @return NodeCount 调整clickhouse节点数量
                     */
                    int64_t GetNodeCount() const;

                    /**
                     * 设置调整clickhouse节点数量
                     * @param NodeCount 调整clickhouse节点数量
                     */
                    void SetNodeCount(const int64_t& _nodeCount);

                    /**
                     * 判断参数 NodeCount 是否已赋值
                     * @return NodeCount 是否已赋值
                     */
                    bool NodeCountHasBeenSet() const;

                    /**
                     * 获取v_cluster分组，	
新增扩容节点将加入到已选择的v_cluster分组中，提交同步VIP生效.
                     * @return ScaleOutCluster v_cluster分组，	
新增扩容节点将加入到已选择的v_cluster分组中，提交同步VIP生效.
                     */
                    std::string GetScaleOutCluster() const;

                    /**
                     * 设置v_cluster分组，	
新增扩容节点将加入到已选择的v_cluster分组中，提交同步VIP生效.
                     * @param ScaleOutCluster v_cluster分组，	
新增扩容节点将加入到已选择的v_cluster分组中，提交同步VIP生效.
                     */
                    void SetScaleOutCluster(const std::string& _scaleOutCluster);

                    /**
                     * 判断参数 ScaleOutCluster 是否已赋值
                     * @return ScaleOutCluster 是否已赋值
                     */
                    bool ScaleOutClusterHasBeenSet() const;

                    /**
                     * 获取子网剩余ip数量，用于判断当前实例子网剩余ip数是否能扩容。需要根据实际填写
                     * @return UserSubnetIPNum 子网剩余ip数量，用于判断当前实例子网剩余ip数是否能扩容。需要根据实际填写
                     */
                    int64_t GetUserSubnetIPNum() const;

                    /**
                     * 设置子网剩余ip数量，用于判断当前实例子网剩余ip数是否能扩容。需要根据实际填写
                     * @param UserSubnetIPNum 子网剩余ip数量，用于判断当前实例子网剩余ip数是否能扩容。需要根据实际填写
                     */
                    void SetUserSubnetIPNum(const int64_t& _userSubnetIPNum);

                    /**
                     * 判断参数 UserSubnetIPNum 是否已赋值
                     * @return UserSubnetIPNum 是否已赋值
                     */
                    bool UserSubnetIPNumHasBeenSet() const;

                    /**
                     * 获取节点同步ip
                     * @return ScaleOutNodeIp 节点同步ip
                     */
                    std::string GetScaleOutNodeIp() const;

                    /**
                     * 设置节点同步ip
                     * @param ScaleOutNodeIp 节点同步ip
                     */
                    void SetScaleOutNodeIp(const std::string& _scaleOutNodeIp);

                    /**
                     * 判断参数 ScaleOutNodeIp 是否已赋值
                     * @return ScaleOutNodeIp 是否已赋值
                     */
                    bool ScaleOutNodeIpHasBeenSet() const;

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
                     * 节点同步ip
                     */
                    std::string m_scaleOutNodeIp;
                    bool m_scaleOutNodeIpHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_SCALEOUTINSTANCEREQUEST_H_
