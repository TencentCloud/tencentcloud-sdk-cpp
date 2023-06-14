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

#ifndef TENCENTCLOUD_WSS_V20180426_MODEL_DESCRIBECERTLISTREQUEST_H_
#define TENCENTCLOUD_WSS_V20180426_MODEL_DESCRIBECERTLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wss
    {
        namespace V20180426
        {
            namespace Model
            {
                /**
                * DescribeCertList请求参数结构体
                */
                class DescribeCertListRequest : public AbstractModel
                {
                public:
                    DescribeCertListRequest();
                    ~DescribeCertListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取模块名称，应填 ssl。
                     * @return ModuleType 模块名称，应填 ssl。
                     * 
                     */
                    std::string GetModuleType() const;

                    /**
                     * 设置模块名称，应填 ssl。
                     * @param _moduleType 模块名称，应填 ssl。
                     * 
                     */
                    void SetModuleType(const std::string& _moduleType);

                    /**
                     * 判断参数 ModuleType 是否已赋值
                     * @return ModuleType 是否已赋值
                     * 
                     */
                    bool ModuleTypeHasBeenSet() const;

                    /**
                     * 获取页数，默认第一页。
                     * @return Offset 页数，默认第一页。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置页数，默认第一页。
                     * @param _offset 页数，默认第一页。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页条数，默认每页20条。
                     * @return Limit 每页条数，默认每页20条。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置每页条数，默认每页20条。
                     * @param _limit 每页条数，默认每页20条。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取搜索关键字。
                     * @return SearchKey 搜索关键字。
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置搜索关键字。
                     * @param _searchKey 搜索关键字。
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取证书类型（目前支持:CA=客户端证书,SVR=服务器证书）。
                     * @return CertType 证书类型（目前支持:CA=客户端证书,SVR=服务器证书）。
                     * 
                     */
                    std::string GetCertType() const;

                    /**
                     * 设置证书类型（目前支持:CA=客户端证书,SVR=服务器证书）。
                     * @param _certType 证书类型（目前支持:CA=客户端证书,SVR=服务器证书）。
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
                     * 获取证书ID。
                     * @return Id 证书ID。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置证书ID。
                     * @param _id 证书ID。
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
                     * 获取是否同时获取证书内容。
                     * @return WithCert 是否同时获取证书内容。
                     * 
                     */
                    std::string GetWithCert() const;

                    /**
                     * 设置是否同时获取证书内容。
                     * @param _withCert 是否同时获取证书内容。
                     * 
                     */
                    void SetWithCert(const std::string& _withCert);

                    /**
                     * 判断参数 WithCert 是否已赋值
                     * @return WithCert 是否已赋值
                     * 
                     */
                    bool WithCertHasBeenSet() const;

                    /**
                     * 获取如传，则只返回可以给该域名使用的证书。
                     * @return AltDomain 如传，则只返回可以给该域名使用的证书。
                     * 
                     */
                    std::string GetAltDomain() const;

                    /**
                     * 设置如传，则只返回可以给该域名使用的证书。
                     * @param _altDomain 如传，则只返回可以给该域名使用的证书。
                     * 
                     */
                    void SetAltDomain(const std::string& _altDomain);

                    /**
                     * 判断参数 AltDomain 是否已赋值
                     * @return AltDomain 是否已赋值
                     * 
                     */
                    bool AltDomainHasBeenSet() const;

                private:

                    /**
                     * 模块名称，应填 ssl。
                     */
                    std::string m_moduleType;
                    bool m_moduleTypeHasBeenSet;

                    /**
                     * 页数，默认第一页。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页条数，默认每页20条。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 搜索关键字。
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * 证书类型（目前支持:CA=客户端证书,SVR=服务器证书）。
                     */
                    std::string m_certType;
                    bool m_certTypeHasBeenSet;

                    /**
                     * 证书ID。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 是否同时获取证书内容。
                     */
                    std::string m_withCert;
                    bool m_withCertHasBeenSet;

                    /**
                     * 如传，则只返回可以给该域名使用的证书。
                     */
                    std::string m_altDomain;
                    bool m_altDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WSS_V20180426_MODEL_DESCRIBECERTLISTREQUEST_H_
