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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_AUTOSIGNCONFIG_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_AUTOSIGNCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/UserThreeFactor.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserInfo 自动签开通个人用户的三要素
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UserThreeFactor GetUserInfo() const;

                    /**
                     * 设置自动签开通个人用户的三要素
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UserInfo 自动签开通个人用户的三要素
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUserInfo(const UserThreeFactor& _userInfo);

                    /**
                     * 判断参数 UserInfo 是否已赋值
                     * @return UserInfo 是否已赋值
                     */
                    bool UserInfoHasBeenSet() const;

                    /**
                     * 获取回调链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CallbackUrl 回调链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置回调链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CallbackUrl 回调链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取是否回调证书信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CertInfoCallback 是否回调证书信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetCertInfoCallback() const;

                    /**
                     * 设置是否回调证书信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CertInfoCallback 是否回调证书信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCertInfoCallback(const bool& _certInfoCallback);

                    /**
                     * 判断参数 CertInfoCallback 是否已赋值
                     * @return CertInfoCallback 是否已赋值
                     */
                    bool CertInfoCallbackHasBeenSet() const;

                    /**
                     * 获取是否支持用户自定义签名印章
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserDefineSeal 是否支持用户自定义签名印章
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetUserDefineSeal() const;

                    /**
                     * 设置是否支持用户自定义签名印章
注意：此字段可能返回 null，表示取不到有效值。
                     * @param UserDefineSeal 是否支持用户自定义签名印章
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUserDefineSeal(const bool& _userDefineSeal);

                    /**
                     * 判断参数 UserDefineSeal 是否已赋值
                     * @return UserDefineSeal 是否已赋值
                     */
                    bool UserDefineSealHasBeenSet() const;

                    /**
                     * 获取是否需要回调的时候返回印章(签名) 图片的 base64
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SealImgCallback 是否需要回调的时候返回印章(签名) 图片的 base64
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetSealImgCallback() const;

                    /**
                     * 设置是否需要回调的时候返回印章(签名) 图片的 base64
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SealImgCallback 是否需要回调的时候返回印章(签名) 图片的 base64
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSealImgCallback(const bool& _sealImgCallback);

                    /**
                     * 判断参数 SealImgCallback 是否已赋值
                     * @return SealImgCallback 是否已赋值
                     */
                    bool SealImgCallbackHasBeenSet() const;

                    /**
                     * 获取开通时候的验证方式，取值：WEIXINAPP（微信人脸识别），INSIGHT（慧眼人脸认别），TELECOM（运营商三要素验证）。如果是小程序开通链接，支持传 WEIXINAPP / TELECOM。如果是 H5 开通链接，支持传 INSIGHT / TELECOM。默认值 WEIXINAPP / INSIGHT。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VerifyChannels 开通时候的验证方式，取值：WEIXINAPP（微信人脸识别），INSIGHT（慧眼人脸认别），TELECOM（运营商三要素验证）。如果是小程序开通链接，支持传 WEIXINAPP / TELECOM。如果是 H5 开通链接，支持传 INSIGHT / TELECOM。默认值 WEIXINAPP / INSIGHT。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetVerifyChannels() const;

                    /**
                     * 设置开通时候的验证方式，取值：WEIXINAPP（微信人脸识别），INSIGHT（慧眼人脸认别），TELECOM（运营商三要素验证）。如果是小程序开通链接，支持传 WEIXINAPP / TELECOM。如果是 H5 开通链接，支持传 INSIGHT / TELECOM。默认值 WEIXINAPP / INSIGHT。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param VerifyChannels 开通时候的验证方式，取值：WEIXINAPP（微信人脸识别），INSIGHT（慧眼人脸认别），TELECOM（运营商三要素验证）。如果是小程序开通链接，支持传 WEIXINAPP / TELECOM。如果是 H5 开通链接，支持传 INSIGHT / TELECOM。默认值 WEIXINAPP / INSIGHT。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetVerifyChannels(const std::vector<std::string>& _verifyChannels);

                    /**
                     * 判断参数 VerifyChannels 是否已赋值
                     * @return VerifyChannels 是否已赋值
                     */
                    bool VerifyChannelsHasBeenSet() const;

                private:

                    /**
                     * 自动签开通个人用户的三要素
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    UserThreeFactor m_userInfo;
                    bool m_userInfoHasBeenSet;

                    /**
                     * 回调链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 是否回调证书信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_certInfoCallback;
                    bool m_certInfoCallbackHasBeenSet;

                    /**
                     * 是否支持用户自定义签名印章
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_userDefineSeal;
                    bool m_userDefineSealHasBeenSet;

                    /**
                     * 是否需要回调的时候返回印章(签名) 图片的 base64
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_sealImgCallback;
                    bool m_sealImgCallbackHasBeenSet;

                    /**
                     * 开通时候的验证方式，取值：WEIXINAPP（微信人脸识别），INSIGHT（慧眼人脸认别），TELECOM（运营商三要素验证）。如果是小程序开通链接，支持传 WEIXINAPP / TELECOM。如果是 H5 开通链接，支持传 INSIGHT / TELECOM。默认值 WEIXINAPP / INSIGHT。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_verifyChannels;
                    bool m_verifyChannelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_AUTOSIGNCONFIG_H_
