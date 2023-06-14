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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_WITHDRAWBILL_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_WITHDRAWBILL_H_

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
                * 聚鑫提现订单内容
                */
                class WithdrawBill : public AbstractModel
                {
                public:
                    WithdrawBill();
                    ~WithdrawBill() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取业务提现订单号
                     * @return WithdrawOrderId 业务提现订单号
                     * 
                     */
                    std::string GetWithdrawOrderId() const;

                    /**
                     * 设置业务提现订单号
                     * @param _withdrawOrderId 业务提现订单号
                     * 
                     */
                    void SetWithdrawOrderId(const std::string& _withdrawOrderId);

                    /**
                     * 判断参数 WithdrawOrderId 是否已赋值
                     * @return WithdrawOrderId 是否已赋值
                     * 
                     */
                    bool WithdrawOrderIdHasBeenSet() const;

                    /**
                     * 获取提现日期
                     * @return Date 提现日期
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置提现日期
                     * @param _date 提现日期
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取提现金额，单位： 分
                     * @return PayAmt 提现金额，单位： 分
                     * 
                     */
                    std::string GetPayAmt() const;

                    /**
                     * 设置提现金额，单位： 分
                     * @param _payAmt 提现金额，单位： 分
                     * 
                     */
                    void SetPayAmt(const std::string& _payAmt);

                    /**
                     * 判断参数 PayAmt 是否已赋值
                     * @return PayAmt 是否已赋值
                     * 
                     */
                    bool PayAmtHasBeenSet() const;

                    /**
                     * 获取聚鑫分配转入账户appid
                     * @return InSubAppId 聚鑫分配转入账户appid
                     * 
                     */
                    std::string GetInSubAppId() const;

                    /**
                     * 设置聚鑫分配转入账户appid
                     * @param _inSubAppId 聚鑫分配转入账户appid
                     * 
                     */
                    void SetInSubAppId(const std::string& _inSubAppId);

                    /**
                     * 判断参数 InSubAppId 是否已赋值
                     * @return InSubAppId 是否已赋值
                     * 
                     */
                    bool InSubAppIdHasBeenSet() const;

                    /**
                     * 获取聚鑫分配转出账户appid
                     * @return OutSubAppId 聚鑫分配转出账户appid
                     * 
                     */
                    std::string GetOutSubAppId() const;

                    /**
                     * 设置聚鑫分配转出账户appid
                     * @param _outSubAppId 聚鑫分配转出账户appid
                     * 
                     */
                    void SetOutSubAppId(const std::string& _outSubAppId);

                    /**
                     * 判断参数 OutSubAppId 是否已赋值
                     * @return OutSubAppId 是否已赋值
                     * 
                     */
                    bool OutSubAppIdHasBeenSet() const;

                    /**
                     * 获取ISO货币代码
                     * @return CurrencyType ISO货币代码
                     * 
                     */
                    std::string GetCurrencyType() const;

                    /**
                     * 设置ISO货币代码
                     * @param _currencyType ISO货币代码
                     * 
                     */
                    void SetCurrencyType(const std::string& _currencyType);

                    /**
                     * 判断参数 CurrencyType 是否已赋值
                     * @return CurrencyType 是否已赋值
                     * 
                     */
                    bool CurrencyTypeHasBeenSet() const;

                    /**
                     * 获取透传字段
                     * @return MetaData 透传字段
                     * 
                     */
                    std::string GetMetaData() const;

                    /**
                     * 设置透传字段
                     * @param _metaData 透传字段
                     * 
                     */
                    void SetMetaData(const std::string& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     * 
                     */
                    bool MetaDataHasBeenSet() const;

                    /**
                     * 获取扩展字段
                     * @return ExtendFieldData 扩展字段
                     * 
                     */
                    std::string GetExtendFieldData() const;

                    /**
                     * 设置扩展字段
                     * @param _extendFieldData 扩展字段
                     * 
                     */
                    void SetExtendFieldData(const std::string& _extendFieldData);

                    /**
                     * 判断参数 ExtendFieldData 是否已赋值
                     * @return ExtendFieldData 是否已赋值
                     * 
                     */
                    bool ExtendFieldDataHasBeenSet() const;

                private:

                    /**
                     * 业务提现订单号
                     */
                    std::string m_withdrawOrderId;
                    bool m_withdrawOrderIdHasBeenSet;

                    /**
                     * 提现日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 提现金额，单位： 分
                     */
                    std::string m_payAmt;
                    bool m_payAmtHasBeenSet;

                    /**
                     * 聚鑫分配转入账户appid
                     */
                    std::string m_inSubAppId;
                    bool m_inSubAppIdHasBeenSet;

                    /**
                     * 聚鑫分配转出账户appid
                     */
                    std::string m_outSubAppId;
                    bool m_outSubAppIdHasBeenSet;

                    /**
                     * ISO货币代码
                     */
                    std::string m_currencyType;
                    bool m_currencyTypeHasBeenSet;

                    /**
                     * 透传字段
                     */
                    std::string m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * 扩展字段
                     */
                    std::string m_extendFieldData;
                    bool m_extendFieldDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_WITHDRAWBILL_H_
