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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DATAMASKSTRATEGYPOLICY_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DATAMASKSTRATEGYPOLICY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Policy.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 数据脱敏策略权限对象
                */
                class DataMaskStrategyPolicy : public AbstractModel
                {
                public:
                    DataMaskStrategyPolicy();
                    ~DataMaskStrategyPolicy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据脱敏权限对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PolicyInfo 数据脱敏权限对象
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Policy GetPolicyInfo() const;

                    /**
                     * 设置数据脱敏权限对象
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _policyInfo 数据脱敏权限对象
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPolicyInfo(const Policy& _policyInfo);

                    /**
                     * 判断参数 PolicyInfo 是否已赋值
                     * @return PolicyInfo 是否已赋值
                     * 
                     */
                    bool PolicyInfoHasBeenSet() const;

                    /**
                     * 获取数据脱敏策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DataMaskStrategyId 数据脱敏策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDataMaskStrategyId() const;

                    /**
                     * 设置数据脱敏策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dataMaskStrategyId 数据脱敏策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDataMaskStrategyId(const std::string& _dataMaskStrategyId);

                    /**
                     * 判断参数 DataMaskStrategyId 是否已赋值
                     * @return DataMaskStrategyId 是否已赋值
                     * 
                     */
                    bool DataMaskStrategyIdHasBeenSet() const;

                    /**
                     * 获取绑定字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ColumnType 绑定字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetColumnType() const;

                    /**
                     * 设置绑定字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _columnType 绑定字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetColumnType(const std::string& _columnType);

                    /**
                     * 判断参数 ColumnType 是否已赋值
                     * @return ColumnType 是否已赋值
                     * 
                     */
                    bool ColumnTypeHasBeenSet() const;

                private:

                    /**
                     * 数据脱敏权限对象
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Policy m_policyInfo;
                    bool m_policyInfoHasBeenSet;

                    /**
                     * 数据脱敏策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dataMaskStrategyId;
                    bool m_dataMaskStrategyIdHasBeenSet;

                    /**
                     * 绑定字段类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_columnType;
                    bool m_columnTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DATAMASKSTRATEGYPOLICY_H_
