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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CODEFOLDERNODE_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CODEFOLDERNODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/CodeFolderNode.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 数据探索脚本文件树节点
                */
                class CodeFolderNode : public AbstractModel
                {
                public:
                    CodeFolderNode();
                    ~CodeFolderNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取唯一标识
                     * @return Id 唯一标识
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置唯一标识
                     * @param _id 唯一标识
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取名称
                     * @return Title 名称
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置名称
                     * @param _title 名称
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取类型 folder，script
                     * @return Type 类型 folder，script
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型 folder，script
                     * @param _type 类型 folder，script
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
                     * 获取是否叶子节点
                     * @return IsLeaf 是否叶子节点
                     * 
                     */
                    bool GetIsLeaf() const;

                    /**
                     * 设置是否叶子节点
                     * @param _isLeaf 是否叶子节点
                     * 
                     */
                    void SetIsLeaf(const bool& _isLeaf);

                    /**
                     * 判断参数 IsLeaf 是否已赋值
                     * @return IsLeaf 是否已赋值
                     * 
                     */
                    bool IsLeafHasBeenSet() const;

                    /**
                     * 获取业务参数	
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Params 业务参数	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetParams() const;

                    /**
                     * 设置业务参数	
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _params 业务参数	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParams(const std::string& _params);

                    /**
                     * 判断参数 Params 是否已赋值
                     * @return Params 是否已赋值
                     * 
                     */
                    bool ParamsHasBeenSet() const;

                    /**
                     * 获取权限范围: SHARED, PRIVATE
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessScope 权限范围: SHARED, PRIVATE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAccessScope() const;

                    /**
                     * 设置权限范围: SHARED, PRIVATE
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessScope 权限范围: SHARED, PRIVATE
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessScope(const std::string& _accessScope);

                    /**
                     * 判断参数 AccessScope 是否已赋值
                     * @return AccessScope 是否已赋值
                     * 
                     */
                    bool AccessScopeHasBeenSet() const;

                    /**
                     * 获取节点路径
                     * @return Path 节点路径
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置节点路径
                     * @param _path 节点路径
                     * 
                     */
                    void SetPath(const std::string& _path);

                    /**
                     * 判断参数 Path 是否已赋值
                     * @return Path 是否已赋值
                     * 
                     */
                    bool PathHasBeenSet() const;

                    /**
                     * 获取目录/文件责任人uin
                     * @return OwnerUin 目录/文件责任人uin
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置目录/文件责任人uin
                     * @param _ownerUin 目录/文件责任人uin
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取创建人
                     * @return CreateUserUin 创建人
                     * 
                     */
                    std::string GetCreateUserUin() const;

                    /**
                     * 设置创建人
                     * @param _createUserUin 创建人
                     * 
                     */
                    void SetCreateUserUin(const std::string& _createUserUin);

                    /**
                     * 判断参数 CreateUserUin 是否已赋值
                     * @return CreateUserUin 是否已赋值
                     * 
                     */
                    bool CreateUserUinHasBeenSet() const;

                    /**
                     * 获取当前用户对节点拥有的权限	
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodePermission 当前用户对节点拥有的权限	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodePermission() const;

                    /**
                     * 设置当前用户对节点拥有的权限	
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodePermission 当前用户对节点拥有的权限	
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodePermission(const std::string& _nodePermission);

                    /**
                     * 判断参数 NodePermission 是否已赋值
                     * @return NodePermission 是否已赋值
                     * 
                     */
                    bool NodePermissionHasBeenSet() const;

                    /**
                     * 获取子节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Children 子节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<CodeFolderNode> GetChildren() const;

                    /**
                     * 设置子节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _children 子节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChildren(const std::vector<CodeFolderNode>& _children);

                    /**
                     * 判断参数 Children 是否已赋值
                     * @return Children 是否已赋值
                     * 
                     */
                    bool ChildrenHasBeenSet() const;

                private:

                    /**
                     * 唯一标识
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 类型 folder，script
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 是否叶子节点
                     */
                    bool m_isLeaf;
                    bool m_isLeafHasBeenSet;

                    /**
                     * 业务参数	
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_params;
                    bool m_paramsHasBeenSet;

                    /**
                     * 权限范围: SHARED, PRIVATE
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_accessScope;
                    bool m_accessScopeHasBeenSet;

                    /**
                     * 节点路径
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 目录/文件责任人uin
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * 创建人
                     */
                    std::string m_createUserUin;
                    bool m_createUserUinHasBeenSet;

                    /**
                     * 当前用户对节点拥有的权限	
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodePermission;
                    bool m_nodePermissionHasBeenSet;

                    /**
                     * 子节点列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<CodeFolderNode> m_children;
                    bool m_childrenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CODEFOLDERNODE_H_
