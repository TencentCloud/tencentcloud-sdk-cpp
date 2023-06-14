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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEPLAYAUTHKEYREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEPLAYAUTHKEYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * ModifyLivePlayAuthKey请求参数结构体
                */
                class ModifyLivePlayAuthKeyRequest : public AbstractModel
                {
                public:
                    ModifyLivePlayAuthKeyRequest();
                    ~ModifyLivePlayAuthKeyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取播放域名。
                     * @return DomainName 播放域名。
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置播放域名。
                     * @param _domainName 播放域名。
                     * 
                     */
                    void SetDomainName(const std::string& _domainName);

                    /**
                     * 判断参数 DomainName 是否已赋值
                     * @return DomainName 是否已赋值
                     * 
                     */
                    bool DomainNameHasBeenSet() const;

                    /**
                     * 获取是否启用，0：关闭，1：启用。
不传表示不修改当前值。
                     * @return Enable 是否启用，0：关闭，1：启用。
不传表示不修改当前值。
                     * 
                     */
                    int64_t GetEnable() const;

                    /**
                     * 设置是否启用，0：关闭，1：启用。
不传表示不修改当前值。
                     * @param _enable 是否启用，0：关闭，1：启用。
不传表示不修改当前值。
                     * 
                     */
                    void SetEnable(const int64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

                    /**
                     * 获取鉴权key。
不传表示不修改当前值。
                     * @return AuthKey 鉴权key。
不传表示不修改当前值。
                     * 
                     */
                    std::string GetAuthKey() const;

                    /**
                     * 设置鉴权key。
不传表示不修改当前值。
                     * @param _authKey 鉴权key。
不传表示不修改当前值。
                     * 
                     */
                    void SetAuthKey(const std::string& _authKey);

                    /**
                     * 判断参数 AuthKey 是否已赋值
                     * @return AuthKey 是否已赋值
                     * 
                     */
                    bool AuthKeyHasBeenSet() const;

                    /**
                     * 获取有效时间，单位：秒。
不传表示不修改当前值。
                     * @return AuthDelta 有效时间，单位：秒。
不传表示不修改当前值。
                     * 
                     */
                    uint64_t GetAuthDelta() const;

                    /**
                     * 设置有效时间，单位：秒。
不传表示不修改当前值。
                     * @param _authDelta 有效时间，单位：秒。
不传表示不修改当前值。
                     * 
                     */
                    void SetAuthDelta(const uint64_t& _authDelta);

                    /**
                     * 判断参数 AuthDelta 是否已赋值
                     * @return AuthDelta 是否已赋值
                     * 
                     */
                    bool AuthDeltaHasBeenSet() const;

                    /**
                     * 获取鉴权备用key。
不传表示不修改当前值。
                     * @return AuthBackKey 鉴权备用key。
不传表示不修改当前值。
                     * 
                     */
                    std::string GetAuthBackKey() const;

                    /**
                     * 设置鉴权备用key。
不传表示不修改当前值。
                     * @param _authBackKey 鉴权备用key。
不传表示不修改当前值。
                     * 
                     */
                    void SetAuthBackKey(const std::string& _authBackKey);

                    /**
                     * 判断参数 AuthBackKey 是否已赋值
                     * @return AuthBackKey 是否已赋值
                     * 
                     */
                    bool AuthBackKeyHasBeenSet() const;

                private:

                    /**
                     * 播放域名。
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 是否启用，0：关闭，1：启用。
不传表示不修改当前值。
                     */
                    int64_t m_enable;
                    bool m_enableHasBeenSet;

                    /**
                     * 鉴权key。
不传表示不修改当前值。
                     */
                    std::string m_authKey;
                    bool m_authKeyHasBeenSet;

                    /**
                     * 有效时间，单位：秒。
不传表示不修改当前值。
                     */
                    uint64_t m_authDelta;
                    bool m_authDeltaHasBeenSet;

                    /**
                     * 鉴权备用key。
不传表示不修改当前值。
                     */
                    std::string m_authBackKey;
                    bool m_authBackKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_MODIFYLIVEPLAYAUTHKEYREQUEST_H_
