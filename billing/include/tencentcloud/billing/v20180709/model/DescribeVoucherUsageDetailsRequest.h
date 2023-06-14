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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEVOUCHERUSAGEDETAILSREQUEST_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEVOUCHERUSAGEDETAILSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * DescribeVoucherUsageDetails请求参数结构体
                */
                class DescribeVoucherUsageDetailsRequest : public AbstractModel
                {
                public:
                    DescribeVoucherUsageDetailsRequest();
                    ~DescribeVoucherUsageDetailsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取一页多少条数据，默认是20条，最大不超过1000
                     * @return Limit 一页多少条数据，默认是20条，最大不超过1000
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置一页多少条数据，默认是20条，最大不超过1000
                     * @param _limit 一页多少条数据，默认是20条，最大不超过1000
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
                     * 获取第多少页，默认是1
                     * @return Offset 第多少页，默认是1
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置第多少页，默认是1
                     * @param _offset 第多少页，默认是1
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取代金券id
                     * @return VoucherId 代金券id
                     * 
                     */
                    std::string GetVoucherId() const;

                    /**
                     * 设置代金券id
                     * @param _voucherId 代金券id
                     * 
                     */
                    void SetVoucherId(const std::string& _voucherId);

                    /**
                     * 判断参数 VoucherId 是否已赋值
                     * @return VoucherId 是否已赋值
                     * 
                     */
                    bool VoucherIdHasBeenSet() const;

                    /**
                     * 获取操作人，默认就是用户uin
                     * @return Operator 操作人，默认就是用户uin
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作人，默认就是用户uin
                     * @param _operator 操作人，默认就是用户uin
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 一页多少条数据，默认是20条，最大不超过1000
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 第多少页，默认是1
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 代金券id
                     */
                    std::string m_voucherId;
                    bool m_voucherIdHasBeenSet;

                    /**
                     * 操作人，默认就是用户uin
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_DESCRIBEVOUCHERUSAGEDETAILSREQUEST_H_
