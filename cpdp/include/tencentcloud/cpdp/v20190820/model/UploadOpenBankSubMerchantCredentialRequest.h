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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_UPLOADOPENBANKSUBMERCHANTCREDENTIALREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_UPLOADOPENBANKSUBMERCHANTCREDENTIALREQUEST_H_

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
                * UploadOpenBankSubMerchantCredential请求参数结构体
                */
                class UploadOpenBankSubMerchantCredentialRequest : public AbstractModel
                {
                public:
                    UploadOpenBankSubMerchantCredentialRequest();
                    ~UploadOpenBankSubMerchantCredentialRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取渠道商户ID。
                     * @return ChannelMerchantId 渠道商户ID。
                     * 
                     */
                    std::string GetChannelMerchantId() const;

                    /**
                     * 设置渠道商户ID。
                     * @param _channelMerchantId 渠道商户ID。
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
                     * 获取渠道名称。详见附录-枚举类型-ChannelName。
                     * @return ChannelName 渠道名称。详见附录-枚举类型-ChannelName。
                     * 
                     */
                    std::string GetChannelName() const;

                    /**
                     * 设置渠道名称。详见附录-枚举类型-ChannelName。
                     * @param _channelName 渠道名称。详见附录-枚举类型-ChannelName。
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
                     * 获取外部序列进件号。
                     * @return OutApplyId 外部序列进件号。
                     * 
                     */
                    std::string GetOutApplyId() const;

                    /**
                     * 设置外部序列进件号。
                     * @param _outApplyId 外部序列进件号。
                     * 
                     */
                    void SetOutApplyId(const std::string& _outApplyId);

                    /**
                     * 判断参数 OutApplyId 是否已赋值
                     * @return OutApplyId 是否已赋值
                     * 
                     */
                    bool OutApplyIdHasBeenSet() const;

                    /**
                     * 获取资质类型，详见附录-枚举类型-CredentialType。
                     * @return CredentialType 资质类型，详见附录-枚举类型-CredentialType。
                     * 
                     */
                    std::string GetCredentialType() const;

                    /**
                     * 设置资质类型，详见附录-枚举类型-CredentialType。
                     * @param _credentialType 资质类型，详见附录-枚举类型-CredentialType。
                     * 
                     */
                    void SetCredentialType(const std::string& _credentialType);

                    /**
                     * 判断参数 CredentialType 是否已赋值
                     * @return CredentialType 是否已赋值
                     * 
                     */
                    bool CredentialTypeHasBeenSet() const;

                    /**
                     * 获取文件类型。
合利宝渠道，文件类型为PNG/JPG格式。
                     * @return FileType 文件类型。
合利宝渠道，文件类型为PNG/JPG格式。
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文件类型。
合利宝渠道，文件类型为PNG/JPG格式。
                     * @param _fileType 文件类型。
合利宝渠道，文件类型为PNG/JPG格式。
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取支付方式。
合利宝渠道不需要传。
                     * @return PaymentMethod 支付方式。
合利宝渠道不需要传。
                     * 
                     */
                    std::string GetPaymentMethod() const;

                    /**
                     * 设置支付方式。
合利宝渠道不需要传。
                     * @param _paymentMethod 支付方式。
合利宝渠道不需要传。
                     * 
                     */
                    void SetPaymentMethod(const std::string& _paymentMethod);

                    /**
                     * 判断参数 PaymentMethod 是否已赋值
                     * @return PaymentMethod 是否已赋值
                     * 
                     */
                    bool PaymentMethodHasBeenSet() const;

                    /**
                     * 获取资质文件内容。Base64编码，资质文件内容和链接二选一。
合利宝渠道，文件限制大小5M以内。
                     * @return CredentialContent 资质文件内容。Base64编码，资质文件内容和链接二选一。
合利宝渠道，文件限制大小5M以内。
                     * 
                     */
                    std::string GetCredentialContent() const;

                    /**
                     * 设置资质文件内容。Base64编码，资质文件内容和链接二选一。
合利宝渠道，文件限制大小5M以内。
                     * @param _credentialContent 资质文件内容。Base64编码，资质文件内容和链接二选一。
合利宝渠道，文件限制大小5M以内。
                     * 
                     */
                    void SetCredentialContent(const std::string& _credentialContent);

                    /**
                     * 判断参数 CredentialContent 是否已赋值
                     * @return CredentialContent 是否已赋值
                     * 
                     */
                    bool CredentialContentHasBeenSet() const;

                    /**
                     * 获取资质文件链接。资质文件内容和链接二选一。
合利宝渠道，文件限制大小5M以内。
                     * @return CredentialUrl 资质文件链接。资质文件内容和链接二选一。
合利宝渠道，文件限制大小5M以内。
                     * 
                     */
                    std::string GetCredentialUrl() const;

                    /**
                     * 设置资质文件链接。资质文件内容和链接二选一。
合利宝渠道，文件限制大小5M以内。
                     * @param _credentialUrl 资质文件链接。资质文件内容和链接二选一。
合利宝渠道，文件限制大小5M以内。
                     * 
                     */
                    void SetCredentialUrl(const std::string& _credentialUrl);

                    /**
                     * 判断参数 CredentialUrl 是否已赋值
                     * @return CredentialUrl 是否已赋值
                     * 
                     */
                    bool CredentialUrlHasBeenSet() const;

                    /**
                     * 获取环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * @return Environment 环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * 
                     */
                    std::string GetEnvironment() const;

                    /**
                     * 设置环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * @param _environment 环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     * 
                     */
                    void SetEnvironment(const std::string& _environment);

                    /**
                     * 判断参数 Environment 是否已赋值
                     * @return Environment 是否已赋值
                     * 
                     */
                    bool EnvironmentHasBeenSet() const;

                private:

                    /**
                     * 渠道商户ID。
                     */
                    std::string m_channelMerchantId;
                    bool m_channelMerchantIdHasBeenSet;

                    /**
                     * 渠道子商户ID。
                     */
                    std::string m_channelSubMerchantId;
                    bool m_channelSubMerchantIdHasBeenSet;

                    /**
                     * 渠道名称。详见附录-枚举类型-ChannelName。
                     */
                    std::string m_channelName;
                    bool m_channelNameHasBeenSet;

                    /**
                     * 外部序列进件号。
                     */
                    std::string m_outApplyId;
                    bool m_outApplyIdHasBeenSet;

                    /**
                     * 资质类型，详见附录-枚举类型-CredentialType。
                     */
                    std::string m_credentialType;
                    bool m_credentialTypeHasBeenSet;

                    /**
                     * 文件类型。
合利宝渠道，文件类型为PNG/JPG格式。
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 支付方式。
合利宝渠道不需要传。
                     */
                    std::string m_paymentMethod;
                    bool m_paymentMethodHasBeenSet;

                    /**
                     * 资质文件内容。Base64编码，资质文件内容和链接二选一。
合利宝渠道，文件限制大小5M以内。
                     */
                    std::string m_credentialContent;
                    bool m_credentialContentHasBeenSet;

                    /**
                     * 资质文件链接。资质文件内容和链接二选一。
合利宝渠道，文件限制大小5M以内。
                     */
                    std::string m_credentialUrl;
                    bool m_credentialUrlHasBeenSet;

                    /**
                     * 环境类型。
__release__:生产环境
__sandbox__:沙箱环境
_不填默认为生产环境_
                     */
                    std::string m_environment;
                    bool m_environmentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_UPLOADOPENBANKSUBMERCHANTCREDENTIALREQUEST_H_
