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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_MODIFYAUTHMODESETTINGREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_MODIFYAUTHMODESETTINGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ModifyAuthModeSetting请求参数结构体
                */
                class ModifyAuthModeSettingRequest : public AbstractModel
                {
                public:
                    ModifyAuthModeSettingRequest();
                    ~ModifyAuthModeSettingRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取双因子认证，0-不开启（暂停使用），1-OTP，2-短信，3-USB Key（只有ResourceType=1且AuthModeGM不传时有效，其他情况不能为3）    
备注：AuthMode和AuthModeGM至少有一个有效传参
                     * @return AuthMode 双因子认证，0-不开启（暂停使用），1-OTP，2-短信，3-USB Key（只有ResourceType=1且AuthModeGM不传时有效，其他情况不能为3）    
备注：AuthMode和AuthModeGM至少有一个有效传参
                     * 
                     */
                    uint64_t GetAuthMode() const;

                    /**
                     * 设置双因子认证，0-不开启（暂停使用），1-OTP，2-短信，3-USB Key（只有ResourceType=1且AuthModeGM不传时有效，其他情况不能为3）    
备注：AuthMode和AuthModeGM至少有一个有效传参
                     * @param _authMode 双因子认证，0-不开启（暂停使用），1-OTP，2-短信，3-USB Key（只有ResourceType=1且AuthModeGM不传时有效，其他情况不能为3）    
备注：AuthMode和AuthModeGM至少有一个有效传参
                     * 
                     */
                    void SetAuthMode(const uint64_t& _authMode);

                    /**
                     * 判断参数 AuthMode 是否已赋值
                     * @return AuthMode 是否已赋值
                     * 
                     */
                    bool AuthModeHasBeenSet() const;

                    /**
                     * 获取国密双因子认证，0-不开启（暂停使用），1-OTP，2-短信，3-USB Key
备注：AuthMode和AuthModeGM至少有一个有效传参，AuthModeGM优先级高于ResourceType
                     * @return AuthModeGM 国密双因子认证，0-不开启（暂停使用），1-OTP，2-短信，3-USB Key
备注：AuthMode和AuthModeGM至少有一个有效传参，AuthModeGM优先级高于ResourceType
                     * 
                     */
                    uint64_t GetAuthModeGM() const;

                    /**
                     * 设置国密双因子认证，0-不开启（暂停使用），1-OTP，2-短信，3-USB Key
备注：AuthMode和AuthModeGM至少有一个有效传参，AuthModeGM优先级高于ResourceType
                     * @param _authModeGM 国密双因子认证，0-不开启（暂停使用），1-OTP，2-短信，3-USB Key
备注：AuthMode和AuthModeGM至少有一个有效传参，AuthModeGM优先级高于ResourceType
                     * 
                     */
                    void SetAuthModeGM(const uint64_t& _authModeGM);

                    /**
                     * 判断参数 AuthModeGM 是否已赋值
                     * @return AuthModeGM 是否已赋值
                     * 
                     */
                    bool AuthModeGMHasBeenSet() const;

                    /**
                     * 获取资源类型，0：普通（暂停使用，由AuthMode和AuthModeGM传参决定） 1：国密

                     * @return ResourceType 资源类型，0：普通（暂停使用，由AuthMode和AuthModeGM传参决定） 1：国密

                     * 
                     */
                    int64_t GetResourceType() const;

                    /**
                     * 设置资源类型，0：普通（暂停使用，由AuthMode和AuthModeGM传参决定） 1：国密

                     * @param _resourceType 资源类型，0：普通（暂停使用，由AuthMode和AuthModeGM传参决定） 1：国密

                     * 
                     */
                    void SetResourceType(const int64_t& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                private:

                    /**
                     * 双因子认证，0-不开启（暂停使用），1-OTP，2-短信，3-USB Key（只有ResourceType=1且AuthModeGM不传时有效，其他情况不能为3）    
备注：AuthMode和AuthModeGM至少有一个有效传参
                     */
                    uint64_t m_authMode;
                    bool m_authModeHasBeenSet;

                    /**
                     * 国密双因子认证，0-不开启（暂停使用），1-OTP，2-短信，3-USB Key
备注：AuthMode和AuthModeGM至少有一个有效传参，AuthModeGM优先级高于ResourceType
                     */
                    uint64_t m_authModeGM;
                    bool m_authModeGMHasBeenSet;

                    /**
                     * 资源类型，0：普通（暂停使用，由AuthMode和AuthModeGM传参决定） 1：国密

                     */
                    int64_t m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_MODIFYAUTHMODESETTINGREQUEST_H_
