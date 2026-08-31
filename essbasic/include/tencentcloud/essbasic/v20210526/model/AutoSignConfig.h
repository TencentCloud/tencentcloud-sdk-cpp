/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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
                     * 获取<p>自动签开通个人用户信息, 包括名字,身份证等</p>
                     * @return UserInfo <p>自动签开通个人用户信息, 包括名字,身份证等</p>
                     * 
                     */
                    UserThreeFactor GetUserInfo() const;

                    /**
                     * 设置<p>自动签开通个人用户信息, 包括名字,身份证等</p>
                     * @param _userInfo <p>自动签开通个人用户信息, 包括名字,身份证等</p>
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
                     * 获取<p>是否回调证书信息:</p><ul><li>**false**: 不需要(默认)</li><li>**true**:需要</li></ul><p>注：<code>该字段已经失效，请勿设置此参数。</code></p>
                     * @return CertInfoCallback <p>是否回调证书信息:</p><ul><li>**false**: 不需要(默认)</li><li>**true**:需要</li></ul><p>注：<code>该字段已经失效，请勿设置此参数。</code></p>
                     * 
                     */
                    bool GetCertInfoCallback() const;

                    /**
                     * 设置<p>是否回调证书信息:</p><ul><li>**false**: 不需要(默认)</li><li>**true**:需要</li></ul><p>注：<code>该字段已经失效，请勿设置此参数。</code></p>
                     * @param _certInfoCallback <p>是否回调证书信息:</p><ul><li>**false**: 不需要(默认)</li><li>**true**:需要</li></ul><p>注：<code>该字段已经失效，请勿设置此参数。</code></p>
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
                     * 获取<p>是否支持用户自定义签名印章:</p><ul><li>**false**: 不能自己定义(默认)</li><li>**true**: 可以自己定义</li></ul>
                     * @return UserDefineSeal <p>是否支持用户自定义签名印章:</p><ul><li>**false**: 不能自己定义(默认)</li><li>**true**: 可以自己定义</li></ul>
                     * 
                     */
                    bool GetUserDefineSeal() const;

                    /**
                     * 设置<p>是否支持用户自定义签名印章:</p><ul><li>**false**: 不能自己定义(默认)</li><li>**true**: 可以自己定义</li></ul>
                     * @param _userDefineSeal <p>是否支持用户自定义签名印章:</p><ul><li>**false**: 不能自己定义(默认)</li><li>**true**: 可以自己定义</li></ul>
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
                     * 获取<p>回调中是否需要自动签将要使用的印章（签名）图片的 base64:</p><ul><li>**false**: 不需要(默认)</li><li>**true**: 需要</li></ul>
                     * @return SealImgCallback <p>回调中是否需要自动签将要使用的印章（签名）图片的 base64:</p><ul><li>**false**: 不需要(默认)</li><li>**true**: 需要</li></ul>
                     * 
                     */
                    bool GetSealImgCallback() const;

                    /**
                     * 设置<p>回调中是否需要自动签将要使用的印章（签名）图片的 base64:</p><ul><li>**false**: 不需要(默认)</li><li>**true**: 需要</li></ul>
                     * @param _sealImgCallback <p>回调中是否需要自动签将要使用的印章（签名）图片的 base64:</p><ul><li>**false**: 不需要(默认)</li><li>**true**: 需要</li></ul>
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
                     * 获取<p>该字段已废弃，请使用【应用号配置】中的回调地址统一接口消息</p>
                     * @return CallbackUrl <p>该字段已废弃，请使用【应用号配置】中的回调地址统一接口消息</p>
                     * @deprecated
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置<p>该字段已废弃，请使用【应用号配置】中的回调地址统一接口消息</p>
                     * @param _callbackUrl <p>该字段已废弃，请使用【应用号配置】中的回调地址统一接口消息</p>
                     * @deprecated
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * @deprecated
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取<p>开通时候的身份验证方式, 取值为：</p><ul><li>**WEIXINAPP** : 微信人脸识别</li><li>**INSIGHT** : 慧眼人脸识别</li><li>**TELECOM** : 运营商三要素验证</li></ul>注：<ul><li>如果是小程序开通链接，仅支持传 WEIXINAPP。为空默认 WEIXINAPP</li><li>如果是 H5 开通链接，支持传 INSIGHT / TELECOM。为空默认 INSIGHT </li></ul>
                     * @return VerifyChannels <p>开通时候的身份验证方式, 取值为：</p><ul><li>**WEIXINAPP** : 微信人脸识别</li><li>**INSIGHT** : 慧眼人脸识别</li><li>**TELECOM** : 运营商三要素验证</li></ul>注：<ul><li>如果是小程序开通链接，仅支持传 WEIXINAPP。为空默认 WEIXINAPP</li><li>如果是 H5 开通链接，支持传 INSIGHT / TELECOM。为空默认 INSIGHT </li></ul>
                     * 
                     */
                    std::vector<std::string> GetVerifyChannels() const;

                    /**
                     * 设置<p>开通时候的身份验证方式, 取值为：</p><ul><li>**WEIXINAPP** : 微信人脸识别</li><li>**INSIGHT** : 慧眼人脸识别</li><li>**TELECOM** : 运营商三要素验证</li></ul>注：<ul><li>如果是小程序开通链接，仅支持传 WEIXINAPP。为空默认 WEIXINAPP</li><li>如果是 H5 开通链接，支持传 INSIGHT / TELECOM。为空默认 INSIGHT </li></ul>
                     * @param _verifyChannels <p>开通时候的身份验证方式, 取值为：</p><ul><li>**WEIXINAPP** : 微信人脸识别</li><li>**INSIGHT** : 慧眼人脸识别</li><li>**TELECOM** : 运营商三要素验证</li></ul>注：<ul><li>如果是小程序开通链接，仅支持传 WEIXINAPP。为空默认 WEIXINAPP</li><li>如果是 H5 开通链接，支持传 INSIGHT / TELECOM。为空默认 INSIGHT </li></ul>
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
                     * 获取<p>设置用户开通自动签时是否绑定个人自动签账号许可。</p><ul><li><b>1</b>: (默认)不绑定自动签账号许可开通，开通后一直有效,   后续使用合同份额进行合同发起</li></ul><p>注：<code>该字段已经失效，请勿设置此参数。</code></p>
                     * @return LicenseType <p>设置用户开通自动签时是否绑定个人自动签账号许可。</p><ul><li><b>1</b>: (默认)不绑定自动签账号许可开通，开通后一直有效,   后续使用合同份额进行合同发起</li></ul><p>注：<code>该字段已经失效，请勿设置此参数。</code></p>
                     * 
                     */
                    int64_t GetLicenseType() const;

                    /**
                     * 设置<p>设置用户开通自动签时是否绑定个人自动签账号许可。</p><ul><li><b>1</b>: (默认)不绑定自动签账号许可开通，开通后一直有效,   后续使用合同份额进行合同发起</li></ul><p>注：<code>该字段已经失效，请勿设置此参数。</code></p>
                     * @param _licenseType <p>设置用户开通自动签时是否绑定个人自动签账号许可。</p><ul><li><b>1</b>: (默认)不绑定自动签账号许可开通，开通后一直有效,   后续使用合同份额进行合同发起</li></ul><p>注：<code>该字段已经失效，请勿设置此参数。</code></p>
                     * 
                     */
                    void SetLicenseType(const int64_t& _licenseType);

                    /**
                     * 判断参数 LicenseType 是否已赋值
                     * @return LicenseType 是否已赋值
                     * 
                     */
                    bool LicenseTypeHasBeenSet() const;

                    /**
                     * 获取<p>开通成功后前端页面跳转的url，此字段的用法场景请联系客户经理确认。</p><p>注：<code>仅支持H5开通场景</code>, <code>跳转链接仅支持 https:// , qianapp:// 开头</code></p><p>跳转场景：</p><ul><li>**贵方H5 -&gt; 腾讯电子签H5 -&gt; 贵方H5** : JumpUrl格式: https://YOUR_CUSTOM_URL/xxxx，只需满足 https:// 开头的正确且合规的网址即可。</li><li>**贵方原生App -&gt; 腾讯电子签H5 -&gt; 贵方原生App** : JumpUrl格式: qianapp://YOUR_CUSTOM_URL，只需满足 qianapp:// 开头的URL即可。<code>APP实现方，需要拦截Webview地址跳转，发现url是qianapp:// 开头时跳转到原生页面。</code>APP拦截地址跳转可参考：<a href="https://qian.tencent.com/developers/company/openqianh5/#3-%E8%BF%94%E5%9B%9E%E5%BA%94%E7%94%A8jumpurl%E6%A0%BC%E5%BC%8F">返回应用JumpUrl格式</a> </li></ul><p>成功结果返回：<br>若贵方需要在跳转回时通过链接query参数提示开通成功，JumpUrl中的query应携带如下参数：<code>appendResult=qian</code>。这样腾讯电子签H5会在跳转回的url后面会添加query参数提示贵方签署成功，例如：qianapp://YOUR_CUSTOM_URL?action=sign&amp;result=success&amp;from=tencent_ess</p>
                     * @return JumpUrl <p>开通成功后前端页面跳转的url，此字段的用法场景请联系客户经理确认。</p><p>注：<code>仅支持H5开通场景</code>, <code>跳转链接仅支持 https:// , qianapp:// 开头</code></p><p>跳转场景：</p><ul><li>**贵方H5 -&gt; 腾讯电子签H5 -&gt; 贵方H5** : JumpUrl格式: https://YOUR_CUSTOM_URL/xxxx，只需满足 https:// 开头的正确且合规的网址即可。</li><li>**贵方原生App -&gt; 腾讯电子签H5 -&gt; 贵方原生App** : JumpUrl格式: qianapp://YOUR_CUSTOM_URL，只需满足 qianapp:// 开头的URL即可。<code>APP实现方，需要拦截Webview地址跳转，发现url是qianapp:// 开头时跳转到原生页面。</code>APP拦截地址跳转可参考：<a href="https://qian.tencent.com/developers/company/openqianh5/#3-%E8%BF%94%E5%9B%9E%E5%BA%94%E7%94%A8jumpurl%E6%A0%BC%E5%BC%8F">返回应用JumpUrl格式</a> </li></ul><p>成功结果返回：<br>若贵方需要在跳转回时通过链接query参数提示开通成功，JumpUrl中的query应携带如下参数：<code>appendResult=qian</code>。这样腾讯电子签H5会在跳转回的url后面会添加query参数提示贵方签署成功，例如：qianapp://YOUR_CUSTOM_URL?action=sign&amp;result=success&amp;from=tencent_ess</p>
                     * 
                     */
                    std::string GetJumpUrl() const;

                    /**
                     * 设置<p>开通成功后前端页面跳转的url，此字段的用法场景请联系客户经理确认。</p><p>注：<code>仅支持H5开通场景</code>, <code>跳转链接仅支持 https:// , qianapp:// 开头</code></p><p>跳转场景：</p><ul><li>**贵方H5 -&gt; 腾讯电子签H5 -&gt; 贵方H5** : JumpUrl格式: https://YOUR_CUSTOM_URL/xxxx，只需满足 https:// 开头的正确且合规的网址即可。</li><li>**贵方原生App -&gt; 腾讯电子签H5 -&gt; 贵方原生App** : JumpUrl格式: qianapp://YOUR_CUSTOM_URL，只需满足 qianapp:// 开头的URL即可。<code>APP实现方，需要拦截Webview地址跳转，发现url是qianapp:// 开头时跳转到原生页面。</code>APP拦截地址跳转可参考：<a href="https://qian.tencent.com/developers/company/openqianh5/#3-%E8%BF%94%E5%9B%9E%E5%BA%94%E7%94%A8jumpurl%E6%A0%BC%E5%BC%8F">返回应用JumpUrl格式</a> </li></ul><p>成功结果返回：<br>若贵方需要在跳转回时通过链接query参数提示开通成功，JumpUrl中的query应携带如下参数：<code>appendResult=qian</code>。这样腾讯电子签H5会在跳转回的url后面会添加query参数提示贵方签署成功，例如：qianapp://YOUR_CUSTOM_URL?action=sign&amp;result=success&amp;from=tencent_ess</p>
                     * @param _jumpUrl <p>开通成功后前端页面跳转的url，此字段的用法场景请联系客户经理确认。</p><p>注：<code>仅支持H5开通场景</code>, <code>跳转链接仅支持 https:// , qianapp:// 开头</code></p><p>跳转场景：</p><ul><li>**贵方H5 -&gt; 腾讯电子签H5 -&gt; 贵方H5** : JumpUrl格式: https://YOUR_CUSTOM_URL/xxxx，只需满足 https:// 开头的正确且合规的网址即可。</li><li>**贵方原生App -&gt; 腾讯电子签H5 -&gt; 贵方原生App** : JumpUrl格式: qianapp://YOUR_CUSTOM_URL，只需满足 qianapp:// 开头的URL即可。<code>APP实现方，需要拦截Webview地址跳转，发现url是qianapp:// 开头时跳转到原生页面。</code>APP拦截地址跳转可参考：<a href="https://qian.tencent.com/developers/company/openqianh5/#3-%E8%BF%94%E5%9B%9E%E5%BA%94%E7%94%A8jumpurl%E6%A0%BC%E5%BC%8F">返回应用JumpUrl格式</a> </li></ul><p>成功结果返回：<br>若贵方需要在跳转回时通过链接query参数提示开通成功，JumpUrl中的query应携带如下参数：<code>appendResult=qian</code>。这样腾讯电子签H5会在跳转回的url后面会添加query参数提示贵方签署成功，例如：qianapp://YOUR_CUSTOM_URL?action=sign&amp;result=success&amp;from=tencent_ess</p>
                     * 
                     */
                    void SetJumpUrl(const std::string& _jumpUrl);

                    /**
                     * 判断参数 JumpUrl 是否已赋值
                     * @return JumpUrl 是否已赋值
                     * 
                     */
                    bool JumpUrlHasBeenSet() const;

                private:

                    /**
                     * <p>自动签开通个人用户信息, 包括名字,身份证等</p>
                     */
                    UserThreeFactor m_userInfo;
                    bool m_userInfoHasBeenSet;

                    /**
                     * <p>是否回调证书信息:</p><ul><li>**false**: 不需要(默认)</li><li>**true**:需要</li></ul><p>注：<code>该字段已经失效，请勿设置此参数。</code></p>
                     */
                    bool m_certInfoCallback;
                    bool m_certInfoCallbackHasBeenSet;

                    /**
                     * <p>是否支持用户自定义签名印章:</p><ul><li>**false**: 不能自己定义(默认)</li><li>**true**: 可以自己定义</li></ul>
                     */
                    bool m_userDefineSeal;
                    bool m_userDefineSealHasBeenSet;

                    /**
                     * <p>回调中是否需要自动签将要使用的印章（签名）图片的 base64:</p><ul><li>**false**: 不需要(默认)</li><li>**true**: 需要</li></ul>
                     */
                    bool m_sealImgCallback;
                    bool m_sealImgCallbackHasBeenSet;

                    /**
                     * <p>该字段已废弃，请使用【应用号配置】中的回调地址统一接口消息</p>
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * <p>开通时候的身份验证方式, 取值为：</p><ul><li>**WEIXINAPP** : 微信人脸识别</li><li>**INSIGHT** : 慧眼人脸识别</li><li>**TELECOM** : 运营商三要素验证</li></ul>注：<ul><li>如果是小程序开通链接，仅支持传 WEIXINAPP。为空默认 WEIXINAPP</li><li>如果是 H5 开通链接，支持传 INSIGHT / TELECOM。为空默认 INSIGHT </li></ul>
                     */
                    std::vector<std::string> m_verifyChannels;
                    bool m_verifyChannelsHasBeenSet;

                    /**
                     * <p>设置用户开通自动签时是否绑定个人自动签账号许可。</p><ul><li><b>1</b>: (默认)不绑定自动签账号许可开通，开通后一直有效,   后续使用合同份额进行合同发起</li></ul><p>注：<code>该字段已经失效，请勿设置此参数。</code></p>
                     */
                    int64_t m_licenseType;
                    bool m_licenseTypeHasBeenSet;

                    /**
                     * <p>开通成功后前端页面跳转的url，此字段的用法场景请联系客户经理确认。</p><p>注：<code>仅支持H5开通场景</code>, <code>跳转链接仅支持 https:// , qianapp:// 开头</code></p><p>跳转场景：</p><ul><li>**贵方H5 -&gt; 腾讯电子签H5 -&gt; 贵方H5** : JumpUrl格式: https://YOUR_CUSTOM_URL/xxxx，只需满足 https:// 开头的正确且合规的网址即可。</li><li>**贵方原生App -&gt; 腾讯电子签H5 -&gt; 贵方原生App** : JumpUrl格式: qianapp://YOUR_CUSTOM_URL，只需满足 qianapp:// 开头的URL即可。<code>APP实现方，需要拦截Webview地址跳转，发现url是qianapp:// 开头时跳转到原生页面。</code>APP拦截地址跳转可参考：<a href="https://qian.tencent.com/developers/company/openqianh5/#3-%E8%BF%94%E5%9B%9E%E5%BA%94%E7%94%A8jumpurl%E6%A0%BC%E5%BC%8F">返回应用JumpUrl格式</a> </li></ul><p>成功结果返回：<br>若贵方需要在跳转回时通过链接query参数提示开通成功，JumpUrl中的query应携带如下参数：<code>appendResult=qian</code>。这样腾讯电子签H5会在跳转回的url后面会添加query参数提示贵方签署成功，例如：qianapp://YOUR_CUSTOM_URL?action=sign&amp;result=success&amp;from=tencent_ess</p>
                     */
                    std::string m_jumpUrl;
                    bool m_jumpUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_AUTOSIGNCONFIG_H_
