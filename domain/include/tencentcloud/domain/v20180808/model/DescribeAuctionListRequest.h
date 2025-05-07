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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEAUCTIONLISTREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEAUCTIONLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * DescribeAuctionList请求参数结构体
                */
                class DescribeAuctionListRequest : public AbstractModel
                {
                public:
                    DescribeAuctionListRequest();
                    ~DescribeAuctionListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取业务ID 
通过接口[DescribeBiddingList](https://cloud.tencent.com/document/api/242/106598)返回结果中获取
                     * @return BusinessId 业务ID 
通过接口[DescribeBiddingList](https://cloud.tencent.com/document/api/242/106598)返回结果中获取
                     * 
                     */
                    std::string GetBusinessId() const;

                    /**
                     * 设置业务ID 
通过接口[DescribeBiddingList](https://cloud.tencent.com/document/api/242/106598)返回结果中获取
                     * @param _businessId 业务ID 
通过接口[DescribeBiddingList](https://cloud.tencent.com/document/api/242/106598)返回结果中获取
                     * 
                     */
                    void SetBusinessId(const std::string& _businessId);

                    /**
                     * 判断参数 BusinessId 是否已赋值
                     * @return BusinessId 是否已赋值
                     * 
                     */
                    bool BusinessIdHasBeenSet() const;

                    /**
                     * 获取条数，默认10，最大100
                     * @return Limit 条数，默认10，最大100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置条数，默认10，最大100
                     * @param _limit 条数，默认10，最大100
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量 默认0
                     * @return OffSet 偏移量 默认0
                     * 
                     */
                    int64_t GetOffSet() const;

                    /**
                     * 设置偏移量 默认0
                     * @param _offSet 偏移量 默认0
                     * 
                     */
                    void SetOffSet(const int64_t& _offSet);

                    /**
                     * 判断参数 OffSet 是否已赋值
                     * @return OffSet 是否已赋值
                     * 
                     */
                    bool OffSetHasBeenSet() const;

                private:

                    /**
                     * 业务ID 
通过接口[DescribeBiddingList](https://cloud.tencent.com/document/api/242/106598)返回结果中获取
                     */
                    std::string m_businessId;
                    bool m_businessIdHasBeenSet;

                    /**
                     * 条数，默认10，最大100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量 默认0
                     */
                    int64_t m_offSet;
                    bool m_offSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_DESCRIBEAUCTIONLISTREQUEST_H_
