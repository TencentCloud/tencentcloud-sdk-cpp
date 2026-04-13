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

#ifndef TENCENTCLOUD_TROCKET_V20230308_MODEL_CREATEMIGRATIONTASKREQUEST_H_
#define TENCENTCLOUD_TROCKET_V20230308_MODEL_CREATEMIGRATIONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trocket/v20230308/model/TopicItem.h>
#include <tencentcloud/trocket/v20230308/model/ConsumeGroupItem.h>
#include <tencentcloud/trocket/v20230308/model/RoleItem.h>


namespace TencentCloud
{
    namespace Trocket
    {
        namespace V20230308
        {
            namespace Model
            {
                /**
                * CreateMigrationTask请求参数结构体
                */
                class CreateMigrationTaskRequest : public AbstractModel
                {
                public:
                    CreateMigrationTaskRequest();
                    ~CreateMigrationTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得。
                     * @return InstanceId 腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得。
                     * @param _instanceId 腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得。
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
                     * 获取0 - 未指定（存量）
1 - 元数据导入
                     * @return Type 0 - 未指定（存量）
1 - 元数据导入
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置0 - 未指定（存量）
1 - 元数据导入
                     * @param _type 0 - 未指定（存量）
1 - 元数据导入
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
                     * 获取待导入的消费组列表
                     * @return Topics 待导入的消费组列表
                     * 
                     */
                    std::vector<TopicItem> GetTopics() const;

                    /**
                     * 设置待导入的消费组列表
                     * @param _topics 待导入的消费组列表
                     * 
                     */
                    void SetTopics(const std::vector<TopicItem>& _topics);

                    /**
                     * 判断参数 Topics 是否已赋值
                     * @return Topics 是否已赋值
                     * 
                     */
                    bool TopicsHasBeenSet() const;

                    /**
                     * 获取待导入的消费组列表
                     * @return Groups 待导入的消费组列表
                     * 
                     */
                    std::vector<ConsumeGroupItem> GetGroups() const;

                    /**
                     * 设置待导入的消费组列表
                     * @param _groups 待导入的消费组列表
                     * 
                     */
                    void SetGroups(const std::vector<ConsumeGroupItem>& _groups);

                    /**
                     * 判断参数 Groups 是否已赋值
                     * @return Groups 是否已赋值
                     * 
                     */
                    bool GroupsHasBeenSet() const;

                    /**
                     * 获取待导入的角色列表
                     * @return Roles 待导入的角色列表
                     * 
                     */
                    std::vector<RoleItem> GetRoles() const;

                    /**
                     * 设置待导入的角色列表
                     * @param _roles 待导入的角色列表
                     * 
                     */
                    void SetRoles(const std::vector<RoleItem>& _roles);

                    /**
                     * 判断参数 Roles 是否已赋值
                     * @return Roles 是否已赋值
                     * 
                     */
                    bool RolesHasBeenSet() const;

                private:

                    /**
                     * 腾讯云 RocketMQ 实例 ID，从 [DescribeFusionInstanceList](https://cloud.tencent.com/document/api/1493/106745) 接口或控制台获得。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 0 - 未指定（存量）
1 - 元数据导入
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 待导入的消费组列表
                     */
                    std::vector<TopicItem> m_topics;
                    bool m_topicsHasBeenSet;

                    /**
                     * 待导入的消费组列表
                     */
                    std::vector<ConsumeGroupItem> m_groups;
                    bool m_groupsHasBeenSet;

                    /**
                     * 待导入的角色列表
                     */
                    std::vector<RoleItem> m_roles;
                    bool m_rolesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TROCKET_V20230308_MODEL_CREATEMIGRATIONTASKREQUEST_H_
