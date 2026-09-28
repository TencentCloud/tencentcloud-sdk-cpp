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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILENODE_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILENODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/FileMeta.h>
#include <tencentcloud/databuddy/v20260715/model/UserInfo.h>
#include <tencentcloud/databuddy/v20260715/model/GitRepoConfig.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 文件节点
                */
                class FileNode : public AbstractModel
                {
                public:
                    FileNode();
                    ~FileNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>当前节点</p>
                     * @return Node <p>当前节点</p>
                     * 
                     */
                    FileMeta GetNode() const;

                    /**
                     * 设置<p>当前节点</p>
                     * @param _node <p>当前节点</p>
                     * 
                     */
                    void SetNode(const FileMeta& _node);

                    /**
                     * 判断参数 Node 是否已赋值
                     * @return Node 是否已赋值
                     * 
                     */
                    bool NodeHasBeenSet() const;

                    /**
                     * 获取<p>父节点</p>
                     * @return Parent <p>父节点</p>
                     * 
                     */
                    FileMeta GetParent() const;

                    /**
                     * 设置<p>父节点</p>
                     * @param _parent <p>父节点</p>
                     * 
                     */
                    void SetParent(const FileMeta& _parent);

                    /**
                     * 判断参数 Parent 是否已赋值
                     * @return Parent 是否已赋值
                     * 
                     */
                    bool ParentHasBeenSet() const;

                    /**
                     * 获取<p>创建人</p>
                     * @return Creator <p>创建人</p>
                     * 
                     */
                    UserInfo GetCreator() const;

                    /**
                     * 设置<p>创建人</p>
                     * @param _creator <p>创建人</p>
                     * 
                     */
                    void SetCreator(const UserInfo& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     * 
                     */
                    bool CreatorHasBeenSet() const;

                    /**
                     * 获取<p>拥有者</p>
                     * @return Owner <p>拥有者</p>
                     * 
                     */
                    UserInfo GetOwner() const;

                    /**
                     * 设置<p>拥有者</p>
                     * @param _owner <p>拥有者</p>
                     * 
                     */
                    void SetOwner(const UserInfo& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     * 
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取<p>节点类型</p>
                     * @return NodeType <p>节点类型</p>
                     * 
                     */
                    std::string GetNodeType() const;

                    /**
                     * 设置<p>节点类型</p>
                     * @param _nodeType <p>节点类型</p>
                     * 
                     */
                    void SetNodeType(const std::string& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取<p>原始路径</p>
                     * @return OriginPath <p>原始路径</p>
                     * 
                     */
                    std::string GetOriginPath() const;

                    /**
                     * 设置<p>原始路径</p>
                     * @param _originPath <p>原始路径</p>
                     * 
                     */
                    void SetOriginPath(const std::string& _originPath);

                    /**
                     * 判断参数 OriginPath 是否已赋值
                     * @return OriginPath 是否已赋值
                     * 
                     */
                    bool OriginPathHasBeenSet() const;

                    /**
                     * 获取<p>回收时间</p>
                     * @return DeleteTime <p>回收时间</p>
                     * 
                     */
                    std::string GetDeleteTime() const;

                    /**
                     * 设置<p>回收时间</p>
                     * @param _deleteTime <p>回收时间</p>
                     * 
                     */
                    void SetDeleteTime(const std::string& _deleteTime);

                    /**
                     * 判断参数 DeleteTime 是否已赋值
                     * @return DeleteTime 是否已赋值
                     * 
                     */
                    bool DeleteTimeHasBeenSet() const;

                    /**
                     * 获取<p>文件git配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return GitConfig <p>文件git配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    GitRepoConfig GetGitConfig() const;

                    /**
                     * 设置<p>文件git配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _gitConfig <p>文件git配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetGitConfig(const GitRepoConfig& _gitConfig);

                    /**
                     * 判断参数 GitConfig 是否已赋值
                     * @return GitConfig 是否已赋值
                     * 
                     */
                    bool GitConfigHasBeenSet() const;

                private:

                    /**
                     * <p>当前节点</p>
                     */
                    FileMeta m_node;
                    bool m_nodeHasBeenSet;

                    /**
                     * <p>父节点</p>
                     */
                    FileMeta m_parent;
                    bool m_parentHasBeenSet;

                    /**
                     * <p>创建人</p>
                     */
                    UserInfo m_creator;
                    bool m_creatorHasBeenSet;

                    /**
                     * <p>拥有者</p>
                     */
                    UserInfo m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * <p>节点类型</p>
                     */
                    std::string m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>原始路径</p>
                     */
                    std::string m_originPath;
                    bool m_originPathHasBeenSet;

                    /**
                     * <p>回收时间</p>
                     */
                    std::string m_deleteTime;
                    bool m_deleteTimeHasBeenSet;

                    /**
                     * <p>文件git配置</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    GitRepoConfig m_gitConfig;
                    bool m_gitConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILENODE_H_
