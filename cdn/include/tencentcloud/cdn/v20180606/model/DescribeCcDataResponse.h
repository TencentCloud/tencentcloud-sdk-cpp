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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECCDATARESPONSE_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECCDATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/TimestampData.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * DescribeCcData返回参数结构体
                */
                class DescribeCcDataResponse : public AbstractModel
                {
                public:
                    DescribeCcDataResponse();
                    ~DescribeCcDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取指定执行动作的请求数数据，如果指定类型为空，表示所有类型的请求总数
                     * @return Data 指定执行动作的请求数数据，如果指定类型为空，表示所有类型的请求总数
                     * 
                     */
                    std::vector<TimestampData> GetData() const;

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取粒度
                     * @return Interval 粒度
                     * 
                     */
                    std::string GetInterval() const;

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取执行动作为拦截类型QPS统计数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InterceptQpsData 执行动作为拦截类型QPS统计数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TimestampData> GetInterceptQpsData() const;

                    /**
                     * 判断参数 InterceptQpsData 是否已赋值
                     * @return InterceptQpsData 是否已赋值
                     * 
                     */
                    bool InterceptQpsDataHasBeenSet() const;

                    /**
                     * 获取执行动作为重定向类型QPS统计数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RedirectQpsData 执行动作为重定向类型QPS统计数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TimestampData> GetRedirectQpsData() const;

                    /**
                     * 判断参数 RedirectQpsData 是否已赋值
                     * @return RedirectQpsData 是否已赋值
                     * 
                     */
                    bool RedirectQpsDataHasBeenSet() const;

                    /**
                     * 获取执行动作为观察类型QPS统计数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ObserveQpsData 执行动作为观察类型QPS统计数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<TimestampData> GetObserveQpsData() const;

                    /**
                     * 判断参数 ObserveQpsData 是否已赋值
                     * @return ObserveQpsData 是否已赋值
                     * 
                     */
                    bool ObserveQpsDataHasBeenSet() const;

                private:

                    /**
                     * 指定执行动作的请求数数据，如果指定类型为空，表示所有类型的请求总数
                     */
                    std::vector<TimestampData> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 粒度
                     */
                    std::string m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 执行动作为拦截类型QPS统计数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TimestampData> m_interceptQpsData;
                    bool m_interceptQpsDataHasBeenSet;

                    /**
                     * 执行动作为重定向类型QPS统计数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TimestampData> m_redirectQpsData;
                    bool m_redirectQpsDataHasBeenSet;

                    /**
                     * 执行动作为观察类型QPS统计数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<TimestampData> m_observeQpsData;
                    bool m_observeQpsDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DESCRIBECCDATARESPONSE_H_
