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

#ifndef TENCENTCLOUD_TSE_V20201207_MODEL_KONGCERTIFICATESPREVIEW_H_
#define TENCENTCLOUD_TSE_V20201207_MODEL_KONGCERTIFICATESPREVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tse
    {
        namespace V20201207
        {
            namespace Model
            {
                /**
                * 云原生网关证书预览信息
                */
                class KongCertificatesPreview : public AbstractModel
                {
                public:
                    KongCertificatesPreview();
                    ~KongCertificatesPreview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取证书名称
                     * @return Name 证书名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置证书名称
                     * @param _name 证书名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取Id
                     * @return Id Id
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Id
                     * @param _id Id
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取绑定的域名
                     * @return BindDomains 绑定的域名
                     * 
                     */
                    std::vector<std::string> GetBindDomains() const;

                    /**
                     * 设置绑定的域名
                     * @param _bindDomains 绑定的域名
                     * 
                     */
                    void SetBindDomains(const std::vector<std::string>& _bindDomains);

                    /**
                     * 判断参数 BindDomains 是否已赋值
                     * @return BindDomains 是否已赋值
                     * 
                     */
                    bool BindDomainsHasBeenSet() const;

                    /**
                     * 获取证书状态：expired(已过期)
                   active(生效中)
                     * @return Status 证书状态：expired(已过期)
                   active(生效中)
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置证书状态：expired(已过期)
                   active(生效中)
                     * @param _status 证书状态：expired(已过期)
                   active(生效中)
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取证书pem格式
                     * @return Crt 证书pem格式
                     * 
                     */
                    std::string GetCrt() const;

                    /**
                     * 设置证书pem格式
                     * @param _crt 证书pem格式
                     * 
                     */
                    void SetCrt(const std::string& _crt);

                    /**
                     * 判断参数 Crt 是否已赋值
                     * @return Crt 是否已赋值
                     * 
                     */
                    bool CrtHasBeenSet() const;

                    /**
                     * 获取证书私钥
                     * @return Key 证书私钥
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置证书私钥
                     * @param _key 证书私钥
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取证书过期时间
                     * @return ExpireTime 证书过期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置证书过期时间
                     * @param _expireTime 证书过期时间
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取证书上传时间
                     * @return CreateTime 证书上传时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置证书上传时间
                     * @param _createTime 证书上传时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取证书签发时间
                     * @return IssueTime 证书签发时间
                     * 
                     */
                    std::string GetIssueTime() const;

                    /**
                     * 设置证书签发时间
                     * @param _issueTime 证书签发时间
                     * 
                     */
                    void SetIssueTime(const std::string& _issueTime);

                    /**
                     * 判断参数 IssueTime 是否已赋值
                     * @return IssueTime 是否已赋值
                     * 
                     */
                    bool IssueTimeHasBeenSet() const;

                    /**
                     * 获取证书来源：native(kong自定义证书)
                    ssl(ssl平台证书)
                     * @return CertSource 证书来源：native(kong自定义证书)
                    ssl(ssl平台证书)
                     * 
                     */
                    std::string GetCertSource() const;

                    /**
                     * 设置证书来源：native(kong自定义证书)
                    ssl(ssl平台证书)
                     * @param _certSource 证书来源：native(kong自定义证书)
                    ssl(ssl平台证书)
                     * 
                     */
                    void SetCertSource(const std::string& _certSource);

                    /**
                     * 判断参数 CertSource 是否已赋值
                     * @return CertSource 是否已赋值
                     * 
                     */
                    bool CertSourceHasBeenSet() const;

                    /**
                     * 获取ssl平台证书Id
                     * @return CertId ssl平台证书Id
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置ssl平台证书Id
                     * @param _certId ssl平台证书Id
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                private:

                    /**
                     * 证书名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * Id
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 绑定的域名
                     */
                    std::vector<std::string> m_bindDomains;
                    bool m_bindDomainsHasBeenSet;

                    /**
                     * 证书状态：expired(已过期)
                   active(生效中)
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 证书pem格式
                     */
                    std::string m_crt;
                    bool m_crtHasBeenSet;

                    /**
                     * 证书私钥
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 证书过期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 证书上传时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 证书签发时间
                     */
                    std::string m_issueTime;
                    bool m_issueTimeHasBeenSet;

                    /**
                     * 证书来源：native(kong自定义证书)
                    ssl(ssl平台证书)
                     */
                    std::string m_certSource;
                    bool m_certSourceHasBeenSet;

                    /**
                     * ssl平台证书Id
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_KONGCERTIFICATESPREVIEW_H_
