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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_VACCINATION_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_VACCINATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 免疫接种记录
                */
                class Vaccination : public AbstractModel
                {
                public:
                    Vaccination();
                    ~Vaccination() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取序号
                     * @return Id 序号
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置序号
                     * @param _id 序号
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取疫苗名称
                     * @return Vaccine 疫苗名称
                     * 
                     */
                    std::string GetVaccine() const;

                    /**
                     * 设置疫苗名称
                     * @param _vaccine 疫苗名称
                     * 
                     */
                    void SetVaccine(const std::string& _vaccine);

                    /**
                     * 判断参数 Vaccine 是否已赋值
                     * @return Vaccine 是否已赋值
                     * 
                     */
                    bool VaccineHasBeenSet() const;

                    /**
                     * 获取剂次
                     * @return Dose 剂次
                     * 
                     */
                    std::string GetDose() const;

                    /**
                     * 设置剂次
                     * @param _dose 剂次
                     * 
                     */
                    void SetDose(const std::string& _dose);

                    /**
                     * 判断参数 Dose 是否已赋值
                     * @return Dose 是否已赋值
                     * 
                     */
                    bool DoseHasBeenSet() const;

                    /**
                     * 获取接种日期
                     * @return Date 接种日期
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置接种日期
                     * @param _date 接种日期
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取疫苗批号
                     * @return LotNumber 疫苗批号
                     * 
                     */
                    std::string GetLotNumber() const;

                    /**
                     * 设置疫苗批号
                     * @param _lotNumber 疫苗批号
                     * 
                     */
                    void SetLotNumber(const std::string& _lotNumber);

                    /**
                     * 判断参数 LotNumber 是否已赋值
                     * @return LotNumber 是否已赋值
                     * 
                     */
                    bool LotNumberHasBeenSet() const;

                    /**
                     * 获取生产企业
                     * @return Manufacturer 生产企业
                     * 
                     */
                    std::string GetManufacturer() const;

                    /**
                     * 设置生产企业
                     * @param _manufacturer 生产企业
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
                     * 获取接种单位
                     * @return Clinic 接种单位
                     * 
                     */
                    std::string GetClinic() const;

                    /**
                     * 设置接种单位
                     * @param _clinic 接种单位
                     * 
                     */
                    void SetClinic(const std::string& _clinic);

                    /**
                     * 判断参数 Clinic 是否已赋值
                     * @return Clinic 是否已赋值
                     * 
                     */
                    bool ClinicHasBeenSet() const;

                    /**
                     * 获取接种部位
                     * @return Site 接种部位
                     * 
                     */
                    std::string GetSite() const;

                    /**
                     * 设置接种部位
                     * @param _site 接种部位
                     * 
                     */
                    void SetSite(const std::string& _site);

                    /**
                     * 判断参数 Site 是否已赋值
                     * @return Site 是否已赋值
                     * 
                     */
                    bool SiteHasBeenSet() const;

                    /**
                     * 获取接种者
                     * @return Provider 接种者
                     * 
                     */
                    std::string GetProvider() const;

                    /**
                     * 设置接种者
                     * @param _provider 接种者
                     * 
                     */
                    void SetProvider(const std::string& _provider);

                    /**
                     * 判断参数 Provider 是否已赋值
                     * @return Provider 是否已赋值
                     * 
                     */
                    bool ProviderHasBeenSet() const;

                    /**
                     * 获取疫苗批号
                     * @return Lot 疫苗批号
                     * 
                     */
                    std::string GetLot() const;

                    /**
                     * 设置疫苗批号
                     * @param _lot 疫苗批号
                     * 
                     */
                    void SetLot(const std::string& _lot);

                    /**
                     * 判断参数 Lot 是否已赋值
                     * @return Lot 是否已赋值
                     * 
                     */
                    bool LotHasBeenSet() const;

                private:

                    /**
                     * 序号
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 疫苗名称
                     */
                    std::string m_vaccine;
                    bool m_vaccineHasBeenSet;

                    /**
                     * 剂次
                     */
                    std::string m_dose;
                    bool m_doseHasBeenSet;

                    /**
                     * 接种日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 疫苗批号
                     */
                    std::string m_lotNumber;
                    bool m_lotNumberHasBeenSet;

                    /**
                     * 生产企业
                     */
                    std::string m_manufacturer;
                    bool m_manufacturerHasBeenSet;

                    /**
                     * 接种单位
                     */
                    std::string m_clinic;
                    bool m_clinicHasBeenSet;

                    /**
                     * 接种部位
                     */
                    std::string m_site;
                    bool m_siteHasBeenSet;

                    /**
                     * 接种者
                     */
                    std::string m_provider;
                    bool m_providerHasBeenSet;

                    /**
                     * 疫苗批号
                     */
                    std::string m_lot;
                    bool m_lotHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_VACCINATION_H_
