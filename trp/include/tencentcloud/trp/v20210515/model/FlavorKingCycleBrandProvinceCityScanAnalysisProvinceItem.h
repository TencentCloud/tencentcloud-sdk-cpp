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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_FLAVORKINGCYCLEBRANDPROVINCECITYSCANANALYSISPROVINCEITEM_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_FLAVORKINGCYCLEBRANDPROVINCECITYSCANANALYSISPROVINCEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trp/v20210515/model/FlavorKingCycleBrandProvinceCityScanAnalysisCityItem.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * 品牌扫码数据
                */
                class FlavorKingCycleBrandProvinceCityScanAnalysisProvinceItem : public AbstractModel
                {
                public:
                    FlavorKingCycleBrandProvinceCityScanAnalysisProvinceItem();
                    ~FlavorKingCycleBrandProvinceCityScanAnalysisProvinceItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>口味王分布</p>
                     * @return Ratio <p>口味王分布</p>
                     * 
                     */
                    std::vector<double> GetRatio() const;

                    /**
                     * 设置<p>口味王分布</p>
                     * @param _ratio <p>口味王分布</p>
                     * 
                     */
                    void SetRatio(const std::vector<double>& _ratio);

                    /**
                     * 判断参数 Ratio 是否已赋值
                     * @return Ratio 是否已赋值
                     * 
                     */
                    bool RatioHasBeenSet() const;

                    /**
                     * 获取<p>下属城市明细</p>
                     * @return Cities <p>下属城市明细</p>
                     * 
                     */
                    std::vector<FlavorKingCycleBrandProvinceCityScanAnalysisCityItem> GetCities() const;

                    /**
                     * 设置<p>下属城市明细</p>
                     * @param _cities <p>下属城市明细</p>
                     * 
                     */
                    void SetCities(const std::vector<FlavorKingCycleBrandProvinceCityScanAnalysisCityItem>& _cities);

                    /**
                     * 判断参数 Cities 是否已赋值
                     * @return Cities 是否已赋值
                     * 
                     */
                    bool CitiesHasBeenSet() const;

                    /**
                     * 获取<p>省份</p>
                     * @return Province <p>省份</p>
                     * 
                     */
                    std::string GetProvince() const;

                    /**
                     * 设置<p>省份</p>
                     * @param _province <p>省份</p>
                     * 
                     */
                    void SetProvince(const std::string& _province);

                    /**
                     * 判断参数 Province 是否已赋值
                     * @return Province 是否已赋值
                     * 
                     */
                    bool ProvinceHasBeenSet() const;

                private:

                    /**
                     * <p>口味王分布</p>
                     */
                    std::vector<double> m_ratio;
                    bool m_ratioHasBeenSet;

                    /**
                     * <p>下属城市明细</p>
                     */
                    std::vector<FlavorKingCycleBrandProvinceCityScanAnalysisCityItem> m_cities;
                    bool m_citiesHasBeenSet;

                    /**
                     * <p>省份</p>
                     */
                    std::string m_province;
                    bool m_provinceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_FLAVORKINGCYCLEBRANDPROVINCECITYSCANANALYSISPROVINCEITEM_H_
