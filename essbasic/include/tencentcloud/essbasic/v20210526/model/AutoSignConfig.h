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
                     * 获取自动签开通个人用户的三要素
                     * @return UserInfo 自动签开通个人用户的三要素
                     * 
                     */
                    UserThreeFactor GetUserInfo() const;

                    /**
                     * 设置自动签开通个人用户的三要素
                     * @param _userInfo 自动签开通个人用户的三要素
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
                     * 获取是否回调证书信息
                     * @return CertInfoCallback 是否回调证书信息
                     * 
                     */
                    bool GetCertInfoCallback() const;

                    /**
                     * 设置是否回调证书信息
                     * @param _certInfoCallback 是否回调证书信息
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
                     * 获取是否支持用户自定义签名印章
                     * @return UserDefineSeal 是否支持用户自定义签名印章
                     * 
                     */
                    bool GetUserDefineSeal() const;

                    /**
                     * 设置是否支持用户自定义签名印章
                     * @param _userDefineSeal 是否支持用户自定义签名印章
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
                     * 获取是否需要回调的时候返回印章(签名) 图片的 base64
                     * @return SealImgCallback 是否需要回调的时候返回印章(签名) 图片的 base64
                     * 
                     */
                    bool GetSealImgCallback() const;

                    /**
                     * 设置是否需要回调的时候返回印章(签名) 图片的 base64
                     * @param _sealImgCallback 是否需要回调的时候返回印章(签名) 图片的 base64
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
                     * 获取开通时候的验证方式，取值：WEIXINAPP（微信人脸识别），INSIGHT（慧眼人脸认别），TELECOM（运营商三要素验证）。如果是小程序开通链接，支持传 WEIXINAPP / TELECOM。如果是 H5 开通链接，支持传 INSIGHT / TELECOM。默认值 WEIXINAPP / INSIGHT。
                     * @return VerifyChannels 开通时候的验证方式，取值：WEIXINAPP（微信人脸识别），INSIGHT（慧眼人脸认别），TELECOM（运营商三要素验证）。如果是小程序开通链接，支持传 WEIXINAPP / TELECOM。如果是 H5 开通链接，支持传 INSIGHT / TELECOM。默认值 WEIXINAPP / INSIGHT。
                     * 
                     */
                    std::vector<std::string> GetVerifyChannels() const;

                    /**
                     * 设置开通时候的验证方式，取值：WEIXINAPP（微信人脸识别），INSIGHT（慧眼人脸认别），TELECOM（运营商三要素验证）。如果是小程序开通链接，支持传 WEIXINAPP / TELECOM。如果是 H5 开通链接，支持传 INSIGHT / TELECOM。默认值 WEIXINAPP / INSIGHT。
                     * @param _verifyChannels 开通时候的验证方式，取值：WEIXINAPP（微信人脸识别），INSIGHT（慧眼人脸认别），TELECOM（运营商三要素验证）。如果是小程序开通链接，支持传 WEIXINAPP / TELECOM。如果是 H5 开通链接，支持传 INSIGHT / TELECOM。默认值 WEIXINAPP / INSIGHT。
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
                     * 获取设置用户开通自动签时是否绑定个人自动签账号许可。一旦绑定后，将扣减购买的个人自动签账号许可一次（1年有效期），不可解绑释放。不传默认为绑定自动签账号许可。 0-绑定个人自动签账号许可，开通后将扣减购买的个人自动签账号许可一次
                     * @return LicenseType 设置用户开通自动签时是否绑定个人自动签账号许可。一旦绑定后，将扣减购买的个人自动签账号许可一次（1年有效期），不可解绑释放。不传默认为绑定自动签账号许可。 0-绑定个人自动签账号许可，开通后将扣减购买的个人自动签账号许可一次
                     * 
                     */
                    int64_t GetLicenseType() const;

                    /**
                     * 设置设置用户开通自动签时是否绑定个人自动签账号许可。一旦绑定后，将扣减购买的个人自动签账号许可一次（1年有效期），不可解绑释放。不传默认为绑定自动签账号许可。 0-绑定个人自动签账号许可，开通后将扣减购买的个人自动签账号许可一次
                     * @param _licenseType 设置用户开通自动签时是否绑定个人自动签账号许可。一旦绑定后，将扣减购买的个人自动签账号许可一次（1年有效期），不可解绑释放。不传默认为绑定自动签账号许可。 0-绑定个人自动签账号许可，开通后将扣减购买的个人自动签账号许可一次
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
                     * 自动签开通个人用户的三要素
                     */
                    UserThreeFactor m_userInfo;
                    bool m_userInfoHasBeenSet;

                    /**
                     * 是否回调证书信息
                     */
                    bool m_certInfoCallback;
                    bool m_certInfoCallbackHasBeenSet;

                    /**
                     * 是否支持用户自定义签名印章
                     */
                    bool m_userDefineSeal;
                    bool m_userDefineSealHasBeenSet;

                    /**
                     * 是否需要回调的时候返回印章(签名) 图片的 base64
                     */
                    bool m_sealImgCallback;
                    bool m_sealImgCallbackHasBeenSet;

                    /**
                     * 回调链接，如果渠道已经配置了，可以不传
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 开通时候的验证方式，取值：WEIXINAPP（微信人脸识别），INSIGHT（慧眼人脸认别），TELECOM（运营商三要素验证）。如果是小程序开通链接，支持传 WEIXINAPP / TELECOM。如果是 H5 开通链接，支持传 INSIGHT / TELECOM。默认值 WEIXINAPP / INSIGHT。
                     */
                    std::vector<std::string> m_verifyChannels;
                    bool m_verifyChannelsHasBeenSet;

                    /**
                     * 设置用户开通自动签时是否绑定个人自动签账号许可。一旦绑定后，将扣减购买的个人自动签账号许可一次（1年有效期），不可解绑释放。不传默认为绑定自动签账号许可。 0-绑定个人自动签账号许可，开通后将扣减购买的个人自动签账号许可一次
                     */
                    int64_t m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_AUTOSIGNCONFIG_H_
