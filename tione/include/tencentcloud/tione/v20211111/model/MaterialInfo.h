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

#ifndef TENCENTCLOUD_TIONE_V20211111_MODEL_MATERIALINFO_H_
#define TENCENTCLOUD_TIONE_V20211111_MODEL_MATERIALINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tione/v20211111/model/CosPathInfo.h>


namespace TencentCloud
{
    namespace Tione
    {
        namespace V20211111
        {
            namespace Model
            {
                /**
                * 物料信息
                */
                class MaterialInfo : public AbstractModel
                {
                public:
                    MaterialInfo();
                    ~MaterialInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StorageType 存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStorageType() const;

                    /**
                     * 设置存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _storageType 存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStorageType(const std::string& _storageType);

                    /**
                     * 判断参数 StorageType 是否已赋值
                     * @return StorageType 是否已赋值
                     * 
                     */
                    bool StorageTypeHasBeenSet() const;

                    /**
                     * 获取Cos存储信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CosPathInfo Cos存储信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    CosPathInfo GetCosPathInfo() const;

                    /**
                     * 设置Cos存储信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cosPathInfo Cos存储信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCosPathInfo(const CosPathInfo& _cosPathInfo);

                    /**
                     * 判断参数 CosPathInfo 是否已赋值
                     * @return CosPathInfo 是否已赋值
                     * 
                     */
                    bool CosPathInfoHasBeenSet() const;

                    /**
                     * 获取物料名，支持Code、Model
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaterialName 物料名，支持Code、Model
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMaterialName() const;

                    /**
                     * 设置物料名，支持Code、Model
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _materialName 物料名，支持Code、Model
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaterialName(const std::string& _materialName);

                    /**
                     * 判断参数 MaterialName 是否已赋值
                     * @return MaterialName 是否已赋值
                     * 
                     */
                    bool MaterialNameHasBeenSet() const;

                    /**
                     * 获取物料类型，支持PreSet(预置)、 Custom(自定义)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaterialType 物料类型，支持PreSet(预置)、 Custom(自定义)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMaterialType() const;

                    /**
                     * 设置物料类型，支持PreSet(预置)、 Custom(自定义)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _materialType 物料类型，支持PreSet(预置)、 Custom(自定义)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaterialType(const std::string& _materialType);

                    /**
                     * 判断参数 MaterialType 是否已赋值
                     * @return MaterialType 是否已赋值
                     * 
                     */
                    bool MaterialTypeHasBeenSet() const;

                    /**
                     * 获取训练任务挂载路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MountPath 训练任务挂载路径
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMountPath() const;

                    /**
                     * 设置训练任务挂载路径
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mountPath 训练任务挂载路径
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

                private:

                    /**
                     * 存储类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_storageType;
                    bool m_storageTypeHasBeenSet;

                    /**
                     * Cos存储信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    CosPathInfo m_cosPathInfo;
                    bool m_cosPathInfoHasBeenSet;

                    /**
                     * 物料名，支持Code、Model
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_materialName;
                    bool m_materialNameHasBeenSet;

                    /**
                     * 物料类型，支持PreSet(预置)、 Custom(自定义)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_materialType;
                    bool m_materialTypeHasBeenSet;

                    /**
                     * 训练任务挂载路径
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mountPath;
                    bool m_mountPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIONE_V20211111_MODEL_MATERIALINFO_H_
