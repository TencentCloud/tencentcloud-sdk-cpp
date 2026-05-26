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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_FLAVORKINGCYCLEBRANDSCANMETRICSITEM_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_FLAVORKINGCYCLEBRANDSCANMETRICSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


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
                class FlavorKingCycleBrandScanMetricsItem : public AbstractModel
                {
                public:
                    FlavorKingCycleBrandScanMetricsItem();
                    ~FlavorKingCycleBrandScanMetricsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>日期范围</p>
                     * @return Duration <p>日期范围</p>
                     * 
                     */
                    std::string GetDuration() const;

                    /**
                     * 设置<p>日期范围</p>
                     * @param _duration <p>日期范围</p>
                     * 
                     */
                    void SetDuration(const std::string& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

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

                private:

                    /**
                     * <p>日期范围</p>
                     */
                    std::string m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * <p>口味王分布</p>
                     */
                    double m_ratio;
                    bool m_ratioHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_FLAVORKINGCYCLEBRANDSCANMETRICSITEM_H_
