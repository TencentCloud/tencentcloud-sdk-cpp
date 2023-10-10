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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SMARTOPTIMIZERLIFECYCLEPOLICY_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SMARTOPTIMIZERLIFECYCLEPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * SmartOptimizerLifecyclePolicy
                */
                class SmartOptimizerLifecyclePolicy : public AbstractModel
                {
                public:
                    SmartOptimizerLifecyclePolicy();
                    ~SmartOptimizerLifecyclePolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取生命周期启用
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LifecycleEnable 生命周期启用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLifecycleEnable() const;

                    /**
                     * 设置生命周期启用
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _lifecycleEnable 生命周期启用
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLifecycleEnable(const std::string& _lifecycleEnable);

                    /**
                     * 判断参数 LifecycleEnable 是否已赋值
                     * @return LifecycleEnable 是否已赋值
                     * 
                     */
                    bool LifecycleEnableHasBeenSet() const;

                    /**
                     * 获取过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Expiration 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetExpiration() const;

                    /**
                     * 设置过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _expiration 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExpiration(const int64_t& _expiration);

                    /**
                     * 判断参数 Expiration 是否已赋值
                     * @return Expiration 是否已赋值
                     * 
                     */
                    bool ExpirationHasBeenSet() const;

                    /**
                     * 获取是否删表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DropTable 是否删表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetDropTable() const;

                    /**
                     * 设置是否删表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dropTable 是否删表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDropTable(const bool& _dropTable);

                    /**
                     * 判断参数 DropTable 是否已赋值
                     * @return DropTable 是否已赋值
                     * 
                     */
                    bool DropTableHasBeenSet() const;

                private:

                    /**
                     * 生命周期启用
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_lifecycleEnable;
                    bool m_lifecycleEnableHasBeenSet;

                    /**
                     * 过期时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_expiration;
                    bool m_expirationHasBeenSet;

                    /**
                     * 是否删表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_dropTable;
                    bool m_dropTableHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SMARTOPTIMIZERLIFECYCLEPOLICY_H_
