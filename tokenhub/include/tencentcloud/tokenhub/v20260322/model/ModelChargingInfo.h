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

#ifndef TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODELCHARGINGINFO_H_
#define TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODELCHARGINGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tokenhub/v20260322/model/ModelChargingItem.h>


namespace TencentCloud
{
    namespace Tokenhub
    {
        namespace V20260322
        {
            namespace Model
            {
                /**
                * 模型计费信息
                */
                class ModelChargingInfo : public AbstractModel
                {
                public:
                    ModelChargingInfo();
                    ~ModelChargingInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取计费类型。取值：Uniform（统一计费）、Tiered（阶梯计费）。
                     * @return Type 计费类型。取值：Uniform（统一计费）、Tiered（阶梯计费）。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置计费类型。取值：Uniform（统一计费）、Tiered（阶梯计费）。
                     * @param _type 计费类型。取值：Uniform（统一计费）、Tiered（阶梯计费）。
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
                     * 获取计费名称，阶梯计费时表示区间标识，统一计费为空。
                     * @return Name 计费名称，阶梯计费时表示区间标识，统一计费为空。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置计费名称，阶梯计费时表示区间标识，统一计费为空。
                     * @param _name 计费名称，阶梯计费时表示区间标识，统一计费为空。
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
                     * 获取计费场景，用于区分同一产品不同功能的计费。
                     * @return Scenario 计费场景，用于区分同一产品不同功能的计费。
                     * 
                     */
                    std::string GetScenario() const;

                    /**
                     * 设置计费场景，用于区分同一产品不同功能的计费。
                     * @param _scenario 计费场景，用于区分同一产品不同功能的计费。
                     * 
                     */
                    void SetScenario(const std::string& _scenario);

                    /**
                     * 判断参数 Scenario 是否已赋值
                     * @return Scenario 是否已赋值
                     * 
                     */
                    bool ScenarioHasBeenSet() const;

                    /**
                     * 获取计费条目列表，顺序即前端展示顺序。
                     * @return ChargingItems 计费条目列表，顺序即前端展示顺序。
                     * 
                     */
                    std::vector<ModelChargingItem> GetChargingItems() const;

                    /**
                     * 设置计费条目列表，顺序即前端展示顺序。
                     * @param _chargingItems 计费条目列表，顺序即前端展示顺序。
                     * 
                     */
                    void SetChargingItems(const std::vector<ModelChargingItem>& _chargingItems);

                    /**
                     * 判断参数 ChargingItems 是否已赋值
                     * @return ChargingItems 是否已赋值
                     * 
                     */
                    bool ChargingItemsHasBeenSet() const;

                    /**
                     * 获取计费单位。取值：TOKEN（词元）、COUNT（次）、CREDIT（积分）、PICTURE（张）。
                     * @return ChargeUnit 计费单位。取值：TOKEN（词元）、COUNT（次）、CREDIT（积分）、PICTURE（张）。
                     * 
                     */
                    std::string GetChargeUnit() const;

                    /**
                     * 设置计费单位。取值：TOKEN（词元）、COUNT（次）、CREDIT（积分）、PICTURE（张）。
                     * @param _chargeUnit 计费单位。取值：TOKEN（词元）、COUNT（次）、CREDIT（积分）、PICTURE（张）。
                     * 
                     */
                    void SetChargeUnit(const std::string& _chargeUnit);

                    /**
                     * 判断参数 ChargeUnit 是否已赋值
                     * @return ChargeUnit 是否已赋值
                     * 
                     */
                    bool ChargeUnitHasBeenSet() const;

                    /**
                     * 获取计费参考链接。
                     * @return Reference 计费参考链接。
                     * 
                     */
                    std::string GetReference() const;

                    /**
                     * 设置计费参考链接。
                     * @param _reference 计费参考链接。
                     * 
                     */
                    void SetReference(const std::string& _reference);

                    /**
                     * 判断参数 Reference 是否已赋值
                     * @return Reference 是否已赋值
                     * 
                     */
                    bool ReferenceHasBeenSet() const;

                private:

                    /**
                     * 计费类型。取值：Uniform（统一计费）、Tiered（阶梯计费）。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 计费名称，阶梯计费时表示区间标识，统一计费为空。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 计费场景，用于区分同一产品不同功能的计费。
                     */
                    std::string m_scenario;
                    bool m_scenarioHasBeenSet;

                    /**
                     * 计费条目列表，顺序即前端展示顺序。
                     */
                    std::vector<ModelChargingItem> m_chargingItems;
                    bool m_chargingItemsHasBeenSet;

                    /**
                     * 计费单位。取值：TOKEN（词元）、COUNT（次）、CREDIT（积分）、PICTURE（张）。
                     */
                    std::string m_chargeUnit;
                    bool m_chargeUnitHasBeenSet;

                    /**
                     * 计费参考链接。
                     */
                    std::string m_reference;
                    bool m_referenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TOKENHUB_V20260322_MODEL_MODELCHARGINGINFO_H_
