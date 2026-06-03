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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEINSTANCEACCOUNTREQUEST_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEINSTANCEACCOUNTREQUEST_H_

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
                * CreateInstanceAccount请求参数结构体
                */
                class CreateInstanceAccountRequest : public AbstractModel
                {
                public:
                    CreateInstanceAccountRequest();
                    ~CreateInstanceAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>实例 ID，请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * @return InstanceId <p>实例 ID，请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID，请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     * @param _instanceId <p>实例 ID，请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
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
                     * 获取<p>自定义的访问数据库的账号名称。</p><ul><li>仅由字母、数字、下划线、中划线组成。</li><li>长度不能大于32位。</li></ul>
                     * @return AccountName <p>自定义的访问数据库的账号名称。</p><ul><li>仅由字母、数字、下划线、中划线组成。</li><li>长度不能大于32位。</li></ul>
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置<p>自定义的访问数据库的账号名称。</p><ul><li>仅由字母、数字、下划线、中划线组成。</li><li>长度不能大于32位。</li></ul>
                     * @param _accountName <p>自定义的访问数据库的账号名称。</p><ul><li>仅由字母、数字、下划线、中划线组成。</li><li>长度不能大于32位。</li></ul>
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
                     * 获取<p>设置自定义账号的密码。密码复杂度要求如下：</p><ul><li>字符个数为[8,64]。</li><li>至少包含小写字母、大写字母、数字和字符 ()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/ 中的两种。</li><li>不能以&quot;/&quot;开头。</li></ul>
                     * @return AccountPassword <p>设置自定义账号的密码。密码复杂度要求如下：</p><ul><li>字符个数为[8,64]。</li><li>至少包含小写字母、大写字母、数字和字符 ()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/ 中的两种。</li><li>不能以&quot;/&quot;开头。</li></ul>
                     * 
                     */
                    std::string GetAccountPassword() const;

                    /**
                     * 设置<p>设置自定义账号的密码。密码复杂度要求如下：</p><ul><li>字符个数为[8,64]。</li><li>至少包含小写字母、大写字母、数字和字符 ()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/ 中的两种。</li><li>不能以&quot;/&quot;开头。</li></ul>
                     * @param _accountPassword <p>设置自定义账号的密码。密码复杂度要求如下：</p><ul><li>字符个数为[8,64]。</li><li>至少包含小写字母、大写字母、数字和字符 ()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/ 中的两种。</li><li>不能以&quot;/&quot;开头。</li></ul>
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
                     * 获取<p>指定账号的读请求路由分发至主节点或副本节点。未开启副本只读，不支持选择副本节点。</p><ul><li>master：主节点</li><li>replication：副本节点</li></ul>
                     * @return ReadonlyPolicy <p>指定账号的读请求路由分发至主节点或副本节点。未开启副本只读，不支持选择副本节点。</p><ul><li>master：主节点</li><li>replication：副本节点</li></ul>
                     * 
                     */
                    std::vector<std::string> GetReadonlyPolicy() const;

                    /**
                     * 设置<p>指定账号的读请求路由分发至主节点或副本节点。未开启副本只读，不支持选择副本节点。</p><ul><li>master：主节点</li><li>replication：副本节点</li></ul>
                     * @param _readonlyPolicy <p>指定账号的读请求路由分发至主节点或副本节点。未开启副本只读，不支持选择副本节点。</p><ul><li>master：主节点</li><li>replication：副本节点</li></ul>
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
                     * 获取<p>账户读写权限，支持选择只读与读写权限。</p><ul><li>r：只读。</li><li>rw: 读写。</li></ul>
                     * @return Privilege <p>账户读写权限，支持选择只读与读写权限。</p><ul><li>r：只读。</li><li>rw: 读写。</li></ul>
                     * 
                     */
                    std::string GetPrivilege() const;

                    /**
                     * 设置<p>账户读写权限，支持选择只读与读写权限。</p><ul><li>r：只读。</li><li>rw: 读写。</li></ul>
                     * @param _privilege <p>账户读写权限，支持选择只读与读写权限。</p><ul><li>r：只读。</li><li>rw: 读写。</li></ul>
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
                     * 获取<p>账号备注描述信息，长度为[0,64] 字节，支持中文。</p>
                     * @return Remark <p>账号备注描述信息，长度为[0,64] 字节，支持中文。</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>账号备注描述信息，长度为[0,64] 字节，支持中文。</p>
                     * @param _remark <p>账号备注描述信息，长度为[0,64] 字节，支持中文。</p>
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
                     * <p>实例 ID，请登录<a href="https://console.cloud.tencent.com/redis">Redis控制台</a>在实例列表复制实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>自定义的访问数据库的账号名称。</p><ul><li>仅由字母、数字、下划线、中划线组成。</li><li>长度不能大于32位。</li></ul>
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * <p>设置自定义账号的密码。密码复杂度要求如下：</p><ul><li>字符个数为[8,64]。</li><li>至少包含小写字母、大写字母、数字和字符 ()`~!@#$%^&amp;*-+=_|{}[]:;&lt;&gt;,.?/ 中的两种。</li><li>不能以&quot;/&quot;开头。</li></ul>
                     */
                    std::string m_accountPassword;
                    bool m_accountPasswordHasBeenSet;

                    /**
                     * <p>指定账号的读请求路由分发至主节点或副本节点。未开启副本只读，不支持选择副本节点。</p><ul><li>master：主节点</li><li>replication：副本节点</li></ul>
                     */
                    std::vector<std::string> m_readonlyPolicy;
                    bool m_readonlyPolicyHasBeenSet;

                    /**
                     * <p>账户读写权限，支持选择只读与读写权限。</p><ul><li>r：只读。</li><li>rw: 读写。</li></ul>
                     */
                    std::string m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * <p>账号备注描述信息，长度为[0,64] 字节，支持中文。</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

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

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEINSTANCEACCOUNTREQUEST_H_
