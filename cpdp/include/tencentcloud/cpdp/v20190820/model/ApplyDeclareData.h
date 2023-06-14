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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYDECLAREDATA_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYDECLAREDATA_H_

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
                * 提交申报材料结果
                */
                class ApplyDeclareData : public AbstractModel
                {
                public:
                    ApplyDeclareData();
                    ~ApplyDeclareData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取商户号
                     * @return MerchantId 商户号
                     * 
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 设置商户号
                     * @param _merchantId 商户号
                     * 
                     */
                    void SetMerchantId(const std::string& _merchantId);

                    /**
                     * 判断参数 MerchantId 是否已赋值
                     * @return MerchantId 是否已赋值
                     * 
                     */
                    bool MerchantIdHasBeenSet() const;

                    /**
                     * 获取第三方指令编号
                     * @return TransactionId 第三方指令编号
                     * 
                     */
                    std::string GetTransactionId() const;

                    /**
                     * 设置第三方指令编号
                     * @param _transactionId 第三方指令编号
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
                     * 获取受理状态
                     * @return Status 受理状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置受理状态
                     * @param _status 受理状态
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
                     * 获取申报流水号
                     * @return DeclareId 申报流水号
                     * 
                     */
                    std::string GetDeclareId() const;

                    /**
                     * 设置申报流水号
                     * @param _declareId 申报流水号
                     * 
                     */
                    void SetDeclareId(const std::string& _declareId);

                    /**
                     * 判断参数 DeclareId 是否已赋值
                     * @return DeclareId 是否已赋值
                     * 
                     */
                    bool DeclareIdHasBeenSet() const;

                    /**
                     * 获取原申报流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginalDeclareId 原申报流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriginalDeclareId() const;

                    /**
                     * 设置原申报流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originalDeclareId 原申报流水号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginalDeclareId(const std::string& _originalDeclareId);

                    /**
                     * 判断参数 OriginalDeclareId 是否已赋值
                     * @return OriginalDeclareId 是否已赋值
                     * 
                     */
                    bool OriginalDeclareIdHasBeenSet() const;

                    /**
                     * 获取付款人ID
                     * @return PayerId 付款人ID
                     * 
                     */
                    std::string GetPayerId() const;

                    /**
                     * 设置付款人ID
                     * @param _payerId 付款人ID
                     * 
                     */
                    void SetPayerId(const std::string& _payerId);

                    /**
                     * 判断参数 PayerId 是否已赋值
                     * @return PayerId 是否已赋值
                     * 
                     */
                    bool PayerIdHasBeenSet() const;

                private:

                    /**
                     * 商户号
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 第三方指令编号
                     */
                    std::string m_transactionId;
                    bool m_transactionIdHasBeenSet;

                    /**
                     * 受理状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 申报流水号
                     */
                    std::string m_declareId;
                    bool m_declareIdHasBeenSet;

                    /**
                     * 原申报流水号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originalDeclareId;
                    bool m_originalDeclareIdHasBeenSet;

                    /**
                     * 付款人ID
                     */
                    std::string m_payerId;
                    bool m_payerIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_APPLYDECLAREDATA_H_
