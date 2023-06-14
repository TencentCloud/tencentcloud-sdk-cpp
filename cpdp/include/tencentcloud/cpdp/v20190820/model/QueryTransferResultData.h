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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYTRANSFERRESULTDATA_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYTRANSFERRESULTDATA_H_

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
                * 智能代发-单笔代发转账查询接口返回内容
                */
                class QueryTransferResultData : public AbstractModel
                {
                public:
                    QueryTransferResultData();
                    ~QueryTransferResultData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取平台交易流水号
                     * @return TradeSerialNo 平台交易流水号
                     * 
                     */
                    std::string GetTradeSerialNo() const;

                    /**
                     * 设置平台交易流水号
                     * @param _tradeSerialNo 平台交易流水号
                     * 
                     */
                    void SetTradeSerialNo(const std::string& _tradeSerialNo);

                    /**
                     * 判断参数 TradeSerialNo 是否已赋值
                     * @return TradeSerialNo 是否已赋值
                     * 
                     */
                    bool TradeSerialNoHasBeenSet() const;

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
                     * 获取交易状态。
0 处理中  
1 提交成功 
2 交易成功 
3 交易失败 
4 未知渠道异常 
99 未知系统异常
                     * @return TradeStatus 交易状态。
0 处理中  
1 提交成功 
2 交易成功 
3 交易失败 
4 未知渠道异常 
99 未知系统异常
                     * 
                     */
                    int64_t GetTradeStatus() const;

                    /**
                     * 设置交易状态。
0 处理中  
1 提交成功 
2 交易成功 
3 交易失败 
4 未知渠道异常 
99 未知系统异常
                     * @param _tradeStatus 交易状态。
0 处理中  
1 提交成功 
2 交易成功 
3 交易失败 
4 未知渠道异常 
99 未知系统异常
                     * 
                     */
                    void SetTradeStatus(const int64_t& _tradeStatus);

                    /**
                     * 判断参数 TradeStatus 是否已赋值
                     * @return TradeStatus 是否已赋值
                     * 
                     */
                    bool TradeStatusHasBeenSet() const;

                    /**
                     * 获取业务备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Remark 业务备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置业务备注
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _remark 业务备注
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 平台交易流水号
                     */
                    std::string m_tradeSerialNo;
                    bool m_tradeSerialNoHasBeenSet;

                    /**
                     * 订单号
                     */
                    std::string m_orderId;
                    bool m_orderIdHasBeenSet;

                    /**
                     * 交易状态。
0 处理中  
1 提交成功 
2 交易成功 
3 交易失败 
4 未知渠道异常 
99 未知系统异常
                     */
                    int64_t m_tradeStatus;
                    bool m_tradeStatusHasBeenSet;

                    /**
                     * 业务备注
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYTRANSFERRESULTDATA_H_
