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

#ifndef TENCENTCLOUD_TKE_V20220501_MODEL_HEALTHCHECKPOLICYBINDING_H_
#define TENCENTCLOUD_TKE_V20220501_MODEL_HEALTHCHECKPOLICYBINDING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20220501
        {
            namespace Model
            {
                /**
                * 健康检测策略和节点池的绑定关系
                */
                class HealthCheckPolicyBinding : public AbstractModel
                {
                public:
                    HealthCheckPolicyBinding();
                    ~HealthCheckPolicyBinding() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取健康检测策略名称
                     * @return Name 健康检测策略名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置健康检测策略名称
                     * @param _name 健康检测策略名称
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
                     * 获取规则创建时间
                     * @return CreatedAt 规则创建时间
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置规则创建时间
                     * @param _createdAt 规则创建时间
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取关联节点池数组
                     * @return NodePools 关联节点池数组
                     * 
                     */
                    std::vector<std::string> GetNodePools() const;

                    /**
                     * 设置关联节点池数组
                     * @param _nodePools 关联节点池数组
                     * 
                     */
                    void SetNodePools(const std::vector<std::string>& _nodePools);

                    /**
                     * 判断参数 NodePools 是否已赋值
                     * @return NodePools 是否已赋值
                     * 
                     */
                    bool NodePoolsHasBeenSet() const;

                private:

                    /**
                     * 健康检测策略名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 规则创建时间
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * 关联节点池数组
                     */
                    std::vector<std::string> m_nodePools;
                    bool m_nodePoolsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20220501_MODEL_HEALTHCHECKPOLICYBINDING_H_
