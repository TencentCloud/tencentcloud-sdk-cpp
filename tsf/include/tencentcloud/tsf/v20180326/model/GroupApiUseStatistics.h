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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_GROUPAPIUSESTATISTICS_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_GROUPAPIUSESTATISTICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/ApiUseStatisticsEntity.h>
#include <tencentcloud/tsf/v20180326/model/QuantileEntity.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * API监控明细数据
                */
                class GroupApiUseStatistics : public AbstractModel
                {
                public:
                    GroupApiUseStatistics();
                    ~GroupApiUseStatistics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取总调用数
                     * @return TopStatusCode 总调用数
                     * 
                     */
                    std::vector<ApiUseStatisticsEntity> GetTopStatusCode() const;

                    /**
                     * 设置总调用数
                     * @param _topStatusCode 总调用数
                     * 
                     */
                    void SetTopStatusCode(const std::vector<ApiUseStatisticsEntity>& _topStatusCode);

                    /**
                     * 判断参数 TopStatusCode 是否已赋值
                     * @return TopStatusCode 是否已赋值
                     * 
                     */
                    bool TopStatusCodeHasBeenSet() const;

                    /**
                     * 获取平均错误率
                     * @return TopTimeCost 平均错误率
                     * 
                     */
                    std::vector<ApiUseStatisticsEntity> GetTopTimeCost() const;

                    /**
                     * 设置平均错误率
                     * @param _topTimeCost 平均错误率
                     * 
                     */
                    void SetTopTimeCost(const std::vector<ApiUseStatisticsEntity>& _topTimeCost);

                    /**
                     * 判断参数 TopTimeCost 是否已赋值
                     * @return TopTimeCost 是否已赋值
                     * 
                     */
                    bool TopTimeCostHasBeenSet() const;

                    /**
                     * 获取分位值对象
                     * @return Quantile 分位值对象
                     * 
                     */
                    QuantileEntity GetQuantile() const;

                    /**
                     * 设置分位值对象
                     * @param _quantile 分位值对象
                     * 
                     */
                    void SetQuantile(const QuantileEntity& _quantile);

                    /**
                     * 判断参数 Quantile 是否已赋值
                     * @return Quantile 是否已赋值
                     * 
                     */
                    bool QuantileHasBeenSet() const;

                private:

                    /**
                     * 总调用数
                     */
                    std::vector<ApiUseStatisticsEntity> m_topStatusCode;
                    bool m_topStatusCodeHasBeenSet;

                    /**
                     * 平均错误率
                     */
                    std::vector<ApiUseStatisticsEntity> m_topTimeCost;
                    bool m_topTimeCostHasBeenSet;

                    /**
                     * 分位值对象
                     */
                    QuantileEntity m_quantile;
                    bool m_quantileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_GROUPAPIUSESTATISTICS_H_
