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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBESECURITYPOLICYMANAGEDRULESREQUEST_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBESECURITYPOLICYMANAGEDRULESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DescribeSecurityPolicyManagedRules请求参数结构体
                */
                class DescribeSecurityPolicyManagedRulesRequest : public AbstractModel
                {
                public:
                    DescribeSecurityPolicyManagedRulesRequest();
                    ~DescribeSecurityPolicyManagedRulesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取一级域名
                     * @return ZoneId 一级域名
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置一级域名
                     * @param ZoneId 一级域名
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取子域名/应用名
                     * @return Entity 子域名/应用名
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置子域名/应用名
                     * @param Entity 子域名/应用名
                     */
                    void SetEntity(const std::string& _entity);

                    /**
                     * 判断参数 Entity 是否已赋值
                     * @return Entity 是否已赋值
                     */
                    bool EntityHasBeenSet() const;

                    /**
                     * 获取页数
                     * @return Page 页数
                     */
                    int64_t GetPage() const;

                    /**
                     * 设置页数
                     * @param Page 页数
                     */
                    void SetPage(const int64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取每页数量
                     * @return PerPage 每页数量
                     */
                    int64_t GetPerPage() const;

                    /**
                     * 设置每页数量
                     * @param PerPage 每页数量
                     */
                    void SetPerPage(const int64_t& _perPage);

                    /**
                     * 判断参数 PerPage 是否已赋值
                     * @return PerPage 是否已赋值
                     */
                    bool PerPageHasBeenSet() const;

                private:

                    /**
                     * 一级域名
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 子域名/应用名
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                    /**
                     * 页数
                     */
                    int64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 每页数量
                     */
                    int64_t m_perPage;
                    bool m_perPageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DESCRIBESECURITYPOLICYMANAGEDRULESREQUEST_H_
