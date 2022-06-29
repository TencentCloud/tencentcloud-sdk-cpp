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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_DELETEIPACCESSCONTROLREQUEST_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_DELETEIPACCESSCONTROLREQUEST_H_

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
                * DeleteIpAccessControl请求参数结构体
                */
                class DeleteIpAccessControlRequest : public AbstractModel
                {
                public:
                    DeleteIpAccessControlRequest();
                    ~DeleteIpAccessControlRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取域名
                     * @return Domain 域名
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param Domain 域名
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取删除的ip数组
                     * @return Items 删除的ip数组
                     */
                    std::vector<std::string> GetItems() const;

                    /**
                     * 设置删除的ip数组
                     * @param Items 删除的ip数组
                     */
                    void SetItems(const std::vector<std::string>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取删除对应的域名下的所有黑/白IP名额单
                     * @return DeleteAll 删除对应的域名下的所有黑/白IP名额单
                     */
                    bool GetDeleteAll() const;

                    /**
                     * 设置删除对应的域名下的所有黑/白IP名额单
                     * @param DeleteAll 删除对应的域名下的所有黑/白IP名额单
                     */
                    void SetDeleteAll(const bool& _deleteAll);

                    /**
                     * 判断参数 DeleteAll 是否已赋值
                     * @return DeleteAll 是否已赋值
                     */
                    bool DeleteAllHasBeenSet() const;

                private:

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 删除的ip数组
                     */
                    std::vector<std::string> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 删除对应的域名下的所有黑/白IP名额单
                     */
                    bool m_deleteAll;
                    bool m_deleteAllHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DELETEIPACCESSCONTROLREQUEST_H_
