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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYMACHINESLOGINTYPEREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYMACHINESLOGINTYPEREQUEST_H_

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
                * ModifyMachinesLoginType请求参数结构体
                */
                class ModifyMachinesLoginTypeRequest : public AbstractModel
                {
                public:
                    ModifyMachinesLoginTypeRequest();
                    ~ModifyMachinesLoginTypeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>登录方式：0-原始方式，1-扫码免密登录</p>
                     * @return LoginType <p>登录方式：0-原始方式，1-扫码免密登录</p>
                     * 
                     */
                    uint64_t GetLoginType() const;

                    /**
                     * 设置<p>登录方式：0-原始方式，1-扫码免密登录</p>
                     * @param _loginType <p>登录方式：0-原始方式，1-扫码免密登录</p>
                     * 
                     */
                    void SetLoginType(const uint64_t& _loginType);

                    /**
                     * 判断参数 LoginType 是否已赋值
                     * @return LoginType 是否已赋值
                     * 
                     */
                    bool LoginTypeHasBeenSet() const;

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
                     * 获取<p>instance_id列表(instance_ids和quuids至少要填一个)</p>
                     * @return InstanceIds <p>instance_id列表(instance_ids和quuids至少要填一个)</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>instance_id列表(instance_ids和quuids至少要填一个)</p>
                     * @param _instanceIds <p>instance_id列表(instance_ids和quuids至少要填一个)</p>
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>主机quuid列表(instance_ids和quuids至少要填一个)</p>
                     * @return Quuids <p>主机quuid列表(instance_ids和quuids至少要填一个)</p>
                     * 
                     */
                    std::vector<std::string> GetQuuids() const;

                    /**
                     * 设置<p>主机quuid列表(instance_ids和quuids至少要填一个)</p>
                     * @param _quuids <p>主机quuid列表(instance_ids和quuids至少要填一个)</p>
                     * 
                     */
                    void SetQuuids(const std::vector<std::string>& _quuids);

                    /**
                     * 判断参数 Quuids 是否已赋值
                     * @return Quuids 是否已赋值
                     * 
                     */
                    bool QuuidsHasBeenSet() const;

                    /**
                     * 获取<p>排除的quuid集合</p>
                     * @return ExcludeQuuid <p>排除的quuid集合</p>
                     * 
                     */
                    std::vector<std::string> GetExcludeQuuid() const;

                    /**
                     * 设置<p>排除的quuid集合</p>
                     * @param _excludeQuuid <p>排除的quuid集合</p>
                     * 
                     */
                    void SetExcludeQuuid(const std::vector<std::string>& _excludeQuuid);

                    /**
                     * 判断参数 ExcludeQuuid 是否已赋值
                     * @return ExcludeQuuid 是否已赋值
                     * 
                     */
                    bool ExcludeQuuidHasBeenSet() const;

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
                     * 获取<p>操作来源 :<br>0   主机页面<br>1   客户端设置页面<br>2   安全中心页面<br>3   LightHouse购买页<br>4   LightHouse控制台</p>
                     * @return From <p>操作来源 :<br>0   主机页面<br>1   客户端设置页面<br>2   安全中心页面<br>3   LightHouse购买页<br>4   LightHouse控制台</p>
                     * 
                     */
                    uint64_t GetFrom() const;

                    /**
                     * 设置<p>操作来源 :<br>0   主机页面<br>1   客户端设置页面<br>2   安全中心页面<br>3   LightHouse购买页<br>4   LightHouse控制台</p>
                     * @param _from <p>操作来源 :<br>0   主机页面<br>1   客户端设置页面<br>2   安全中心页面<br>3   LightHouse购买页<br>4   LightHouse控制台</p>
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
                     * 获取<p>请求版本 0   原始版本 1   策略式请求</p>
                     * @return RequestVersion <p>请求版本 0   原始版本 1   策略式请求</p>
                     * 
                     */
                    int64_t GetRequestVersion() const;

                    /**
                     * 设置<p>请求版本 0   原始版本 1   策略式请求</p>
                     * @param _requestVersion <p>请求版本 0   原始版本 1   策略式请求</p>
                     * 
                     */
                    void SetRequestVersion(const int64_t& _requestVersion);

                    /**
                     * 判断参数 RequestVersion 是否已赋值
                     * @return RequestVersion 是否已赋值
                     * 
                     */
                    bool RequestVersionHasBeenSet() const;

                private:

                    /**
                     * <p>登录方式：0-原始方式，1-扫码免密登录</p>
                     */
                    uint64_t m_loginType;
                    bool m_loginTypeHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>instance_id列表(instance_ids和quuids至少要填一个)</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>主机quuid列表(instance_ids和quuids至少要填一个)</p>
                     */
                    std::vector<std::string> m_quuids;
                    bool m_quuidsHasBeenSet;

                    /**
                     * <p>排除的quuid集合</p>
                     */
                    std::vector<std::string> m_excludeQuuid;
                    bool m_excludeQuuidHasBeenSet;

                    /**
                     * <p>开启范围 0 自选主机 1 全部主机</p>
                     */
                    uint64_t m_scope;
                    bool m_scopeHasBeenSet;

                    /**
                     * <p>操作来源 :<br>0   主机页面<br>1   客户端设置页面<br>2   安全中心页面<br>3   LightHouse购买页<br>4   LightHouse控制台</p>
                     */
                    uint64_t m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * <p>请求版本 0   原始版本 1   策略式请求</p>
                     */
                    int64_t m_requestVersion;
                    bool m_requestVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYMACHINESLOGINTYPEREQUEST_H_
