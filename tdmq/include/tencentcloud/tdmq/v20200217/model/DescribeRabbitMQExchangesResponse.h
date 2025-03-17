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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQEXCHANGESRESPONSE_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQEXCHANGESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tdmq/v20200217/model/RabbitMQExchangeListInfo.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * DescribeRabbitMQExchanges返回参数结构体
                */
                class DescribeRabbitMQExchangesResponse : public AbstractModel
                {
                public:
                    DescribeRabbitMQExchangesResponse();
                    ~DescribeRabbitMQExchangesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取策略列表信息
                     * @return ExchangeInfoList 策略列表信息
                     * 
                     */
                    std::vector<RabbitMQExchangeListInfo> GetExchangeInfoList() const;

                    /**
                     * 判断参数 ExchangeInfoList 是否已赋值
                     * @return ExchangeInfoList 是否已赋值
                     * 
                     */
                    bool ExchangeInfoListHasBeenSet() const;

                    /**
                     * 获取策略结果总数
                     * @return TotalCount 策略结果总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 策略列表信息
                     */
                    std::vector<RabbitMQExchangeListInfo> m_exchangeInfoList;
                    bool m_exchangeInfoListHasBeenSet;

                    /**
                     * 策略结果总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_DESCRIBERABBITMQEXCHANGESRESPONSE_H_
