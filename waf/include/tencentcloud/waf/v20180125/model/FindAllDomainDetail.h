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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_FINDALLDOMAINDETAIL_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_FINDALLDOMAINDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * 域名列表
                */
                class FindAllDomainDetail : public AbstractModel
                {
                public:
                    FindAllDomainDetail();
                    ~FindAllDomainDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户id
                     * @return Appid 用户id
                     * 
                     */
                    uint64_t GetAppid() const;

                    /**
                     * 设置用户id
                     * @param _appid 用户id
                     * 
                     */
                    void SetAppid(const uint64_t& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     * 
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取域名ip
                     * @return Ips 域名ip
                     * 
                     */
                    std::vector<std::string> GetIps() const;

                    /**
                     * 设置域名ip
                     * @param _ips 域名ip
                     * 
                     */
                    void SetIps(const std::vector<std::string>& _ips);

                    /**
                     * 判断参数 Ips 是否已赋值
                     * @return Ips 是否已赋值
                     * 
                     */
                    bool IpsHasBeenSet() const;

                    /**
                     * 获取发现时间
                     * @return FindTime 发现时间
                     * 
                     */
                    std::string GetFindTime() const;

                    /**
                     * 设置发现时间
                     * @param _findTime 发现时间
                     * 
                     */
                    void SetFindTime(const std::string& _findTime);

                    /**
                     * 判断参数 FindTime 是否已赋值
                     * @return FindTime 是否已赋值
                     * 
                     */
                    bool FindTimeHasBeenSet() const;

                    /**
                     * 获取实例id
                     * @return InstanceId 实例id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例id
                     * @param _instanceId 实例id
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取域名id
                     * @return DomainId 域名id
                     * 
                     */
                    std::string GetDomainId() const;

                    /**
                     * 设置域名id
                     * @param _domainId 域名id
                     * 
                     */
                    void SetDomainId(const std::string& _domainId);

                    /**
                     * 判断参数 DomainId 是否已赋值
                     * @return DomainId 是否已赋值
                     * 
                     */
                    bool DomainIdHasBeenSet() const;

                    /**
                     * 获取waf类型
                     * @return Edition waf类型
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置waf类型
                     * @param _edition waf类型
                     * 
                     */
                    void SetEdition(const std::string& _edition);

                    /**
                     * 判断参数 Edition 是否已赋值
                     * @return Edition 是否已赋值
                     * 
                     */
                    bool EditionHasBeenSet() const;

                    /**
                     * 获取是否接入waf
                     * @return IsWafDomain 是否接入waf
                     * 
                     */
                    uint64_t GetIsWafDomain() const;

                    /**
                     * 设置是否接入waf
                     * @param _isWafDomain 是否接入waf
                     * 
                     */
                    void SetIsWafDomain(const uint64_t& _isWafDomain);

                    /**
                     * 判断参数 IsWafDomain 是否已赋值
                     * @return IsWafDomain 是否已赋值
                     * 
                     */
                    bool IsWafDomainHasBeenSet() const;

                private:

                    /**
                     * 用户id
                     */
                    uint64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 域名ip
                     */
                    std::vector<std::string> m_ips;
                    bool m_ipsHasBeenSet;

                    /**
                     * 发现时间
                     */
                    std::string m_findTime;
                    bool m_findTimeHasBeenSet;

                    /**
                     * 实例id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 域名id
                     */
                    std::string m_domainId;
                    bool m_domainIdHasBeenSet;

                    /**
                     * waf类型
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * 是否接入waf
                     */
                    uint64_t m_isWafDomain;
                    bool m_isWafDomainHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_FINDALLDOMAINDETAIL_H_
