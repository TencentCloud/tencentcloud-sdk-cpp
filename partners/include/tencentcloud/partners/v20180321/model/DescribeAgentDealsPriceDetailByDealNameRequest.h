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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEAGENTDEALSPRICEDETAILBYDEALNAMEREQUEST_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEAGENTDEALSPRICEDETAILBYDEALNAMEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * DescribeAgentDealsPriceDetailByDealName请求参数结构体
                */
                class DescribeAgentDealsPriceDetailByDealNameRequest : public AbstractModel
                {
                public:
                    DescribeAgentDealsPriceDetailByDealNameRequest();
                    ~DescribeAgentDealsPriceDetailByDealNameRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取下单年份（订单创建时间归属年份）
                     * @return DealCreatYear 下单年份（订单创建时间归属年份）
                     * 
                     */
                    uint64_t GetDealCreatYear() const;

                    /**
                     * 设置下单年份（订单创建时间归属年份）
                     * @param _dealCreatYear 下单年份（订单创建时间归属年份）
                     * 
                     */
                    void SetDealCreatYear(const uint64_t& _dealCreatYear);

                    /**
                     * 判断参数 DealCreatYear 是否已赋值
                     * @return DealCreatYear 是否已赋值
                     * 
                     */
                    bool DealCreatYearHasBeenSet() const;

                    /**
                     * 获取子订单号，每个请求最多查询100条
                     * @return DealNames 子订单号，每个请求最多查询100条
                     * 
                     */
                    std::vector<std::string> GetDealNames() const;

                    /**
                     * 设置子订单号，每个请求最多查询100条
                     * @param _dealNames 子订单号，每个请求最多查询100条
                     * 
                     */
                    void SetDealNames(const std::vector<std::string>& _dealNames);

                    /**
                     * 判断参数 DealNames 是否已赋值
                     * @return DealNames 是否已赋值
                     * 
                     */
                    bool DealNamesHasBeenSet() const;

                    /**
                     * 获取订单归属代客uin
                     * @return OwnerUin 订单归属代客uin
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置订单归属代客uin
                     * @param _ownerUin 订单归属代客uin
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                private:

                    /**
                     * 下单年份（订单创建时间归属年份）
                     */
                    uint64_t m_dealCreatYear;
                    bool m_dealCreatYearHasBeenSet;

                    /**
                     * 子订单号，每个请求最多查询100条
                     */
                    std::vector<std::string> m_dealNames;
                    bool m_dealNamesHasBeenSet;

                    /**
                     * 订单归属代客uin
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_DESCRIBEAGENTDEALSPRICEDETAILBYDEALNAMEREQUEST_H_
