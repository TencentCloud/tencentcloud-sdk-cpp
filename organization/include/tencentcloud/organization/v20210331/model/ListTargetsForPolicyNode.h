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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTTARGETSFORPOLICYNODE_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTTARGETSFORPOLICYNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * 查询某个指定SCP策略关联的目标列表
                */
                class ListTargetsForPolicyNode : public AbstractModel
                {
                public:
                    ListTargetsForPolicyNode();
                    ~ListTargetsForPolicyNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>scp账号uin或节点Id</p>
                     * @return Uin <p>scp账号uin或节点Id</p>
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置<p>scp账号uin或节点Id</p>
                     * @param _uin <p>scp账号uin或节点Id</p>
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取<p>关联类型 1-节点关联 2-用户关联</p>
                     * @return RelatedType <p>关联类型 1-节点关联 2-用户关联</p>
                     * 
                     */
                    uint64_t GetRelatedType() const;

                    /**
                     * 设置<p>关联类型 1-节点关联 2-用户关联</p>
                     * @param _relatedType <p>关联类型 1-节点关联 2-用户关联</p>
                     * 
                     */
                    void SetRelatedType(const uint64_t& _relatedType);

                    /**
                     * 判断参数 RelatedType 是否已赋值
                     * @return RelatedType 是否已赋值
                     * 
                     */
                    bool RelatedTypeHasBeenSet() const;

                    /**
                     * 获取<p>账号或者节点名称</p>
                     * @return Name <p>账号或者节点名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>账号或者节点名称</p>
                     * @param _name <p>账号或者节点名称</p>
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
                     * 获取<p>绑定时间</p>
                     * @return AddTime <p>绑定时间</p>
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 设置<p>绑定时间</p>
                     * @param _addTime <p>绑定时间</p>
                     * 
                     */
                    void SetAddTime(const std::string& _addTime);

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取<p>目标对象所属的组织层级名称路径</p>
                     * @return NodePath <p>目标对象所属的组织层级名称路径</p>
                     * 
                     */
                    std::vector<std::string> GetNodePath() const;

                    /**
                     * 设置<p>目标对象所属的组织层级名称路径</p>
                     * @param _nodePath <p>目标对象所属的组织层级名称路径</p>
                     * 
                     */
                    void SetNodePath(const std::vector<std::string>& _nodePath);

                    /**
                     * 判断参数 NodePath 是否已赋值
                     * @return NodePath 是否已赋值
                     * 
                     */
                    bool NodePathHasBeenSet() const;

                    /**
                     * 获取<p>对应的组织层级 ID 路径</p>
                     * @return NodePathIds <p>对应的组织层级 ID 路径</p>
                     * 
                     */
                    std::vector<int64_t> GetNodePathIds() const;

                    /**
                     * 设置<p>对应的组织层级 ID 路径</p>
                     * @param _nodePathIds <p>对应的组织层级 ID 路径</p>
                     * 
                     */
                    void SetNodePathIds(const std::vector<int64_t>& _nodePathIds);

                    /**
                     * 判断参数 NodePathIds 是否已赋值
                     * @return NodePathIds 是否已赋值
                     * 
                     */
                    bool NodePathIdsHasBeenSet() const;

                private:

                    /**
                     * <p>scp账号uin或节点Id</p>
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * <p>关联类型 1-节点关联 2-用户关联</p>
                     */
                    uint64_t m_relatedType;
                    bool m_relatedTypeHasBeenSet;

                    /**
                     * <p>账号或者节点名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>绑定时间</p>
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * <p>目标对象所属的组织层级名称路径</p>
                     */
                    std::vector<std::string> m_nodePath;
                    bool m_nodePathHasBeenSet;

                    /**
                     * <p>对应的组织层级 ID 路径</p>
                     */
                    std::vector<int64_t> m_nodePathIds;
                    bool m_nodePathIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_LISTTARGETSFORPOLICYNODE_H_
