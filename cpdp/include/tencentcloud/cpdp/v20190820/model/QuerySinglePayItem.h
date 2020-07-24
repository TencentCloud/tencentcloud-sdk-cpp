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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYSINGLEPAYITEM_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYSINGLEPAYITEM_H_

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
                * 银企直连-查询单笔支付状态条目
                */
                class QuerySinglePayItem : public AbstractModel
                {
                public:
                    QuerySinglePayItem();
                    ~QuerySinglePayItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取付款状态（S：支付成功；P：支付处理中；F：支付失败）
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayStatus 付款状态（S：支付成功；P：支付处理中；F：支付失败）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPayStatus() const;

                    /**
                     * 设置付款状态（S：支付成功；P：支付处理中；F：支付失败）
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PayStatus 付款状态（S：支付成功；P：支付处理中；F：支付失败）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPayStatus(const std::string& _payStatus);

                    /**
                     * 判断参数 PayStatus 是否已赋值
                     * @return PayStatus 是否已赋值
                     */
                    bool PayStatusHasBeenSet() const;

                    /**
                     * 获取平台信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PlatformMsg 平台信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPlatformMsg() const;

                    /**
                     * 设置平台信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PlatformMsg 平台信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPlatformMsg(const std::string& _platformMsg);

                    /**
                     * 判断参数 PlatformMsg 是否已赋值
                     * @return PlatformMsg 是否已赋值
                     */
                    bool PlatformMsgHasBeenSet() const;

                    /**
                     * 获取银行原始返回码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BankRetCode 银行原始返回码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBankRetCode() const;

                    /**
                     * 设置银行原始返回码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BankRetCode 银行原始返回码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBankRetCode(const std::string& _bankRetCode);

                    /**
                     * 判断参数 BankRetCode 是否已赋值
                     * @return BankRetCode 是否已赋值
                     */
                    bool BankRetCodeHasBeenSet() const;

                    /**
                     * 获取银行原始返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BankRetMsg 银行原始返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBankRetMsg() const;

                    /**
                     * 设置银行原始返回
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BankRetMsg 银行原始返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBankRetMsg(const std::string& _bankRetMsg);

                    /**
                     * 判断参数 BankRetMsg 是否已赋值
                     * @return BankRetMsg 是否已赋值
                     */
                    bool BankRetMsgHasBeenSet() const;

                private:

                    /**
                     * 付款状态（S：支付成功；P：支付处理中；F：支付失败）
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payStatus;
                    bool m_payStatusHasBeenSet;

                    /**
                     * 平台信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_platformMsg;
                    bool m_platformMsgHasBeenSet;

                    /**
                     * 银行原始返回码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bankRetCode;
                    bool m_bankRetCodeHasBeenSet;

                    /**
                     * 银行原始返回
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bankRetMsg;
                    bool m_bankRetMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYSINGLEPAYITEM_H_
