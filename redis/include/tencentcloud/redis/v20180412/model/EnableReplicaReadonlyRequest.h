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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_ENABLEREPLICAREADONLYREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_ENABLEREPLICAREADONLYREQUEST_H_

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
                * EnableReplicaReadonly请求参数结构体
                */
                class EnableReplicaReadonlyRequest : public AbstractModel
                {
                public:
                    EnableReplicaReadonlyRequest();
                    ~EnableReplicaReadonlyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * @return InstanceId 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * @param _instanceId 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
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
                     * 获取只读路由策略。
- master：表示只读路由至主节点。
- replication：表示只读路由至从节点。
- 默认策略：表示写主节点，读从节点。
                     * @return ReadonlyPolicy 只读路由策略。
- master：表示只读路由至主节点。
- replication：表示只读路由至从节点。
- 默认策略：表示写主节点，读从节点。
                     * 
                     */
                    std::vector<std::string> GetReadonlyPolicy() const;

                    /**
                     * 设置只读路由策略。
- master：表示只读路由至主节点。
- replication：表示只读路由至从节点。
- 默认策略：表示写主节点，读从节点。
                     * @param _readonlyPolicy 只读路由策略。
- master：表示只读路由至主节点。
- replication：表示只读路由至从节点。
- 默认策略：表示写主节点，读从节点。
                     * 
                     */
                    void SetReadonlyPolicy(const std::vector<std::string>& _readonlyPolicy);

                    /**
                     * 判断参数 ReadonlyPolicy 是否已赋值
                     * @return ReadonlyPolicy 是否已赋值
                     * 
                     */
                    bool ReadonlyPolicyHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 只读路由策略。
- master：表示只读路由至主节点。
- replication：表示只读路由至从节点。
- 默认策略：表示写主节点，读从节点。
                     */
                    std::vector<std::string> m_readonlyPolicy;
                    bool m_readonlyPolicyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_ENABLEREPLICAREADONLYREQUEST_H_
