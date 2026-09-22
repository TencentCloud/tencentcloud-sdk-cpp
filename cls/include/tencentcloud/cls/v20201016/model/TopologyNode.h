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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_TOPOLOGYNODE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_TOPOLOGYNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 拓扑节点
                */
                class TopologyNode : public AbstractModel
                {
                public:
                    TopologyNode();
                    ~TopologyNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实体 ID</p>
                     * @return EntityId <p>实体 ID</p>
                     * 
                     */
                    std::string GetEntityId() const;

                    /**
                     * 设置<p>实体 ID</p>
                     * @param _entityId <p>实体 ID</p>
                     * 
                     */
                    void SetEntityId(const std::string& _entityId);

                    /**
                     * 判断参数 EntityId 是否已赋值
                     * @return EntityId 是否已赋值
                     * 
                     */
                    bool EntityIdHasBeenSet() const;

                    /**
                     * 获取<p>实体名称</p>
                     * @return Name <p>实体名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>实体名称</p>
                     * @param _name <p>实体名称</p>
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
                     * 获取<p>实体所属域</p>
                     * @return Domain <p>实体所属域</p>
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置<p>实体所属域</p>
                     * @param _domain <p>实体所属域</p>
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取<p>实体所在产品</p>
                     * @return Product <p>实体所在产品</p>
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置<p>实体所在产品</p>
                     * @param _product <p>实体所在产品</p>
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取<p>实体类型</p>
                     * @return EntityClassName <p>实体类型</p>
                     * 
                     */
                    std::string GetEntityClassName() const;

                    /**
                     * 设置<p>实体类型</p>
                     * @param _entityClassName <p>实体类型</p>
                     * 
                     */
                    void SetEntityClassName(const std::string& _entityClassName);

                    /**
                     * 判断参数 EntityClassName 是否已赋值
                     * @return EntityClassName 是否已赋值
                     * 
                     */
                    bool EntityClassNameHasBeenSet() const;

                    /**
                     * 获取<p>距离中心节点深度</p>
                     * @return Depth <p>距离中心节点深度</p>
                     * 
                     */
                    int64_t GetDepth() const;

                    /**
                     * 设置<p>距离中心节点深度</p>
                     * @param _depth <p>距离中心节点深度</p>
                     * 
                     */
                    void SetDepth(const int64_t& _depth);

                    /**
                     * 判断参数 Depth 是否已赋值
                     * @return Depth 是否已赋值
                     * 
                     */
                    bool DepthHasBeenSet() const;

                private:

                    /**
                     * <p>实体 ID</p>
                     */
                    std::string m_entityId;
                    bool m_entityIdHasBeenSet;

                    /**
                     * <p>实体名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>实体所属域</p>
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * <p>实体所在产品</p>
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * <p>实体类型</p>
                     */
                    std::string m_entityClassName;
                    bool m_entityClassNameHasBeenSet;

                    /**
                     * <p>距离中心节点深度</p>
                     */
                    int64_t m_depth;
                    bool m_depthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_TOPOLOGYNODE_H_
