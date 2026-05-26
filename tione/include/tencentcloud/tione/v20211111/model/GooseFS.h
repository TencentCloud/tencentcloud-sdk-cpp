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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_GOOSEFS_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_GOOSEFS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 配置GooseFS参数
                */
                class GooseFS : public AbstractModel
                {
                public:
                    GooseFS();
                    ~GooseFS() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>goosefs实例id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Id <p>goosefs实例id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>goosefs实例id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _id <p>goosefs实例id</p>
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
                     * 获取<p>GooseFS类型，包括GooseFS和GooseFSx</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Type <p>GooseFS类型，包括GooseFS和GooseFSx</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>GooseFS类型，包括GooseFS和GooseFSx</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _type <p>GooseFS类型，包括GooseFS和GooseFSx</p>
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
                     * 获取<p>GooseFSx实例需要挂载的路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Path <p>GooseFSx实例需要挂载的路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPath() const;

                    /**
                     * 设置<p>GooseFSx实例需要挂载的路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _path <p>GooseFSx实例需要挂载的路径</p>
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
                     * 获取<p>GooseFS命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NameSpace <p>GooseFS命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNameSpace() const;

                    /**
                     * 设置<p>GooseFS命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nameSpace <p>GooseFS命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNameSpace(const std::string& _nameSpace);

                    /**
                     * 判断参数 NameSpace 是否已赋值
                     * @return NameSpace 是否已赋值
                     * 
                     */
                    bool NameSpaceHasBeenSet() const;

                    /**
                     * 获取<p>客户端的挂载参数，逗号分隔的参数名</p>
                     * @return MountOptions <p>客户端的挂载参数，逗号分隔的参数名</p>
                     * 
                     */
                    std::string GetMountOptions() const;

                    /**
                     * 设置<p>客户端的挂载参数，逗号分隔的参数名</p>
                     * @param _mountOptions <p>客户端的挂载参数，逗号分隔的参数名</p>
                     * 
                     */
                    void SetMountOptions(const std::string& _mountOptions);

                    /**
                     * 判断参数 MountOptions 是否已赋值
                     * @return MountOptions 是否已赋值
                     * 
                     */
                    bool MountOptionsHasBeenSet() const;

                private:

                    /**
                     * <p>goosefs实例id</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>GooseFS类型，包括GooseFS和GooseFSx</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>GooseFSx实例需要挂载的路径</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_path;
                    bool m_pathHasBeenSet;

                    /**
                     * <p>GooseFS命名空间</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nameSpace;
                    bool m_nameSpaceHasBeenSet;

                    /**
                     * <p>客户端的挂载参数，逗号分隔的参数名</p>
                     */
                    std::string m_mountOptions;
                    bool m_mountOptionsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_GOOSEFS_H_
