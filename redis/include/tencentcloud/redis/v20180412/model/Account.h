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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_ACCOUNT_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_ACCOUNT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                     * 获取<p>读写权限策略。- r：只读。- w：只写。- rw：读写。</p>
                     * @return Privilege <p>读写权限策略。- r：只读。- w：只写。- rw：读写。</p>
                     * 
                     */
                    std::string GetPrivilege() const;

                    /**
                     * 设置<p>读写权限策略。- r：只读。- w：只写。- rw：读写。</p>
                     * @param _privilege <p>读写权限策略。- r：只读。- w：只写。- rw：读写。</p>
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
                     * 获取<p>只读路由策略。- master：主节点。- replication：从节点。</p>
                     * @return ReadonlyPolicy <p>只读路由策略。- master：主节点。- replication：从节点。</p>
                     * 
                     */
                    std::vector<std::string> GetReadonlyPolicy() const;

                    /**
                     * 设置<p>只读路由策略。- master：主节点。- replication：从节点。</p>
                     * @param _readonlyPolicy <p>只读路由策略。- master：主节点。- replication：从节点。</p>
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
                     * 获取<p>子账号状态.- 1：账号变更中。- 2：账号有效。- 4：账号已删除。</p>
                     * @return Status <p>子账号状态.- 1：账号变更中。- 2：账号有效。- 4：账号已删除。</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>子账号状态.- 1：账号变更中。- 2：账号有效。- 4：账号已删除。</p>
                     * @param _status <p>子账号状态.- 1：账号变更中。- 2：账号有效。- 4：账号已删除。</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>账号创建时间。</p><p>若该参数为空字符串，说明该账号创建于早期版本，未支持创建时间记录功能。</p>
                     * @return CreateTime <p>账号创建时间。</p><p>若该参数为空字符串，说明该账号创建于早期版本，未支持创建时间记录功能。</p>
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置<p>账号创建时间。</p><p>若该参数为空字符串，说明该账号创建于早期版本，未支持创建时间记录功能。</p>
                     * @param _createTime <p>账号创建时间。</p><p>若该参数为空字符串，说明该账号创建于早期版本，未支持创建时间记录功能。</p>
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>账号最后修改密码的时间。</p><p>若该参数为空字符串，说明该账号创建于早期版本，未支持密码修改时间记录功能。</p>
                     * @return PasswordLastModifiedTime <p>账号最后修改密码的时间。</p><p>若该参数为空字符串，说明该账号创建于早期版本，未支持密码修改时间记录功能。</p>
                     * 
                     */
                    std::string GetPasswordLastModifiedTime() const;

                    /**
                     * 设置<p>账号最后修改密码的时间。</p><p>若该参数为空字符串，说明该账号创建于早期版本，未支持密码修改时间记录功能。</p>
                     * @param _passwordLastModifiedTime <p>账号最后修改密码的时间。</p><p>若该参数为空字符串，说明该账号创建于早期版本，未支持密码修改时间记录功能。</p>
                     * 
                     */
                    void SetPasswordLastModifiedTime(const std::string& _passwordLastModifiedTime);

                    /**
                     * 判断参数 PasswordLastModifiedTime 是否已赋值
                     * @return PasswordLastModifiedTime 是否已赋值
                     * 
                     */
                    bool PasswordLastModifiedTimeHasBeenSet() const;

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
                     * <p>读写权限策略。- r：只读。- w：只写。- rw：读写。</p>
                     */
                    std::string m_privilege;
                    bool m_privilegeHasBeenSet;

                    /**
                     * <p>只读路由策略。- master：主节点。- replication：从节点。</p>
                     */
                    std::vector<std::string> m_readonlyPolicy;
                    bool m_readonlyPolicyHasBeenSet;

                    /**
                     * <p>子账号状态.- 1：账号变更中。- 2：账号有效。- 4：账号已删除。</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>账号创建时间。</p><p>若该参数为空字符串，说明该账号创建于早期版本，未支持创建时间记录功能。</p>
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * <p>账号最后修改密码的时间。</p><p>若该参数为空字符串，说明该账号创建于早期版本，未支持密码修改时间记录功能。</p>
                     */
                    std::string m_passwordLastModifiedTime;
                    bool m_passwordLastModifiedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_ACCOUNT_H_
