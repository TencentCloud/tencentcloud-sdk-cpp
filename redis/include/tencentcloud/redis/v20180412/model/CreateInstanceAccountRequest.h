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
                     * 获取实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     * @return InstanceId 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     * @param _instanceId 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
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
                     * 获取自定义的访问数据库的账号名称。
- 仅由字母、数字、下划线、中划线组成。
- 长度不能大于32位。
                     * @return AccountName 自定义的访问数据库的账号名称。
- 仅由字母、数字、下划线、中划线组成。
- 长度不能大于32位。
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置自定义的访问数据库的账号名称。
- 仅由字母、数字、下划线、中划线组成。
- 长度不能大于32位。
                     * @param _accountName 自定义的访问数据库的账号名称。
- 仅由字母、数字、下划线、中划线组成。
- 长度不能大于32位。
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
                     * 获取设置自定义账号的密码。密码复杂度要求如下：
- 字符个数为[8,64]。
- 至少包含小写字母、大写字母、数字和字符 ()`~!@#$%^&*-+=_|{}[]:;<>,.?/ 中的两种。
- 不能以"/"开头。

                     * @return AccountPassword 设置自定义账号的密码。密码复杂度要求如下：
- 字符个数为[8,64]。
- 至少包含小写字母、大写字母、数字和字符 ()`~!@#$%^&*-+=_|{}[]:;<>,.?/ 中的两种。
- 不能以"/"开头。

                     * 
                     */
                    std::string GetAccountPassword() const;

                    /**
                     * 设置设置自定义账号的密码。密码复杂度要求如下：
- 字符个数为[8,64]。
- 至少包含小写字母、大写字母、数字和字符 ()`~!@#$%^&*-+=_|{}[]:;<>,.?/ 中的两种。
- 不能以"/"开头。

                     * @param _accountPassword 设置自定义账号的密码。密码复杂度要求如下：
- 字符个数为[8,64]。
- 至少包含小写字母、大写字母、数字和字符 ()`~!@#$%^&*-+=_|{}[]:;<>,.?/ 中的两种。
- 不能以"/"开头。

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
                     * 获取指定账号的读请求路由分发至主节点或副本节点。未开启副本只读，不支持选择副本节点。
- master：主节点
- replication：副本节点
                     * @return ReadonlyPolicy 指定账号的读请求路由分发至主节点或副本节点。未开启副本只读，不支持选择副本节点。
- master：主节点
- replication：副本节点
                     * 
                     */
                    std::vector<std::string> GetReadonlyPolicy() const;

                    /**
                     * 设置指定账号的读请求路由分发至主节点或副本节点。未开启副本只读，不支持选择副本节点。
- master：主节点
- replication：副本节点
                     * @param _readonlyPolicy 指定账号的读请求路由分发至主节点或副本节点。未开启副本只读，不支持选择副本节点。
- master：主节点
- replication：副本节点
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
                     * 获取账户读写权限，支持选择只读与读写权限。
- r：只读
- rw: 读写权限
                     * @return Privilege 账户读写权限，支持选择只读与读写权限。
- r：只读
- rw: 读写权限
                     * 
                     */
                    std::string GetPrivilege() const;

                    /**
                     * 设置账户读写权限，支持选择只读与读写权限。
- r：只读
- rw: 读写权限
                     * @param _privilege 账户读写权限，支持选择只读与读写权限。
- r：只读
- rw: 读写权限
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
                     * 获取子账号描述信息，长度[0,64] 字节，支持中文。
                     * @return Remark 子账号描述信息，长度[0,64] 字节，支持中文。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置子账号描述信息，长度[0,64] 字节，支持中文。
                     * @param _remark 子账号描述信息，长度[0,64] 字节，支持中文。
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                private:

                    /**
                     * 实例 ID，请登录[Redis控制台](https://console.cloud.tencent.com/redis)在实例列表复制实例 ID。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 自定义的访问数据库的账号名称。
- 仅由字母、数字、下划线、中划线组成。
- 长度不能大于32位。
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * 设置自定义账号的密码。密码复杂度要求如下：
- 字符个数为[8,64]。
- 至少包含小写字母、大写字母、数字和字符 ()`~!@#$%^&*-+=_|{}[]:;<>,.?/ 中的两种。
- 不能以"/"开头。

                     */
                    std::string m_accountPassword;
                    bool m_accountPasswordHasBeenSet;

                    /**
                     * 指定账号的读请求路由分发至主节点或副本节点。未开启副本只读，不支持选择副本节点。
- master：主节点
- replication：副本节点
                     */
                    std::vector<std::string> m_readonlyPolicy;
                    bool m_readonlyPolicyHasBeenSet;

                    /**
                     * 账户读写权限，支持选择只读与读写权限。
- r：只读
- rw: 读写权限
                     */
                    std::string m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * 子账号描述信息，长度[0,64] 字节，支持中文。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_CREATEINSTANCEACCOUNTREQUEST_H_
