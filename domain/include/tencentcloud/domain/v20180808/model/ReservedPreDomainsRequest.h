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

#ifndef TENCENTCLOUD_DOMAIN_V20180808_MODEL_RESERVEDPREDOMAINSREQUEST_H_
#define TENCENTCLOUD_DOMAIN_V20180808_MODEL_RESERVEDPREDOMAINSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Domain
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * ReservedPreDomains请求参数结构体
                */
                class ReservedPreDomainsRequest : public AbstractModel
                {
                public:
                    ReservedPreDomainsRequest();
                    ~ReservedPreDomainsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取预约预释放域名列表
                     * @return DomainList 预约预释放域名列表
                     * 
                     */
                    std::vector<std::string> GetDomainList() const;

                    /**
                     * 设置预约预释放域名列表
                     * @param _domainList 预约预释放域名列表
                     * 
                     */
                    void SetDomainList(const std::vector<std::string>& _domainList);

                    /**
                     * 判断参数 DomainList 是否已赋值
                     * @return DomainList 是否已赋值
                     * 
                     */
                    bool DomainListHasBeenSet() const;

                    /**
                     * 获取模板ID 
可通过[DescribeTemplateList](https://cloud.tencent.com/document/api/242/48940)接口获取
                     * @return TemplateId 模板ID 
可通过[DescribeTemplateList](https://cloud.tencent.com/document/api/242/48940)接口获取
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板ID 
可通过[DescribeTemplateList](https://cloud.tencent.com/document/api/242/48940)接口获取
                     * @param _templateId 模板ID 
可通过[DescribeTemplateList](https://cloud.tencent.com/document/api/242/48940)接口获取
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取结束后是否自动支付尾款，默认1 开启 传入0关闭
                     * @return IsAutoPay 结束后是否自动支付尾款，默认1 开启 传入0关闭
                     * 
                     */
                    int64_t GetIsAutoPay() const;

                    /**
                     * 设置结束后是否自动支付尾款，默认1 开启 传入0关闭
                     * @param _isAutoPay 结束后是否自动支付尾款，默认1 开启 传入0关闭
                     * 
                     */
                    void SetIsAutoPay(const int64_t& _isAutoPay);

                    /**
                     * 判断参数 IsAutoPay 是否已赋值
                     * @return IsAutoPay 是否已赋值
                     * 
                     */
                    bool IsAutoPayHasBeenSet() const;

                    /**
                     * 获取结束后是否自动进行梯度保证金扣除，默认1开启 传入0关闭
                     * @return IsBidAutoPay 结束后是否自动进行梯度保证金扣除，默认1开启 传入0关闭
                     * 
                     */
                    int64_t GetIsBidAutoPay() const;

                    /**
                     * 设置结束后是否自动进行梯度保证金扣除，默认1开启 传入0关闭
                     * @param _isBidAutoPay 结束后是否自动进行梯度保证金扣除，默认1开启 传入0关闭
                     * 
                     */
                    void SetIsBidAutoPay(const int64_t& _isBidAutoPay);

                    /**
                     * 判断参数 IsBidAutoPay 是否已赋值
                     * @return IsBidAutoPay 是否已赋值
                     * 
                     */
                    bool IsBidAutoPayHasBeenSet() const;

                private:

                    /**
                     * 预约预释放域名列表
                     */
                    std::vector<std::string> m_domainList;
                    bool m_domainListHasBeenSet;

                    /**
                     * 模板ID 
可通过[DescribeTemplateList](https://cloud.tencent.com/document/api/242/48940)接口获取
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 结束后是否自动支付尾款，默认1 开启 传入0关闭
                     */
                    int64_t m_isAutoPay;
                    bool m_isAutoPayHasBeenSet;

                    /**
                     * 结束后是否自动进行梯度保证金扣除，默认1开启 传入0关闭
                     */
                    int64_t m_isBidAutoPay;
                    bool m_isBidAutoPayHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DOMAIN_V20180808_MODEL_RESERVEDPREDOMAINSREQUEST_H_
