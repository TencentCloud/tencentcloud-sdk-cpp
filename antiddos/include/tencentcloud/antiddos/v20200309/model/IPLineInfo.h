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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_IPLINEINFO_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_IPLINEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * IP线路信息
                */
                class IPLineInfo : public AbstractModel
                {
                public:
                    IPLineInfo();
                    ~IPLineInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP线路类型，取值[
"bgp"：BGP线路IP
"ctcc"：电信线路IP
"cucc"：联通线路IP
"cmcc"：移动线路IP
"abroad"：境外线路IP
]
                     * @return Type IP线路类型，取值[
"bgp"：BGP线路IP
"ctcc"：电信线路IP
"cucc"：联通线路IP
"cmcc"：移动线路IP
"abroad"：境外线路IP
]
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置IP线路类型，取值[
"bgp"：BGP线路IP
"ctcc"：电信线路IP
"cucc"：联通线路IP
"cmcc"：移动线路IP
"abroad"：境外线路IP
]
                     * @param _type IP线路类型，取值[
"bgp"：BGP线路IP
"ctcc"：电信线路IP
"cucc"：联通线路IP
"cmcc"：移动线路IP
"abroad"：境外线路IP
]
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
                     * 获取线路IP
                     * @return Eip 线路IP
                     * 
                     */
                    std::string GetEip() const;

                    /**
                     * 设置线路IP
                     * @param _eip 线路IP
                     * 
                     */
                    void SetEip(const std::string& _eip);

                    /**
                     * 判断参数 Eip 是否已赋值
                     * @return Eip 是否已赋值
                     * 
                     */
                    bool EipHasBeenSet() const;

                    /**
                     * 获取实例对应的cname
                     * @return Cname 实例对应的cname
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置实例对应的cname
                     * @param _cname 实例对应的cname
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取资源flag，0：高防包资源，1：高防IP资源，2：非高防资源IP
                     * @return ResourceFlag 资源flag，0：高防包资源，1：高防IP资源，2：非高防资源IP
                     * 
                     */
                    int64_t GetResourceFlag() const;

                    /**
                     * 设置资源flag，0：高防包资源，1：高防IP资源，2：非高防资源IP
                     * @param _resourceFlag 资源flag，0：高防包资源，1：高防IP资源，2：非高防资源IP
                     * 
                     */
                    void SetResourceFlag(const int64_t& _resourceFlag);

                    /**
                     * 判断参数 ResourceFlag 是否已赋值
                     * @return ResourceFlag 是否已赋值
                     * 
                     */
                    bool ResourceFlagHasBeenSet() const;

                    /**
                     * 获取域名化资产对应的域名
                     * @return Domain 域名化资产对应的域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名化资产对应的域名
                     * @param _domain 域名化资产对应的域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                private:

                    /**
                     * IP线路类型，取值[
"bgp"：BGP线路IP
"ctcc"：电信线路IP
"cucc"：联通线路IP
"cmcc"：移动线路IP
"abroad"：境外线路IP
]
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 线路IP
                     */
                    std::string m_eip;
                    bool m_eipHasBeenSet;

                    /**
                     * 实例对应的cname
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * 资源flag，0：高防包资源，1：高防IP资源，2：非高防资源IP
                     */
                    int64_t m_resourceFlag;
                    bool m_resourceFlagHasBeenSet;

                    /**
                     * 域名化资产对应的域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_IPLINEINFO_H_
