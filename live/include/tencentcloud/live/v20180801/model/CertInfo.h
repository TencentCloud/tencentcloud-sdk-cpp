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
                     * 获取证书 ID。
                     * @return CertId 证书 ID。
                     * 
                     */
                    int64_t GetCertId() const;

                    /**
                     * 设置证书 ID。
                     * @param _certId 证书 ID。
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
                     * 获取证书名称。
                     * @return CertName 证书名称。
                     * 
                     */
                    std::string GetCertName() const;

                    /**
                     * 设置证书名称。
                     * @param _certName 证书名称。
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
                     * 获取描述信息。
                     * @return Description 描述信息。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息。
                     * @param _description 描述信息。
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
                     * 获取创建时间，UTC 格式。
注：此字段为北京时间（UTC+8时区）。
                     * @return CreateTime 创建时间，UTC 格式。
注：此字段为北京时间（UTC+8时区）。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间，UTC 格式。
注：此字段为北京时间（UTC+8时区）。
                     * @param _createTime 创建时间，UTC 格式。
注：此字段为北京时间（UTC+8时区）。
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
                     * 获取证书内容。
                     * @return HttpsCrt 证书内容。
                     * 
                     */
                    std::string GetHttpsCrt() const;

                    /**
                     * 设置证书内容。
                     * @param _httpsCrt 证书内容。
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
                     * 获取证书类型。
0：用户添加证书，
1：腾讯云托管证书。
                     * @return CertType 证书类型。
0：用户添加证书，
1：腾讯云托管证书。
                     * 
                     */
                    int64_t GetCertType() const;

                    /**
                     * 设置证书类型。
0：用户添加证书，
1：腾讯云托管证书。
                     * @param _certType 证书类型。
0：用户添加证书，
1：腾讯云托管证书。
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
                     * 获取证书过期时间，UTC 格式。
注：此字段为北京时间（UTC+8时区）。
                     * @return CertExpireTime 证书过期时间，UTC 格式。
注：此字段为北京时间（UTC+8时区）。
                     * 
                     */
                    std::string GetCertExpireTime() const;

                    /**
                     * 设置证书过期时间，UTC 格式。
注：此字段为北京时间（UTC+8时区）。
                     * @param _certExpireTime 证书过期时间，UTC 格式。
注：此字段为北京时间（UTC+8时区）。
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
                     * 获取使用此证书的域名列表。
                     * @return DomainList 使用此证书的域名列表。
                     * 
                     */
                    std::vector<std::string> GetDomainList() const;

                    /**
                     * 设置使用此证书的域名列表。
                     * @param _domainList 使用此证书的域名列表。
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
                     * 证书 ID。
                     */
                    int64_t m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * 证书名称。
                     */
                    std::string m_certName;
                    bool m_certNameHasBeenSet;

                    /**
                     * 描述信息。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 创建时间，UTC 格式。
注：此字段为北京时间（UTC+8时区）。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 证书内容。
                     */
                    std::string m_httpsCrt;
                    bool m_httpsCrtHasBeenSet;

                    /**
                     * 证书类型。
0：用户添加证书，
1：腾讯云托管证书。
                     */
                    int64_t m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * 证书过期时间，UTC 格式。
注：此字段为北京时间（UTC+8时区）。
                     */
                    std::string m_certExpireTime;
                    bool m_certExpireTimeHasBeenSet;

                    /**
                     * 使用此证书的域名列表。
                     */
                    std::vector<std::string> m_domainList;
                    bool m_domainListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_CERTINFO_H_
