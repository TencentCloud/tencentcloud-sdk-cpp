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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEBACKUPVAULTITEM_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEBACKUPVAULTITEM_H_

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
                * 保险箱信息
                */
                class CreateBackupVaultItem : public AbstractModel
                {
                public:
                    CreateBackupVaultItem();
                    ~CreateBackupVaultItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取保险箱id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VaultId 保险箱id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVaultId() const;

                    /**
                     * 设置保险箱id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vaultId 保险箱id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVaultId(const std::string& _vaultId);

                    /**
                     * 判断参数 VaultId 是否已赋值
                     * @return VaultId 是否已赋值
                     * 
                     */
                    bool VaultIdHasBeenSet() const;

                    /**
                     * 获取保险箱地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VaultRegion 保险箱地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetVaultRegion() const;

                    /**
                     * 设置保险箱地域
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _vaultRegion 保险箱地域
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVaultRegion(const std::string& _vaultRegion);

                    /**
                     * 判断参数 VaultRegion 是否已赋值
                     * @return VaultRegion 是否已赋值
                     * 
                     */
                    bool VaultRegionHasBeenSet() const;

                private:

                    /**
                     * 保险箱id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vaultId;
                    bool m_vaultIdHasBeenSet;

                    /**
                     * 保险箱地域
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_vaultRegion;
                    bool m_vaultRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_CREATEBACKUPVAULTITEM_H_
