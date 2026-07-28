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

#ifndef TENCENTCLOUD_POSTGRES_V20170312_MODEL_PROXYROUTE_H_
#define TENCENTCLOUD_POSTGRES_V20170312_MODEL_PROXYROUTE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Postgres
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * Proxy 路由信息，描述某个 Proxy 接入地址下到具体 PG 节点的路由规则。
                */
                class ProxyRoute : public AbstractModel
                {
                public:
                    ProxyRoute();
                    ~ProxyRoute() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>路由指向的 PG 节点 ID（实例或只读节点 ID）</p>
                     * @return NodeId <p>路由指向的 PG 节点 ID（实例或只读节点 ID）</p>
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置<p>路由指向的 PG 节点 ID（实例或只读节点 ID）</p>
                     * @param _nodeId <p>路由指向的 PG 节点 ID（实例或只读节点 ID）</p>
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
                     * 获取<p>节点角色：master/slave/readonly</p>
                     * @return Role <p>节点角色：master/slave/readonly</p>
                     * 
                     */
                    std::string GetRole() const;

                    /**
                     * 设置<p>节点角色：master/slave/readonly</p>
                     * @param _role <p>节点角色：master/slave/readonly</p>
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
                     * 获取<p>路由权重，取值范围 [0, 100]</p>
                     * @return Weight <p>路由权重，取值范围 [0, 100]</p>
                     * 
                     */
                    int64_t GetWeight() const;

                    /**
                     * 设置<p>路由权重，取值范围 [0, 100]</p>
                     * @param _weight <p>路由权重，取值范围 [0, 100]</p>
                     * 
                     */
                    void SetWeight(const int64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     * 
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取<p>路由状态：available/unavailable</p>
                     * @return Status <p>路由状态：available/unavailable</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>路由状态：available/unavailable</p>
                     * @param _status <p>路由状态：available/unavailable</p>
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
                     * <p>路由指向的 PG 节点 ID（实例或只读节点 ID）</p>
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <p>节点角色：master/slave/readonly</p>
                     */
                    std::string m_role;
                    bool m_roleHasBeenSet;

                    /**
                     * <p>路由权重，取值范围 [0, 100]</p>
                     */
                    int64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * <p>路由状态：available/unavailable</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_POSTGRES_V20170312_MODEL_PROXYROUTE_H_
