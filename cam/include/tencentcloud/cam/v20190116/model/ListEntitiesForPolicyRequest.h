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

#ifndef TENCENTCLOUD_CAM_V20190116_MODEL_LISTENTITIESFORPOLICYREQUEST_H_
#define TENCENTCLOUD_CAM_V20190116_MODEL_LISTENTITIESFORPOLICYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cam
    {
        namespace V20190116
        {
            namespace Model
            {
                /**
                * ListEntitiesForPolicy请求参数结构体
                */
                class ListEntitiesForPolicyRequest : public AbstractModel
                {
                public:
                    ListEntitiesForPolicyRequest();
                    ~ListEntitiesForPolicyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取策略 id
                     * @return PolicyId 策略 id
                     * 
                     */
                    uint64_t GetPolicyId() const;

                    /**
                     * 设置策略 id
                     * @param _policyId 策略 id
                     * 
                     */
                    void SetPolicyId(const uint64_t& _policyId);

                    /**
                     * 判断参数 PolicyId 是否已赋值
                     * @return PolicyId 是否已赋值
                     * 
                     */
                    bool PolicyIdHasBeenSet() const;

                    /**
                     * 获取页码，默认值是 1，从 1 开始
                     * @return Page 页码，默认值是 1，从 1 开始
                     * 
                     */
                    uint64_t GetPage() const;

                    /**
                     * 设置页码，默认值是 1，从 1 开始
                     * @param _page 页码，默认值是 1，从 1 开始
                     * 
                     */
                    void SetPage(const uint64_t& _page);

                    /**
                     * 判断参数 Page 是否已赋值
                     * @return Page 是否已赋值
                     * 
                     */
                    bool PageHasBeenSet() const;

                    /**
                     * 获取每页大小，默认值是 20
                     * @return Rp 每页大小，默认值是 20
                     * 
                     */
                    uint64_t GetRp() const;

                    /**
                     * 设置每页大小，默认值是 20
                     * @param _rp 每页大小，默认值是 20
                     * 
                     */
                    void SetRp(const uint64_t& _rp);

                    /**
                     * 判断参数 Rp 是否已赋值
                     * @return Rp 是否已赋值
                     * 
                     */
                    bool RpHasBeenSet() const;

                    /**
                     * 获取可取值 'All'、'User'、'Group' 和 'Role'，'All' 表示获取所有实体类型，'User' 表示只获取子账号，'Group' 表示只获取用户组，'Role' 表示只获取角色，默认取 'All'
                     * @return EntityFilter 可取值 'All'、'User'、'Group' 和 'Role'，'All' 表示获取所有实体类型，'User' 表示只获取子账号，'Group' 表示只获取用户组，'Role' 表示只获取角色，默认取 'All'
                     * 
                     */
                    std::string GetEntityFilter() const;

                    /**
                     * 设置可取值 'All'、'User'、'Group' 和 'Role'，'All' 表示获取所有实体类型，'User' 表示只获取子账号，'Group' 表示只获取用户组，'Role' 表示只获取角色，默认取 'All'
                     * @param _entityFilter 可取值 'All'、'User'、'Group' 和 'Role'，'All' 表示获取所有实体类型，'User' 表示只获取子账号，'Group' 表示只获取用户组，'Role' 表示只获取角色，默认取 'All'
                     * 
                     */
                    void SetEntityFilter(const std::string& _entityFilter);

                    /**
                     * 判断参数 EntityFilter 是否已赋值
                     * @return EntityFilter 是否已赋值
                     * 
                     */
                    bool EntityFilterHasBeenSet() const;

                private:

                    /**
                     * 策略 id
                     */
                    uint64_t m_policyId;
                    bool m_policyIdHasBeenSet;

                    /**
                     * 页码，默认值是 1，从 1 开始
                     */
                    uint64_t m_page;
                    bool m_pageHasBeenSet;

                    /**
                     * 每页大小，默认值是 20
                     */
                    uint64_t m_rp;
                    bool m_rpHasBeenSet;

                    /**
                     * 可取值 'All'、'User'、'Group' 和 'Role'，'All' 表示获取所有实体类型，'User' 表示只获取子账号，'Group' 表示只获取用户组，'Role' 表示只获取角色，默认取 'All'
                     */
                    std::string m_entityFilter;
                    bool m_entityFilterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAM_V20190116_MODEL_LISTENTITIESFORPOLICYREQUEST_H_
