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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_BOTSTATS_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_BOTSTATS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/BotStatsDetailData.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * BOT统计结果数据
                */
                class BotStats : public AbstractModel
                {
                public:
                    BotStats();
                    ~BotStats() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取指标名称
                     * @return Metric 指标名称
                     * 
                     */
                    std::string GetMetric() const;

                    /**
                     * 设置指标名称
                     * @param _metric 指标名称
                     * 
                     */
                    void SetMetric(const std::string& _metric);

                    /**
                     * 判断参数 Metric 是否已赋值
                     * @return Metric 是否已赋值
                     * 
                     */
                    bool MetricHasBeenSet() const;

                    /**
                     * 获取指标详细数据
                     * @return DetailData 指标详细数据
                     * 
                     */
                    std::vector<BotStatsDetailData> GetDetailData() const;

                    /**
                     * 设置指标详细数据
                     * @param _detailData 指标详细数据
                     * 
                     */
                    void SetDetailData(const std::vector<BotStatsDetailData>& _detailData);

                    /**
                     * 判断参数 DetailData 是否已赋值
                     * @return DetailData 是否已赋值
                     * 
                     */
                    bool DetailDataHasBeenSet() const;

                private:

                    /**
                     * 指标名称
                     */
                    std::string m_metric;
                    bool m_metricHasBeenSet;

                    /**
                     * 指标详细数据
                     */
                    std::vector<BotStatsDetailData> m_detailData;
                    bool m_detailDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_BOTSTATS_H_
