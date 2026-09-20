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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_PRIVATEDOMAINNAMES_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_PRIVATEDOMAINNAMES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * 私有域名信息
                */
                class PrivateDomainNames : public AbstractModel
                {
                public:
                    PrivateDomainNames();
                    ~PrivateDomainNames() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名地址
                     * @return DomainName 域名地址
                     * 
                     */
                    std::string GetDomainName() const;

                    /**
                     * 设置域名地址
                     * @param _domainName 域名地址
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
                     * 获取ip地址
                     * @return IpAddr ip地址
                     * 
                     */
                    std::string GetIpAddr() const;

                    /**
                     * 设置ip地址
                     * @param _ipAddr ip地址
                     * 
                     */
                    void SetIpAddr(const std::string& _ipAddr);

                    /**
                     * 判断参数 IpAddr 是否已赋值
                     * @return IpAddr 是否已赋值
                     * 
                     */
                    bool IpAddrHasBeenSet() const;

                private:

                    /**
                     * 域名地址
                     */
                    std::string m_domainName;
                    bool m_domainNameHasBeenSet;

                    /**
                     * ip地址
                     */
                    std::string m_ipAddr;
                    bool m_ipAddrHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_PRIVATEDOMAINNAMES_H_
