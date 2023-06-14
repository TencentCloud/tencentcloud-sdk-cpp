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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDSUBORDERREFUND_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDSUBORDERREFUND_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 退款子单
                */
                class CloudSubOrderRefund : public AbstractModel
                {
                public:
                    CloudSubOrderRefund();
                    ~CloudSubOrderRefund() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取子订单退款金额
                     * @return RefundAmt 子订单退款金额
                     * 
                     */
                    int64_t GetRefundAmt() const;

                    /**
                     * 设置子订单退款金额
                     * @param _refundAmt 子订单退款金额
                     * 
                     */
                    void SetRefundAmt(const int64_t& _refundAmt);

                    /**
                     * 判断参数 RefundAmt 是否已赋值
                     * @return RefundAmt 是否已赋值
                     * 
                     */
                    bool RefundAmtHasBeenSet() const;

                    /**
                     * 获取平台应退金额
                     * @return PlatformRefundAmt 平台应退金额
                     * 
                     */
                    int64_t GetPlatformRefundAmt() const;

                    /**
                     * 设置平台应退金额
                     * @param _platformRefundAmt 平台应退金额
                     * 
                     */
                    void SetPlatformRefundAmt(const int64_t& _platformRefundAmt);

                    /**
                     * 判断参数 PlatformRefundAmt 是否已赋值
                     * @return PlatformRefundAmt 是否已赋值
                     * 
                     */
                    bool PlatformRefundAmtHasBeenSet() const;

                    /**
                     * 获取商家应退金额
                     * @return SubMchRefundAmt 商家应退金额
                     * 
                     */
                    int64_t GetSubMchRefundAmt() const;

                    /**
                     * 设置商家应退金额
                     * @param _subMchRefundAmt 商家应退金额
                     * 
                     */
                    void SetSubMchRefundAmt(const int64_t& _subMchRefundAmt);

                    /**
                     * 判断参数 SubMchRefundAmt 是否已赋值
                     * @return SubMchRefundAmt 是否已赋值
                     * 
                     */
                    bool SubMchRefundAmtHasBeenSet() const;

                    /**
                     * 获取子订单号
                     * @return SubOutTradeNo 子订单号
                     * 
                     */
                    std::string GetSubOutTradeNo() const;

                    /**
                     * 设置子订单号
                     * @param _subOutTradeNo 子订单号
                     * 
                     */
                    void SetSubOutTradeNo(const std::string& _subOutTradeNo);

                    /**
                     * 判断参数 SubOutTradeNo 是否已赋值
                     * @return SubOutTradeNo 是否已赋值
                     * 
                     */
                    bool SubOutTradeNoHasBeenSet() const;

                    /**
                     * 获取子退款单号，调用方需要保证全局唯一性
                     * @return SubRefundId 子退款单号，调用方需要保证全局唯一性
                     * 
                     */
                    std::string GetSubRefundId() const;

                    /**
                     * 设置子退款单号，调用方需要保证全局唯一性
                     * @param _subRefundId 子退款单号，调用方需要保证全局唯一性
                     * 
                     */
                    void SetSubRefundId(const std::string& _subRefundId);

                    /**
                     * 判断参数 SubRefundId 是否已赋值
                     * @return SubRefundId 是否已赋值
                     * 
                     */
                    bool SubRefundIdHasBeenSet() const;

                private:

                    /**
                     * 子订单退款金额
                     */
                    int64_t m_refundAmt;
                    bool m_refundAmtHasBeenSet;

                    /**
                     * 平台应退金额
                     */
                    int64_t m_platformRefundAmt;
                    bool m_platformRefundAmtHasBeenSet;

                    /**
                     * 商家应退金额
                     */
                    int64_t m_subMchRefundAmt;
                    bool m_subMchRefundAmtHasBeenSet;

                    /**
                     * 子订单号
                     */
                    std::string m_subOutTradeNo;
                    bool m_subOutTradeNoHasBeenSet;

                    /**
                     * 子退款单号，调用方需要保证全局唯一性
                     */
                    std::string m_subRefundId;
                    bool m_subRefundIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CLOUDSUBORDERREFUND_H_
