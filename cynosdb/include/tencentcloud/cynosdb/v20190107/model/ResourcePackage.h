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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_RESOURCEPACKAGE_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_RESOURCEPACKAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 资源包信息
                */
                class ResourcePackage : public AbstractModel
                {
                public:
                    ResourcePackage();
                    ~ResourcePackage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源包的唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageId 资源包的唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置资源包的唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PackageId 资源包的唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取资源包类型：CCU：计算资源包
DISK：存储资源包
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageType 资源包类型：CCU：计算资源包
DISK：存储资源包
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPackageType() const;

                    /**
                     * 设置资源包类型：CCU：计算资源包
DISK：存储资源包
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PackageType 资源包类型：CCU：计算资源包
DISK：存储资源包
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPackageType(const std::string& _packageType);

                    /**
                     * 判断参数 PackageType 是否已赋值
                     * @return PackageType 是否已赋值
                     */
                    bool PackageTypeHasBeenSet() const;

                private:

                    /**
                     * 资源包的唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * 资源包类型：CCU：计算资源包
DISK：存储资源包
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageType;
                    bool m_packageTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_RESOURCEPACKAGE_H_
