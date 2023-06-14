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

#ifndef TENCENTCLOUD_CWS_V20180312_MODEL_SITESVERIFICATION_H_
#define TENCENTCLOUD_CWS_V20180312_MODEL_SITESVERIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cws
    {
        namespace V20180312
        {
            namespace Model
            {
                /**
                * 站点验证数据
                */
                class SitesVerification : public AbstractModel
                {
                public:
                    SitesVerification();
                    ~SitesVerification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取根域名。
                     * @return Domain 根域名。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置根域名。
                     * @param _domain 根域名。
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取txt解析域名验证的name。
                     * @return TxtName txt解析域名验证的name。
                     * 
                     */
                    std::string GetTxtName() const;

                    /**
                     * 设置txt解析域名验证的name。
                     * @param _txtName txt解析域名验证的name。
                     * 
                     */
                    void SetTxtName(const std::string& _txtName);

                    /**
                     * 判断参数 TxtName 是否已赋值
                     * @return TxtName 是否已赋值
                     * 
                     */
                    bool TxtNameHasBeenSet() const;

                    /**
                     * 获取txt解析域名验证的text。
                     * @return TxtText txt解析域名验证的text。
                     * 
                     */
                    std::string GetTxtText() const;

                    /**
                     * 设置txt解析域名验证的text。
                     * @param _txtText txt解析域名验证的text。
                     * 
                     */
                    void SetTxtText(const std::string& _txtText);

                    /**
                     * 判断参数 TxtText 是否已赋值
                     * @return TxtText 是否已赋值
                     * 
                     */
                    bool TxtTextHasBeenSet() const;

                    /**
                     * 获取验证有效期，在此之前有效。
                     * @return ValidTo 验证有效期，在此之前有效。
                     * 
                     */
                    std::string GetValidTo() const;

                    /**
                     * 设置验证有效期，在此之前有效。
                     * @param _validTo 验证有效期，在此之前有效。
                     * 
                     */
                    void SetValidTo(const std::string& _validTo);

                    /**
                     * 判断参数 ValidTo 是否已赋值
                     * @return ValidTo 是否已赋值
                     * 
                     */
                    bool ValidToHasBeenSet() const;

                    /**
                     * 获取验证状态：0-未验证；1-已验证；2-验证失效，待重新验证。
                     * @return VerifyStatus 验证状态：0-未验证；1-已验证；2-验证失效，待重新验证。
                     * 
                     */
                    uint64_t GetVerifyStatus() const;

                    /**
                     * 设置验证状态：0-未验证；1-已验证；2-验证失效，待重新验证。
                     * @param _verifyStatus 验证状态：0-未验证；1-已验证；2-验证失效，待重新验证。
                     * 
                     */
                    void SetVerifyStatus(const uint64_t& _verifyStatus);

                    /**
                     * 判断参数 VerifyStatus 是否已赋值
                     * @return VerifyStatus 是否已赋值
                     * 
                     */
                    bool VerifyStatusHasBeenSet() const;

                    /**
                     * 获取CreatedAt。
                     * @return CreatedAt CreatedAt。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置CreatedAt。
                     * @param _createdAt CreatedAt。
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取UpdatedAt。
                     * @return UpdatedAt UpdatedAt。
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置UpdatedAt。
                     * @param _updatedAt UpdatedAt。
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取ID。
                     * @return Id ID。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置ID。
                     * @param _id ID。
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取云用户appid
                     * @return Appid 云用户appid
                     * 
                     */
                    uint64_t GetAppid() const;

                    /**
                     * 设置云用户appid
                     * @param _appid 云用户appid
                     * 
                     */
                    void SetAppid(const uint64_t& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     * 
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取用于验证站点的url，即访问该url获取验证数据。
                     * @return VerifyUrl 用于验证站点的url，即访问该url获取验证数据。
                     * 
                     */
                    std::string GetVerifyUrl() const;

                    /**
                     * 设置用于验证站点的url，即访问该url获取验证数据。
                     * @param _verifyUrl 用于验证站点的url，即访问该url获取验证数据。
                     * 
                     */
                    void SetVerifyUrl(const std::string& _verifyUrl);

                    /**
                     * 判断参数 VerifyUrl 是否已赋值
                     * @return VerifyUrl 是否已赋值
                     * 
                     */
                    bool VerifyUrlHasBeenSet() const;

                    /**
                     * 获取获取验证验证文件的url。
                     * @return VerifyFileUrl 获取验证验证文件的url。
                     * 
                     */
                    std::string GetVerifyFileUrl() const;

                    /**
                     * 设置获取验证验证文件的url。
                     * @param _verifyFileUrl 获取验证验证文件的url。
                     * 
                     */
                    void SetVerifyFileUrl(const std::string& _verifyFileUrl);

                    /**
                     * 判断参数 VerifyFileUrl 是否已赋值
                     * @return VerifyFileUrl 是否已赋值
                     * 
                     */
                    bool VerifyFileUrlHasBeenSet() const;

                private:

                    /**
                     * 根域名。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * txt解析域名验证的name。
                     */
                    std::string m_txtName;
                    bool m_txtNameHasBeenSet;

                    /**
                     * txt解析域名验证的text。
                     */
                    std::string m_txtText;
                    bool m_txtTextHasBeenSet;

                    /**
                     * 验证有效期，在此之前有效。
                     */
                    std::string m_validTo;
                    bool m_validToHasBeenSet;

                    /**
                     * 验证状态：0-未验证；1-已验证；2-验证失效，待重新验证。
                     */
                    uint64_t m_verifyStatus;
                    bool m_verifyStatusHasBeenSet;

                    /**
                     * CreatedAt。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * UpdatedAt。
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * ID。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 云用户appid
                     */
                    uint64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * 用于验证站点的url，即访问该url获取验证数据。
                     */
                    std::string m_verifyUrl;
                    bool m_verifyUrlHasBeenSet;

                    /**
                     * 获取验证验证文件的url。
                     */
                    std::string m_verifyFileUrl;
                    bool m_verifyFileUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWS_V20180312_MODEL_SITESVERIFICATION_H_
