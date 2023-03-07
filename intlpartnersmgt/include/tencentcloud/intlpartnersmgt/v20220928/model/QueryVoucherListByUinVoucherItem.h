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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYVOUCHERLISTBYUINVOUCHERITEM_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYVOUCHERLISTBYUINVOUCHERITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * 子客代金券数据
                */
                class QueryVoucherListByUinVoucherItem : public AbstractModel
                {
                public:
                    QueryVoucherListByUinVoucherItem();
                    ~QueryVoucherListByUinVoucherItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取券号
                     * @return VoucherId 券号
                     */
                    std::string GetVoucherId() const;

                    /**
                     * 设置券号
                     * @param VoucherId 券号
                     */
                    void SetVoucherId(const std::string& _voucherId);

                    /**
                     * 判断参数 VoucherId 是否已赋值
                     * @return VoucherId 是否已赋值
                     */
                    bool VoucherIdHasBeenSet() const;

                    /**
                     * 获取状态
                     * @return VoucherStatus 状态
                     */
                    std::string GetVoucherStatus() const;

                    /**
                     * 设置状态
                     * @param VoucherStatus 状态
                     */
                    void SetVoucherStatus(const std::string& _voucherStatus);

                    /**
                     * 判断参数 VoucherStatus 是否已赋值
                     * @return VoucherStatus 是否已赋值
                     */
                    bool VoucherStatusHasBeenSet() const;

                    /**
                     * 获取面额
                     * @return TotalAmount 面额
                     */
                    double GetTotalAmount() const;

                    /**
                     * 设置面额
                     * @param TotalAmount 面额
                     */
                    void SetTotalAmount(const double& _totalAmount);

                    /**
                     * 判断参数 TotalAmount 是否已赋值
                     * @return TotalAmount 是否已赋值
                     */
                    bool TotalAmountHasBeenSet() const;

                    /**
                     * 获取余额
                     * @return RemainAmount 余额
                     */
                    double GetRemainAmount() const;

                    /**
                     * 设置余额
                     * @param RemainAmount 余额
                     */
                    void SetRemainAmount(const double& _remainAmount);

                    /**
                     * 判断参数 RemainAmount 是否已赋值
                     * @return RemainAmount 是否已赋值
                     */
                    bool RemainAmountHasBeenSet() const;

                private:

                    /**
                     * 券号
                     */
                    std::string m_voucherId;
                    bool m_voucherIdHasBeenSet;

                    /**
                     * 状态
                     */
                    std::string m_voucherStatus;
                    bool m_voucherStatusHasBeenSet;

                    /**
                     * 面额
                     */
                    double m_totalAmount;
                    bool m_totalAmountHasBeenSet;

                    /**
                     * 余额
                     */
                    double m_remainAmount;
                    bool m_remainAmountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_QUERYVOUCHERLISTBYUINVOUCHERITEM_H_
