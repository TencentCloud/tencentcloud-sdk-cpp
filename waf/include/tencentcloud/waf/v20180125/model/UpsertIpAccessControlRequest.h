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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_UPSERTIPACCESSCONTROLREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_UPSERTIPACCESSCONTROLREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * UpsertIpAccessControl请求参数结构体
                */
                class UpsertIpAccessControlRequest : public AbstractModel
                {
                public:
                    UpsertIpAccessControlRequest();
                    ~UpsertIpAccessControlRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取ip 参数列表，json数组由ip，source，note，action，valid_ts组成。ip对应配置的ip地址，source固定为custom值，note为注释，action值42为黑名单，40为白名单，valid_ts为有效日期，值为秒级时间戳（（如1680570420代表2023-04-04 09:07:00））
                     * @return Items ip 参数列表，json数组由ip，source，note，action，valid_ts组成。ip对应配置的ip地址，source固定为custom值，note为注释，action值42为黑名单，40为白名单，valid_ts为有效日期，值为秒级时间戳（（如1680570420代表2023-04-04 09:07:00））
                     * 
                     */
                    std::vector<std::string> GetItems() const;

                    /**
                     * 设置ip 参数列表，json数组由ip，source，note，action，valid_ts组成。ip对应配置的ip地址，source固定为custom值，note为注释，action值42为黑名单，40为白名单，valid_ts为有效日期，值为秒级时间戳（（如1680570420代表2023-04-04 09:07:00））
                     * @param _items ip 参数列表，json数组由ip，source，note，action，valid_ts组成。ip对应配置的ip地址，source固定为custom值，note为注释，action值42为黑名单，40为白名单，valid_ts为有效日期，值为秒级时间戳（（如1680570420代表2023-04-04 09:07:00））
                     * 
                     */
                    void SetItems(const std::vector<std::string>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取实例Id
                     * @return InstanceId 实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例Id
                     * @param _instanceId 实例Id
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
                     * 获取WAF实例类型，sparta-waf表示SAAS型WAF，clb-waf表示负载均衡型WAF
                     * @return Edition WAF实例类型，sparta-waf表示SAAS型WAF，clb-waf表示负载均衡型WAF
                     * 
                     */
                    std::string GetEdition() const;

                    /**
                     * 设置WAF实例类型，sparta-waf表示SAAS型WAF，clb-waf表示负载均衡型WAF
                     * @param _edition WAF实例类型，sparta-waf表示SAAS型WAF，clb-waf表示负载均衡型WAF
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
                     * 获取是否为多域名黑白名单，当为多域名的黑白名单时，取值为batch，否则为空
                     * @return SourceType 是否为多域名黑白名单，当为多域名的黑白名单时，取值为batch，否则为空
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置是否为多域名黑白名单，当为多域名的黑白名单时，取值为batch，否则为空
                     * @param _sourceType 是否为多域名黑白名单，当为多域名的黑白名单时，取值为batch，否则为空
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * ip 参数列表，json数组由ip，source，note，action，valid_ts组成。ip对应配置的ip地址，source固定为custom值，note为注释，action值42为黑名单，40为白名单，valid_ts为有效日期，值为秒级时间戳（（如1680570420代表2023-04-04 09:07:00））
                     */
                    std::vector<std::string> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * WAF实例类型，sparta-waf表示SAAS型WAF，clb-waf表示负载均衡型WAF
                     */
                    std::string m_edition;
                    bool m_editionHasBeenSet;

                    /**
                     * 是否为多域名黑白名单，当为多域名的黑白名单时，取值为batch，否则为空
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_UPSERTIPACCESSCONTROLREQUEST_H_
