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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_FLAVORKINGCYCLEBRANDIMPORTANTCITYSCANANALYSISCITYITEM_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_FLAVORKINGCYCLEBRANDIMPORTANTCITYSCANANALYSISCITYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trp/v20210515/model/FlavorKingCycleBrandImportantCityScanAnalysisRegionItem.h>


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
                class FlavorKingCycleBrandImportantCityScanAnalysisCityItem : public AbstractModel
                {
                public:
                    FlavorKingCycleBrandImportantCityScanAnalysisCityItem();
                    ~FlavorKingCycleBrandImportantCityScanAnalysisCityItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>口味王分布</p>
                     * @return Ratio <p>口味王分布</p>
                     * 
                     */
                    double GetRatio() const;

                    /**
                     * 设置<p>口味王分布</p>
                     * @param _ratio <p>口味王分布</p>
                     * 
                     */
                    void SetRatio(const double& _ratio);

                    /**
                     * 判断参数 Ratio 是否已赋值
                     * @return Ratio 是否已赋值
                     * 
                     */
                    bool RatioHasBeenSet() const;

                    /**
                     * 获取<p>口味王市场份额</p>
                     * @return MarketShare <p>口味王市场份额</p>
                     * 
                     */
                    double GetMarketShare() const;

                    /**
                     * 设置<p>口味王市场份额</p>
                     * @param _marketShare <p>口味王市场份额</p>
                     * 
                     */
                    void SetMarketShare(const double& _marketShare);

                    /**
                     * 判断参数 MarketShare 是否已赋值
                     * @return MarketShare 是否已赋值
                     * 
                     */
                    bool MarketShareHasBeenSet() const;

                    /**
                     * 获取<p>其他品牌市场份额</p>
                     * @return OtherMarketShare <p>其他品牌市场份额</p>
                     * 
                     */
                    double GetOtherMarketShare() const;

                    /**
                     * 设置<p>其他品牌市场份额</p>
                     * @param _otherMarketShare <p>其他品牌市场份额</p>
                     * 
                     */
                    void SetOtherMarketShare(const double& _otherMarketShare);

                    /**
                     * 判断参数 OtherMarketShare 是否已赋值
                     * @return OtherMarketShare 是否已赋值
                     * 
                     */
                    bool OtherMarketShareHasBeenSet() const;

                    /**
                     * 获取<p>上周期口味王分布</p>
                     * @return LastCycleRatio <p>上周期口味王分布</p>
                     * 
                     */
                    double GetLastCycleRatio() const;

                    /**
                     * 设置<p>上周期口味王分布</p>
                     * @param _lastCycleRatio <p>上周期口味王分布</p>
                     * 
                     */
                    void SetLastCycleRatio(const double& _lastCycleRatio);

                    /**
                     * 判断参数 LastCycleRatio 是否已赋值
                     * @return LastCycleRatio 是否已赋值
                     * 
                     */
                    bool LastCycleRatioHasBeenSet() const;

                    /**
                     * 获取<p>上周期口味王牌市场份额</p>
                     * @return LastCycleMarketShare <p>上周期口味王牌市场份额</p>
                     * 
                     */
                    double GetLastCycleMarketShare() const;

                    /**
                     * 设置<p>上周期口味王牌市场份额</p>
                     * @param _lastCycleMarketShare <p>上周期口味王牌市场份额</p>
                     * 
                     */
                    void SetLastCycleMarketShare(const double& _lastCycleMarketShare);

                    /**
                     * 判断参数 LastCycleMarketShare 是否已赋值
                     * @return LastCycleMarketShare 是否已赋值
                     * 
                     */
                    bool LastCycleMarketShareHasBeenSet() const;

                    /**
                     * 获取<p>上周期其他品牌市场份额</p>
                     * @return LastCycleOtherMarketShare <p>上周期其他品牌市场份额</p>
                     * 
                     */
                    double GetLastCycleOtherMarketShare() const;

                    /**
                     * 设置<p>上周期其他品牌市场份额</p>
                     * @param _lastCycleOtherMarketShare <p>上周期其他品牌市场份额</p>
                     * 
                     */
                    void SetLastCycleOtherMarketShare(const double& _lastCycleOtherMarketShare);

                    /**
                     * 判断参数 LastCycleOtherMarketShare 是否已赋值
                     * @return LastCycleOtherMarketShare 是否已赋值
                     * 
                     */
                    bool LastCycleOtherMarketShareHasBeenSet() const;

                    /**
                     * 获取<p>口味王增长率</p>
                     * @return GrowRatio <p>口味王增长率</p>
                     * 
                     */
                    double GetGrowRatio() const;

                    /**
                     * 设置<p>口味王增长率</p>
                     * @param _growRatio <p>口味王增长率</p>
                     * 
                     */
                    void SetGrowRatio(const double& _growRatio);

                    /**
                     * 判断参数 GrowRatio 是否已赋值
                     * @return GrowRatio 是否已赋值
                     * 
                     */
                    bool GrowRatioHasBeenSet() const;

                    /**
                     * 获取<p>其他品牌增长率</p>
                     * @return OtherGrowRatio <p>其他品牌增长率</p>
                     * 
                     */
                    double GetOtherGrowRatio() const;

                    /**
                     * 设置<p>其他品牌增长率</p>
                     * @param _otherGrowRatio <p>其他品牌增长率</p>
                     * 
                     */
                    void SetOtherGrowRatio(const double& _otherGrowRatio);

                    /**
                     * 判断参数 OtherGrowRatio 是否已赋值
                     * @return OtherGrowRatio 是否已赋值
                     * 
                     */
                    bool OtherGrowRatioHasBeenSet() const;

                    /**
                     * 获取<p>下属城市明细</p>
                     * @return Regions <p>下属城市明细</p>
                     * 
                     */
                    std::vector<FlavorKingCycleBrandImportantCityScanAnalysisRegionItem> GetRegions() const;

                    /**
                     * 设置<p>下属城市明细</p>
                     * @param _regions <p>下属城市明细</p>
                     * 
                     */
                    void SetRegions(const std::vector<FlavorKingCycleBrandImportantCityScanAnalysisRegionItem>& _regions);

                    /**
                     * 判断参数 Regions 是否已赋值
                     * @return Regions 是否已赋值
                     * 
                     */
                    bool RegionsHasBeenSet() const;

                    /**
                     * 获取<p>城市</p>
                     * @return City <p>城市</p>
                     * 
                     */
                    std::string GetCity() const;

                    /**
                     * 设置<p>城市</p>
                     * @param _city <p>城市</p>
                     * 
                     */
                    void SetCity(const std::string& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     * 
                     */
                    bool CityHasBeenSet() const;

                private:

                    /**
                     * <p>口味王分布</p>
                     */
                    double m_ratio;
                    bool m_ratioHasBeenSet;

                    /**
                     * <p>口味王市场份额</p>
                     */
                    double m_marketShare;
                    bool m_marketShareHasBeenSet;

                    /**
                     * <p>其他品牌市场份额</p>
                     */
                    double m_otherMarketShare;
                    bool m_otherMarketShareHasBeenSet;

                    /**
                     * <p>上周期口味王分布</p>
                     */
                    double m_lastCycleRatio;
                    bool m_lastCycleRatioHasBeenSet;

                    /**
                     * <p>上周期口味王牌市场份额</p>
                     */
                    double m_lastCycleMarketShare;
                    bool m_lastCycleMarketShareHasBeenSet;

                    /**
                     * <p>上周期其他品牌市场份额</p>
                     */
                    double m_lastCycleOtherMarketShare;
                    bool m_lastCycleOtherMarketShareHasBeenSet;

                    /**
                     * <p>口味王增长率</p>
                     */
                    double m_growRatio;
                    bool m_growRatioHasBeenSet;

                    /**
                     * <p>其他品牌增长率</p>
                     */
                    double m_otherGrowRatio;
                    bool m_otherGrowRatioHasBeenSet;

                    /**
                     * <p>下属城市明细</p>
                     */
                    std::vector<FlavorKingCycleBrandImportantCityScanAnalysisRegionItem> m_regions;
                    bool m_regionsHasBeenSet;

                    /**
                     * <p>城市</p>
                     */
                    std::string m_city;
                    bool m_cityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_FLAVORKINGCYCLEBRANDIMPORTANTCITYSCANANALYSISCITYITEM_H_
