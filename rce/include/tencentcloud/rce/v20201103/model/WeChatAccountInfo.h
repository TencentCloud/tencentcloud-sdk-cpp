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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_WECHATACCOUNTINFO_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_WECHATACCOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * 微信账号信息。
                */
                class WeChatAccountInfo : public AbstractModel
                {
                public:
                    WeChatAccountInfo();
                    ~WeChatAccountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取微信的OpenId/UnionId。
                     * @return WeChatOpenId 微信的OpenId/UnionId。
                     * 
                     */
                    std::string GetWeChatOpenId() const;

                    /**
                     * 设置微信的OpenId/UnionId。
                     * @param _weChatOpenId 微信的OpenId/UnionId。
                     * 
                     */
                    void SetWeChatOpenId(const std::string& _weChatOpenId);

                    /**
                     * 判断参数 WeChatOpenId 是否已赋值
                     * @return WeChatOpenId 是否已赋值
                     * 
                     */
                    bool WeChatOpenIdHasBeenSet() const;

                    /**
                     * 获取微信开放账号类型：
1：微信公众号/微信第三方登录。
2：微信小程序。
                     * @return WeChatSubType 微信开放账号类型：
1：微信公众号/微信第三方登录。
2：微信小程序。
                     * 
                     */
                    uint64_t GetWeChatSubType() const;

                    /**
                     * 设置微信开放账号类型：
1：微信公众号/微信第三方登录。
2：微信小程序。
                     * @param _weChatSubType 微信开放账号类型：
1：微信公众号/微信第三方登录。
2：微信小程序。
                     * 
                     */
                    void SetWeChatSubType(const uint64_t& _weChatSubType);

                    /**
                     * 判断参数 WeChatSubType 是否已赋值
                     * @return WeChatSubType 是否已赋值
                     * 
                     */
                    bool WeChatSubTypeHasBeenSet() const;

                    /**
                     * 获取随机串。如果WeChatSubType是2，该字段必填。Token签名随机数，建议16个字符。
                     * @return RandStr 随机串。如果WeChatSubType是2，该字段必填。Token签名随机数，建议16个字符。
                     * 
                     */
                    std::string GetRandStr() const;

                    /**
                     * 设置随机串。如果WeChatSubType是2，该字段必填。Token签名随机数，建议16个字符。
                     * @param _randStr 随机串。如果WeChatSubType是2，该字段必填。Token签名随机数，建议16个字符。
                     * 
                     */
                    void SetRandStr(const std::string& _randStr);

                    /**
                     * 判断参数 RandStr 是否已赋值
                     * @return RandStr 是否已赋值
                     * 
                     */
                    bool RandStrHasBeenSet() const;

                    /**
                     * 获取如果WeChatSubType 是1，填入授权的 access_token（注意：不是普通 access_token，详情请参阅官方说明文档。获取网页版本的 access_token 时，scope 字段必需填写snsapi_userinfo
如果WeChatSubType是2，填入以session_key 为密钥签名随机数RandStr（hmac_sha256签名算法）得到的字符串。
                     * @return WeChatAccessToken 如果WeChatSubType 是1，填入授权的 access_token（注意：不是普通 access_token，详情请参阅官方说明文档。获取网页版本的 access_token 时，scope 字段必需填写snsapi_userinfo
如果WeChatSubType是2，填入以session_key 为密钥签名随机数RandStr（hmac_sha256签名算法）得到的字符串。
                     * 
                     */
                    std::string GetWeChatAccessToken() const;

                    /**
                     * 设置如果WeChatSubType 是1，填入授权的 access_token（注意：不是普通 access_token，详情请参阅官方说明文档。获取网页版本的 access_token 时，scope 字段必需填写snsapi_userinfo
如果WeChatSubType是2，填入以session_key 为密钥签名随机数RandStr（hmac_sha256签名算法）得到的字符串。
                     * @param _weChatAccessToken 如果WeChatSubType 是1，填入授权的 access_token（注意：不是普通 access_token，详情请参阅官方说明文档。获取网页版本的 access_token 时，scope 字段必需填写snsapi_userinfo
如果WeChatSubType是2，填入以session_key 为密钥签名随机数RandStr（hmac_sha256签名算法）得到的字符串。
                     * 
                     */
                    void SetWeChatAccessToken(const std::string& _weChatAccessToken);

                    /**
                     * 判断参数 WeChatAccessToken 是否已赋值
                     * @return WeChatAccessToken 是否已赋值
                     * 
                     */
                    bool WeChatAccessTokenHasBeenSet() const;

                    /**
                     * 获取用于标识微信用户登录后所关联业务自身的账号ID。
                     * @return AssociateAccount 用于标识微信用户登录后所关联业务自身的账号ID。
                     * 
                     */
                    std::string GetAssociateAccount() const;

                    /**
                     * 设置用于标识微信用户登录后所关联业务自身的账号ID。
                     * @param _associateAccount 用于标识微信用户登录后所关联业务自身的账号ID。
                     * 
                     */
                    void SetAssociateAccount(const std::string& _associateAccount);

                    /**
                     * 判断参数 AssociateAccount 是否已赋值
                     * @return AssociateAccount 是否已赋值
                     * 
                     */
                    bool AssociateAccountHasBeenSet() const;

                    /**
                     * 获取账号绑定的MD5或SHA256加密的手机号。
注释：支持标准中国大陆11位手机号MD5加密后位的32位小写字符串；
     支持标准中国大陆11位手机号SHA256加密后位的64位小写字符串。
                     * @return MobilePhone 账号绑定的MD5或SHA256加密的手机号。
注释：支持标准中国大陆11位手机号MD5加密后位的32位小写字符串；
     支持标准中国大陆11位手机号SHA256加密后位的64位小写字符串。
                     * 
                     */
                    std::string GetMobilePhone() const;

                    /**
                     * 设置账号绑定的MD5或SHA256加密的手机号。
注释：支持标准中国大陆11位手机号MD5加密后位的32位小写字符串；
     支持标准中国大陆11位手机号SHA256加密后位的64位小写字符串。
                     * @param _mobilePhone 账号绑定的MD5或SHA256加密的手机号。
注释：支持标准中国大陆11位手机号MD5加密后位的32位小写字符串；
     支持标准中国大陆11位手机号SHA256加密后位的64位小写字符串。
                     * 
                     */
                    void SetMobilePhone(const std::string& _mobilePhone);

                    /**
                     * 判断参数 MobilePhone 是否已赋值
                     * @return MobilePhone 是否已赋值
                     * 
                     */
                    bool MobilePhoneHasBeenSet() const;

                    /**
                     * 获取用户设备号（已不推荐使用）。
                     * @return DeviceId 用户设备号（已不推荐使用）。
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置用户设备号（已不推荐使用）。
                     * @param _deviceId 用户设备号（已不推荐使用）。
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                private:

                    /**
                     * 微信的OpenId/UnionId。
                     */
                    std::string m_weChatOpenId;
                    bool m_weChatOpenIdHasBeenSet;

                    /**
                     * 微信开放账号类型：
1：微信公众号/微信第三方登录。
2：微信小程序。
                     */
                    uint64_t m_weChatSubType;
                    bool m_weChatSubTypeHasBeenSet;

                    /**
                     * 随机串。如果WeChatSubType是2，该字段必填。Token签名随机数，建议16个字符。
                     */
                    std::string m_randStr;
                    bool m_randStrHasBeenSet;

                    /**
                     * 如果WeChatSubType 是1，填入授权的 access_token（注意：不是普通 access_token，详情请参阅官方说明文档。获取网页版本的 access_token 时，scope 字段必需填写snsapi_userinfo
如果WeChatSubType是2，填入以session_key 为密钥签名随机数RandStr（hmac_sha256签名算法）得到的字符串。
                     */
                    std::string m_weChatAccessToken;
                    bool m_weChatAccessTokenHasBeenSet;

                    /**
                     * 用于标识微信用户登录后所关联业务自身的账号ID。
                     */
                    std::string m_associateAccount;
                    bool m_associateAccountHasBeenSet;

                    /**
                     * 账号绑定的MD5或SHA256加密的手机号。
注释：支持标准中国大陆11位手机号MD5加密后位的32位小写字符串；
     支持标准中国大陆11位手机号SHA256加密后位的64位小写字符串。
                     */
                    std::string m_mobilePhone;
                    bool m_mobilePhoneHasBeenSet;

                    /**
                     * 用户设备号（已不推荐使用）。
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_WECHATACCOUNTINFO_H_
