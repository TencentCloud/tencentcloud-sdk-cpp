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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_FILENODE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_FILENODE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/FileNode.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 文件/目录节点
                */
                class FileNode : public AbstractModel
                {
                public:
                    FileNode();
                    ~FileNode() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>文件/目录名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name <p>文件/目录名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>文件/目录名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name <p>文件/目录名称</p>
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
                     * 获取<p>节点类型：file 或 directory</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>节点类型：file 或 directory</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>节点类型：file 或 directory</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>节点类型：file 或 directory</p>
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
                     * 获取<p>文件大小（字节），目录为 null</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Size <p>文件大小（字节），目录为 null</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置<p>文件大小（字节），目录为 null</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _size <p>文件大小（字节），目录为 null</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取<p>子节点列表（仅目录有效）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Children <p>子节点列表（仅目录有效）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<FileNode> GetChildren() const;

                    /**
                     * 设置<p>子节点列表（仅目录有效）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _children <p>子节点列表（仅目录有效）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChildren(const std::vector<FileNode>& _children);

                    /**
                     * 判断参数 Children 是否已赋值
                     * @return Children 是否已赋值
                     * 
                     */
                    bool ChildrenHasBeenSet() const;

                    /**
                     * 获取<p>文件最后修改时间（毫秒时间戳）</p><p>单位：ms</p>
                     * @return LastModifyTime <p>文件最后修改时间（毫秒时间戳）</p><p>单位：ms</p>
                     * 
                     */
                    int64_t GetLastModifyTime() const;

                    /**
                     * 设置<p>文件最后修改时间（毫秒时间戳）</p><p>单位：ms</p>
                     * @param _lastModifyTime <p>文件最后修改时间（毫秒时间戳）</p><p>单位：ms</p>
                     * 
                     */
                    void SetLastModifyTime(const int64_t& _lastModifyTime);

                    /**
                     * 判断参数 LastModifyTime 是否已赋值
                     * @return LastModifyTime 是否已赋值
                     * 
                     */
                    bool LastModifyTimeHasBeenSet() const;

                private:

                    /**
                     * <p>文件/目录名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>节点类型：file 或 directory</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>文件大小（字节），目录为 null</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * <p>子节点列表（仅目录有效）</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<FileNode> m_children;
                    bool m_childrenHasBeenSet;

                    /**
                     * <p>文件最后修改时间（毫秒时间戳）</p><p>单位：ms</p>
                     */
                    int64_t m_lastModifyTime;
                    bool m_lastModifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_FILENODE_H_
