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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETFLOWSTATISTICBYNAMERESPONSE_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETFLOWSTATISTICBYNAMERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mna/v20210119/model/NetDetails.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetFlowStatisticByName返回参数结构体
                */
                class GetFlowStatisticByNameResponse : public AbstractModel
                {
                public:
                    GetFlowStatisticByNameResponse();
                    ~GetFlowStatisticByNameResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>流量详细信息</p>
                     * @return NetDetails <p>流量详细信息</p>
                     * 
                     */
                    std::vector<NetDetails> GetNetDetails() const;

                    /**
                     * 判断参数 NetDetails 是否已赋值
                     * @return NetDetails 是否已赋值
                     * 
                     */
                    bool NetDetailsHasBeenSet() const;

                    /**
                     * 获取<p>查找时间段流量使用最大值（单位：byte）</p>
                     * @return MaxValue <p>查找时间段流量使用最大值（单位：byte）</p>
                     * 
                     */
                    double GetMaxValue() const;

                    /**
                     * 判断参数 MaxValue 是否已赋值
                     * @return MaxValue 是否已赋值
                     * 
                     */
                    bool MaxValueHasBeenSet() const;

                    /**
                     * 获取<p>查找时间段流量使用平均值（单位：byte）</p>
                     * @return AvgValue <p>查找时间段流量使用平均值（单位：byte）</p>
                     * 
                     */
                    double GetAvgValue() const;

                    /**
                     * 判断参数 AvgValue 是否已赋值
                     * @return AvgValue 是否已赋值
                     * 
                     */
                    bool AvgValueHasBeenSet() const;

                    /**
                     * 获取<p>查找时间段流量使用总量（单位：byte）</p>
                     * @return TotalValue <p>查找时间段流量使用总量（单位：byte）</p>
                     * 
                     */
                    double GetTotalValue() const;

                    /**
                     * 判断参数 TotalValue 是否已赋值
                     * @return TotalValue 是否已赋值
                     * 
                     */
                    bool TotalValueHasBeenSet() const;

                private:

                    /**
                     * <p>流量详细信息</p>
                     */
                    std::vector<NetDetails> m_netDetails;
                    bool m_netDetailsHasBeenSet;

                    /**
                     * <p>查找时间段流量使用最大值（单位：byte）</p>
                     */
                    double m_maxValue;
                    bool m_maxValueHasBeenSet;

                    /**
                     * <p>查找时间段流量使用平均值（单位：byte）</p>
                     */
                    double m_avgValue;
                    bool m_avgValueHasBeenSet;

                    /**
                     * <p>查找时间段流量使用总量（单位：byte）</p>
                     */
                    double m_totalValue;
                    bool m_totalValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETFLOWSTATISTICBYNAMERESPONSE_H_
