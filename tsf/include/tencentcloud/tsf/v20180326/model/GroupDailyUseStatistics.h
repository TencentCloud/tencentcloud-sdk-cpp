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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_GROUPDAILYUSESTATISTICS_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_GROUPDAILYUSESTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/GroupUseStatisticsEntity.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 分组日使用统计对象
                */
                class GroupDailyUseStatistics : public AbstractModel
                {
                public:
                    GroupDailyUseStatistics();
                    ~GroupDailyUseStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总调用数
                     * @return TopReqAmount 总调用数
                     * 
                     */
                    std::vector<GroupUseStatisticsEntity> GetTopReqAmount() const;

                    /**
                     * 设置总调用数
                     * @param _topReqAmount 总调用数
                     * 
                     */
                    void SetTopReqAmount(const std::vector<GroupUseStatisticsEntity>& _topReqAmount);

                    /**
                     * 判断参数 TopReqAmount 是否已赋值
                     * @return TopReqAmount 是否已赋值
                     * 
                     */
                    bool TopReqAmountHasBeenSet() const;

                    /**
                     * 获取平均错误率
                     * @return TopFailureRate 平均错误率
                     * 
                     */
                    std::vector<GroupUseStatisticsEntity> GetTopFailureRate() const;

                    /**
                     * 设置平均错误率
                     * @param _topFailureRate 平均错误率
                     * 
                     */
                    void SetTopFailureRate(const std::vector<GroupUseStatisticsEntity>& _topFailureRate);

                    /**
                     * 判断参数 TopFailureRate 是否已赋值
                     * @return TopFailureRate 是否已赋值
                     * 
                     */
                    bool TopFailureRateHasBeenSet() const;

                    /**
                     * 获取平均响应耗时
                     * @return TopAvgTimeCost 平均响应耗时
                     * 
                     */
                    std::vector<GroupUseStatisticsEntity> GetTopAvgTimeCost() const;

                    /**
                     * 设置平均响应耗时
                     * @param _topAvgTimeCost 平均响应耗时
                     * 
                     */
                    void SetTopAvgTimeCost(const std::vector<GroupUseStatisticsEntity>& _topAvgTimeCost);

                    /**
                     * 判断参数 TopAvgTimeCost 是否已赋值
                     * @return TopAvgTimeCost 是否已赋值
                     * 
                     */
                    bool TopAvgTimeCostHasBeenSet() const;

                private:

                    /**
                     * 总调用数
                     */
                    std::vector<GroupUseStatisticsEntity> m_topReqAmount;
                    bool m_topReqAmountHasBeenSet;

                    /**
                     * 平均错误率
                     */
                    std::vector<GroupUseStatisticsEntity> m_topFailureRate;
                    bool m_topFailureRateHasBeenSet;

                    /**
                     * 平均响应耗时
                     */
                    std::vector<GroupUseStatisticsEntity> m_topAvgTimeCost;
                    bool m_topAvgTimeCostHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_GROUPDAILYUSESTATISTICS_H_
