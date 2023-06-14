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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_REFUNDREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_REFUNDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/RefundOutSubOrderRefundList.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * Refund请求参数结构体
                */
                class RefundRequest : public AbstractModel
                {
                public:
                    RefundRequest();
                    ~RefundRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户ID，长度不小于5位， 仅支持字母和数字的组合
                     * @return UserId 用户ID，长度不小于5位， 仅支持字母和数字的组合
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户ID，长度不小于5位， 仅支持字母和数字的组合
                     * @param _userId 用户ID，长度不小于5位， 仅支持字母和数字的组合
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取退款订单号，仅支持数字、 字母、下划线（_）、横杠字 符（-）、点（.）的组合
                     * @return RefundId 退款订单号，仅支持数字、 字母、下划线（_）、横杠字 符（-）、点（.）的组合
                     * 
                     */
                    std::string GetRefundId() const;

                    /**
                     * 设置退款订单号，仅支持数字、 字母、下划线（_）、横杠字 符（-）、点（.）的组合
                     * @param _refundId 退款订单号，仅支持数字、 字母、下划线（_）、横杠字 符（-）、点（.）的组合
                     * 
                     */
                    void SetRefundId(const std::string& _refundId);

                    /**
                     * 判断参数 RefundId 是否已赋值
                     * @return RefundId 是否已赋值
                     * 
                     */
                    bool RefundIdHasBeenSet() const;

                    /**
                     * 获取聚鑫分配的支付主MidasAppId
                     * @return MidasAppId 聚鑫分配的支付主MidasAppId
                     * 
                     */
                    std::string GetMidasAppId() const;

                    /**
                     * 设置聚鑫分配的支付主MidasAppId
                     * @param _midasAppId 聚鑫分配的支付主MidasAppId
                     * 
                     */
                    void SetMidasAppId(const std::string& _midasAppId);

                    /**
                     * 判断参数 MidasAppId 是否已赋值
                     * @return MidasAppId 是否已赋值
                     * 
                     */
                    bool MidasAppIdHasBeenSet() const;

                    /**
                     * 获取退款金额，单位：分。备注：当该字段为空或者为0 时，系统会默认使用订单当 实付金额作为退款金额
                     * @return TotalRefundAmt 退款金额，单位：分。备注：当该字段为空或者为0 时，系统会默认使用订单当 实付金额作为退款金额
                     * 
                     */
                    int64_t GetTotalRefundAmt() const;

                    /**
                     * 设置退款金额，单位：分。备注：当该字段为空或者为0 时，系统会默认使用订单当 实付金额作为退款金额
                     * @param _totalRefundAmt 退款金额，单位：分。备注：当该字段为空或者为0 时，系统会默认使用订单当 实付金额作为退款金额
                     * 
                     */
                    void SetTotalRefundAmt(const int64_t& _totalRefundAmt);

                    /**
                     * 判断参数 TotalRefundAmt 是否已赋值
                     * @return TotalRefundAmt 是否已赋值
                     * 
                     */
                    bool TotalRefundAmtHasBeenSet() const;

                    /**
                     * 获取聚鑫分配的安全ID
                     * @return MidasSecretId 聚鑫分配的安全ID
                     * 
                     */
                    std::string GetMidasSecretId() const;

                    /**
                     * 设置聚鑫分配的安全ID
                     * @param _midasSecretId 聚鑫分配的安全ID
                     * 
                     */
                    void SetMidasSecretId(const std::string& _midasSecretId);

                    /**
                     * 判断参数 MidasSecretId 是否已赋值
                     * @return MidasSecretId 是否已赋值
                     * 
                     */
                    bool MidasSecretIdHasBeenSet() const;

                    /**
                     * 获取按照聚鑫安全密钥计算的签名
                     * @return MidasSignature 按照聚鑫安全密钥计算的签名
                     * 
                     */
                    std::string GetMidasSignature() const;

                    /**
                     * 设置按照聚鑫安全密钥计算的签名
                     * @param _midasSignature 按照聚鑫安全密钥计算的签名
                     * 
                     */
                    void SetMidasSignature(const std::string& _midasSignature);

                    /**
                     * 判断参数 MidasSignature 是否已赋值
                     * @return MidasSignature 是否已赋值
                     * 
                     */
                    bool MidasSignatureHasBeenSet() const;

                    /**
                     * 获取商品订单，仅支持数字、字 母、下划线（_）、横杠字符 （-）、点（.）的组合。  OutTradeNo ,TransactionId 二选一,不能都为空,优先使用 OutTradeNo
                     * @return OutTradeNo 商品订单，仅支持数字、字 母、下划线（_）、横杠字符 （-）、点（.）的组合。  OutTradeNo ,TransactionId 二选一,不能都为空,优先使用 OutTradeNo
                     * 
                     */
                    std::string GetOutTradeNo() const;

                    /**
                     * 设置商品订单，仅支持数字、字 母、下划线（_）、横杠字符 （-）、点（.）的组合。  OutTradeNo ,TransactionId 二选一,不能都为空,优先使用 OutTradeNo
                     * @param _outTradeNo 商品订单，仅支持数字、字 母、下划线（_）、横杠字符 （-）、点（.）的组合。  OutTradeNo ,TransactionId 二选一,不能都为空,优先使用 OutTradeNo
                     * 
                     */
                    void SetOutTradeNo(const std::string& _outTradeNo);

                    /**
                     * 判断参数 OutTradeNo 是否已赋值
                     * @return OutTradeNo 是否已赋值
                     * 
                     */
                    bool OutTradeNoHasBeenSet() const;

                    /**
                     * 获取结算应收金额，单位：分
                     * @return MchRefundAmt 结算应收金额，单位：分
                     * 
                     */
                    int64_t GetMchRefundAmt() const;

                    /**
                     * 设置结算应收金额，单位：分
                     * @param _mchRefundAmt 结算应收金额，单位：分
                     * 
                     */
                    void SetMchRefundAmt(const int64_t& _mchRefundAmt);

                    /**
                     * 判断参数 MchRefundAmt 是否已赋值
                     * @return MchRefundAmt 是否已赋值
                     * 
                     */
                    bool MchRefundAmtHasBeenSet() const;

                    /**
                     * 获取调用下单接口获取的聚鑫交 易订单。  OutTradeNo ,TransactionId 二选一,不能都为空,优先使用 OutTradeNo
                     * @return TransactionId 调用下单接口获取的聚鑫交 易订单。  OutTradeNo ,TransactionId 二选一,不能都为空,优先使用 OutTradeNo
                     * 
                     */
                    std::string GetTransactionId() const;

                    /**
                     * 设置调用下单接口获取的聚鑫交 易订单。  OutTradeNo ,TransactionId 二选一,不能都为空,优先使用 OutTradeNo
                     * @param _transactionId 调用下单接口获取的聚鑫交 易订单。  OutTradeNo ,TransactionId 二选一,不能都为空,优先使用 OutTradeNo
                     * 
                     */
                    void SetTransactionId(const std::string& _transactionId);

                    /**
                     * 判断参数 TransactionId 是否已赋值
                     * @return TransactionId 是否已赋值
                     * 
                     */
                    bool TransactionIdHasBeenSet() const;

                    /**
                     * 获取平台应收金额，单位：分
                     * @return PlatformRefundAmt 平台应收金额，单位：分
                     * 
                     */
                    int64_t GetPlatformRefundAmt() const;

                    /**
                     * 设置平台应收金额，单位：分
                     * @param _platformRefundAmt 平台应收金额，单位：分
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
                     * 获取支持多个子订单批量退款单 个子订单退款支持传 SubOutTradeNo ，也支持传 SubOutTradeNoList ，都传的时候以 SubOutTradeNoList 为准。  如果传了子单退款细节，外 部不需要再传退款金额，平 台应退，商户应退金额，我 们可以直接根据子单退款算出来总和。
                     * @return SubOrderRefundList 支持多个子订单批量退款单 个子订单退款支持传 SubOutTradeNo ，也支持传 SubOutTradeNoList ，都传的时候以 SubOutTradeNoList 为准。  如果传了子单退款细节，外 部不需要再传退款金额，平 台应退，商户应退金额，我 们可以直接根据子单退款算出来总和。
                     * 
                     */
                    std::vector<RefundOutSubOrderRefundList> GetSubOrderRefundList() const;

                    /**
                     * 设置支持多个子订单批量退款单 个子订单退款支持传 SubOutTradeNo ，也支持传 SubOutTradeNoList ，都传的时候以 SubOutTradeNoList 为准。  如果传了子单退款细节，外 部不需要再传退款金额，平 台应退，商户应退金额，我 们可以直接根据子单退款算出来总和。
                     * @param _subOrderRefundList 支持多个子订单批量退款单 个子订单退款支持传 SubOutTradeNo ，也支持传 SubOutTradeNoList ，都传的时候以 SubOutTradeNoList 为准。  如果传了子单退款细节，外 部不需要再传退款金额，平 台应退，商户应退金额，我 们可以直接根据子单退款算出来总和。
                     * 
                     */
                    void SetSubOrderRefundList(const std::vector<RefundOutSubOrderRefundList>& _subOrderRefundList);

                    /**
                     * 判断参数 SubOrderRefundList 是否已赋值
                     * @return SubOrderRefundList 是否已赋值
                     * 
                     */
                    bool SubOrderRefundListHasBeenSet() const;

                    /**
                     * 获取环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * @return MidasEnvironment 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * 
                     */
                    std::string GetMidasEnvironment() const;

                    /**
                     * 设置环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * @param _midasEnvironment 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     * 
                     */
                    void SetMidasEnvironment(const std::string& _midasEnvironment);

                    /**
                     * 判断参数 MidasEnvironment 是否已赋值
                     * @return MidasEnvironment 是否已赋值
                     * 
                     */
                    bool MidasEnvironmentHasBeenSet() const;

                private:

                    /**
                     * 用户ID，长度不小于5位， 仅支持字母和数字的组合
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 退款订单号，仅支持数字、 字母、下划线（_）、横杠字 符（-）、点（.）的组合
                     */
                    std::string m_refundId;
                    bool m_refundIdHasBeenSet;

                    /**
                     * 聚鑫分配的支付主MidasAppId
                     */
                    std::string m_midasAppId;
                    bool m_midasAppIdHasBeenSet;

                    /**
                     * 退款金额，单位：分。备注：当该字段为空或者为0 时，系统会默认使用订单当 实付金额作为退款金额
                     */
                    int64_t m_totalRefundAmt;
                    bool m_totalRefundAmtHasBeenSet;

                    /**
                     * 聚鑫分配的安全ID
                     */
                    std::string m_midasSecretId;
                    bool m_midasSecretIdHasBeenSet;

                    /**
                     * 按照聚鑫安全密钥计算的签名
                     */
                    std::string m_midasSignature;
                    bool m_midasSignatureHasBeenSet;

                    /**
                     * 商品订单，仅支持数字、字 母、下划线（_）、横杠字符 （-）、点（.）的组合。  OutTradeNo ,TransactionId 二选一,不能都为空,优先使用 OutTradeNo
                     */
                    std::string m_outTradeNo;
                    bool m_outTradeNoHasBeenSet;

                    /**
                     * 结算应收金额，单位：分
                     */
                    int64_t m_mchRefundAmt;
                    bool m_mchRefundAmtHasBeenSet;

                    /**
                     * 调用下单接口获取的聚鑫交 易订单。  OutTradeNo ,TransactionId 二选一,不能都为空,优先使用 OutTradeNo
                     */
                    std::string m_transactionId;
                    bool m_transactionIdHasBeenSet;

                    /**
                     * 平台应收金额，单位：分
                     */
                    int64_t m_platformRefundAmt;
                    bool m_platformRefundAmtHasBeenSet;

                    /**
                     * 支持多个子订单批量退款单 个子订单退款支持传 SubOutTradeNo ，也支持传 SubOutTradeNoList ，都传的时候以 SubOutTradeNoList 为准。  如果传了子单退款细节，外 部不需要再传退款金额，平 台应退，商户应退金额，我 们可以直接根据子单退款算出来总和。
                     */
                    std::vector<RefundOutSubOrderRefundList> m_subOrderRefundList;
                    bool m_subOrderRefundListHasBeenSet;

                    /**
                     * 环境名:
release: 现网环境
sandbox: 沙箱环境
development: 开发环境
缺省: release
                     */
                    std::string m_midasEnvironment;
                    bool m_midasEnvironmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_REFUNDREQUEST_H_
