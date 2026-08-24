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
                     * 获取<p>证书名称</p>
                     * @return Name <p>证书名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>证书名称</p>
                     * @param _name <p>证书名称</p>
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
                     * 获取<p>Id</p>
                     * @return Id <p>Id</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>Id</p>
                     * @param _id <p>Id</p>
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
                     * 获取<p>绑定的域名</p>
                     * @return BindDomains <p>绑定的域名</p>
                     * 
                     */
                    std::vector<std::string> GetBindDomains() const;

                    /**
                     * 设置<p>绑定的域名</p>
                     * @param _bindDomains <p>绑定的域名</p>
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
                     * 获取<p>证书状态：expired(已过期)<br>                   active(生效中)</p>
                     * @return Status <p>证书状态：expired(已过期)<br>                   active(生效中)</p>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>证书状态：expired(已过期)<br>                   active(生效中)</p>
                     * @param _status <p>证书状态：expired(已过期)<br>                   active(生效中)</p>
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
                     * 获取<p>证书pem格式</p>
                     * @return Crt <p>证书pem格式</p>
                     * 
                     */
                    std::string GetCrt() const;

                    /**
                     * 设置<p>证书pem格式</p>
                     * @param _crt <p>证书pem格式</p>
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
                     * 获取<p>证书私钥</p>
                     * @return Key <p>证书私钥</p>
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置<p>证书私钥</p>
                     * @param _key <p>证书私钥</p>
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
                     * 获取<p>证书过期时间</p>
                     * @return ExpireTime <p>证书过期时间</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>证书过期时间</p>
                     * @param _expireTime <p>证书过期时间</p>
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
                     * 获取<p>证书上传时间</p>
                     * @return CreateTime <p>证书上传时间</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>证书上传时间</p>
                     * @param _createTime <p>证书上传时间</p>
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
                     * 获取<p>证书签发时间</p>
                     * @return IssueTime <p>证书签发时间</p>
                     * 
                     */
                    std::string GetIssueTime() const;

                    /**
                     * 设置<p>证书签发时间</p>
                     * @param _issueTime <p>证书签发时间</p>
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
                     * 获取<p>证书来源：native(kong自定义证书)<br>                    ssl(ssl平台证书)</p>
                     * @return CertSource <p>证书来源：native(kong自定义证书)<br>                    ssl(ssl平台证书)</p>
                     * 
                     */
                    std::string GetCertSource() const;

                    /**
                     * 设置<p>证书来源：native(kong自定义证书)<br>                    ssl(ssl平台证书)</p>
                     * @param _certSource <p>证书来源：native(kong自定义证书)<br>                    ssl(ssl平台证书)</p>
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
                     * 获取<p>ssl平台证书Id</p>
                     * @return CertId <p>ssl平台证书Id</p>
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置<p>ssl平台证书Id</p>
                     * @param _certId <p>ssl平台证书Id</p>
                     * 
                     */
                    void SetCertId(const std::string& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取<p>证书类型</p><p>枚举值：</p><ul><li>SVR： 服务证书</li><li>CA： CA证书</li></ul>
                     * @return CertType <p>证书类型</p><p>枚举值：</p><ul><li>SVR： 服务证书</li><li>CA： CA证书</li></ul>
                     * 
                     */
                    std::string GetCertType() const;

                    /**
                     * 设置<p>证书类型</p><p>枚举值：</p><ul><li>SVR： 服务证书</li><li>CA： CA证书</li></ul>
                     * @param _certType <p>证书类型</p><p>枚举值：</p><ul><li>SVR： 服务证书</li><li>CA： CA证书</li></ul>
                     * 
                     */
                    void SetCertType(const std::string& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取<p>证书用途</p><p>枚举值：</p><ul><li>SERVER： 用作服务端证书</li><li>CLIENT： 用作客户端证书</li></ul>
                     * @return CertUsage <p>证书用途</p><p>枚举值：</p><ul><li>SERVER： 用作服务端证书</li><li>CLIENT： 用作客户端证书</li></ul>
                     * 
                     */
                    std::string GetCertUsage() const;

                    /**
                     * 设置<p>证书用途</p><p>枚举值：</p><ul><li>SERVER： 用作服务端证书</li><li>CLIENT： 用作客户端证书</li></ul>
                     * @param _certUsage <p>证书用途</p><p>枚举值：</p><ul><li>SERVER： 用作服务端证书</li><li>CLIENT： 用作客户端证书</li></ul>
                     * 
                     */
                    void SetCertUsage(const std::string& _certUsage);

                    /**
                     * 判断参数 CertUsage 是否已赋值
                     * @return CertUsage 是否已赋值
                     * 
                     */
                    bool CertUsageHasBeenSet() const;

                    /**
                     * 获取<p>证书被引用的次数</p>
                     * @return ReferCount <p>证书被引用的次数</p>
                     * 
                     */
                    uint64_t GetReferCount() const;

                    /**
                     * 设置<p>证书被引用的次数</p>
                     * @param _referCount <p>证书被引用的次数</p>
                     * 
                     */
                    void SetReferCount(const uint64_t& _referCount);

                    /**
                     * 判断参数 ReferCount 是否已赋值
                     * @return ReferCount 是否已赋值
                     * 
                     */
                    bool ReferCountHasBeenSet() const;

                private:

                    /**
                     * <p>证书名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>Id</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>绑定的域名</p>
                     */
                    std::vector<std::string> m_bindDomains;
                    bool m_bindDomainsHasBeenSet;

                    /**
                     * <p>证书状态：expired(已过期)<br>                   active(生效中)</p>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>证书pem格式</p>
                     */
                    std::string m_crt;
                    bool m_crtHasBeenSet;

                    /**
                     * <p>证书私钥</p>
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * <p>证书过期时间</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>证书上传时间</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>证书签发时间</p>
                     */
                    std::string m_issueTime;
                    bool m_issueTimeHasBeenSet;

                    /**
                     * <p>证书来源：native(kong自定义证书)<br>                    ssl(ssl平台证书)</p>
                     */
                    std::string m_certSource;
                    bool m_certSourceHasBeenSet;

                    /**
                     * <p>ssl平台证书Id</p>
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * <p>证书类型</p><p>枚举值：</p><ul><li>SVR： 服务证书</li><li>CA： CA证书</li></ul>
                     */
                    std::string m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * <p>证书用途</p><p>枚举值：</p><ul><li>SERVER： 用作服务端证书</li><li>CLIENT： 用作客户端证书</li></ul>
                     */
                    std::string m_certUsage;
                    bool m_certUsageHasBeenSet;

                    /**
                     * <p>证书被引用的次数</p>
                     */
                    uint64_t m_referCount;
                    bool m_referCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSE_V20201207_MODEL_KONGCERTIFICATESPREVIEW_H_
