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

#ifndef TENCENTCLOUD_TDMQ_V20200217_MODEL_CERTIFICATEINFO_H_
#define TENCENTCLOUD_TDMQ_V20200217_MODEL_CERTIFICATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmq
    {
        namespace V20200217
        {
            namespace Model
            {
                /**
                * Pulsar集群TLS证书信息
                */
                class CertificateInfo : public AbstractModel
                {
                public:
                    CertificateInfo();
                    ~CertificateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取SSL证书管理中的id
                     * @return CertificateId SSL证书管理中的id
                     * 
                     */
                    std::string GetCertificateId() const;

                    /**
                     * 设置SSL证书管理中的id
                     * @param _certificateId SSL证书管理中的id
                     * 
                     */
                    void SetCertificateId(const std::string& _certificateId);

                    /**
                     * 判断参数 CertificateId 是否已赋值
                     * @return CertificateId 是否已赋值
                     * 
                     */
                    bool CertificateIdHasBeenSet() const;

                    /**
                     * 获取证书到期时间
                     * @return ExpireTime 证书到期时间
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置证书到期时间
                     * @param _expireTime 证书到期时间
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
                     * 获取证书绑定的域名
                     * @return DomainName 证书绑定的域名
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置证书绑定的域名
                     * @param _domainName 证书绑定的域名
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
                     * 获取证书状态：0 已签发
1 即将过期
2 未启用
3 已过期
4 不可用
                     * @return Status 证书状态：0 已签发
1 即将过期
2 未启用
3 已过期
4 不可用
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置证书状态：0 已签发
1 即将过期
2 未启用
3 已过期
4 不可用
                     * @param _status 证书状态：0 已签发
1 即将过期
2 未启用
3 已过期
4 不可用
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
                     * 获取证书类型：0：根证书，1：服务端证书
                     * @return Type 证书类型：0：根证书，1：服务端证书
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置证书类型：0：根证书，1：服务端证书
                     * @param _type 证书类型：0：根证书，1：服务端证书
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取TencentCloud：SSL证书；Default：TDMQ官方默认证书
                     * @return Origin TencentCloud：SSL证书；Default：TDMQ官方默认证书
                     * 
                     */
                    std::string GetOrigin() const;

                    /**
                     * 设置TencentCloud：SSL证书；Default：TDMQ官方默认证书
                     * @param _origin TencentCloud：SSL证书；Default：TDMQ官方默认证书
                     * 
                     */
                    void SetOrigin(const std::string& _origin);

                    /**
                     * 判断参数 Origin 是否已赋值
                     * @return Origin 是否已赋值
                     * 
                     */
                    bool OriginHasBeenSet() const;

                    /**
                     * 获取证书添加/更新时间
                     * @return ModifyTime 证书添加/更新时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置证书添加/更新时间
                     * @param _modifyTime 证书添加/更新时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * SSL证书管理中的id
                     */
                    std::string m_certificateId;
                    bool m_certificateIdHasBeenSet;

                    /**
                     * 证书到期时间
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 证书绑定的域名
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * 证书状态：0 已签发
1 即将过期
2 未启用
3 已过期
4 不可用
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 证书类型：0：根证书，1：服务端证书
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * TencentCloud：SSL证书；Default：TDMQ官方默认证书
                     */
                    std::string m_origin;
                    bool m_originHasBeenSet;

                    /**
                     * 证书添加/更新时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMQ_V20200217_MODEL_CERTIFICATEINFO_H_
