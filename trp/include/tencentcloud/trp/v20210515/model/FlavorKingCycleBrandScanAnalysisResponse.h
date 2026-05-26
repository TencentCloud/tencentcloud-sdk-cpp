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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_FLAVORKINGCYCLEBRANDSCANANALYSISRESPONSE_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_FLAVORKINGCYCLEBRANDSCANANALYSISRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trp/v20210515/model/FlavorKingCycleBrandScanAnalysisDataItem.h>


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
                class FlavorKingCycleBrandScanAnalysisResponse : public AbstractModel
                {
                public:
                    FlavorKingCycleBrandScanAnalysisResponse();
                    ~FlavorKingCycleBrandScanAnalysisResponse() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>总数</p>
                     * @return Count <p>总数</p>
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置<p>总数</p>
                     * @param _count <p>总数</p>
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取<p>占比</p>
                     * @return CycleRatio <p>占比</p>
                     * 
                     */
                    double GetCycleRatio() const;

                    /**
                     * 设置<p>占比</p>
                     * @param _cycleRatio <p>占比</p>
                     * 
                     */
                    void SetCycleRatio(const double& _cycleRatio);

                    /**
                     * 判断参数 CycleRatio 是否已赋值
                     * @return CycleRatio 是否已赋值
                     * 
                     */
                    bool CycleRatioHasBeenSet() const;

                    /**
                     * 获取<p>环比</p>
                     * @return CycleOverCycle <p>环比</p>
                     * 
                     */
                    double GetCycleOverCycle() const;

                    /**
                     * 设置<p>环比</p>
                     * @param _cycleOverCycle <p>环比</p>
                     * 
                     */
                    void SetCycleOverCycle(const double& _cycleOverCycle);

                    /**
                     * 判断参数 CycleOverCycle 是否已赋值
                     * @return CycleOverCycle 是否已赋值
                     * 
                     */
                    bool CycleOverCycleHasBeenSet() const;

                    /**
                     * 获取<p>占比详情</p>
                     * @return CycleRatioItems <p>占比详情</p>
                     * 
                     */
                    std::vector<FlavorKingCycleBrandScanAnalysisDataItem> GetCycleRatioItems() const;

                    /**
                     * 设置<p>占比详情</p>
                     * @param _cycleRatioItems <p>占比详情</p>
                     * 
                     */
                    void SetCycleRatioItems(const std::vector<FlavorKingCycleBrandScanAnalysisDataItem>& _cycleRatioItems);

                    /**
                     * 判断参数 CycleRatioItems 是否已赋值
                     * @return CycleRatioItems 是否已赋值
                     * 
                     */
                    bool CycleRatioItemsHasBeenSet() const;

                private:

                    /**
                     * <p>总数</p>
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * <p>占比</p>
                     */
                    double m_cycleRatio;
                    bool m_cycleRatioHasBeenSet;

                    /**
                     * <p>环比</p>
                     */
                    double m_cycleOverCycle;
                    bool m_cycleOverCycleHasBeenSet;

                    /**
                     * <p>占比详情</p>
                     */
                    std::vector<FlavorKingCycleBrandScanAnalysisDataItem> m_cycleRatioItems;
                    bool m_cycleRatioItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_FLAVORKINGCYCLEBRANDSCANANALYSISRESPONSE_H_
