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

#ifndef TENCENTCLOUD_IG_V20210518_MODEL_DRUGCARDINFO_H_
#define TENCENTCLOUD_IG_V20210518_MODEL_DRUGCARDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ig
    {
        namespace V20210518
        {
            namespace Model
            {
                /**
                * 药品卡片信息
                */
                class DrugCardInfo : public AbstractModel
                {
                public:
                    DrugCardInfo();
                    ~DrugCardInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取药品id
                     * @return DrugId 药品id
                     * 
                     */
                    std::string GetDrugId() const;

                    /**
                     * 设置药品id
                     * @param _drugId 药品id
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
                     * 获取商品名称
                     * @return TradeName 商品名称
                     * 
                     */
                    std::string GetTradeName() const;

                    /**
                     * 设置商品名称
                     * @param _tradeName 商品名称
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
                     * 获取规格
                     * @return Specification 规格
                     * 
                     */
                    std::string GetSpecification() const;

                    /**
                     * 设置规格
                     * @param _specification 规格
                     * 
                     */
                    void SetSpecification(const std::string& _specification);

                    /**
                     * 判断参数 Specification 是否已赋值
                     * @return Specification 是否已赋值
                     * 
                     */
                    bool SpecificationHasBeenSet() const;

                    /**
                     * 获取生产厂商
                     * @return Manufacturer 生产厂商
                     * 
                     */
                    std::string GetManufacturer() const;

                    /**
                     * 设置生产厂商
                     * @param _manufacturer 生产厂商
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
                     * 获取是否处方药，0:非处方药，1:处方药
                     * @return DrugRxType 是否处方药，0:非处方药，1:处方药
                     * 
                     */
                    int64_t GetDrugRxType() const;

                    /**
                     * 设置是否处方药，0:非处方药，1:处方药
                     * @param _drugRxType 是否处方药，0:非处方药，1:处方药
                     * 
                     */
                    void SetDrugRxType(const int64_t& _drugRxType);

                    /**
                     * 判断参数 DrugRxType 是否已赋值
                     * @return DrugRxType 是否已赋值
                     * 
                     */
                    bool DrugRxTypeHasBeenSet() const;

                    /**
                     * 获取药品说明书URL
                     * @return DocUrl 药品说明书URL
                     * 
                     */
                    std::string GetDocUrl() const;

                    /**
                     * 设置药品说明书URL
                     * @param _docUrl 药品说明书URL
                     * 
                     */
                    void SetDocUrl(const std::string& _docUrl);

                    /**
                     * 判断参数 DocUrl 是否已赋值
                     * @return DocUrl 是否已赋值
                     * 
                     */
                    bool DocUrlHasBeenSet() const;

                    /**
                     * 获取识别来源，1:药品图片，2:用户输入
                     * @return IdentifySource 识别来源，1:药品图片，2:用户输入
                     * 
                     */
                    int64_t GetIdentifySource() const;

                    /**
                     * 设置识别来源，1:药品图片，2:用户输入
                     * @param _identifySource 识别来源，1:药品图片，2:用户输入
                     * 
                     */
                    void SetIdentifySource(const int64_t& _identifySource);

                    /**
                     * 判断参数 IdentifySource 是否已赋值
                     * @return IdentifySource 是否已赋值
                     * 
                     */
                    bool IdentifySourceHasBeenSet() const;

                private:

                    /**
                     * 药品id
                     */
                    std::string m_drugId;
                    bool m_drugIdHasBeenSet;

                    /**
                     * 药品名称
                     */
                    std::string m_drugName;
                    bool m_drugNameHasBeenSet;

                    /**
                     * 商品名称
                     */
                    std::string m_tradeName;
                    bool m_tradeNameHasBeenSet;

                    /**
                     * 规格
                     */
                    std::string m_specification;
                    bool m_specificationHasBeenSet;

                    /**
                     * 生产厂商
                     */
                    std::string m_manufacturer;
                    bool m_manufacturerHasBeenSet;

                    /**
                     * 是否处方药，0:非处方药，1:处方药
                     */
                    int64_t m_drugRxType;
                    bool m_drugRxTypeHasBeenSet;

                    /**
                     * 药品说明书URL
                     */
                    std::string m_docUrl;
                    bool m_docUrlHasBeenSet;

                    /**
                     * 识别来源，1:药品图片，2:用户输入
                     */
                    int64_t m_identifySource;
                    bool m_identifySourceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IG_V20210518_MODEL_DRUGCARDINFO_H_
