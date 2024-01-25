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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DSKETTLESERVERFOLDERTREENODEDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DSKETTLESERVERFOLDERTREENODEDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/DsKettleServerFolderTreeNodeDto.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * kettle 服务器文件树节点
                */
                class DsKettleServerFolderTreeNodeDto : public AbstractModel
                {
                public:
                    DsKettleServerFolderTreeNodeDto();
                    ~DsKettleServerFolderTreeNodeDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id 节点编号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置节点编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id 节点编号
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Title 名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _title 名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取带后缀名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 带后缀名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置带后缀名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name 带后缀名称
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取类型  file 或者 folder
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type 类型  file 或者 folder
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型  file 或者 folder
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type 类型  file 或者 folder
注意：此字段可能返回 null，表示取不到有效值。
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsLeaf 是否叶子节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetIsLeaf() const;

                    /**
                     * 设置是否叶子节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _isLeaf 是否叶子节点
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Path 路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _path 路径
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取子节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Children 子节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DsKettleServerFolderTreeNodeDto> GetChildren() const;

                    /**
                     * 设置子节点
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _children 子节点
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChildren(const std::vector<DsKettleServerFolderTreeNodeDto>& _children);

                    /**
                     * 判断参数 Children 是否已赋值
                     * @return Children 是否已赋值
                     * 
                     */
                    bool ChildrenHasBeenSet() const;

                    /**
                     * 获取执行命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExecuteCommand 执行命令
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExecuteCommand() const;

                    /**
                     * 设置执行命令
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _executeCommand 执行命令
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExecuteCommand(const std::string& _executeCommand);

                    /**
                     * 判断参数 ExecuteCommand 是否已赋值
                     * @return ExecuteCommand 是否已赋值
                     * 
                     */
                    bool ExecuteCommandHasBeenSet() const;

                private:

                    /**
                     * 节点编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 带后缀名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 类型  file 或者 folder
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 是否叶子节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isLeaf;
                    bool m_isLeafHasBeenSet;

                    /**
                     * 路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * 子节点
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DsKettleServerFolderTreeNodeDto> m_children;
                    bool m_childrenHasBeenSet;

                    /**
                     * 执行命令
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_executeCommand;
                    bool m_executeCommandHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DSKETTLESERVERFOLDERTREENODEDTO_H_
