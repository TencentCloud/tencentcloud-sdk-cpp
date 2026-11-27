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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_CERTINFO_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_CERTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 证书信息。
                */
                class CertInfo : public AbstractModel
                {
                public:
                    CertInfo();
                    ~CertInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>证书 ID。</p>
                     * @return CertId <p>证书 ID。</p>
                     * 
                     */
                    int64_t GetCertId() const;

                    /**
                     * 设置<p>证书 ID。</p>
                     * @param _certId <p>证书 ID。</p>
                     * 
                     */
                    void SetCertId(const int64_t& _certId);

                    /**
                     * 判断参数 CertId 是否已赋值
                     * @return CertId 是否已赋值
                     * 
                     */
                    bool CertIdHasBeenSet() const;

                    /**
                     * 获取<p>证书名称。</p>
                     * @return CertName <p>证书名称。</p>
                     * 
                     */
                    std::string GetCertName() const;

                    /**
                     * 设置<p>证书名称。</p>
                     * @param _certName <p>证书名称。</p>
                     * 
                     */
                    void SetCertName(const std::string& _certName);

                    /**
                     * 判断参数 CertName 是否已赋值
                     * @return CertName 是否已赋值
                     * 
                     */
                    bool CertNameHasBeenSet() const;

                    /**
                     * 获取<p>描述信息。</p>
                     * @return Description <p>描述信息。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述信息。</p>
                     * @param _description <p>描述信息。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>创建时间，UTC 格式。<br>注：此字段为北京时间（UTC+8时区）。</p>
                     * @return CreateTime <p>创建时间，UTC 格式。<br>注：此字段为北京时间（UTC+8时区）。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>创建时间，UTC 格式。<br>注：此字段为北京时间（UTC+8时区）。</p>
                     * @param _createTime <p>创建时间，UTC 格式。<br>注：此字段为北京时间（UTC+8时区）。</p>
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
                     * 获取<p>证书内容。</p>
                     * @return HttpsCrt <p>证书内容。</p>
                     * 
                     */
                    std::string GetHttpsCrt() const;

                    /**
                     * 设置<p>证书内容。</p>
                     * @param _httpsCrt <p>证书内容。</p>
                     * 
                     */
                    void SetHttpsCrt(const std::string& _httpsCrt);

                    /**
                     * 判断参数 HttpsCrt 是否已赋值
                     * @return HttpsCrt 是否已赋值
                     * 
                     */
                    bool HttpsCrtHasBeenSet() const;

                    /**
                     * 获取<p>证书类型。<br>0：用户添加证书，<br>1：腾讯云托管证书。</p>
                     * @return CertType <p>证书类型。<br>0：用户添加证书，<br>1：腾讯云托管证书。</p>
                     * 
                     */
                    int64_t GetCertType() const;

                    /**
                     * 设置<p>证书类型。<br>0：用户添加证书，<br>1：腾讯云托管证书。</p>
                     * @param _certType <p>证书类型。<br>0：用户添加证书，<br>1：腾讯云托管证书。</p>
                     * 
                     */
                    void SetCertType(const int64_t& _certType);

                    /**
                     * 判断参数 CertType 是否已赋值
                     * @return CertType 是否已赋值
                     * 
                     */
                    bool CertTypeHasBeenSet() const;

                    /**
                     * 获取<p>证书过期时间，UTC 格式。<br>注：此字段为北京时间（UTC+8时区）。</p>
                     * @return CertExpireTime <p>证书过期时间，UTC 格式。<br>注：此字段为北京时间（UTC+8时区）。</p>
                     * 
                     */
                    std::string GetCertExpireTime() const;

                    /**
                     * 设置<p>证书过期时间，UTC 格式。<br>注：此字段为北京时间（UTC+8时区）。</p>
                     * @param _certExpireTime <p>证书过期时间，UTC 格式。<br>注：此字段为北京时间（UTC+8时区）。</p>
                     * 
                     */
                    void SetCertExpireTime(const std::string& _certExpireTime);

                    /**
                     * 判断参数 CertExpireTime 是否已赋值
                     * @return CertExpireTime 是否已赋值
                     * 
                     */
                    bool CertExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>使用此证书的域名列表。</p>
                     * @return DomainList <p>使用此证书的域名列表。</p>
                     * 
                     */
                    std::vector<std::string> GetDomainList() const;

                    /**
                     * 设置<p>使用此证书的域名列表。</p>
                     * @param _domainList <p>使用此证书的域名列表。</p>
                     * 
                     */
                    void SetDomainList(const std::vector<std::string>& _domainList);

                    /**
                     * 判断参数 DomainList 是否已赋值
                     * @return DomainList 是否已赋值
                     * 
                     */
                    bool DomainListHasBeenSet() const;

                private:

                    /**
                     * <p>证书 ID。</p>
                     */
                    int64_t m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * <p>证书名称。</p>
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                    /**
                     * <p>描述信息。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>创建时间，UTC 格式。<br>注：此字段为北京时间（UTC+8时区）。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>证书内容。</p>
                     */
                    std::string m_httpsCrt;
                    bool m_httpsCrtHasBeenSet;

                    /**
                     * <p>证书类型。<br>0：用户添加证书，<br>1：腾讯云托管证书。</p>
                     */
                    int64_t m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * <p>证书过期时间，UTC 格式。<br>注：此字段为北京时间（UTC+8时区）。</p>
                     */
                    std::string m_certExpireTime;
                    bool m_certExpireTimeHasBeenSet;

                    /**
                     * <p>使用此证书的域名列表。</p>
                     */
                    std::vector<std::string> m_domainList;
                    bool m_domainListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CERTINFO_H_
