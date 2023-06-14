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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATESINGLEPAYMENTREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATESINGLEPAYMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * CreateSinglePayment请求参数结构体
                */
                class CreateSinglePaymentRequest : public AbstractModel
                {
                public:
                    CreateSinglePaymentRequest();
                    ~CreateSinglePaymentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取转账类型
1 微信企业付款 
2 支付宝转账 
3 平安银企直连代发转账
                     * @return TransferType 转账类型
1 微信企业付款 
2 支付宝转账 
3 平安银企直连代发转账
                     * 
                     */
                    uint64_t GetTransferType() const;

                    /**
                     * 设置转账类型
1 微信企业付款 
2 支付宝转账 
3 平安银企直连代发转账
                     * @param _transferType 转账类型
1 微信企业付款 
2 支付宝转账 
3 平安银企直连代发转账
                     * 
                     */
                    void SetTransferType(const uint64_t& _transferType);

                    /**
                     * 判断参数 TransferType 是否已赋值
                     * @return TransferType 是否已赋值
                     * 
                     */
                    bool TransferTypeHasBeenSet() const;

                    /**
                     * 获取订单流水号
                     * @return OrderId 订单流水号
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单流水号
                     * @param _orderId 订单流水号
                     * 
                     */
                    void SetOrderId(const std::string& _orderId);

                    /**
                     * 判断参数 OrderId 是否已赋值
                     * @return OrderId 是否已赋值
                     * 
                     */
                    bool OrderIdHasBeenSet() const;

                    /**
                     * 获取转账金额
                     * @return TransferAmount 转账金额
                     * 
                     */
                    uint64_t GetTransferAmount() const;

                    /**
                     * 设置转账金额
                     * @param _transferAmount 转账金额
                     * 
                     */
                    void SetTransferAmount(const uint64_t& _transferAmount);

                    /**
                     * 判断参数 TransferAmount 是否已赋值
                     * @return TransferAmount 是否已赋值
                     * 
                     */
                    bool TransferAmountHasBeenSet() const;

                    /**
                     * 获取主播ID（与主播业务ID不能同时为空，两者都填取主播ID）
                     * @return AnchorId 主播ID（与主播业务ID不能同时为空，两者都填取主播ID）
                     * 
                     */
                    std::string GetAnchorId() const;

                    /**
                     * 设置主播ID（与主播业务ID不能同时为空，两者都填取主播ID）
                     * @param _anchorId 主播ID（与主播业务ID不能同时为空，两者都填取主播ID）
                     * 
                     */
                    void SetAnchorId(const std::string& _anchorId);

                    /**
                     * 判断参数 AnchorId 是否已赋值
                     * @return AnchorId 是否已赋值
                     * 
                     */
                    bool AnchorIdHasBeenSet() const;

                    /**
                     * 获取请求预留字段，原样透传返回
                     * @return ReqReserved 请求预留字段，原样透传返回
                     * 
                     */
                    std::string GetReqReserved() const;

                    /**
                     * 设置请求预留字段，原样透传返回
                     * @param _reqReserved 请求预留字段，原样透传返回
                     * 
                     */
                    void SetReqReserved(const std::string& _reqReserved);

                    /**
                     * 判断参数 ReqReserved 是否已赋值
                     * @return ReqReserved 是否已赋值
                     * 
                     */
                    bool ReqReservedHasBeenSet() const;

                    /**
                     * 获取业务备注
                     * @return Remark 业务备注
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置业务备注
                     * @param _remark 业务备注
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取主播名称。如果该字段填入，则会对AnchorName和AnchorId/Uid进行校验。
                     * @return AnchorName 主播名称。如果该字段填入，则会对AnchorName和AnchorId/Uid进行校验。
                     * 
                     */
                    std::string GetAnchorName() const;

                    /**
                     * 设置主播名称。如果该字段填入，则会对AnchorName和AnchorId/Uid进行校验。
                     * @param _anchorName 主播名称。如果该字段填入，则会对AnchorName和AnchorId/Uid进行校验。
                     * 
                     */
                    void SetAnchorName(const std::string& _anchorName);

                    /**
                     * 判断参数 AnchorName 是否已赋值
                     * @return AnchorName 是否已赋值
                     * 
                     */
                    bool AnchorNameHasBeenSet() const;

                    /**
                     * 获取主播业务ID（与主播ID不能同时为空，两者都填取主播ID）
                     * @return Uid 主播业务ID（与主播ID不能同时为空，两者都填取主播ID）
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置主播业务ID（与主播ID不能同时为空，两者都填取主播ID）
                     * @param _uid 主播业务ID（与主播ID不能同时为空，两者都填取主播ID）
                     * 
                     */
                    void SetUid(const std::string& _uid);

                    /**
                     * 判断参数 Uid 是否已赋值
                     * @return Uid 是否已赋值
                     * 
                     */
                    bool UidHasBeenSet() const;

                    /**
                     * 获取转账结果回调通知URL。若不填，则不进行回调。
                     * @return NotifyUrl 转账结果回调通知URL。若不填，则不进行回调。
                     * 
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 设置转账结果回调通知URL。若不填，则不进行回调。
                     * @param _notifyUrl 转账结果回调通知URL。若不填，则不进行回调。
                     * 
                     */
                    void SetNotifyUrl(const std::string& _notifyUrl);

                    /**
                     * 判断参数 NotifyUrl 是否已赋值
                     * @return NotifyUrl 是否已赋值
                     * 
                     */
                    bool NotifyUrlHasBeenSet() const;

                private:

                    /**
                     * 转账类型
1 微信企业付款 
2 支付宝转账 
3 平安银企直连代发转账
                     */
                    uint64_t m_transferType;
                    bool m_transferTypeHasBeenSet;

                    /**
                     * 订单流水号
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 转账金额
                     */
                    uint64_t m_transferAmount;
                    bool m_transferAmountHasBeenSet;

                    /**
                     * 主播ID（与主播业务ID不能同时为空，两者都填取主播ID）
                     */
                    std::string m_anchorId;
                    bool m_anchorIdHasBeenSet;

                    /**
                     * 请求预留字段，原样透传返回
                     */
                    std::string m_reqReserved;
                    bool m_reqReservedHasBeenSet;

                    /**
                     * 业务备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 主播名称。如果该字段填入，则会对AnchorName和AnchorId/Uid进行校验。
                     */
                    std::string m_anchorName;
                    bool m_anchorNameHasBeenSet;

                    /**
                     * 主播业务ID（与主播ID不能同时为空，两者都填取主播ID）
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * 转账结果回调通知URL。若不填，则不进行回调。
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATESINGLEPAYMENTREQUEST_H_
