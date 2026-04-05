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

#ifndef TENCENTCLOUD_OMICS_V20221128_MODEL_HPCNODE_H_
#define TENCENTCLOUD_OMICS_V20221128_MODEL_HPCNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/omics/v20221128/model/HPCInstance.h>
#include <tencentcloud/omics/v20221128/model/Tag.h>


namespace TencentCloud
{
    namespace Omics
    {
        namespace V20221128
        {
            namespace Model
            {
                /**
                * HPC节点
                */
                class HPCNode : public AbstractModel
                {
                public:
                    HPCNode();
                    ~HPCNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>节点ID</p>
                     * @return NodeId <p>节点ID</p>
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置<p>节点ID</p>
                     * @param _nodeId <p>节点ID</p>
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取<p>队列ID</p>
                     * @return QueueId <p>队列ID</p>
                     * 
                     */
                    std::string GetQueueId() const;

                    /**
                     * 设置<p>队列ID</p>
                     * @param _queueId <p>队列ID</p>
                     * 
                     */
                    void SetQueueId(const std::string& _queueId);

                    /**
                     * 判断参数 QueueId 是否已赋值
                     * @return QueueId 是否已赋值
                     * 
                     */
                    bool QueueIdHasBeenSet() const;

                    /**
                     * 获取<p>集群ID</p>
                     * @return ClusterId <p>集群ID</p>
                     * 
                     */
                    std::string GetClusterId() const;

                    /**
                     * 设置<p>集群ID</p>
                     * @param _clusterId <p>集群ID</p>
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
                     * 获取<p>角色</p>
                     * @return Role <p>角色</p>
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置<p>角色</p>
                     * @param _role <p>角色</p>
                     * 
                     */
                    void SetRole(const std::string& _role);

                    /**
                     * 判断参数 Role 是否已赋值
                     * @return Role 是否已赋值
                     * 
                     */
                    bool RoleHasBeenSet() const;

                    /**
                     * 获取<p>类型</p>
                     * @return Type <p>类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>类型</p>
                     * @param _type <p>类型</p>
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
                     * 获取<p>可用区</p>
                     * @return Zone <p>可用区</p>
                     * 
                     */
                    std::string GetZone() const;

                    /**
                     * 设置<p>可用区</p>
                     * @param _zone <p>可用区</p>
                     * 
                     */
                    void SetZone(const std::string& _zone);

                    /**
                     * 判断参数 Zone 是否已赋值
                     * @return Zone 是否已赋值
                     * 
                     */
                    bool ZoneHasBeenSet() const;

                    /**
                     * 获取<p>镜像ID</p>
                     * @return ImageId <p>镜像ID</p>
                     * 
                     */
                    std::string GetImageId() const;

                    /**
                     * 设置<p>镜像ID</p>
                     * @param _imageId <p>镜像ID</p>
                     * 
                     */
                    void SetImageId(const std::string& _imageId);

                    /**
                     * 判断参数 ImageId 是否已赋值
                     * @return ImageId 是否已赋值
                     * 
                     */
                    bool ImageIdHasBeenSet() const;

                    /**
                     * 获取<p>实例信息</p>
                     * @return Instance <p>实例信息</p>
                     * 
                     */
                    HPCInstance GetInstance() const;

                    /**
                     * 设置<p>实例信息</p>
                     * @param _instance <p>实例信息</p>
                     * 
                     */
                    void SetInstance(const HPCInstance& _instance);

                    /**
                     * 判断参数 Instance 是否已赋值
                     * @return Instance 是否已赋值
                     * 
                     */
                    bool InstanceHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
                     * @return Tags <p>标签</p>
                     * 
                     */
                    std::vector<Tag> GetTags() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _tags <p>标签</p>
                     * 
                     */
                    void SetTags(const std::vector<Tag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>节点名称</p>
                     * @return Name <p>节点名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>节点名称</p>
                     * @param _name <p>节点名称</p>
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
                     * 获取<p>队列名称</p>
                     * @return QueueName <p>队列名称</p>
                     * 
                     */
                    std::string GetQueueName() const;

                    /**
                     * 设置<p>队列名称</p>
                     * @param _queueName <p>队列名称</p>
                     * 
                     */
                    void SetQueueName(const std::string& _queueName);

                    /**
                     * 判断参数 QueueName 是否已赋值
                     * @return QueueName 是否已赋值
                     * 
                     */
                    bool QueueNameHasBeenSet() const;

                    /**
                     * 获取<p>节点状态。取值范围：<br>IDLE 空闲<br>DOWN 节点下线<br>MIXED 节点部分使用<br>ALLOC  节点完全分配<br>DRAIN 排空，不接受新任务</p>
                     * @return Status <p>节点状态。取值范围：<br>IDLE 空闲<br>DOWN 节点下线<br>MIXED 节点部分使用<br>ALLOC  节点完全分配<br>DRAIN 排空，不接受新任务</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>节点状态。取值范围：<br>IDLE 空闲<br>DOWN 节点下线<br>MIXED 节点部分使用<br>ALLOC  节点完全分配<br>DRAIN 排空，不接受新任务</p>
                     * @param _status <p>节点状态。取值范围：<br>IDLE 空闲<br>DOWN 节点下线<br>MIXED 节点部分使用<br>ALLOC  节点完全分配<br>DRAIN 排空，不接受新任务</p>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>节点ID</p>
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <p>队列ID</p>
                     */
                    std::string m_queueId;
                    bool m_queueIdHasBeenSet;

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>角色</p>
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * <p>类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>可用区</p>
                     */
                    std::string m_zone;
                    bool m_zoneHasBeenSet;

                    /**
                     * <p>镜像ID</p>
                     */
                    std::string m_imageId;
                    bool m_imageIdHasBeenSet;

                    /**
                     * <p>实例信息</p>
                     */
                    HPCInstance m_instance;
                    bool m_instanceHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::vector<Tag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>节点名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>队列名称</p>
                     */
                    std::string m_queueName;
                    bool m_queueNameHasBeenSet;

                    /**
                     * <p>节点状态。取值范围：<br>IDLE 空闲<br>DOWN 节点下线<br>MIXED 节点部分使用<br>ALLOC  节点完全分配<br>DRAIN 排空，不接受新任务</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OMICS_V20221128_MODEL_HPCNODE_H_
