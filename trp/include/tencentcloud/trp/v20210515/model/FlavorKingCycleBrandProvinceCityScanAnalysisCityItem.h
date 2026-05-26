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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_FLAVORKINGCYCLEBRANDPROVINCECITYSCANANALYSISCITYITEM_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_FLAVORKINGCYCLEBRANDPROVINCECITYSCANANALYSISCITYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trp/v20210515/model/FlavorKingCycleBrandProvinceCityScanAnalysisRegionItem.h>


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
                class FlavorKingCycleBrandProvinceCityScanAnalysisCityItem : public AbstractModel
                {
                public:
                    FlavorKingCycleBrandProvinceCityScanAnalysisCityItem();
                    ~FlavorKingCycleBrandProvinceCityScanAnalysisCityItem() = default;
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
                     * 获取<p>分区域数据</p>
                     * @return Regions <p>分区域数据</p>
                     * 
                     */
                    std::vector<FlavorKingCycleBrandProvinceCityScanAnalysisRegionItem> GetRegions() const;

                    /**
                     * 设置<p>分区域数据</p>
                     * @param _regions <p>分区域数据</p>
                     * 
                     */
                    void SetRegions(const std::vector<FlavorKingCycleBrandProvinceCityScanAnalysisRegionItem>& _regions);

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
                    std::vector<double> m_ratio;
                    bool m_ratioHasBeenSet;

                    /**
                     * <p>分区域数据</p>
                     */
                    std::vector<FlavorKingCycleBrandProvinceCityScanAnalysisRegionItem> m_regions;
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

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_FLAVORKINGCYCLEBRANDPROVINCECITYSCANANALYSISCITYITEM_H_
