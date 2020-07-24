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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATESINGLEPAYRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATESINGLEPAYRESULT_H_

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
                * 银企直连-单笔支付响应结果
                */
                class CreateSinglePayResult : public AbstractModel
                {
                public:
                    CreateSinglePayResult();
                    ~CreateSinglePayResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取受理状态（S：处理成功；F：处理失败）
                     * @return HandleStatus 受理状态（S：处理成功；F：处理失败）
                     */
                    std::string GetHandleStatus() const;

                    /**
                     * 设置受理状态（S：处理成功；F：处理失败）
                     * @param HandleStatus 受理状态（S：处理成功；F：处理失败）
                     */
                    void SetHandleStatus(const std::string& _handleStatus);

                    /**
                     * 判断参数 HandleStatus 是否已赋值
                     * @return HandleStatus 是否已赋值
                     */
                    bool HandleStatusHasBeenSet() const;

                    /**
                     * 获取受理状态描述
                     * @return HandleMsg 受理状态描述
                     */
                    std::string GetHandleMsg() const;

                    /**
                     * 设置受理状态描述
                     * @param HandleMsg 受理状态描述
                     */
                    void SetHandleMsg(const std::string& _handleMsg);

                    /**
                     * 判断参数 HandleMsg 是否已赋值
                     * @return HandleMsg 是否已赋值
                     */
                    bool HandleMsgHasBeenSet() const;

                    /**
                     * 获取业务流水号，历史唯一
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SerialNo 业务流水号，历史唯一
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSerialNo() const;

                    /**
                     * 设置业务流水号，历史唯一
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SerialNo 业务流水号，历史唯一
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSerialNo(const std::string& _serialNo);

                    /**
                     * 判断参数 SerialNo 是否已赋值
                     * @return SerialNo 是否已赋值
                     */
                    bool SerialNoHasBeenSet() const;

                    /**
                     * 获取银行指令流水
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BankSerialNo 银行指令流水
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetBankSerialNo() const;

                    /**
                     * 设置银行指令流水
注意：此字段可能返回 null，表示取不到有效值。
                     * @param BankSerialNo 银行指令流水
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetBankSerialNo(const std::string& _bankSerialNo);

                    /**
                     * 判断参数 BankSerialNo 是否已赋值
                     * @return BankSerialNo 是否已赋值
                     */
                    bool BankSerialNoHasBeenSet() const;

                    /**
                     * 获取付款状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PayStatus 付款状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPayStatus() const;

                    /**
                     * 设置付款状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PayStatus 付款状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPayStatus(const std::string& _payStatus);

                    /**
                     * 判断参数 PayStatus 是否已赋值
                     * @return PayStatus 是否已赋值
                     */
                    bool PayStatusHasBeenSet() const;

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
                     * 受理状态（S：处理成功；F：处理失败）
                     */
                    std::string m_handleStatus;
                    bool m_handleStatusHasBeenSet;

                    /**
                     * 受理状态描述
                     */
                    std::string m_handleMsg;
                    bool m_handleMsgHasBeenSet;

                    /**
                     * 业务流水号，历史唯一
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_serialNo;
                    bool m_serialNoHasBeenSet;

                    /**
                     * 银行指令流水
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bankSerialNo;
                    bool m_bankSerialNoHasBeenSet;

                    /**
                     * 付款状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_payStatus;
                    bool m_payStatusHasBeenSet;

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

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATESINGLEPAYRESULT_H_
