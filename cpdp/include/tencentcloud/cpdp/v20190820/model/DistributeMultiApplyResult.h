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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_DISTRIBUTEMULTIAPPLYRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_DISTRIBUTEMULTIAPPLYRESULT_H_

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
                * 分账申请响应对象
                */
                class DistributeMultiApplyResult : public AbstractModel
                {
                public:
                    DistributeMultiApplyResult();
                    ~DistributeMultiApplyResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分账状态（0分账初始 1分账成功 2分账失败）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 分账状态（0分账初始 1分账成功 2分账失败）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置分账状态（0分账初始 1分账成功 2分账失败）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 分账状态（0分账初始 1分账成功 2分账失败）
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取平台分账单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DistributeNo 平台分账单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDistributeNo() const;

                    /**
                     * 设置平台分账单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _distributeNo 平台分账单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDistributeNo(const std::string& _distributeNo);

                    /**
                     * 判断参数 DistributeNo 是否已赋值
                     * @return DistributeNo 是否已赋值
                     * 
                     */
                    bool DistributeNoHasBeenSet() const;

                    /**
                     * 获取入账日期，yyyy-MM-dd格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InDate 入账日期，yyyy-MM-dd格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInDate() const;

                    /**
                     * 设置入账日期，yyyy-MM-dd格式
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inDate 入账日期，yyyy-MM-dd格式
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInDate(const std::string& _inDate);

                    /**
                     * 判断参数 InDate 是否已赋值
                     * @return InDate 是否已赋值
                     * 
                     */
                    bool InDateHasBeenSet() const;

                    /**
                     * 获取分账金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Amount 分账金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAmount() const;

                    /**
                     * 设置分账金额
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _amount 分账金额
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAmount(const std::string& _amount);

                    /**
                     * 判断参数 Amount 是否已赋值
                     * @return Amount 是否已赋值
                     * 
                     */
                    bool AmountHasBeenSet() const;

                    /**
                     * 获取商户分账单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutDistributeNo 商户分账单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutDistributeNo() const;

                    /**
                     * 设置商户分账单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outDistributeNo 商户分账单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutDistributeNo(const std::string& _outDistributeNo);

                    /**
                     * 判断参数 OutDistributeNo 是否已赋值
                     * @return OutDistributeNo 是否已赋值
                     * 
                     */
                    bool OutDistributeNoHasBeenSet() const;

                    /**
                     * 获取平台支付单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrderNo 平台支付单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOrderNo() const;

                    /**
                     * 设置平台支付单号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _orderNo 平台支付单号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOrderNo(const std::string& _orderNo);

                    /**
                     * 判断参数 OrderNo 是否已赋值
                     * @return OrderNo 是否已赋值
                     * 
                     */
                    bool OrderNoHasBeenSet() const;

                private:

                    /**
                     * 分账状态（0分账初始 1分账成功 2分账失败）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 平台分账单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_distributeNo;
                    bool m_distributeNoHasBeenSet;

                    /**
                     * 入账日期，yyyy-MM-dd格式
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inDate;
                    bool m_inDateHasBeenSet;

                    /**
                     * 分账金额
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_amount;
                    bool m_amountHasBeenSet;

                    /**
                     * 商户分账单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outDistributeNo;
                    bool m_outDistributeNoHasBeenSet;

                    /**
                     * 平台支付单号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_orderNo;
                    bool m_orderNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_DISTRIBUTEMULTIAPPLYRESULT_H_
