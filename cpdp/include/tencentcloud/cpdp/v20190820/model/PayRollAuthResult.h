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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_PAYROLLAUTHRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_PAYROLLAUTHRESULT_H_

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
                * 微工卡核身结果
                */
                class PayRollAuthResult : public AbstractModel
                {
                public:
                    PayRollAuthResult();
                    ~PayRollAuthResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取结果为核身失败时的原因描述，仅在失败记录返回，空字符串等同null
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AuthFailedReason 结果为核身失败时的原因描述，仅在失败记录返回，空字符串等同null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAuthFailedReason() const;

                    /**
                     * 设置结果为核身失败时的原因描述，仅在失败记录返回，空字符串等同null
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _authFailedReason 结果为核身失败时的原因描述，仅在失败记录返回，空字符串等同null
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAuthFailedReason(const std::string& _authFailedReason);

                    /**
                     * 判断参数 AuthFailedReason 是否已赋值
                     * @return AuthFailedReason 是否已赋值
                     * 
                     */
                    bool AuthFailedReasonHasBeenSet() const;

                    /**
                     * 获取商户系统内部的商家核身单号，要求此参数只能由数字、大小写字母组成，在服务商内部唯一
                     * @return AuthNumber 商户系统内部的商家核身单号，要求此参数只能由数字、大小写字母组成，在服务商内部唯一
                     * 
                     */
                    std::string GetAuthNumber() const;

                    /**
                     * 设置商户系统内部的商家核身单号，要求此参数只能由数字、大小写字母组成，在服务商内部唯一
                     * @param _authNumber 商户系统内部的商家核身单号，要求此参数只能由数字、大小写字母组成，在服务商内部唯一
                     * 
                     */
                    void SetAuthNumber(const std::string& _authNumber);

                    /**
                     * 判断参数 AuthNumber 是否已赋值
                     * @return AuthNumber 是否已赋值
                     * 
                     */
                    bool AuthNumberHasBeenSet() const;

                    /**
                     * 获取核身渠道，发起核身时的来源渠道，如通过小程序，硬件设备等
FROM_MINI_APP：来自小程序方式核身
FROM_HARDWARE：来自硬件设备方式核身
                     * @return AuthScene 核身渠道，发起核身时的来源渠道，如通过小程序，硬件设备等
FROM_MINI_APP：来自小程序方式核身
FROM_HARDWARE：来自硬件设备方式核身
                     * 
                     */
                    std::string GetAuthScene() const;

                    /**
                     * 设置核身渠道，发起核身时的来源渠道，如通过小程序，硬件设备等
FROM_MINI_APP：来自小程序方式核身
FROM_HARDWARE：来自硬件设备方式核身
                     * @param _authScene 核身渠道，发起核身时的来源渠道，如通过小程序，硬件设备等
FROM_MINI_APP：来自小程序方式核身
FROM_HARDWARE：来自硬件设备方式核身
                     * 
                     */
                    void SetAuthScene(const std::string& _authScene);

                    /**
                     * 判断参数 AuthScene 是否已赋值
                     * @return AuthScene 是否已赋值
                     * 
                     */
                    bool AuthSceneHasBeenSet() const;

                    /**
                     * 获取核身渠道标识，用于定位渠道具体来源，如果是扫码打卡渠道标识就是具体的小程序appid，若是硬件设备，则是设备的序列号等
                     * @return AuthSource 核身渠道标识，用于定位渠道具体来源，如果是扫码打卡渠道标识就是具体的小程序appid，若是硬件设备，则是设备的序列号等
                     * 
                     */
                    std::string GetAuthSource() const;

                    /**
                     * 设置核身渠道标识，用于定位渠道具体来源，如果是扫码打卡渠道标识就是具体的小程序appid，若是硬件设备，则是设备的序列号等
                     * @param _authSource 核身渠道标识，用于定位渠道具体来源，如果是扫码打卡渠道标识就是具体的小程序appid，若是硬件设备，则是设备的序列号等
                     * 
                     */
                    void SetAuthSource(const std::string& _authSource);

                    /**
                     * 判断参数 AuthSource 是否已赋值
                     * @return AuthSource 是否已赋值
                     * 
                     */
                    bool AuthSourceHasBeenSet() const;

                    /**
                     * 获取核身状态
AUTHENTICATE_PROCESSING：核身中
AUTHENTICATE_SUCCESS：核身成功
AUTHENTICATE_FAILED：核身失败
                     * @return AuthStatus 核身状态
AUTHENTICATE_PROCESSING：核身中
AUTHENTICATE_SUCCESS：核身成功
AUTHENTICATE_FAILED：核身失败
                     * 
                     */
                    std::string GetAuthStatus() const;

                    /**
                     * 设置核身状态
AUTHENTICATE_PROCESSING：核身中
AUTHENTICATE_SUCCESS：核身成功
AUTHENTICATE_FAILED：核身失败
                     * @param _authStatus 核身状态
AUTHENTICATE_PROCESSING：核身中
AUTHENTICATE_SUCCESS：核身成功
AUTHENTICATE_FAILED：核身失败
                     * 
                     */
                    void SetAuthStatus(const std::string& _authStatus);

                    /**
                     * 判断参数 AuthStatus 是否已赋值
                     * @return AuthStatus 是否已赋值
                     * 
                     */
                    bool AuthStatusHasBeenSet() const;

                    /**
                     * 获取核身时间，遵循[rfc3339](https://datatracker.ietf.org/doc/html/rfc3339)标准格式，格式为YYYY-MM-DDTHH:mm:ss.sss+TIMEZONE
                     * @return AuthTime 核身时间，遵循[rfc3339](https://datatracker.ietf.org/doc/html/rfc3339)标准格式，格式为YYYY-MM-DDTHH:mm:ss.sss+TIMEZONE
                     * 
                     */
                    std::string GetAuthTime() const;

                    /**
                     * 设置核身时间，遵循[rfc3339](https://datatracker.ietf.org/doc/html/rfc3339)标准格式，格式为YYYY-MM-DDTHH:mm:ss.sss+TIMEZONE
                     * @param _authTime 核身时间，遵循[rfc3339](https://datatracker.ietf.org/doc/html/rfc3339)标准格式，格式为YYYY-MM-DDTHH:mm:ss.sss+TIMEZONE
                     * 
                     */
                    void SetAuthTime(const std::string& _authTime);

                    /**
                     * 判断参数 AuthTime 是否已赋值
                     * @return AuthTime 是否已赋值
                     * 
                     */
                    bool AuthTimeHasBeenSet() const;

                    /**
                     * 获取该用户所属的单位名称
                     * @return CompanyName 该用户所属的单位名称
                     * 
                     */
                    std::string GetCompanyName() const;

                    /**
                     * 设置该用户所属的单位名称
                     * @param _companyName 该用户所属的单位名称
                     * 
                     */
                    void SetCompanyName(const std::string& _companyName);

                    /**
                     * 判断参数 CompanyName 是否已赋值
                     * @return CompanyName 是否已赋值
                     * 
                     */
                    bool CompanyNameHasBeenSet() const;

                    /**
                     * 获取微信服务商商户的商户号，由微信支付生成并下发
                     * @return MerchantId 微信服务商商户的商户号，由微信支付生成并下发
                     * 
                     */
                    std::string GetMerchantId() const;

                    /**
                     * 设置微信服务商商户的商户号，由微信支付生成并下发
                     * @param _merchantId 微信服务商商户的商户号，由微信支付生成并下发
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
                     * 获取用户在商户对应appid下的唯一标识
                     * @return OpenId 用户在商户对应appid下的唯一标识
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置用户在商户对应appid下的唯一标识
                     * @param _openId 用户在商户对应appid下的唯一标识
                     * 
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取该项目的名称
                     * @return ProjectName 该项目的名称
                     * 
                     */
                    std::string GetProjectName() const;

                    /**
                     * 设置该项目的名称
                     * @param _projectName 该项目的名称
                     * 
                     */
                    void SetProjectName(const std::string& _projectName);

                    /**
                     * 判断参数 ProjectName 是否已赋值
                     * @return ProjectName 是否已赋值
                     * 
                     */
                    bool ProjectNameHasBeenSet() const;

                    /**
                     * 获取微信服务商下特约商户的商户号，由微信支付生成并下发
                     * @return SubMerchantId 微信服务商下特约商户的商户号，由微信支付生成并下发
                     * 
                     */
                    std::string GetSubMerchantId() const;

                    /**
                     * 设置微信服务商下特约商户的商户号，由微信支付生成并下发
                     * @param _subMerchantId 微信服务商下特约商户的商户号，由微信支付生成并下发
                     * 
                     */
                    void SetSubMerchantId(const std::string& _subMerchantId);

                    /**
                     * 判断参数 SubMerchantId 是否已赋值
                     * @return SubMerchantId 是否已赋值
                     * 
                     */
                    bool SubMerchantIdHasBeenSet() const;

                private:

                    /**
                     * 结果为核身失败时的原因描述，仅在失败记录返回，空字符串等同null
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_authFailedReason;
                    bool m_authFailedReasonHasBeenSet;

                    /**
                     * 商户系统内部的商家核身单号，要求此参数只能由数字、大小写字母组成，在服务商内部唯一
                     */
                    std::string m_authNumber;
                    bool m_authNumberHasBeenSet;

                    /**
                     * 核身渠道，发起核身时的来源渠道，如通过小程序，硬件设备等
FROM_MINI_APP：来自小程序方式核身
FROM_HARDWARE：来自硬件设备方式核身
                     */
                    std::string m_authScene;
                    bool m_authSceneHasBeenSet;

                    /**
                     * 核身渠道标识，用于定位渠道具体来源，如果是扫码打卡渠道标识就是具体的小程序appid，若是硬件设备，则是设备的序列号等
                     */
                    std::string m_authSource;
                    bool m_authSourceHasBeenSet;

                    /**
                     * 核身状态
AUTHENTICATE_PROCESSING：核身中
AUTHENTICATE_SUCCESS：核身成功
AUTHENTICATE_FAILED：核身失败
                     */
                    std::string m_authStatus;
                    bool m_authStatusHasBeenSet;

                    /**
                     * 核身时间，遵循[rfc3339](https://datatracker.ietf.org/doc/html/rfc3339)标准格式，格式为YYYY-MM-DDTHH:mm:ss.sss+TIMEZONE
                     */
                    std::string m_authTime;
                    bool m_authTimeHasBeenSet;

                    /**
                     * 该用户所属的单位名称
                     */
                    std::string m_companyName;
                    bool m_companyNameHasBeenSet;

                    /**
                     * 微信服务商商户的商户号，由微信支付生成并下发
                     */
                    std::string m_merchantId;
                    bool m_merchantIdHasBeenSet;

                    /**
                     * 用户在商户对应appid下的唯一标识
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 该项目的名称
                     */
                    std::string m_projectName;
                    bool m_projectNameHasBeenSet;

                    /**
                     * 微信服务商下特约商户的商户号，由微信支付生成并下发
                     */
                    std::string m_subMerchantId;
                    bool m_subMerchantIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_PAYROLLAUTHRESULT_H_
