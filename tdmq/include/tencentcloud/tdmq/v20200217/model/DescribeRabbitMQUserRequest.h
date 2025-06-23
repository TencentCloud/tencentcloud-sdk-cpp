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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQUSERREQUEST_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQUSERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRabbitMQUser请求参数结构体
                */
                class DescribeRabbitMQUserRequest : public AbstractModel
                {
                public:
                    DescribeRabbitMQUserRequest();
                    ~DescribeRabbitMQUserRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，形如 amqp-xxxxxxxx。有效的 InstanceId 可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询。
                     * @return InstanceId 实例 ID，形如 amqp-xxxxxxxx。有效的 InstanceId 可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，形如 amqp-xxxxxxxx。有效的 InstanceId 可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询。
                     * @param _instanceId 实例 ID，形如 amqp-xxxxxxxx。有效的 InstanceId 可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询。
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
                     * 获取用户名检索，支持前缀匹配，后缀匹配
                     * @return SearchUser 用户名检索，支持前缀匹配，后缀匹配
                     * 
                     */
                    std::string GetSearchUser() const;

                    /**
                     * 设置用户名检索，支持前缀匹配，后缀匹配
                     * @param _searchUser 用户名检索，支持前缀匹配，后缀匹配
                     * 
                     */
                    void SetSearchUser(const std::string& _searchUser);

                    /**
                     * 判断参数 SearchUser 是否已赋值
                     * @return SearchUser 是否已赋值
                     * 
                     */
                    bool SearchUserHasBeenSet() const;

                    /**
                     * 获取分页 Offset，默认 0
                     * @return Offset 分页 Offset，默认 0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页 Offset，默认 0
                     * @param _offset 分页 Offset，默认 0
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
                     * 获取分页 Limit，默认 20
                     * @return Limit 分页 Limit，默认 20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页 Limit，默认 20
                     * @param _limit 分页 Limit，默认 20
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
                     * 获取用户名，精确查询
                     * @return User 用户名，精确查询
                     * 
                     */
                    std::string GetUser() const;

                    /**
                     * 设置用户名，精确查询
                     * @param _user 用户名，精确查询
                     * 
                     */
                    void SetUser(const std::string& _user);

                    /**
                     * 判断参数 User 是否已赋值
                     * @return User 是否已赋值
                     * 
                     */
                    bool UserHasBeenSet() const;

                    /**
                     * 获取用户标签，用于决定改用户访问 RabbitMQ Management 的权限范围
management：普通控制台用户，monitoring：管理型控制台用户，其他值：非控制台用户
                     * @return Tags 用户标签，用于决定改用户访问 RabbitMQ Management 的权限范围
management：普通控制台用户，monitoring：管理型控制台用户，其他值：非控制台用户
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置用户标签，用于决定改用户访问 RabbitMQ Management 的权限范围
management：普通控制台用户，monitoring：管理型控制台用户，其他值：非控制台用户
                     * @param _tags 用户标签，用于决定改用户访问 RabbitMQ Management 的权限范围
management：普通控制台用户，monitoring：管理型控制台用户，其他值：非控制台用户
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，形如 amqp-xxxxxxxx。有效的 InstanceId 可通过登录 [TDMQ RabbitMQ 控制台](https://console.cloud.tencent.com/trabbitmq/cluster?rid=1)查询。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 用户名检索，支持前缀匹配，后缀匹配
                     */
                    std::string m_searchUser;
                    bool m_searchUserHasBeenSet;

                    /**
                     * 分页 Offset，默认 0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页 Limit，默认 20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 用户名，精确查询
                     */
                    std::string m_user;
                    bool m_userHasBeenSet;

                    /**
                     * 用户标签，用于决定改用户访问 RabbitMQ Management 的权限范围
management：普通控制台用户，monitoring：管理型控制台用户，其他值：非控制台用户
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQUSERREQUEST_H_
