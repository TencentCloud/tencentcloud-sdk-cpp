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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_CCTOPDATA_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_CCTOPDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * CC攻击Top数据
                */
                class CcTopData : public AbstractModel
                {
                public:
                    CcTopData();
                    ~CcTopData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取客户端Ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Ip 客户端Ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置客户端Ip
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _ip 客户端Ip
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                    /**
                     * 获取访问URL
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url 访问URL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置访问URL
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url 访问URL
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取客户端UserAgent
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UserAgent 客户端UserAgent
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUserAgent() const;

                    /**
                     * 设置客户端UserAgent
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _userAgent 客户端UserAgent
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUserAgent(const std::string& _userAgent);

                    /**
                     * 判断参数 UserAgent 是否已赋值
                     * @return UserAgent 是否已赋值
                     * 
                     */
                    bool UserAgentHasBeenSet() const;

                    /**
                     * 获取请求数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Value 请求数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetValue() const;

                    /**
                     * 设置请求数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _value 请求数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetValue(const uint64_t& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Domain 域名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _domain 域名
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 客户端Ip
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                    /**
                     * 访问URL
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 客户端UserAgent
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_userAgent;
                    bool m_userAgentHasBeenSet;

                    /**
                     * 请求数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 域名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_CCTOPDATA_H_
