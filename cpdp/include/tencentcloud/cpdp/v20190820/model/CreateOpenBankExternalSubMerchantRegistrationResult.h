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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKEXTERNALSUBMERCHANTREGISTRATIONRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKEXTERNALSUBMERCHANTREGISTRATIONRESULT_H_

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
                * 子商户进件返回结果
                */
                class CreateOpenBankExternalSubMerchantRegistrationResult : public AbstractModel
                {
                public:
                    CreateOpenBankExternalSubMerchantRegistrationResult();
                    ~CreateOpenBankExternalSubMerchantRegistrationResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取进件状态。
__SUCCESS__: 进件成功
__FAILED__: 进件失败
__PROCESSING__: 进件中
注意：若返回进件中，需要再次调用进件结果查询接口，查询结果。
                     * @return RegistrationStatus 进件状态。
__SUCCESS__: 进件成功
__FAILED__: 进件失败
__PROCESSING__: 进件中
注意：若返回进件中，需要再次调用进件结果查询接口，查询结果。
                     * 
                     */
                    std::string GetRegistrationStatus() const;

                    /**
                     * 设置进件状态。
__SUCCESS__: 进件成功
__FAILED__: 进件失败
__PROCESSING__: 进件中
注意：若返回进件中，需要再次调用进件结果查询接口，查询结果。
                     * @param _registrationStatus 进件状态。
__SUCCESS__: 进件成功
__FAILED__: 进件失败
__PROCESSING__: 进件中
注意：若返回进件中，需要再次调用进件结果查询接口，查询结果。
                     * 
                     */
                    void SetRegistrationStatus(const std::string& _registrationStatus);

                    /**
                     * 判断参数 RegistrationStatus 是否已赋值
                     * @return RegistrationStatus 是否已赋值
                     * 
                     */
                    bool RegistrationStatusHasBeenSet() const;

                    /**
                     * 获取进件返回描述, 例如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RegistrationMessage 进件返回描述, 例如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRegistrationMessage() const;

                    /**
                     * 设置进件返回描述, 例如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _registrationMessage 进件返回描述, 例如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRegistrationMessage(const std::string& _registrationMessage);

                    /**
                     * 判断参数 RegistrationMessage 是否已赋值
                     * @return RegistrationMessage 是否已赋值
                     * 
                     */
                    bool RegistrationMessageHasBeenSet() const;

                    /**
                     * 获取渠道进件序列号。
                     * @return ChannelRegistrationNo 渠道进件序列号。
                     * 
                     */
                    std::string GetChannelRegistrationNo() const;

                    /**
                     * 设置渠道进件序列号。
                     * @param _channelRegistrationNo 渠道进件序列号。
                     * 
                     */
                    void SetChannelRegistrationNo(const std::string& _channelRegistrationNo);

                    /**
                     * 判断参数 ChannelRegistrationNo 是否已赋值
                     * @return ChannelRegistrationNo 是否已赋值
                     * 
                     */
                    bool ChannelRegistrationNoHasBeenSet() const;

                    /**
                     * 获取渠道子商户ID。
                     * @return ChannelSubMerchantId 渠道子商户ID。
                     * 
                     */
                    std::string GetChannelSubMerchantId() const;

                    /**
                     * 设置渠道子商户ID。
                     * @param _channelSubMerchantId 渠道子商户ID。
                     * 
                     */
                    void SetChannelSubMerchantId(const std::string& _channelSubMerchantId);

                    /**
                     * 判断参数 ChannelSubMerchantId 是否已赋值
                     * @return ChannelSubMerchantId 是否已赋值
                     * 
                     */
                    bool ChannelSubMerchantIdHasBeenSet() const;

                    /**
                     * 获取第三方渠道返回信息, 为JSON格式字符串。详情见附录-复杂类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalReturnData 第三方渠道返回信息, 为JSON格式字符串。详情见附录-复杂类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExternalReturnData() const;

                    /**
                     * 设置第三方渠道返回信息, 为JSON格式字符串。详情见附录-复杂类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalReturnData 第三方渠道返回信息, 为JSON格式字符串。详情见附录-复杂类型。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalReturnData(const std::string& _externalReturnData);

                    /**
                     * 判断参数 ExternalReturnData 是否已赋值
                     * @return ExternalReturnData 是否已赋值
                     * 
                     */
                    bool ExternalReturnDataHasBeenSet() const;

                private:

                    /**
                     * 进件状态。
__SUCCESS__: 进件成功
__FAILED__: 进件失败
__PROCESSING__: 进件中
注意：若返回进件中，需要再次调用进件结果查询接口，查询结果。
                     */
                    std::string m_registrationStatus;
                    bool m_registrationStatusHasBeenSet;

                    /**
                     * 进件返回描述, 例如失败原因等。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_registrationMessage;
                    bool m_registrationMessageHasBeenSet;

                    /**
                     * 渠道进件序列号。
                     */
                    std::string m_channelRegistrationNo;
                    bool m_channelRegistrationNoHasBeenSet;

                    /**
                     * 渠道子商户ID。
                     */
                    std::string m_channelSubMerchantId;
                    bool m_channelSubMerchantIdHasBeenSet;

                    /**
                     * 第三方渠道返回信息, 为JSON格式字符串。详情见附录-复杂类型。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalReturnData;
                    bool m_externalReturnDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_CREATEOPENBANKEXTERNALSUBMERCHANTREGISTRATIONRESULT_H_
