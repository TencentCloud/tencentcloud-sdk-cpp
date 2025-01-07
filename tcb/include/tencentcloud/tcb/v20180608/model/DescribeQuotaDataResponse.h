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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEQUOTADATARESPONSE_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEQUOTADATARESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * DescribeQuotaData返回参数结构体
                */
                class DescribeQuotaDataResponse : public AbstractModel
                {
                public:
                    DescribeQuotaDataResponse();
                    ~DescribeQuotaDataResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取指标名
                     * @return MetricName 指标名
                     * 
                     */
                    std::string GetMetricName() const;

                    /**
                     * 判断参数 MetricName 是否已赋值
                     * @return MetricName 是否已赋值
                     * 
                     */
                    bool MetricNameHasBeenSet() const;

                    /**
                     * 获取指标的值
                     * @return Value 指标的值
                     * 
                     */
                    int64_t GetValue() const;

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取指标的附加值信息
                     * @return SubValue 指标的附加值信息
                     * 
                     */
                    std::string GetSubValue() const;

                    /**
                     * 判断参数 SubValue 是否已赋值
                     * @return SubValue 是否已赋值
                     * 
                     */
                    bool SubValueHasBeenSet() const;

                private:

                    /**
                     * 指标名
                     */
                    std::string m_metricName;
                    bool m_metricNameHasBeenSet;

                    /**
                     * 指标的值
                     */
                    int64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 指标的附加值信息
                     */
                    std::string m_subValue;
                    bool m_subValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_DESCRIBEQUOTADATARESPONSE_H_
