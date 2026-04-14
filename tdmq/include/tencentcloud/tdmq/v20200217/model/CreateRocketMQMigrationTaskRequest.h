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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQMIGRATIONTASKREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQMIGRATIONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RocketMQTopicConfig.h>
#include <tencentcloud/tdmq/v20200217/model/RocketMQGroupConfig.h>
#include <tencentcloud/tdmq/v20200217/model/RocketMQRoleConfig.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * CreateRocketMQMigrationTask请求参数结构体
                */
                class CreateRocketMQMigrationTaskRequest : public AbstractModel
                {
                public:
                    CreateRocketMQMigrationTaskRequest();
                    ~CreateRocketMQMigrationTaskRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取<p>任务类型：<br>0，集群迁移<br>1，导入到指定命名空间</p>
                     * @return Type <p>任务类型：<br>0，集群迁移<br>1，导入到指定命名空间</p>
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置<p>任务类型：<br>0，集群迁移<br>1，导入到指定命名空间</p>
                     * @param _type <p>任务类型：<br>0，集群迁移<br>1，导入到指定命名空间</p>
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>待导入的主题列表</p>
                     * @return Topics <p>待导入的主题列表</p>
                     * 
                     */
                    std::vector<RocketMQTopicConfig> GetTopics() const;

                    /**
                     * 设置<p>待导入的主题列表</p>
                     * @param _topics <p>待导入的主题列表</p>
                     * 
                     */
                    void SetTopics(const std::vector<RocketMQTopicConfig>& _topics);

                    /**
                     * 判断参数 Topics 是否已赋值
                     * @return Topics 是否已赋值
                     * 
                     */
                    bool TopicsHasBeenSet() const;

                    /**
                     * 获取<p>待导入的消费组列表</p>
                     * @return Groups <p>待导入的消费组列表</p>
                     * 
                     */
                    std::vector<RocketMQGroupConfig> GetGroups() const;

                    /**
                     * 设置<p>待导入的消费组列表</p>
                     * @param _groups <p>待导入的消费组列表</p>
                     * 
                     */
                    void SetGroups(const std::vector<RocketMQGroupConfig>& _groups);

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     * 
                     */
                    bool GroupsHasBeenSet() const;

                    /**
                     * 获取<p>待导入的角色列表</p>
                     * @return Roles <p>待导入的角色列表</p>
                     * 
                     */
                    std::vector<RocketMQRoleConfig> GetRoles() const;

                    /**
                     * 设置<p>待导入的角色列表</p>
                     * @param _roles <p>待导入的角色列表</p>
                     * 
                     */
                    void SetRoles(const std::vector<RocketMQRoleConfig>& _roles);

                    /**
                     * 判断参数 Roles 是否已赋值
                     * @return Roles 是否已赋值
                     * 
                     */
                    bool RolesHasBeenSet() const;

                    /**
                     * 获取<p>指定导入的命名空间</p>
                     * @return Namespace <p>指定导入的命名空间</p>
                     * 
                     */
                    std::string GetNamespace() const;

                    /**
                     * 设置<p>指定导入的命名空间</p>
                     * @param _namespace <p>指定导入的命名空间</p>
                     * 
                     */
                    void SetNamespace(const std::string& _namespace);

                    /**
                     * 判断参数 Namespace 是否已赋值
                     * @return Namespace 是否已赋值
                     * 
                     */
                    bool NamespaceHasBeenSet() const;

                private:

                    /**
                     * <p>集群ID</p>
                     */
                    std::string m_clusterId;
                    bool m_clusterIdHasBeenSet;

                    /**
                     * <p>任务类型：<br>0，集群迁移<br>1，导入到指定命名空间</p>
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>待导入的主题列表</p>
                     */
                    std::vector<RocketMQTopicConfig> m_topics;
                    bool m_topicsHasBeenSet;

                    /**
                     * <p>待导入的消费组列表</p>
                     */
                    std::vector<RocketMQGroupConfig> m_groups;
                    bool m_groupsHasBeenSet;

                    /**
                     * <p>待导入的角色列表</p>
                     */
                    std::vector<RocketMQRoleConfig> m_roles;
                    bool m_rolesHasBeenSet;

                    /**
                     * <p>指定导入的命名空间</p>
                     */
                    std::string m_namespace;
                    bool m_namespaceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CREATEROCKETMQMIGRATIONTASKREQUEST_H_
