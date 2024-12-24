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

#ifndef TENCENTCLOUD_ACA_V20210323_MODEL_INDICATIONSDRUG_H_
#define TENCENTCLOUD_ACA_V20210323_MODEL_INDICATIONSDRUG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Aca
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 适应症药品请求
                */
                class IndicationsDrug : public AbstractModel
                {
                public:
                    IndicationsDrug();
                    ~IndicationsDrug() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取药品名称
                     * @return DrugName 药品名称
                     * 
                     */
                    std::string GetDrugName() const;

                    /**
                     * 设置药品名称
                     * @param _drugName 药品名称
                     * 
                     */
                    void SetDrugName(const std::string& _drugName);

                    /**
                     * 判断参数 DrugName 是否已赋值
                     * @return DrugName 是否已赋值
                     * 
                     */
                    bool DrugNameHasBeenSet() const;

                    /**
                     * 获取规格
                     * @return Specifications 规格
                     * 
                     */
                    std::string GetSpecifications() const;

                    /**
                     * 设置规格
                     * @param _specifications 规格
                     * 
                     */
                    void SetSpecifications(const std::string& _specifications);

                    /**
                     * 判断参数 Specifications 是否已赋值
                     * @return Specifications 是否已赋值
                     * 
                     */
                    bool SpecificationsHasBeenSet() const;

                    /**
                     * 获取批准文号
                     * @return ApprovalNumber 批准文号
                     * 
                     */
                    std::string GetApprovalNumber() const;

                    /**
                     * 设置批准文号
                     * @param _approvalNumber 批准文号
                     * 
                     */
                    void SetApprovalNumber(const std::string& _approvalNumber);

                    /**
                     * 判断参数 ApprovalNumber 是否已赋值
                     * @return ApprovalNumber 是否已赋值
                     * 
                     */
                    bool ApprovalNumberHasBeenSet() const;

                    /**
                     * 获取生产厂家
                     * @return Manufacturer 生产厂家
                     * 
                     */
                    std::string GetManufacturer() const;

                    /**
                     * 设置生产厂家
                     * @param _manufacturer 生产厂家
                     * 
                     */
                    void SetManufacturer(const std::string& _manufacturer);

                    /**
                     * 判断参数 Manufacturer 是否已赋值
                     * @return Manufacturer 是否已赋值
                     * 
                     */
                    bool ManufacturerHasBeenSet() const;

                    /**
                     * 获取药品ID
                     * @return DrugId 药品ID
                     * 
                     */
                    std::string GetDrugId() const;

                    /**
                     * 设置药品ID
                     * @param _drugId 药品ID
                     * 
                     */
                    void SetDrugId(const std::string& _drugId);

                    /**
                     * 判断参数 DrugId 是否已赋值
                     * @return DrugId 是否已赋值
                     * 
                     */
                    bool DrugIdHasBeenSet() const;

                    /**
                     * 获取商品名
                     * @return TradeName 商品名
                     * 
                     */
                    std::string GetTradeName() const;

                    /**
                     * 设置商品名
                     * @param _tradeName 商品名
                     * 
                     */
                    void SetTradeName(const std::string& _tradeName);

                    /**
                     * 判断参数 TradeName 是否已赋值
                     * @return TradeName 是否已赋值
                     * 
                     */
                    bool TradeNameHasBeenSet() const;

                    /**
                     * 获取类型 默认0 0-西药 2-中药
                     * @return Type 类型 默认0 0-西药 2-中药
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置类型 默认0 0-西药 2-中药
                     * @param _type 类型 默认0 0-西药 2-中药
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 药品名称
                     */
                    std::string m_drugName;
                    bool m_drugNameHasBeenSet;

                    /**
                     * 规格
                     */
                    std::string m_specifications;
                    bool m_specificationsHasBeenSet;

                    /**
                     * 批准文号
                     */
                    std::string m_approvalNumber;
                    bool m_approvalNumberHasBeenSet;

                    /**
                     * 生产厂家
                     */
                    std::string m_manufacturer;
                    bool m_manufacturerHasBeenSet;

                    /**
                     * 药品ID
                     */
                    std::string m_drugId;
                    bool m_drugIdHasBeenSet;

                    /**
                     * 商品名
                     */
                    std::string m_tradeName;
                    bool m_tradeNameHasBeenSet;

                    /**
                     * 类型 默认0 0-西药 2-中药
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ACA_V20210323_MODEL_INDICATIONSDRUG_H_
