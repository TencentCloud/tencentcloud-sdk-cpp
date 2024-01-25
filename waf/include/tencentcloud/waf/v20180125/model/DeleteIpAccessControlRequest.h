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
                     * 获取删除的ip数组
                     * @return Items 删除的ip数组
                     * 
                     */
                    std::vector<std::string> GetItems() const;

                    /**
                     * 设置删除的ip数组
                     * @param _items 删除的ip数组
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
                     * 获取若IsId字段为True，则Items列表元素需为Id，否则为IP
                     * @return IsId 若IsId字段为True，则Items列表元素需为Id，否则为IP
                     * 
                     */
                    bool GetIsId() const;

                    /**
                     * 设置若IsId字段为True，则Items列表元素需为Id，否则为IP
                     * @param _isId 若IsId字段为True，则Items列表元素需为Id，否则为IP
                     * 
                     */
                    void SetIsId(const bool& _isId);

                    /**
                     * 判断参数 IsId 是否已赋值
                     * @return IsId 是否已赋值
                     * 
                     */
                    bool IsIdHasBeenSet() const;

                    /**
                     * 获取是否删除对应的域名下的所有黑/白IP名单，true表示全部删除，false表示只删除指定ip名单
                     * @return DeleteAll 是否删除对应的域名下的所有黑/白IP名单，true表示全部删除，false表示只删除指定ip名单
                     * 
                     */
                    bool GetDeleteAll() const;

                    /**
                     * 设置是否删除对应的域名下的所有黑/白IP名单，true表示全部删除，false表示只删除指定ip名单
                     * @param _deleteAll 是否删除对应的域名下的所有黑/白IP名单，true表示全部删除，false表示只删除指定ip名单
                     * 
                     */
                    void SetDeleteAll(const bool& _deleteAll);

                    /**
                     * 判断参数 DeleteAll 是否已赋值
                     * @return DeleteAll 是否已赋值
                     * 
                     */
                    bool DeleteAllHasBeenSet() const;

                    /**
                     * 获取是否为多域名黑白名单
                     * @return SourceType 是否为多域名黑白名单
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置是否为多域名黑白名单
                     * @param _sourceType 是否为多域名黑白名单
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取IP黑白名单类型，40为IP白名单，42为IP黑名单
                     * @return ActionType IP黑白名单类型，40为IP白名单，42为IP黑名单
                     * 
                     */
                    uint64_t GetActionType() const;

                    /**
                     * 设置IP黑白名单类型，40为IP白名单，42为IP黑名单
                     * @param _actionType IP黑白名单类型，40为IP白名单，42为IP黑名单
                     * 
                     */
                    void SetActionType(const uint64_t& _actionType);

                    /**
                     * 判断参数 ActionType 是否已赋值
                     * @return ActionType 是否已赋值
                     * 
                     */
                    bool ActionTypeHasBeenSet() const;

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
                     * 若IsId字段为True，则Items列表元素需为Id，否则为IP
                     */
                    bool m_isId;
                    bool m_isIdHasBeenSet;

                    /**
                     * 是否删除对应的域名下的所有黑/白IP名单，true表示全部删除，false表示只删除指定ip名单
                     */
                    bool m_deleteAll;
                    bool m_deleteAllHasBeenSet;

                    /**
                     * 是否为多域名黑白名单
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * IP黑白名单类型，40为IP白名单，42为IP黑名单
                     */
                    uint64_t m_actionType;
                    bool m_actionTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_DELETEIPACCESSCONTROLREQUEST_H_
