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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_FLAVORKINGCYCLEBRANDPROVINCESCANANALYSISRESPONSE_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_FLAVORKINGCYCLEBRANDPROVINCESCANANALYSISRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trp/v20210515/model/FlavorKingCycleBrandProvinceScanAnalysisDataItem.h>


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
                class FlavorKingCycleBrandProvinceScanAnalysisResponse : public AbstractModel
                {
                public:
                    FlavorKingCycleBrandProvinceScanAnalysisResponse();
                    ~FlavorKingCycleBrandProvinceScanAnalysisResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>口味王全国份额</p>
                     * @return MarketShare <p>口味王全国份额</p>
                     * 
                     */
                    double GetMarketShare() const;

                    /**
                     * 设置<p>口味王全国份额</p>
                     * @param _marketShare <p>口味王全国份额</p>
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
                     * 获取<p>上周期口味王市场份额</p>
                     * @return LastCycleMarketShare <p>上周期口味王市场份额</p>
                     * 
                     */
                    double GetLastCycleMarketShare() const;

                    /**
                     * 设置<p>上周期口味王市场份额</p>
                     * @param _lastCycleMarketShare <p>上周期口味王市场份额</p>
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
                     * 获取<p>口味王全国周环比</p>
                     * @return Provinces <p>口味王全国周环比</p>
                     * 
                     */
                    std::vector<FlavorKingCycleBrandProvinceScanAnalysisDataItem> GetProvinces() const;

                    /**
                     * 设置<p>口味王全国周环比</p>
                     * @param _provinces <p>口味王全国周环比</p>
                     * 
                     */
                    void SetProvinces(const std::vector<FlavorKingCycleBrandProvinceScanAnalysisDataItem>& _provinces);

                    /**
                     * 判断参数 Provinces 是否已赋值
                     * @return Provinces 是否已赋值
                     * 
                     */
                    bool ProvincesHasBeenSet() const;

                    /**
                     * 获取<p>口味王环比</p>
                     * @return GrowRatio <p>口味王环比</p>
                     * 
                     */
                    double GetGrowRatio() const;

                    /**
                     * 设置<p>口味王环比</p>
                     * @param _growRatio <p>口味王环比</p>
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
                     * 获取<p>其他品牌环比</p>
                     * @return OtherGrowRatio <p>其他品牌环比</p>
                     * 
                     */
                    double GetOtherGrowRatio() const;

                    /**
                     * 设置<p>其他品牌环比</p>
                     * @param _otherGrowRatio <p>其他品牌环比</p>
                     * 
                     */
                    void SetOtherGrowRatio(const double& _otherGrowRatio);

                    /**
                     * 判断参数 OtherGrowRatio 是否已赋值
                     * @return OtherGrowRatio 是否已赋值
                     * 
                     */
                    bool OtherGrowRatioHasBeenSet() const;

                private:

                    /**
                     * <p>口味王全国份额</p>
                     */
                    double m_marketShare;
                    bool m_marketShareHasBeenSet;

                    /**
                     * <p>上周期口味王市场份额</p>
                     */
                    double m_lastCycleMarketShare;
                    bool m_lastCycleMarketShareHasBeenSet;

                    /**
                     * <p>口味王全国周环比</p>
                     */
                    std::vector<FlavorKingCycleBrandProvinceScanAnalysisDataItem> m_provinces;
                    bool m_provincesHasBeenSet;

                    /**
                     * <p>口味王环比</p>
                     */
                    double m_growRatio;
                    bool m_growRatioHasBeenSet;

                    /**
                     * <p>其他品牌环比</p>
                     */
                    double m_otherGrowRatio;
                    bool m_otherGrowRatioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_FLAVORKINGCYCLEBRANDPROVINCESCANANALYSISRESPONSE_H_
