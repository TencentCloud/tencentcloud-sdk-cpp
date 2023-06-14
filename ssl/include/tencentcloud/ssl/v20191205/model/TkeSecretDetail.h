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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_TKESECRETDETAIL_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_TKESECRETDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ssl/v20191205/model/TkeIngressDetail.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * tke secret详情
                */
                class TkeSecretDetail : public AbstractModel
                {
                public:
                    TkeSecretDetail();
                    ~TkeSecretDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取secret名称
                     * @return Name secret名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置secret名称
                     * @param _name secret名称
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
                     * 获取证书ID
                     * @return CertId 证书ID
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置证书ID
                     * @param _certId 证书ID
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
                     * 获取ingress列表
                     * @return IngressList ingress列表
                     * 
                     */
                    std::vector<TkeIngressDetail> GetIngressList() const;

                    /**
                     * 设置ingress列表
                     * @param _ingressList ingress列表
                     * 
                     */
                    void SetIngressList(const std::vector<TkeIngressDetail>& _ingressList);

                    /**
                     * 判断参数 IngressList 是否已赋值
                     * @return IngressList 是否已赋值
                     * 
                     */
                    bool IngressListHasBeenSet() const;

                    /**
                     * 获取和新证书不匹配的域名列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NoMatchDomains 和新证书不匹配的域名列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNoMatchDomains() const;

                    /**
                     * 设置和新证书不匹配的域名列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _noMatchDomains 和新证书不匹配的域名列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNoMatchDomains(const std::vector<std::string>& _noMatchDomains);

                    /**
                     * 判断参数 NoMatchDomains 是否已赋值
                     * @return NoMatchDomains 是否已赋值
                     * 
                     */
                    bool NoMatchDomainsHasBeenSet() const;

                private:

                    /**
                     * secret名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 证书ID
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                    /**
                     * ingress列表
                     */
                    std::vector<TkeIngressDetail> m_ingressList;
                    bool m_ingressListHasBeenSet;

                    /**
                     * 和新证书不匹配的域名列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_noMatchDomains;
                    bool m_noMatchDomainsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_TKESECRETDETAIL_H_
