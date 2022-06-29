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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_ADDREPLICATIONINSTANCEREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_ADDREPLICATIONINSTANCEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * AddReplicationInstance请求参数结构体
                */
                class AddReplicationInstanceRequest : public AbstractModel
                {
                public:
                    AddReplicationInstanceRequest();
                    ~AddReplicationInstanceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取复制组ID
                     * @return GroupId 复制组ID
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置复制组ID
                     * @param GroupId 复制组ID
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param InstanceId 实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取实例角色，rw可读写，r只读
                     * @return InstanceRole 实例角色，rw可读写，r只读
                     */
                    std::string GetInstanceRole() const;

                    /**
                     * 设置实例角色，rw可读写，r只读
                     * @param InstanceRole 实例角色，rw可读写，r只读
                     */
                    void SetInstanceRole(const std::string& _instanceRole);

                    /**
                     * 判断参数 InstanceRole 是否已赋值
                     * @return InstanceRole 是否已赋值
                     */
                    bool InstanceRoleHasBeenSet() const;

                private:

                    /**
                     * 复制组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 实例角色，rw可读写，r只读
                     */
                    std::string m_instanceRole;
                    bool m_instanceRoleHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_ADDREPLICATIONINSTANCEREQUEST_H_
