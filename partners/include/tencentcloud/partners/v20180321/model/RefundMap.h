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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_REFUNDMAP_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_REFUNDMAP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 退款单关联的原始订单信息
                */
                class RefundMap : public AbstractModel
                {
                public:
                    RefundMap();
                    ~RefundMap() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取退款单关联的原始子订单号
                     * @return DealName 退款单关联的原始子订单号
                     * 
                     */
                    std::string GetDealName() const;

                    /**
                     * 设置退款单关联的原始子订单号
                     * @param _dealName 退款单关联的原始子订单号
                     * 
                     */
                    void SetDealName(const std::string& _dealName);

                    /**
                     * 判断参数 DealName 是否已赋值
                     * @return DealName 是否已赋值
                     * 
                     */
                    bool DealNameHasBeenSet() const;

                    /**
                     * 获取退款金额，单位分
                     * @return RefundAmount 退款金额，单位分
                     * 
                     */
                    int64_t GetRefundAmount() const;

                    /**
                     * 设置退款金额，单位分
                     * @param _refundAmount 退款金额，单位分
                     * 
                     */
                    void SetRefundAmount(const int64_t& _refundAmount);

                    /**
                     * 判断参数 RefundAmount 是否已赋值
                     * @return RefundAmount 是否已赋值
                     * 
                     */
                    bool RefundAmountHasBeenSet() const;

                private:

                    /**
                     * 退款单关联的原始子订单号
                     */
                    std::string m_dealName;
                    bool m_dealNameHasBeenSet;

                    /**
                     * 退款金额，单位分
                     */
                    int64_t m_refundAmount;
                    bool m_refundAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_REFUNDMAP_H_
