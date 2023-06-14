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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_BINDOPENBANKEXTERNALSUBMERCHANTBANKACCOUNTRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_BINDOPENBANKEXTERNALSUBMERCHANTBANKACCOUNTRESULT_H_

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
                * 第三方子商户银行卡绑定返回结果
                */
                class BindOpenBankExternalSubMerchantBankAccountResult : public AbstractModel
                {
                public:
                    BindOpenBankExternalSubMerchantBankAccountResult();
                    ~BindOpenBankExternalSubMerchantBankAccountResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取渠道申请编号。
                     * @return ChannelApplyId 渠道申请编号。
                     * 
                     */
                    std::string GetChannelApplyId() const;

                    /**
                     * 设置渠道申请编号。
                     * @param _channelApplyId 渠道申请编号。
                     * 
                     */
                    void SetChannelApplyId(const std::string& _channelApplyId);

                    /**
                     * 判断参数 ChannelApplyId 是否已赋值
                     * @return ChannelApplyId 是否已赋值
                     * 
                     */
                    bool ChannelApplyIdHasBeenSet() const;

                    /**
                     * 获取绑定状态。
__SUCCESS__: 绑定成功
__FAILED__: 绑定失败
__PROCESSING__: 绑定中。
注意：若返回绑定中，需要再次调用绑定结果查询接口,查询结果。
                     * @return BindStatus 绑定状态。
__SUCCESS__: 绑定成功
__FAILED__: 绑定失败
__PROCESSING__: 绑定中。
注意：若返回绑定中，需要再次调用绑定结果查询接口,查询结果。
                     * 
                     */
                    std::string GetBindStatus() const;

                    /**
                     * 设置绑定状态。
__SUCCESS__: 绑定成功
__FAILED__: 绑定失败
__PROCESSING__: 绑定中。
注意：若返回绑定中，需要再次调用绑定结果查询接口,查询结果。
                     * @param _bindStatus 绑定状态。
__SUCCESS__: 绑定成功
__FAILED__: 绑定失败
__PROCESSING__: 绑定中。
注意：若返回绑定中，需要再次调用绑定结果查询接口,查询结果。
                     * 
                     */
                    void SetBindStatus(const std::string& _bindStatus);

                    /**
                     * 判断参数 BindStatus 是否已赋值
                     * @return BindStatus 是否已赋值
                     * 
                     */
                    bool BindStatusHasBeenSet() const;

                    /**
                     * 获取绑定返回描述, 例如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BindMessage 绑定返回描述, 例如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBindMessage() const;

                    /**
                     * 设置绑定返回描述, 例如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bindMessage 绑定返回描述, 例如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBindMessage(const std::string& _bindMessage);

                    /**
                     * 判断参数 BindMessage 是否已赋值
                     * @return BindMessage 是否已赋值
                     * 
                     */
                    bool BindMessageHasBeenSet() const;

                    /**
                     * 获取渠道子商户银行账户信息, 为JSON格式字符串（绑定成功状态下返回）。详情见附录-复杂类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalSubMerchantBankAccountReturnData 渠道子商户银行账户信息, 为JSON格式字符串（绑定成功状态下返回）。详情见附录-复杂类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExternalSubMerchantBankAccountReturnData() const;

                    /**
                     * 设置渠道子商户银行账户信息, 为JSON格式字符串（绑定成功状态下返回）。详情见附录-复杂类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalSubMerchantBankAccountReturnData 渠道子商户银行账户信息, 为JSON格式字符串（绑定成功状态下返回）。详情见附录-复杂类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalSubMerchantBankAccountReturnData(const std::string& _externalSubMerchantBankAccountReturnData);

                    /**
                     * 判断参数 ExternalSubMerchantBankAccountReturnData 是否已赋值
                     * @return ExternalSubMerchantBankAccountReturnData 是否已赋值
                     * 
                     */
                    bool ExternalSubMerchantBankAccountReturnDataHasBeenSet() const;

                    /**
                     * 获取绑卡序列号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BindSerialNo 绑卡序列号。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetBindSerialNo() const;

                    /**
                     * 设置绑卡序列号。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _bindSerialNo 绑卡序列号。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBindSerialNo(const std::string& _bindSerialNo);

                    /**
                     * 判断参数 BindSerialNo 是否已赋值
                     * @return BindSerialNo 是否已赋值
                     * 
                     */
                    bool BindSerialNoHasBeenSet() const;

                private:

                    /**
                     * 渠道申请编号。
                     */
                    std::string m_channelApplyId;
                    bool m_channelApplyIdHasBeenSet;

                    /**
                     * 绑定状态。
__SUCCESS__: 绑定成功
__FAILED__: 绑定失败
__PROCESSING__: 绑定中。
注意：若返回绑定中，需要再次调用绑定结果查询接口,查询结果。
                     */
                    std::string m_bindStatus;
                    bool m_bindStatusHasBeenSet;

                    /**
                     * 绑定返回描述, 例如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bindMessage;
                    bool m_bindMessageHasBeenSet;

                    /**
                     * 渠道子商户银行账户信息, 为JSON格式字符串（绑定成功状态下返回）。详情见附录-复杂类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalSubMerchantBankAccountReturnData;
                    bool m_externalSubMerchantBankAccountReturnDataHasBeenSet;

                    /**
                     * 绑卡序列号。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_bindSerialNo;
                    bool m_bindSerialNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_BINDOPENBANKEXTERNALSUBMERCHANTBANKACCOUNTRESULT_H_
