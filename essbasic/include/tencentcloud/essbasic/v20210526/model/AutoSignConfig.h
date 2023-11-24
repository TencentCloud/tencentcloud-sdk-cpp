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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_AUTOSIGNCONFIG_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_AUTOSIGNCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/UserThreeFactor.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 自动签开启、签署相关配置
                */
                class AutoSignConfig : public AbstractModel
                {
                public:
                    AutoSignConfig();
                    ~AutoSignConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取自动签开通个人用户信息, 包括名字,身份证等
                     * @return UserInfo 自动签开通个人用户信息, 包括名字,身份证等
                     * 
                     */
                    UserThreeFactor GetUserInfo() const;

                    /**
                     * 设置自动签开通个人用户信息, 包括名字,身份证等
                     * @param _userInfo 自动签开通个人用户信息, 包括名字,身份证等
                     * 
                     */
                    void SetUserInfo(const UserThreeFactor& _userInfo);

                    /**
                     * 判断参数 UserInfo 是否已赋值
                     * @return UserInfo 是否已赋值
                     * 
                     */
                    bool UserInfoHasBeenSet() const;

                    /**
                     * 获取是否回调证书信息:
<ul><li>**false**: 不需要(默认)</li>
<li>**true**:需要</li></ul>
                     * @return CertInfoCallback 是否回调证书信息:
<ul><li>**false**: 不需要(默认)</li>
<li>**true**:需要</li></ul>
                     * 
                     */
                    bool GetCertInfoCallback() const;

                    /**
                     * 设置是否回调证书信息:
<ul><li>**false**: 不需要(默认)</li>
<li>**true**:需要</li></ul>
                     * @param _certInfoCallback 是否回调证书信息:
<ul><li>**false**: 不需要(默认)</li>
<li>**true**:需要</li></ul>
                     * 
                     */
                    void SetCertInfoCallback(const bool& _certInfoCallback);

                    /**
                     * 判断参数 CertInfoCallback 是否已赋值
                     * @return CertInfoCallback 是否已赋值
                     * 
                     */
                    bool CertInfoCallbackHasBeenSet() const;

                    /**
                     * 获取是否支持用户自定义签名印章:
<ul><li>**false**: 不能自己定义(默认)</li>
<li>**true**: 可以自己定义</li></ul>
                     * @return UserDefineSeal 是否支持用户自定义签名印章:
<ul><li>**false**: 不能自己定义(默认)</li>
<li>**true**: 可以自己定义</li></ul>
                     * 
                     */
                    bool GetUserDefineSeal() const;

                    /**
                     * 设置是否支持用户自定义签名印章:
<ul><li>**false**: 不能自己定义(默认)</li>
<li>**true**: 可以自己定义</li></ul>
                     * @param _userDefineSeal 是否支持用户自定义签名印章:
<ul><li>**false**: 不能自己定义(默认)</li>
<li>**true**: 可以自己定义</li></ul>
                     * 
                     */
                    void SetUserDefineSeal(const bool& _userDefineSeal);

                    /**
                     * 判断参数 UserDefineSeal 是否已赋值
                     * @return UserDefineSeal 是否已赋值
                     * 
                     */
                    bool UserDefineSealHasBeenSet() const;

                    /**
                     * 获取回调中是否需要自动签将要使用的印章（签名）图片的 base64:
<ul><li>**false**: 不需要(默认)</li>
<li>**true**: 需要</li></ul>
                     * @return SealImgCallback 回调中是否需要自动签将要使用的印章（签名）图片的 base64:
<ul><li>**false**: 不需要(默认)</li>
<li>**true**: 需要</li></ul>
                     * 
                     */
                    bool GetSealImgCallback() const;

                    /**
                     * 设置回调中是否需要自动签将要使用的印章（签名）图片的 base64:
<ul><li>**false**: 不需要(默认)</li>
<li>**true**: 需要</li></ul>
                     * @param _sealImgCallback 回调中是否需要自动签将要使用的印章（签名）图片的 base64:
<ul><li>**false**: 不需要(默认)</li>
<li>**true**: 需要</li></ul>
                     * 
                     */
                    void SetSealImgCallback(const bool& _sealImgCallback);

                    /**
                     * 判断参数 SealImgCallback 是否已赋值
                     * @return SealImgCallback 是否已赋值
                     * 
                     */
                    bool SealImgCallbackHasBeenSet() const;

                    /**
                     * 获取回调链接，如果渠道已经配置了，可以不传
                     * @return CallbackUrl 回调链接，如果渠道已经配置了，可以不传
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置回调链接，如果渠道已经配置了，可以不传
                     * @param _callbackUrl 回调链接，如果渠道已经配置了，可以不传
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取开通时候的身份验证方式, 取值为：
<ul><li>**WEIXINAPP** : 微信人脸识别</li>
<li>**INSIGHT** : 慧眼人脸认别</li>
<li>**TELECOM** : 运营商三要素验证</li></ul>
注：
<ul><li>如果是小程序开通链接，支持传 WEIXINAPP / TELECOM。为空默认 WEIXINAPP</li>
<li>如果是 H5 开通链接，支持传 INSIGHT / TELECOM。为空默认 INSIGHT </li></ul>
                     * @return VerifyChannels 开通时候的身份验证方式, 取值为：
<ul><li>**WEIXINAPP** : 微信人脸识别</li>
<li>**INSIGHT** : 慧眼人脸认别</li>
<li>**TELECOM** : 运营商三要素验证</li></ul>
注：
<ul><li>如果是小程序开通链接，支持传 WEIXINAPP / TELECOM。为空默认 WEIXINAPP</li>
<li>如果是 H5 开通链接，支持传 INSIGHT / TELECOM。为空默认 INSIGHT </li></ul>
                     * 
                     */
                    std::vector<std::string> GetVerifyChannels() const;

                    /**
                     * 设置开通时候的身份验证方式, 取值为：
<ul><li>**WEIXINAPP** : 微信人脸识别</li>
<li>**INSIGHT** : 慧眼人脸认别</li>
<li>**TELECOM** : 运营商三要素验证</li></ul>
注：
<ul><li>如果是小程序开通链接，支持传 WEIXINAPP / TELECOM。为空默认 WEIXINAPP</li>
<li>如果是 H5 开通链接，支持传 INSIGHT / TELECOM。为空默认 INSIGHT </li></ul>
                     * @param _verifyChannels 开通时候的身份验证方式, 取值为：
<ul><li>**WEIXINAPP** : 微信人脸识别</li>
<li>**INSIGHT** : 慧眼人脸认别</li>
<li>**TELECOM** : 运营商三要素验证</li></ul>
注：
<ul><li>如果是小程序开通链接，支持传 WEIXINAPP / TELECOM。为空默认 WEIXINAPP</li>
<li>如果是 H5 开通链接，支持传 INSIGHT / TELECOM。为空默认 INSIGHT </li></ul>
                     * 
                     */
                    void SetVerifyChannels(const std::vector<std::string>& _verifyChannels);

                    /**
                     * 判断参数 VerifyChannels 是否已赋值
                     * @return VerifyChannels 是否已赋值
                     * 
                     */
                    bool VerifyChannelsHasBeenSet() const;

                    /**
                     * 获取设置用户开通自动签时是否绑定个人自动签账号许可。

<ul><li>**0**: (默认) 使用个人自动签账号许可进行开通，个人自动签账号许可有效期1年，注: `不可解绑释放更换他人`</li>
<li>**1**: 不绑定自动签账号许可开通，后续使用合同份额进行合同发起</li></ul>
                     * @return LicenseType 设置用户开通自动签时是否绑定个人自动签账号许可。

<ul><li>**0**: (默认) 使用个人自动签账号许可进行开通，个人自动签账号许可有效期1年，注: `不可解绑释放更换他人`</li>
<li>**1**: 不绑定自动签账号许可开通，后续使用合同份额进行合同发起</li></ul>
                     * 
                     */
                    int64_t GetLicenseType() const;

                    /**
                     * 设置设置用户开通自动签时是否绑定个人自动签账号许可。

<ul><li>**0**: (默认) 使用个人自动签账号许可进行开通，个人自动签账号许可有效期1年，注: `不可解绑释放更换他人`</li>
<li>**1**: 不绑定自动签账号许可开通，后续使用合同份额进行合同发起</li></ul>
                     * @param _licenseType 设置用户开通自动签时是否绑定个人自动签账号许可。

<ul><li>**0**: (默认) 使用个人自动签账号许可进行开通，个人自动签账号许可有效期1年，注: `不可解绑释放更换他人`</li>
<li>**1**: 不绑定自动签账号许可开通，后续使用合同份额进行合同发起</li></ul>
                     * 
                     */
                    void SetLicenseType(const int64_t& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                private:

                    /**
                     * 自动签开通个人用户信息, 包括名字,身份证等
                     */
                    UserThreeFactor m_userInfo;
                    bool m_userInfoHasBeenSet;

                    /**
                     * 是否回调证书信息:
<ul><li>**false**: 不需要(默认)</li>
<li>**true**:需要</li></ul>
                     */
                    bool m_certInfoCallback;
                    bool m_certInfoCallbackHasBeenSet;

                    /**
                     * 是否支持用户自定义签名印章:
<ul><li>**false**: 不能自己定义(默认)</li>
<li>**true**: 可以自己定义</li></ul>
                     */
                    bool m_userDefineSeal;
                    bool m_userDefineSealHasBeenSet;

                    /**
                     * 回调中是否需要自动签将要使用的印章（签名）图片的 base64:
<ul><li>**false**: 不需要(默认)</li>
<li>**true**: 需要</li></ul>
                     */
                    bool m_sealImgCallback;
                    bool m_sealImgCallbackHasBeenSet;

                    /**
                     * 回调链接，如果渠道已经配置了，可以不传
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 开通时候的身份验证方式, 取值为：
<ul><li>**WEIXINAPP** : 微信人脸识别</li>
<li>**INSIGHT** : 慧眼人脸认别</li>
<li>**TELECOM** : 运营商三要素验证</li></ul>
注：
<ul><li>如果是小程序开通链接，支持传 WEIXINAPP / TELECOM。为空默认 WEIXINAPP</li>
<li>如果是 H5 开通链接，支持传 INSIGHT / TELECOM。为空默认 INSIGHT </li></ul>
                     */
                    std::vector<std::string> m_verifyChannels;
                    bool m_verifyChannelsHasBeenSet;

                    /**
                     * 设置用户开通自动签时是否绑定个人自动签账号许可。

<ul><li>**0**: (默认) 使用个人自动签账号许可进行开通，个人自动签账号许可有效期1年，注: `不可解绑释放更换他人`</li>
<li>**1**: 不绑定自动签账号许可开通，后续使用合同份额进行合同发起</li></ul>
                     */
                    int64_t m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_AUTOSIGNCONFIG_H_
