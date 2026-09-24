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

#ifndef TENCENTCLOUD_IOA_V20220601_MODEL_UNBINDVIRTUALACCOUNTSREQUEST_H_
#define TENCENTCLOUD_IOA_V20220601_MODEL_UNBINDVIRTUALACCOUNTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ioa/v20220601/model/AccountUserIdItem.h>


namespace TencentCloud
{
    namespace Ioa
    {
        namespace V20220601
        {
            namespace Model
            {
                /**
                * UnbindVirtualAccounts请求参数结构体
                */
                class UnbindVirtualAccountsRequest : public AbstractModel
                {
                public:
                    UnbindVirtualAccountsRequest();
                    ~UnbindVirtualAccountsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>Comment: 虚拟组id;Required:true</p>
                     * @return VirtualGroupId <p>Comment: 虚拟组id;Required:true</p>
                     * 
                     */
                    int64_t GetVirtualGroupId() const;

                    /**
                     * 设置<p>Comment: 虚拟组id;Required:true</p>
                     * @param _virtualGroupId <p>Comment: 虚拟组id;Required:true</p>
                     * 
                     */
                    void SetVirtualGroupId(const int64_t& _virtualGroupId);

                    /**
                     * 判断参数 VirtualGroupId 是否已赋值
                     * @return VirtualGroupId 是否已赋值
                     * 
                     */
                    bool VirtualGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>Comment: 要取消绑定的账户Id集合，这里的Id指的是DescribeLocalAccountsData结构体里返回的Id;Required:true</p>
                     * @return AccountIdList <p>Comment: 要取消绑定的账户Id集合，这里的Id指的是DescribeLocalAccountsData结构体里返回的Id;Required:true</p>
                     * 
                     */
                    std::vector<int64_t> GetAccountIdList() const;

                    /**
                     * 设置<p>Comment: 要取消绑定的账户Id集合，这里的Id指的是DescribeLocalAccountsData结构体里返回的Id;Required:true</p>
                     * @param _accountIdList <p>Comment: 要取消绑定的账户Id集合，这里的Id指的是DescribeLocalAccountsData结构体里返回的Id;Required:true</p>
                     * 
                     */
                    void SetAccountIdList(const std::vector<int64_t>& _accountIdList);

                    /**
                     * 判断参数 AccountIdList 是否已赋值
                     * @return AccountIdList 是否已赋值
                     * 
                     */
                    bool AccountIdListHasBeenSet() const;

                    /**
                     * 获取<p>Comment: 要取消绑定的账户(目录MenuId+登录账号UserId)集合，与AccountIdList二选一或并用，查不到的账号会被跳过;Required:false</p>
                     * @return AccountUserList <p>Comment: 要取消绑定的账户(目录MenuId+登录账号UserId)集合，与AccountIdList二选一或并用，查不到的账号会被跳过;Required:false</p>
                     * 
                     */
                    std::vector<AccountUserIdItem> GetAccountUserList() const;

                    /**
                     * 设置<p>Comment: 要取消绑定的账户(目录MenuId+登录账号UserId)集合，与AccountIdList二选一或并用，查不到的账号会被跳过;Required:false</p>
                     * @param _accountUserList <p>Comment: 要取消绑定的账户(目录MenuId+登录账号UserId)集合，与AccountIdList二选一或并用，查不到的账号会被跳过;Required:false</p>
                     * 
                     */
                    void SetAccountUserList(const std::vector<AccountUserIdItem>& _accountUserList);

                    /**
                     * 判断参数 AccountUserList 是否已赋值
                     * @return AccountUserList 是否已赋值
                     * 
                     */
                    bool AccountUserListHasBeenSet() const;

                    /**
                     * 获取Comment: 管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     * @return DomainInstanceId Comment: 管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     * 
                     */
                    std::string GetDomainInstanceId() const;

                    /**
                     * 设置Comment: 管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     * @param _domainInstanceId Comment: 管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     * 
                     */
                    void SetDomainInstanceId(const std::string& _domainInstanceId);

                    /**
                     * 判断参数 DomainInstanceId 是否已赋值
                     * @return DomainInstanceId 是否已赋值
                     * 
                     */
                    bool DomainInstanceIdHasBeenSet() const;

                private:

                    /**
                     * <p>Comment: 虚拟组id;Required:true</p>
                     */
                    int64_t m_virtualGroupId;
                    bool m_virtualGroupIdHasBeenSet;

                    /**
                     * <p>Comment: 要取消绑定的账户Id集合，这里的Id指的是DescribeLocalAccountsData结构体里返回的Id;Required:true</p>
                     */
                    std::vector<int64_t> m_accountIdList;
                    bool m_accountIdListHasBeenSet;

                    /**
                     * <p>Comment: 要取消绑定的账户(目录MenuId+登录账号UserId)集合，与AccountIdList二选一或并用，查不到的账号会被跳过;Required:false</p>
                     */
                    std::vector<AccountUserIdItem> m_accountUserList;
                    bool m_accountUserListHasBeenSet;

                    /**
                     * Comment: 管理域实例ID，用于CAM管理域权限分配。若企业未进行管理域的划分，可直接传入根域"1"，此时表示针对当前企业的全部设备和账号进行接口CRUD，具体CRUD的影响范围限制于相应接口的入参。
                     */
                    std::string m_domainInstanceId;
                    bool m_domainInstanceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOA_V20220601_MODEL_UNBINDVIRTUALACCOUNTSREQUEST_H_
