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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_RESPONSEQUERYCONTRACT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_RESPONSEQUERYCONTRACT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cpdp/v20190820/model/ReturnContractInfo.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 签约数据
                */
                class ResponseQueryContract : public AbstractModel
                {
                public:
                    ResponseQueryContract();
                    ~ResponseQueryContract() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取第三方渠道错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalReturnCode 第三方渠道错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExternalReturnCode() const;

                    /**
                     * 设置第三方渠道错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalReturnCode 第三方渠道错误码
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalReturnCode(const std::string& _externalReturnCode);

                    /**
                     * 判断参数 ExternalReturnCode 是否已赋值
                     * @return ExternalReturnCode 是否已赋值
                     * 
                     */
                    bool ExternalReturnCodeHasBeenSet() const;

                    /**
                     * 获取第三方渠道错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalReturnMessage 第三方渠道错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExternalReturnMessage() const;

                    /**
                     * 设置第三方渠道错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalReturnMessage 第三方渠道错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetExternalReturnMessage(const std::string& _externalReturnMessage);

                    /**
                     * 判断参数 ExternalReturnMessage 是否已赋值
                     * @return ExternalReturnMessage 是否已赋值
                     * 
                     */
                    bool ExternalReturnMessageHasBeenSet() const;

                    /**
                     * 获取第三方渠道返回的原始数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExternalReturnData 第三方渠道返回的原始数据
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetExternalReturnData() const;

                    /**
                     * 设置第三方渠道返回的原始数据
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _externalReturnData 第三方渠道返回的原始数据
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

                    /**
                     * 获取米大师内部商户号
                     * @return ChannelMerchantId 米大师内部商户号
                     * 
                     */
                    std::string GetChannelMerchantId() const;

                    /**
                     * 设置米大师内部商户号
                     * @param _channelMerchantId 米大师内部商户号
                     * 
                     */
                    void SetChannelMerchantId(const std::string& _channelMerchantId);

                    /**
                     * 判断参数 ChannelMerchantId 是否已赋值
                     * @return ChannelMerchantId 是否已赋值
                     * 
                     */
                    bool ChannelMerchantIdHasBeenSet() const;

                    /**
                     * 获取米大师内部子商户号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelSubMerchantId 米大师内部子商户号
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelSubMerchantId() const;

                    /**
                     * 设置米大师内部子商户号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelSubMerchantId 米大师内部子商户号
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取米大师内部应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelAppId 米大师内部应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelAppId() const;

                    /**
                     * 设置米大师内部应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelAppId 米大师内部应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelAppId(const std::string& _channelAppId);

                    /**
                     * 判断参数 ChannelAppId 是否已赋值
                     * @return ChannelAppId 是否已赋值
                     * 
                     */
                    bool ChannelAppIdHasBeenSet() const;

                    /**
                     * 获取米大师内部子应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ChannelSubAppId 米大师内部子应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetChannelSubAppId() const;

                    /**
                     * 设置米大师内部子应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _channelSubAppId 米大师内部子应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetChannelSubAppId(const std::string& _channelSubAppId);

                    /**
                     * 判断参数 ChannelSubAppId 是否已赋值
                     * @return ChannelSubAppId 是否已赋值
                     * 
                     */
                    bool ChannelSubAppIdHasBeenSet() const;

                    /**
                     * 获取渠道名称
                     * @return ChannelName 渠道名称
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置渠道名称
                     * @param _channelName 渠道名称
                     * 
                     */
                    void SetChannelName(const std::string& _channelName);

                    /**
                     * 判断参数 ChannelName 是否已赋值
                     * @return ChannelName 是否已赋值
                     * 
                     */
                    bool ChannelNameHasBeenSet() const;

                    /**
                     * 获取返回的合约信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReturnContractInfo 返回的合约信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ReturnContractInfo GetReturnContractInfo() const;

                    /**
                     * 设置返回的合约信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _returnContractInfo 返回的合约信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReturnContractInfo(const ReturnContractInfo& _returnContractInfo);

                    /**
                     * 判断参数 ReturnContractInfo 是否已赋值
                     * @return ReturnContractInfo 是否已赋值
                     * 
                     */
                    bool ReturnContractInfoHasBeenSet() const;

                    /**
                     * 获取签约通知地址
                     * @return NotifyUrl 签约通知地址
                     * 
                     */
                    std::string GetNotifyUrl() const;

                    /**
                     * 设置签约通知地址
                     * @param _notifyUrl 签约通知地址
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
                     * 第三方渠道错误码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalReturnCode;
                    bool m_externalReturnCodeHasBeenSet;

                    /**
                     * 第三方渠道错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalReturnMessage;
                    bool m_externalReturnMessageHasBeenSet;

                    /**
                     * 第三方渠道返回的原始数据
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_externalReturnData;
                    bool m_externalReturnDataHasBeenSet;

                    /**
                     * 米大师内部商户号
                     */
                    std::string m_channelMerchantId;
                    bool m_channelMerchantIdHasBeenSet;

                    /**
                     * 米大师内部子商户号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelSubMerchantId;
                    bool m_channelSubMerchantIdHasBeenSet;

                    /**
                     * 米大师内部应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelAppId;
                    bool m_channelAppIdHasBeenSet;

                    /**
                     * 米大师内部子应用ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_channelSubAppId;
                    bool m_channelSubAppIdHasBeenSet;

                    /**
                     * 渠道名称
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 返回的合约信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ReturnContractInfo m_returnContractInfo;
                    bool m_returnContractInfoHasBeenSet;

                    /**
                     * 签约通知地址
                     */
                    std::string m_notifyUrl;
                    bool m_notifyUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_RESPONSEQUERYCONTRACT_H_
