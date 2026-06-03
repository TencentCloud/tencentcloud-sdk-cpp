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
                     * 获取<p>实例 ID，请登录<a href="https://console.cloud.tencent.com/redis/instance/list">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * @return InstanceId <p>实例 ID，请登录<a href="https://console.cloud.tencent.com/redis/instance/list">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID，请登录<a href="https://console.cloud.tencent.com/redis/instance/list">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * @param _instanceId <p>实例 ID，请登录<a href="https://console.cloud.tencent.com/redis/instance/list">Redis控制台</a>在实例列表复制实例 ID。</p>
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
                     * 获取<p>指定需修改的账号。</p><ul><li>root：指在创建 Redis 数据库实例时自动生成的账号。用户无法修改其读写权限，仅可修改其请求路由策略。</li><li>自定义的账号：用户在实例创建成功后手动创建的账号。用户可以随时修改其读写权限与请求路由策略。</li></ul>
                     * @return AccountName <p>指定需修改的账号。</p><ul><li>root：指在创建 Redis 数据库实例时自动生成的账号。用户无法修改其读写权限，仅可修改其请求路由策略。</li><li>自定义的账号：用户在实例创建成功后手动创建的账号。用户可以随时修改其读写权限与请求路由策略。</li></ul>
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置<p>指定需修改的账号。</p><ul><li>root：指在创建 Redis 数据库实例时自动生成的账号。用户无法修改其读写权限，仅可修改其请求路由策略。</li><li>自定义的账号：用户在实例创建成功后手动创建的账号。用户可以随时修改其读写权限与请求路由策略。</li></ul>
                     * @param _accountName <p>指定需修改的账号。</p><ul><li>root：指在创建 Redis 数据库实例时自动生成的账号。用户无法修改其读写权限，仅可修改其请求路由策略。</li><li>自定义的账号：用户在实例创建成功后手动创建的账号。用户可以随时修改其读写权限与请求路由策略。</li></ul>
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
                     * 获取<p>指定所修改账号访问的密码。</p>
                     * @return AccountPassword <p>指定所修改账号访问的密码。</p>
                     * 
                     */
                    std::string GetAccountPassword() const;

                    /**
                     * 设置<p>指定所修改账号访问的密码。</p>
                     * @param _accountPassword <p>指定所修改账号访问的密码。</p>
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
                     * 获取<p>账号描述信息</p>
                     * @return Remark <p>账号描述信息</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>账号描述信息</p>
                     * @param _remark <p>账号描述信息</p>
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
                     * 获取<p>指定所修改账号读写请求路由的策略。</p><ul><li>master：表示读写请求路由至主节点。</li><li>replication：表示读写请求路由至从节点。</li></ul>
                     * @return ReadonlyPolicy <p>指定所修改账号读写请求路由的策略。</p><ul><li>master：表示读写请求路由至主节点。</li><li>replication：表示读写请求路由至从节点。</li></ul>
                     * 
                     */
                    std::vector<std::string> GetReadonlyPolicy() const;

                    /**
                     * 设置<p>指定所修改账号读写请求路由的策略。</p><ul><li>master：表示读写请求路由至主节点。</li><li>replication：表示读写请求路由至从节点。</li></ul>
                     * @param _readonlyPolicy <p>指定所修改账号读写请求路由的策略。</p><ul><li>master：表示读写请求路由至主节点。</li><li>replication：表示读写请求路由至从节点。</li></ul>
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
                     * 获取<p>指定所修改账号的读写权限。</p><ul><li>r：只读。</li><li>w：只写。</li><li>rw：读写。</li></ul>
                     * @return Privilege <p>指定所修改账号的读写权限。</p><ul><li>r：只读。</li><li>w：只写。</li><li>rw：读写。</li></ul>
                     * 
                     */
                    std::string GetPrivilege() const;

                    /**
                     * 设置<p>指定所修改账号的读写权限。</p><ul><li>r：只读。</li><li>w：只写。</li><li>rw：读写。</li></ul>
                     * @param _privilege <p>指定所修改账号的读写权限。</p><ul><li>r：只读。</li><li>w：只写。</li><li>rw：读写。</li></ul>
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
                     * 获取<p>指定是否将默认账号（root）设置为免密账号。自定义账号不支持免密访问。</p><ul><li>true：默认账号（root）设置为免密账号。</li><li>false：默认账号（root）不设置为免密账号。</li></ul>
                     * @return NoAuth <p>指定是否将默认账号（root）设置为免密账号。自定义账号不支持免密访问。</p><ul><li>true：默认账号（root）设置为免密账号。</li><li>false：默认账号（root）不设置为免密账号。</li></ul>
                     * 
                     */
                    bool GetNoAuth() const;

                    /**
                     * 设置<p>指定是否将默认账号（root）设置为免密账号。自定义账号不支持免密访问。</p><ul><li>true：默认账号（root）设置为免密账号。</li><li>false：默认账号（root）不设置为免密账号。</li></ul>
                     * @param _noAuth <p>指定是否将默认账号（root）设置为免密账号。自定义账号不支持免密访问。</p><ul><li>true：默认账号（root）设置为免密账号。</li><li>false：默认账号（root）不设置为免密账号。</li></ul>
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
                     * 获取<p>是否启用密码加密传输。</p><ul><li>true：加密。</li><li>false：不加密（默认值）。</li></ul>
                     * @return EncryptPassword <p>是否启用密码加密传输。</p><ul><li>true：加密。</li><li>false：不加密（默认值）。</li></ul>
                     * 
                     */
                    bool GetEncryptPassword() const;

                    /**
                     * 设置<p>是否启用密码加密传输。</p><ul><li>true：加密。</li><li>false：不加密（默认值）。</li></ul>
                     * @param _encryptPassword <p>是否启用密码加密传输。</p><ul><li>true：加密。</li><li>false：不加密（默认值）。</li></ul>
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
                     * <p>实例 ID，请登录<a href="https://console.cloud.tencent.com/redis/instance/list">Redis控制台</a>在实例列表复制实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>指定需修改的账号。</p><ul><li>root：指在创建 Redis 数据库实例时自动生成的账号。用户无法修改其读写权限，仅可修改其请求路由策略。</li><li>自定义的账号：用户在实例创建成功后手动创建的账号。用户可以随时修改其读写权限与请求路由策略。</li></ul>
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * <p>指定所修改账号访问的密码。</p>
                     */
                    std::string m_accountPassword;
                    bool m_accountPasswordHasBeenSet;

                    /**
                     * <p>账号描述信息</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>指定所修改账号读写请求路由的策略。</p><ul><li>master：表示读写请求路由至主节点。</li><li>replication：表示读写请求路由至从节点。</li></ul>
                     */
                    std::vector<std::string> m_readonlyPolicy;
                    bool m_readonlyPolicyHasBeenSet;

                    /**
                     * <p>指定所修改账号的读写权限。</p><ul><li>r：只读。</li><li>w：只写。</li><li>rw：读写。</li></ul>
                     */
                    std::string m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * <p>指定是否将默认账号（root）设置为免密账号。自定义账号不支持免密访问。</p><ul><li>true：默认账号（root）设置为免密账号。</li><li>false：默认账号（root）不设置为免密账号。</li></ul>
                     */
                    bool m_noAuth;
                    bool m_noAuthHasBeenSet;

                    /**
                     * <p>是否启用密码加密传输。</p><ul><li>true：加密。</li><li>false：不加密（默认值）。</li></ul>
                     */
                    bool m_encryptPassword;
                    bool m_encryptPasswordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_MODIFYINSTANCEACCOUNTREQUEST_H_
