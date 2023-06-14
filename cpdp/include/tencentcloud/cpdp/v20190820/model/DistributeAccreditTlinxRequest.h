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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_DISTRIBUTEACCREDITTLINXREQUEST_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_DISTRIBUTEACCREDITTLINXREQUEST_H_

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
                * DistributeAccreditTlinx请求参数结构体
                */
                class DistributeAccreditTlinxRequest : public AbstractModel
                {
                public:
                    DistributeAccreditTlinxRequest();
                    ~DistributeAccreditTlinxRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取使用门店OpenId
                     * @return OpenId 使用门店OpenId
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置使用门店OpenId
                     * @param _openId 使用门店OpenId
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
                     * 获取使用门店OpenKey
                     * @return OpenKey 使用门店OpenKey
                     * 
                     */
                    std::string GetOpenKey() const;

                    /**
                     * 设置使用门店OpenKey
                     * @param _openKey 使用门店OpenKey
                     * 
                     */
                    void SetOpenKey(const std::string& _openKey);

                    /**
                     * 判断参数 OpenKey 是否已赋值
                     * @return OpenKey 是否已赋值
                     * 
                     */
                    bool OpenKeyHasBeenSet() const;

                    /**
                     * 获取验证方式，传1手机验证(验证码时效60S)传2结算卡验证(时效6小时)，多种方式用逗号隔开
                     * @return AuthType 验证方式，传1手机验证(验证码时效60S)传2结算卡验证(时效6小时)，多种方式用逗号隔开
                     * 
                     */
                    std::string GetAuthType() const;

                    /**
                     * 设置验证方式，传1手机验证(验证码时效60S)传2结算卡验证(时效6小时)，多种方式用逗号隔开
                     * @param _authType 验证方式，传1手机验证(验证码时效60S)传2结算卡验证(时效6小时)，多种方式用逗号隔开
                     * 
                     */
                    void SetAuthType(const std::string& _authType);

                    /**
                     * 判断参数 AuthType 是否已赋值
                     * @return AuthType 是否已赋值
                     * 
                     */
                    bool AuthTypeHasBeenSet() const;

                    /**
                     * 获取分账比例（500=5%）不传默认百分之10
                     * @return Percent 分账比例（500=5%）不传默认百分之10
                     * 
                     */
                    std::string GetPercent() const;

                    /**
                     * 设置分账比例（500=5%）不传默认百分之10
                     * @param _percent 分账比例（500=5%）不传默认百分之10
                     * 
                     */
                    void SetPercent(const std::string& _percent);

                    /**
                     * 判断参数 Percent 是否已赋值
                     * @return Percent 是否已赋值
                     * 
                     */
                    bool PercentHasBeenSet() const;

                    /**
                     * 获取营业执照商户全称
                     * @return FullName 营业执照商户全称
                     * 
                     */
                    std::string GetFullName() const;

                    /**
                     * 设置营业执照商户全称
                     * @param _fullName 营业执照商户全称
                     * 
                     */
                    void SetFullName(const std::string& _fullName);

                    /**
                     * 判断参数 FullName 是否已赋值
                     * @return FullName 是否已赋值
                     * 
                     */
                    bool FullNameHasBeenSet() const;

                    /**
                     * 获取沙箱环境填sandbox，正式环境不填
                     * @return Profile 沙箱环境填sandbox，正式环境不填
                     * 
                     */
                    std::string GetProfile() const;

                    /**
                     * 设置沙箱环境填sandbox，正式环境不填
                     * @param _profile 沙箱环境填sandbox，正式环境不填
                     * 
                     */
                    void SetProfile(const std::string& _profile);

                    /**
                     * 判断参数 Profile 是否已赋值
                     * @return Profile 是否已赋值
                     * 
                     */
                    bool ProfileHasBeenSet() const;

                private:

                    /**
                     * 使用门店OpenId
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 使用门店OpenKey
                     */
                    std::string m_openKey;
                    bool m_openKeyHasBeenSet;

                    /**
                     * 验证方式，传1手机验证(验证码时效60S)传2结算卡验证(时效6小时)，多种方式用逗号隔开
                     */
                    std::string m_authType;
                    bool m_authTypeHasBeenSet;

                    /**
                     * 分账比例（500=5%）不传默认百分之10
                     */
                    std::string m_percent;
                    bool m_percentHasBeenSet;

                    /**
                     * 营业执照商户全称
                     */
                    std::string m_fullName;
                    bool m_fullNameHasBeenSet;

                    /**
                     * 沙箱环境填sandbox，正式环境不填
                     */
                    std::string m_profile;
                    bool m_profileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_DISTRIBUTEACCREDITTLINXREQUEST_H_
