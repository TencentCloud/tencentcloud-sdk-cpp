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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_STARTORMODIFYPREVENTUNINSTALLREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_STARTORMODIFYPREVENTUNINSTALLREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * StartOrModifyPreventUninstall请求参数结构体
                */
                class StartOrModifyPreventUninstallRequest : public AbstractModel
                {
                public:
                    StartOrModifyPreventUninstallRequest();
                    ~StartOrModifyPreventUninstallRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>操作来源 0   主机页面 1   客户端设置页面</p>
                     * @return From <p>操作来源 0   主机页面 1   客户端设置页面</p>
                     * 
                     */
                    uint64_t GetFrom() const;

                    /**
                     * 设置<p>操作来源 0   主机页面 1   客户端设置页面</p>
                     * @param _from <p>操作来源 0   主机页面 1   客户端设置页面</p>
                     * 
                     */
                    void SetFrom(const uint64_t& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取<p>开启范围 0 自选主机 1 全部主机</p>
                     * @return Scope <p>开启范围 0 自选主机 1 全部主机</p>
                     * 
                     */
                    uint64_t GetScope() const;

                    /**
                     * 设置<p>开启范围 0 自选主机 1 全部主机</p>
                     * @param _scope <p>开启范围 0 自选主机 1 全部主机</p>
                     * 
                     */
                    void SetScope(const uint64_t& _scope);

                    /**
                     * 判断参数 Scope 是否已赋值
                     * @return Scope 是否已赋值
                     * 
                     */
                    bool ScopeHasBeenSet() const;

                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>正选的quuid集合</p>
                     * @return IncludeQuuid <p>正选的quuid集合</p>
                     * 
                     */
                    std::vector<std::string> GetIncludeQuuid() const;

                    /**
                     * 设置<p>正选的quuid集合</p>
                     * @param _includeQuuid <p>正选的quuid集合</p>
                     * 
                     */
                    void SetIncludeQuuid(const std::vector<std::string>& _includeQuuid);

                    /**
                     * 判断参数 IncludeQuuid 是否已赋值
                     * @return IncludeQuuid 是否已赋值
                     * 
                     */
                    bool IncludeQuuidHasBeenSet() const;

                    /**
                     * 获取<p>反选的quuid集合</p>
                     * @return ExcludeQuuid <p>反选的quuid集合</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeQuuid() const;

                    /**
                     * 设置<p>反选的quuid集合</p>
                     * @param _excludeQuuid <p>反选的quuid集合</p>
                     * 
                     */
                    void SetExcludeQuuid(const std::vector<std::string>& _excludeQuuid);

                    /**
                     * 判断参数 ExcludeQuuid 是否已赋值
                     * @return ExcludeQuuid 是否已赋值
                     * 
                     */
                    bool ExcludeQuuidHasBeenSet() const;

                private:

                    /**
                     * <p>操作来源 0   主机页面 1   客户端设置页面</p>
                     */
                    uint64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * <p>开启范围 0 自选主机 1 全部主机</p>
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>正选的quuid集合</p>
                     */
                    std::vector<std::string> m_includeQuuid;
                    bool m_includeQuuidHasBeenSet;

                    /**
                     * <p>反选的quuid集合</p>
                     */
                    std::vector<std::string> m_excludeQuuid;
                    bool m_excludeQuuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_STARTORMODIFYPREVENTUNINSTALLREQUEST_H_
