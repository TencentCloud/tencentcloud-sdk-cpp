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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_VOLUMEMOUNT_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_VOLUMEMOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * 数据挂载
                */
                class VolumeMount : public AbstractModel
                {
                public:
                    VolumeMount();
                    ~VolumeMount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
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
                     * 获取挂载路径
                     * @return MountPath 挂载路径
                     * 
                     */
                    std::string GetMountPath() const;

                    /**
                     * 设置挂载路径
                     * @param _mountPath 挂载路径
                     * 
                     */
                    void SetMountPath(const std::string& _mountPath);

                    /**
                     * 判断参数 MountPath 是否已赋值
                     * @return MountPath 是否已赋值
                     * 
                     */
                    bool MountPathHasBeenSet() const;

                    /**
                     * 获取子路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubPath 子路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubPath() const;

                    /**
                     * 设置子路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subPath 子路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubPath(const std::string& _subPath);

                    /**
                     * 判断参数 SubPath 是否已赋值
                     * @return SubPath 是否已赋值
                     * 
                     */
                    bool SubPathHasBeenSet() const;

                    /**
                     * 获取是否只读
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReadOnly 是否只读
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetReadOnly() const;

                    /**
                     * 设置是否只读
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _readOnly 是否只读
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReadOnly(const bool& _readOnly);

                    /**
                     * 判断参数 ReadOnly 是否已赋值
                     * @return ReadOnly 是否已赋值
                     * 
                     */
                    bool ReadOnlyHasBeenSet() const;

                private:

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 挂载路径
                     */
                    std::string m_mountPath;
                    bool m_mountPathHasBeenSet;

                    /**
                     * 子路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subPath;
                    bool m_subPathHasBeenSet;

                    /**
                     * 是否只读
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_readOnly;
                    bool m_readOnlyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_VOLUMEMOUNT_H_
