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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYNFSSCANCONFREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYNFSSCANCONFREQUEST_H_

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
                * ModifyNFSScanConf请求参数结构体
                */
                class ModifyNFSScanConfRequest : public AbstractModel
                {
                public:
                    ModifyNFSScanConfRequest();
                    ~ModifyNFSScanConfRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>是否开启NFS扫描 0 否 1 是 9未设置,和0一样是未开启</p>
                     * @return Enable <p>是否开启NFS扫描 0 否 1 是 9未设置,和0一样是未开启</p>
                     * 
                     */
                    uint64_t GetEnable() const;

                    /**
                     * 设置<p>是否开启NFS扫描 0 否 1 是 9未设置,和0一样是未开启</p>
                     * @param _enable <p>是否开启NFS扫描 0 否 1 是 9未设置,和0一样是未开启</p>
                     * 
                     */
                    void SetEnable(const uint64_t& _enable);

                    /**
                     * 判断参数 Enable 是否已赋值
                     * @return Enable 是否已赋值
                     * 
                     */
                    bool EnableHasBeenSet() const;

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
                     * 获取<p>记录ID，新增时为0</p>
                     * @return Id <p>记录ID，新增时为0</p>
                     * 
                     */
                    int64_t GetId() const;

                    /**
                     * 设置<p>记录ID，新增时为0</p>
                     * @param _id <p>记录ID，新增时为0</p>
                     * 
                     */
                    void SetId(const int64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>正选quuid配置列表</p>
                     * @return IncludeQuuid <p>正选quuid配置列表</p>
                     * 
                     */
                    std::vector<std::string> GetIncludeQuuid() const;

                    /**
                     * 设置<p>正选quuid配置列表</p>
                     * @param _includeQuuid <p>正选quuid配置列表</p>
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
                     * 获取<p>反选quuid配置列表</p>
                     * @return ExcludeQuuid <p>反选quuid配置列表</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeQuuid() const;

                    /**
                     * 设置<p>反选quuid配置列表</p>
                     * @param _excludeQuuid <p>反选quuid配置列表</p>
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
                     * <p>是否开启NFS扫描 0 否 1 是 9未设置,和0一样是未开启</p>
                     */
                    uint64_t m_enable;
                    bool m_enableHasBeenSet;

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
                     * <p>记录ID，新增时为0</p>
                     */
                    int64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>正选quuid配置列表</p>
                     */
                    std::vector<std::string> m_includeQuuid;
                    bool m_includeQuuidHasBeenSet;

                    /**
                     * <p>反选quuid配置列表</p>
                     */
                    std::vector<std::string> m_excludeQuuid;
                    bool m_excludeQuuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYNFSSCANCONFREQUEST_H_
