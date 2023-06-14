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

#ifndef TENCENTCLOUD_ZJ_V20190121_MODEL_SMSCAMPAIGNSTATISTICSDATA_H_
#define TENCENTCLOUD_ZJ_V20190121_MODEL_SMSCAMPAIGNSTATISTICSDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/zj/v20190121/model/SmsCampaignStatisticsCrowdData.h>


namespace TencentCloud
{
    namespace Zj
    {
        namespace V20190121
        {
            namespace Model
            {
                /**
                * 短信活动统计响应
                */
                class SmsCampaignStatisticsData : public AbstractModel
                {
                public:
                    SmsCampaignStatisticsData();
                    ~SmsCampaignStatisticsData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取活动Id
                     * @return CampaignId 活动Id
                     * 
                     */
                    uint64_t GetCampaignId() const;

                    /**
                     * 设置活动Id
                     * @param _campaignId 活动Id
                     * 
                     */
                    void SetCampaignId(const uint64_t& _campaignId);

                    /**
                     * 判断参数 CampaignId 是否已赋值
                     * @return CampaignId 是否已赋值
                     * 
                     */
                    bool CampaignIdHasBeenSet() const;

                    /**
                     * 获取统计数据
                     * @return Statistics 统计数据
                     * 
                     */
                    std::vector<SmsCampaignStatisticsCrowdData> GetStatistics() const;

                    /**
                     * 设置统计数据
                     * @param _statistics 统计数据
                     * 
                     */
                    void SetStatistics(const std::vector<SmsCampaignStatisticsCrowdData>& _statistics);

                    /**
                     * 判断参数 Statistics 是否已赋值
                     * @return Statistics 是否已赋值
                     * 
                     */
                    bool StatisticsHasBeenSet() const;

                private:

                    /**
                     * 活动Id
                     */
                    uint64_t m_campaignId;
                    bool m_campaignIdHasBeenSet;

                    /**
                     * 统计数据
                     */
                    std::vector<SmsCampaignStatisticsCrowdData> m_statistics;
                    bool m_statisticsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ZJ_V20190121_MODEL_SMSCAMPAIGNSTATISTICSDATA_H_
