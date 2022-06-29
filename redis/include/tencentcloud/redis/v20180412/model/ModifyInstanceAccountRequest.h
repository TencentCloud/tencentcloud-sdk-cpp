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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEACCOUNTREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * ModifyInstanceAccount请求参数结构体
                */
                class ModifyInstanceAccountRequest : public AbstractModel
                {
                public:
                    ModifyInstanceAccountRequest();
                    ~ModifyInstanceAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例ID
                     * @return InstanceId 实例ID
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
                     * @param InstanceId 实例ID
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取子账号名称，如果要修改主账号，填root
                     * @return AccountName 子账号名称，如果要修改主账号，填root
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置子账号名称，如果要修改主账号，填root
                     * @param AccountName 子账号名称，如果要修改主账号，填root
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取子账号密码
                     * @return AccountPassword 子账号密码
                     */
                    std::string GetAccountPassword() const;

                    /**
                     * 设置子账号密码
                     * @param AccountPassword 子账号密码
                     */
                    void SetAccountPassword(const std::string& _accountPassword);

                    /**
                     * 判断参数 AccountPassword 是否已赋值
                     * @return AccountPassword 是否已赋值
                     */
                    bool AccountPasswordHasBeenSet() const;

                    /**
                     * 获取子账号描述信息
                     * @return Remark 子账号描述信息
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置子账号描述信息
                     * @param Remark 子账号描述信息
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取路由策略：填写master或者replication，表示主节点或者从节点
                     * @return ReadonlyPolicy 路由策略：填写master或者replication，表示主节点或者从节点
                     */
                    std::vector<std::string> GetReadonlyPolicy() const;

                    /**
                     * 设置路由策略：填写master或者replication，表示主节点或者从节点
                     * @param ReadonlyPolicy 路由策略：填写master或者replication，表示主节点或者从节点
                     */
                    void SetReadonlyPolicy(const std::vector<std::string>& _readonlyPolicy);

                    /**
                     * 判断参数 ReadonlyPolicy 是否已赋值
                     * @return ReadonlyPolicy 是否已赋值
                     */
                    bool ReadonlyPolicyHasBeenSet() const;

                    /**
                     * 获取子账号读写策略：填写r、w、rw，表示只读，只写，读写策略
                     * @return Privilege 子账号读写策略：填写r、w、rw，表示只读，只写，读写策略
                     */
                    std::string GetPrivilege() const;

                    /**
                     * 设置子账号读写策略：填写r、w、rw，表示只读，只写，读写策略
                     * @param Privilege 子账号读写策略：填写r、w、rw，表示只读，只写，读写策略
                     */
                    void SetPrivilege(const std::string& _privilege);

                    /**
                     * 判断参数 Privilege 是否已赋值
                     * @return Privilege 是否已赋值
                     */
                    bool PrivilegeHasBeenSet() const;

                    /**
                     * 获取true表示将主账号切换为免密账号，这里只适用于主账号，子账号不可免密
                     * @return NoAuth true表示将主账号切换为免密账号，这里只适用于主账号，子账号不可免密
                     */
                    bool GetNoAuth() const;

                    /**
                     * 设置true表示将主账号切换为免密账号，这里只适用于主账号，子账号不可免密
                     * @param NoAuth true表示将主账号切换为免密账号，这里只适用于主账号，子账号不可免密
                     */
                    void SetNoAuth(const bool& _noAuth);

                    /**
                     * 判断参数 NoAuth 是否已赋值
                     * @return NoAuth 是否已赋值
                     */
                    bool NoAuthHasBeenSet() const;

                private:

                    /**
                     * 实例ID
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 子账号名称，如果要修改主账号，填root
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * 子账号密码
                     */
                    std::string m_accountPassword;
                    bool m_accountPasswordHasBeenSet;

                    /**
                     * 子账号描述信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 路由策略：填写master或者replication，表示主节点或者从节点
                     */
                    std::vector<std::string> m_readonlyPolicy;
                    bool m_readonlyPolicyHasBeenSet;

                    /**
                     * 子账号读写策略：填写r、w、rw，表示只读，只写，读写策略
                     */
                    std::string m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * true表示将主账号切换为免密账号，这里只适用于主账号，子账号不可免密
                     */
                    bool m_noAuth;
                    bool m_noAuthHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEACCOUNTREQUEST_H_
