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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_WECHATPREAUTHRESULT_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_WECHATPREAUTHRESULT_H_

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
                * 微工卡预核身结果
                */
                class WechatPreAuthResult : public AbstractModel
                {
                public:
                    WechatPreAuthResult();
                    ~WechatPreAuthResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取商户核身单号
                     * @return AuthNo 商户核身单号
                     * 
                     */
                    std::string GetAuthNo() const;

                    /**
                     * 设置商户核身单号
                     * @param _authNo 商户核身单号
                     * 
                     */
                    void SetAuthNo(const std::string& _authNo);

                    /**
                     * 判断参数 AuthNo 是否已赋值
                     * @return AuthNo 是否已赋值
                     * 
                     */
                    bool AuthNoHasBeenSet() const;

                    /**
                     * 获取微信用户标识
                     * @return OpenId 微信用户标识
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置微信用户标识
                     * @param _openId 微信用户标识
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
                     * 获取商户号
                     * @return MchId 商户号
                     * 
                     */
                    std::string GetMchId() const;

                    /**
                     * 设置商户号
                     * @param _mchId 商户号
                     * 
                     */
                    void SetMchId(const std::string& _mchId);

                    /**
                     * 判断参数 MchId 是否已赋值
                     * @return MchId 是否已赋值
                     * 
                     */
                    bool MchIdHasBeenSet() const;

                    /**
                     * 获取子商户号
                     * @return SubMchId 子商户号
                     * 
                     */
                    std::string GetSubMchId() const;

                    /**
                     * 设置子商户号
                     * @param _subMchId 子商户号
                     * 
                     */
                    void SetSubMchId(const std::string& _subMchId);

                    /**
                     * 判断参数 SubMchId 是否已赋值
                     * @return SubMchId 是否已赋值
                     * 
                     */
                    bool SubMchIdHasBeenSet() const;

                    /**
                     * 获取预核身token值
                     * @return Token 预核身token值
                     * 
                     */
                    std::string GetToken() const;

                    /**
                     * 设置预核身token值
                     * @param _token 预核身token值
                     * 
                     */
                    void SetToken(const std::string& _token);

                    /**
                     * 判断参数 Token 是否已赋值
                     * @return Token 是否已赋值
                     * 
                     */
                    bool TokenHasBeenSet() const;

                    /**
                     * 获取token有效期时间，单位：秒
                     * @return Expire token有效期时间，单位：秒
                     * 
                     */
                    int64_t GetExpire() const;

                    /**
                     * 设置token有效期时间，单位：秒
                     * @param _expire token有效期时间，单位：秒
                     * 
                     */
                    void SetExpire(const int64_t& _expire);

                    /**
                     * 判断参数 Expire 是否已赋值
                     * @return Expire 是否已赋值
                     * 
                     */
                    bool ExpireHasBeenSet() const;

                private:

                    /**
                     * 商户核身单号
                     */
                    std::string m_authNo;
                    bool m_authNoHasBeenSet;

                    /**
                     * 微信用户标识
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 商户号
                     */
                    std::string m_mchId;
                    bool m_mchIdHasBeenSet;

                    /**
                     * 子商户号
                     */
                    std::string m_subMchId;
                    bool m_subMchIdHasBeenSet;

                    /**
                     * 预核身token值
                     */
                    std::string m_token;
                    bool m_tokenHasBeenSet;

                    /**
                     * token有效期时间，单位：秒
                     */
                    int64_t m_expire;
                    bool m_expireHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_WECHATPREAUTHRESULT_H_
