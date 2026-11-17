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

#ifndef TENCENTCLOUD_KEEWIDB_V20220308_MODEL_ACCOUNT_H_
#define TENCENTCLOUD_KEEWIDB_V20220308_MODEL_ACCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Keewidb
    {
        namespace V20220308
        {
            namespace Model
            {
                /**
                * 子账号信息
                */
                class Account : public AbstractModel
                {
                public:
                    Account();
                    ~Account() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>实例 ID。</p>
                     * @return InstanceId <p>实例 ID。</p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>实例 ID。</p>
                     * @param _instanceId <p>实例 ID。</p>
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
                     * 获取<p>账号名称。</p>
                     * @return AccountName <p>账号名称。</p>
                     * 
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置<p>账号名称。</p>
                     * @param _accountName <p>账号名称。</p>
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
                     * 获取<p>账号描述信息。</p>
                     * @return Remark <p>账号描述信息。</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>账号描述信息。</p>
                     * @param _remark <p>账号描述信息。</p>
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
                     * 获取<p>读写权限策略。</p><p>枚举值：</p><ul><li>r： 只读。</li><li>rw： 读写。</li></ul>
                     * @return Privilege <p>读写权限策略。</p><p>枚举值：</p><ul><li>r： 只读。</li><li>rw： 读写。</li></ul>
                     * 
                     */
                    std::string GetPrivilege() const;

                    /**
                     * 设置<p>读写权限策略。</p><p>枚举值：</p><ul><li>r： 只读。</li><li>rw： 读写。</li></ul>
                     * @param _privilege <p>读写权限策略。</p><p>枚举值：</p><ul><li>r： 只读。</li><li>rw： 读写。</li></ul>
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
                     * 获取<p>只读路由策略。</p><p>枚举值：</p><ul><li>master： 主节点。</li><li>replication： 从节点。</li></ul>
                     * @return ReadonlyPolicy <p>只读路由策略。</p><p>枚举值：</p><ul><li>master： 主节点。</li><li>replication： 从节点。</li></ul>
                     * 
                     */
                    std::vector<std::string> GetReadonlyPolicy() const;

                    /**
                     * 设置<p>只读路由策略。</p><p>枚举值：</p><ul><li>master： 主节点。</li><li>replication： 从节点。</li></ul>
                     * @param _readonlyPolicy <p>只读路由策略。</p><p>枚举值：</p><ul><li>master： 主节点。</li><li>replication： 从节点。</li></ul>
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
                     * 获取<p>子账号状态。</p><p>枚举值：</p><ul><li>1： 账号变更中。</li><li>2： 账号有效。</li><li>4： 账号已删除。</li></ul>
                     * @return Status <p>子账号状态。</p><p>枚举值：</p><ul><li>1： 账号变更中。</li><li>2： 账号有效。</li><li>4： 账号已删除。</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>子账号状态。</p><p>枚举值：</p><ul><li>1： 账号变更中。</li><li>2： 账号有效。</li><li>4： 账号已删除。</li></ul>
                     * @param _status <p>子账号状态。</p><p>枚举值：</p><ul><li>1： 账号变更中。</li><li>2： 账号有效。</li><li>4： 账号已删除。</li></ul>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * <p>实例 ID。</p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>账号名称。</p>
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * <p>账号描述信息。</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>读写权限策略。</p><p>枚举值：</p><ul><li>r： 只读。</li><li>rw： 读写。</li></ul>
                     */
                    std::string m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * <p>只读路由策略。</p><p>枚举值：</p><ul><li>master： 主节点。</li><li>replication： 从节点。</li></ul>
                     */
                    std::vector<std::string> m_readonlyPolicy;
                    bool m_readonlyPolicyHasBeenSet;

                    /**
                     * <p>子账号状态。</p><p>枚举值：</p><ul><li>1： 账号变更中。</li><li>2： 账号有效。</li><li>4： 账号已删除。</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_KEEWIDB_V20220308_MODEL_ACCOUNT_H_
