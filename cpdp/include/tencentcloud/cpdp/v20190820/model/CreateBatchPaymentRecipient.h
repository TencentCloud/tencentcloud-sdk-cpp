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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEBATCHPAYMENTRECIPIENT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEBATCHPAYMENTRECIPIENT_H_

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
                * CreateBatchPayment转账明细
                */
                class CreateBatchPaymentRecipient : public AbstractModel
                {
                public:
                    CreateBatchPaymentRecipient();
                    ~CreateBatchPaymentRecipient() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转账金额
                     * @return TransferAmount 转账金额
                     * 
                     */
                    int64_t GetTransferAmount() const;

                    /**
                     * 设置转账金额
                     * @param _transferAmount 转账金额
                     * 
                     */
                    void SetTransferAmount(const int64_t& _transferAmount);

                    /**
                     * 判断参数 TransferAmount 是否已赋值
                     * @return TransferAmount 是否已赋值
                     * 
                     */
                    bool TransferAmountHasBeenSet() const;

                    /**
                     * 获取订单号
                     * @return OrderId 订单号
                     * 
                     */
                    std::string GetOrderId() const;

                    /**
                     * 设置订单号
                     * @param _orderId 订单号
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
                     * 获取主播业务ID（与主播业务ID不能同时为空，两者都填取主播ID）
                     * @return Uid 主播业务ID（与主播业务ID不能同时为空，两者都填取主播ID）
                     * 
                     */
                    std::string GetUid() const;

                    /**
                     * 设置主播业务ID（与主播业务ID不能同时为空，两者都填取主播ID）
                     * @param _uid 主播业务ID（与主播业务ID不能同时为空，两者都填取主播ID）
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
                     * 获取子单请求预留字段
                     * @return ReqReserved 子单请求预留字段
                     * 
                     */
                    std::string GetReqReserved() const;

                    /**
                     * 设置子单请求预留字段
                     * @param _reqReserved 子单请求预留字段
                     * 
                     */
                    void SetReqReserved(const std::string& _reqReserved);

                    /**
                     * 判断参数 ReqReserved 是否已赋值
                     * @return ReqReserved 是否已赋值
                     * 
                     */
                    bool ReqReservedHasBeenSet() const;

                private:

                    /**
                     * 转账金额
                     */
                    int64_t m_transferAmount;
                    bool m_transferAmountHasBeenSet;

                    /**
                     * 订单号
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 主播ID（与主播业务ID不能同时为空，两者都填取主播ID）
                     */
                    std::string m_anchorId;
                    bool m_anchorIdHasBeenSet;

                    /**
                     * 主播业务ID（与主播业务ID不能同时为空，两者都填取主播ID）
                     */
                    std::string m_uid;
                    bool m_uidHasBeenSet;

                    /**
                     * 主播名称。如果该字段填入，则会对AnchorName和AnchorId/Uid进行校验。
                     */
                    std::string m_anchorName;
                    bool m_anchorNameHasBeenSet;

                    /**
                     * 业务备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 子单请求预留字段
                     */
                    std::string m_reqReserved;
                    bool m_reqReservedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEBATCHPAYMENTRECIPIENT_H_
