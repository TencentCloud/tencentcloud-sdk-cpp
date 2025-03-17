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

#ifndef TENCENTCLOUD_SSL_V20191205_MODEL_GATEWAYCERTIFICATE_H_
#define TENCENTCLOUD_SSL_V20191205_MODEL_GATEWAYCERTIFICATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ssl
    {
        namespace V20191205
        {
            namespace Model
            {
                /**
                * 云原生网关证书信息
                */
                class GatewayCertificate : public AbstractModel
                {
                public:
                    GatewayCertificate();
                    ~GatewayCertificate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取网关证书ID
                     * @return Id 网关证书ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置网关证书ID
                     * @param _id 网关证书ID
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
                     * 获取网关证书名称
                     * @return Name 网关证书名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置网关证书名称
                     * @param _name 网关证书名称
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
                     * 获取绑定域名
                     * @return BindDomains 绑定域名
                     * 
                     */
                    std::vector<std::string> GetBindDomains() const;

                    /**
                     * 设置绑定域名
                     * @param _bindDomains 绑定域名
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
                     * 获取证书来源
                     * @return CertSource 证书来源
                     * 
                     */
                    std::string GetCertSource() const;

                    /**
                     * 设置证书来源
                     * @param _certSource 证书来源
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
                     * 获取当前绑定的SSL证书ID
                     * @return CertId 当前绑定的SSL证书ID
                     * 
                     */
                    std::string GetCertId() const;

                    /**
                     * 设置当前绑定的SSL证书ID
                     * @param _certId 当前绑定的SSL证书ID
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
                     * 网关证书ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 网关证书名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 绑定域名
                     */
                    std::vector<std::string> m_bindDomains;
                    bool m_bindDomainsHasBeenSet;

                    /**
                     * 证书来源
                     */
                    std::string m_certSource;
                    bool m_certSourceHasBeenSet;

                    /**
                     * 当前绑定的SSL证书ID
                     */
                    std::string m_certId;
                    bool m_certIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SSL_V20191205_MODEL_GATEWAYCERTIFICATE_H_
