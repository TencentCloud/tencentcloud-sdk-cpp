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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_VOLUMEMOUNT_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_VOLUMEMOUNT_H_

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
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 数据卷挂载路径信息
                */
                class VolumeMount : public AbstractModel
                {
                public:
                    VolumeMount();
                    ~VolumeMount() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取挂载路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MountPath 挂载路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMountPath() const;

                    /**
                     * 设置挂载路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mountPath 挂载路径
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取volume名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name volume名称
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置volume名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _name volume名称
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
                     * 获取传播挂载方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MountPropagation 传播挂载方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMountPropagation() const;

                    /**
                     * 设置传播挂载方式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mountPropagation 传播挂载方式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMountPropagation(const std::string& _mountPropagation);

                    /**
                     * 判断参数 MountPropagation 是否已赋值
                     * @return MountPropagation 是否已赋值
                     * 
                     */
                    bool MountPropagationHasBeenSet() const;

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
                     * 获取子路径表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubPathExpr 子路径表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubPathExpr() const;

                    /**
                     * 设置子路径表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subPathExpr 子路径表达式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubPathExpr(const std::string& _subPathExpr);

                    /**
                     * 判断参数 SubPathExpr 是否已赋值
                     * @return SubPathExpr 是否已赋值
                     * 
                     */
                    bool SubPathExprHasBeenSet() const;

                private:

                    /**
                     * 挂载路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mountPath;
                    bool m_mountPathHasBeenSet;

                    /**
                     * volume名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 传播挂载方式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mountPropagation;
                    bool m_mountPropagationHasBeenSet;

                    /**
                     * 是否只读
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_readOnly;
                    bool m_readOnlyHasBeenSet;

                    /**
                     * 子路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subPath;
                    bool m_subPathHasBeenSet;

                    /**
                     * 子路径表达式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subPathExpr;
                    bool m_subPathExprHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_VOLUMEMOUNT_H_
