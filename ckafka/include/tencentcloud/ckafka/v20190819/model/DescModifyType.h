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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCMODIFYTYPE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCMODIFYTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 变配类型查询出参
                */
                class DescModifyType : public AbstractModel
                {
                public:
                    DescModifyType();
                    ~DescModifyType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取变配类型
                     * @return ModifyType 变配类型
                     * 
                     */
                    int64_t GetModifyType() const;

                    /**
                     * 设置变配类型
                     * @param _modifyType 变配类型
                     * 
                     */
                    void SetModifyType(const int64_t& _modifyType);

                    /**
                     * 判断参数 ModifyType 是否已赋值
                     * @return ModifyType 是否已赋值
                     * 
                     */
                    bool ModifyTypeHasBeenSet() const;

                    /**
                     * 获取是否迁移标志
                     * @return MigrateFlag 是否迁移标志
                     * 
                     */
                    bool GetMigrateFlag() const;

                    /**
                     * 设置是否迁移标志
                     * @param _migrateFlag 是否迁移标志
                     * 
                     */
                    void SetMigrateFlag(const bool& _migrateFlag);

                    /**
                     * 判断参数 MigrateFlag 是否已赋值
                     * @return MigrateFlag 是否已赋值
                     * 
                     */
                    bool MigrateFlagHasBeenSet() const;

                    /**
                     * 获取迁移预计耗时(稳定模式)秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MigrateCostTime 迁移预计耗时(稳定模式)秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMigrateCostTime() const;

                    /**
                     * 设置迁移预计耗时(稳定模式)秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _migrateCostTime 迁移预计耗时(稳定模式)秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMigrateCostTime(const int64_t& _migrateCostTime);

                    /**
                     * 判断参数 MigrateCostTime 是否已赋值
                     * @return MigrateCostTime 是否已赋值
                     * 
                     */
                    bool MigrateCostTimeHasBeenSet() const;

                    /**
                     * 获取升配模式(1:稳定模式，2:高速模式)
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpgradeStrategy 升配模式(1:稳定模式，2:高速模式)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUpgradeStrategy() const;

                    /**
                     * 设置升配模式(1:稳定模式，2:高速模式)
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upgradeStrategy 升配模式(1:稳定模式，2:高速模式)
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpgradeStrategy(const int64_t& _upgradeStrategy);

                    /**
                     * 判断参数 UpgradeStrategy 是否已赋值
                     * @return UpgradeStrategy 是否已赋值
                     * 
                     */
                    bool UpgradeStrategyHasBeenSet() const;

                    /**
                     * 获取迁移预计耗时(高速模式)秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MigrateCostTimeHighSpeed 迁移预计耗时(高速模式)秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetMigrateCostTimeHighSpeed() const;

                    /**
                     * 设置迁移预计耗时(高速模式)秒
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _migrateCostTimeHighSpeed 迁移预计耗时(高速模式)秒
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMigrateCostTimeHighSpeed(const int64_t& _migrateCostTimeHighSpeed);

                    /**
                     * 判断参数 MigrateCostTimeHighSpeed 是否已赋值
                     * @return MigrateCostTimeHighSpeed 是否已赋值
                     * 
                     */
                    bool MigrateCostTimeHighSpeedHasBeenSet() const;

                private:

                    /**
                     * 变配类型
                     */
                    int64_t m_modifyType;
                    bool m_modifyTypeHasBeenSet;

                    /**
                     * 是否迁移标志
                     */
                    bool m_migrateFlag;
                    bool m_migrateFlagHasBeenSet;

                    /**
                     * 迁移预计耗时(稳定模式)秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_migrateCostTime;
                    bool m_migrateCostTimeHasBeenSet;

                    /**
                     * 升配模式(1:稳定模式，2:高速模式)
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_upgradeStrategy;
                    bool m_upgradeStrategyHasBeenSet;

                    /**
                     * 迁移预计耗时(高速模式)秒
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_migrateCostTimeHighSpeed;
                    bool m_migrateCostTimeHighSpeedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCMODIFYTYPE_H_
