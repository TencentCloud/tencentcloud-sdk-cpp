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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEORGANIZATIONMEMBERREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEORGANIZATIONMEMBERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * CreateOrganizationMember请求参数结构体
                */
                class CreateOrganizationMemberRequest : public AbstractModel
                {
                public:
                    CreateOrganizationMemberRequest();
                    ~CreateOrganizationMemberRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取名称
                     * @return Name 名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param Name 名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取关系策略
                     * @return PolicyType 关系策略
                     */
                    std::string GetPolicyType() const;

                    /**
                     * 设置关系策略
                     * @param PolicyType 关系策略
                     */
                    void SetPolicyType(const std::string& _policyType);

                    /**
                     * 判断参数 PolicyType 是否已赋值
                     * @return PolicyType 是否已赋值
                     */
                    bool PolicyTypeHasBeenSet() const;

                    /**
                     * 获取关系权限
                     * @return PermissionIds 关系权限
                     */
                    std::vector<uint64_t> GetPermissionIds() const;

                    /**
                     * 设置关系权限
                     * @param PermissionIds 关系权限
                     */
                    void SetPermissionIds(const std::vector<uint64_t>& _permissionIds);

                    /**
                     * 判断参数 PermissionIds 是否已赋值
                     * @return PermissionIds 是否已赋值
                     */
                    bool PermissionIdsHasBeenSet() const;

                    /**
                     * 获取需要调节的节点
                     * @return NodeId 需要调节的节点
                     */
                    int64_t GetNodeId() const;

                    /**
                     * 设置需要调节的节点
                     * @param NodeId 需要调节的节点
                     */
                    void SetNodeId(const int64_t& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取账号名
                     * @return AccountName 账号名
                     */
                    std::string GetAccountName() const;

                    /**
                     * 设置账号名
                     * @param AccountName 账号名
                     */
                    void SetAccountName(const std::string& _accountName);

                    /**
                     * 判断参数 AccountName 是否已赋值
                     * @return AccountName 是否已赋值
                     */
                    bool AccountNameHasBeenSet() const;

                    /**
                     * 获取备注
                     * @return Remark 备注
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注
                     * @param Remark 备注
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取重试创建传记录ID
                     * @return RecordId 重试创建传记录ID
                     */
                    int64_t GetRecordId() const;

                    /**
                     * 设置重试创建传记录ID
                     * @param RecordId 重试创建传记录ID
                     */
                    void SetRecordId(const int64_t& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     */
                    bool RecordIdHasBeenSet() const;

                private:

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 关系策略
                     */
                    std::string m_policyType;
                    bool m_policyTypeHasBeenSet;

                    /**
                     * 关系权限
                     */
                    std::vector<uint64_t> m_permissionIds;
                    bool m_permissionIdsHasBeenSet;

                    /**
                     * 需要调节的节点
                     */
                    int64_t m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * 账号名
                     */
                    std::string m_accountName;
                    bool m_accountNameHasBeenSet;

                    /**
                     * 备注
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 重试创建传记录ID
                     */
                    int64_t m_recordId;
                    bool m_recordIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEORGANIZATIONMEMBERREQUEST_H_
