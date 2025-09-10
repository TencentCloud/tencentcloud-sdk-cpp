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
                     * 获取实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * @return InstanceId 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * @param _instanceId 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取指定需修改的账号。
- root：指在创建 Redis 数据库实例时自动生成的账号。用户无法修改其读写权限，仅可修改其请求路由策略。
- 自定义的账号：用户在实例创建成功后手动创建的账号。用户可以随时修改其读写权限与请求路由策略。
                     * @return AccountName 指定需修改的账号。
- root：指在创建 Redis 数据库实例时自动生成的账号。用户无法修改其读写权限，仅可修改其请求路由策略。
- 自定义的账号：用户在实例创建成功后手动创建的账号。用户可以随时修改其读写权限与请求路由策略。
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置指定需修改的账号。
- root：指在创建 Redis 数据库实例时自动生成的账号。用户无法修改其读写权限，仅可修改其请求路由策略。
- 自定义的账号：用户在实例创建成功后手动创建的账号。用户可以随时修改其读写权限与请求路由策略。
                     * @param _accountName 指定需修改的账号。
- root：指在创建 Redis 数据库实例时自动生成的账号。用户无法修改其读写权限，仅可修改其请求路由策略。
- 自定义的账号：用户在实例创建成功后手动创建的账号。用户可以随时修改其读写权限与请求路由策略。
                     * 
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     * 
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取指定所修改账号访问的密码。
                     * @return AccountPassword 指定所修改账号访问的密码。
                     * 
                     */
                    std::string GetAccountPassword() const;

                    /**
                     * 设置指定所修改账号访问的密码。
                     * @param _accountPassword 指定所修改账号访问的密码。
                     * 
                     */
                    void SetAccountPassword(const std::string& _accountPassword);

                    /**
                     * 判断参数 AccountPassword 是否已赋值
                     * @return AccountPassword 是否已赋值
                     * 
                     */
                    bool AccountPasswordHasBeenSet() const;

                    /**
                     * 获取账号描述信息
                     * @return Remark 账号描述信息
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置账号描述信息
                     * @param _remark 账号描述信息
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取指定所修改账号读写请求路由的策略。
- master：表示读写请求路由至主节点。
- replication：表示读写请求路由至从节点。
                     * @return ReadonlyPolicy 指定所修改账号读写请求路由的策略。
- master：表示读写请求路由至主节点。
- replication：表示读写请求路由至从节点。
                     * 
                     */
                    std::vector<std::string> GetReadonlyPolicy() const;

                    /**
                     * 设置指定所修改账号读写请求路由的策略。
- master：表示读写请求路由至主节点。
- replication：表示读写请求路由至从节点。
                     * @param _readonlyPolicy 指定所修改账号读写请求路由的策略。
- master：表示读写请求路由至主节点。
- replication：表示读写请求路由至从节点。
                     * 
                     */
                    void SetReadonlyPolicy(const std::vector<std::string>& _readonlyPolicy);

                    /**
                     * 判断参数 ReadonlyPolicy 是否已赋值
                     * @return ReadonlyPolicy 是否已赋值
                     * 
                     */
                    bool ReadonlyPolicyHasBeenSet() const;

                    /**
                     * 获取指定所修改账号的读写权限。
- r：只读。
- w：只写。
- rw：读写。
                     * @return Privilege 指定所修改账号的读写权限。
- r：只读。
- w：只写。
- rw：读写。
                     * 
                     */
                    std::string GetPrivilege() const;

                    /**
                     * 设置指定所修改账号的读写权限。
- r：只读。
- w：只写。
- rw：读写。
                     * @param _privilege 指定所修改账号的读写权限。
- r：只读。
- w：只写。
- rw：读写。
                     * 
                     */
                    void SetPrivilege(const std::string& _privilege);

                    /**
                     * 判断参数 Privilege 是否已赋值
                     * @return Privilege 是否已赋值
                     * 
                     */
                    bool PrivilegeHasBeenSet() const;

                    /**
                     * 获取指定是否将默认账号（root）设置为免密账号。自定义账号不支持免密访问。
- true：默认账号（root）设置为免密账号。
- false：默认账号（root）不设置为免密账号。
                     * @return NoAuth 指定是否将默认账号（root）设置为免密账号。自定义账号不支持免密访问。
- true：默认账号（root）设置为免密账号。
- false：默认账号（root）不设置为免密账号。
                     * 
                     */
                    bool GetNoAuth() const;

                    /**
                     * 设置指定是否将默认账号（root）设置为免密账号。自定义账号不支持免密访问。
- true：默认账号（root）设置为免密账号。
- false：默认账号（root）不设置为免密账号。
                     * @param _noAuth 指定是否将默认账号（root）设置为免密账号。自定义账号不支持免密访问。
- true：默认账号（root）设置为免密账号。
- false：默认账号（root）不设置为免密账号。
                     * 
                     */
                    void SetNoAuth(const bool& _noAuth);

                    /**
                     * 判断参数 NoAuth 是否已赋值
                     * @return NoAuth 是否已赋值
                     * 
                     */
                    bool NoAuthHasBeenSet() const;

                    /**
                     * 获取指定所修改的账号是否加密密码
                     * @return EncryptPassword 指定所修改的账号是否加密密码
                     * 
                     */
                    bool GetEncryptPassword() const;

                    /**
                     * 设置指定所修改的账号是否加密密码
                     * @param _encryptPassword 指定所修改的账号是否加密密码
                     * 
                     */
                    void SetEncryptPassword(const bool& _encryptPassword);

                    /**
                     * 判断参数 EncryptPassword 是否已赋值
                     * @return EncryptPassword 是否已赋值
                     * 
                     */
                    bool EncryptPasswordHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis/instance/list)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 指定需修改的账号。
- root：指在创建 Redis 数据库实例时自动生成的账号。用户无法修改其读写权限，仅可修改其请求路由策略。
- 自定义的账号：用户在实例创建成功后手动创建的账号。用户可以随时修改其读写权限与请求路由策略。
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * 指定所修改账号访问的密码。
                     */
                    std::string m_accountPassword;
                    bool m_accountPasswordHasBeenSet;

                    /**
                     * 账号描述信息
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 指定所修改账号读写请求路由的策略。
- master：表示读写请求路由至主节点。
- replication：表示读写请求路由至从节点。
                     */
                    std::vector<std::string> m_readonlyPolicy;
                    bool m_readonlyPolicyHasBeenSet;

                    /**
                     * 指定所修改账号的读写权限。
- r：只读。
- w：只写。
- rw：读写。
                     */
                    std::string m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * 指定是否将默认账号（root）设置为免密账号。自定义账号不支持免密访问。
- true：默认账号（root）设置为免密账号。
- false：默认账号（root）不设置为免密账号。
                     */
                    bool m_noAuth;
                    bool m_noAuthHasBeenSet;

                    /**
                     * 指定所修改的账号是否加密密码
                     */
                    bool m_encryptPassword;
                    bool m_encryptPasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEACCOUNTREQUEST_H_
