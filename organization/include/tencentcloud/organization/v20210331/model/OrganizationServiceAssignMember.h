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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGANIZATIONSERVICEASSIGNMEMBER_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGANIZATIONSERVICEASSIGNMEMBER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/organization/v20210331/model/MemberMainInfo.h>
#include <tencentcloud/organization/v20210331/model/NodeMainInfo.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * 集团服务委派成员信息
                */
                class OrganizationServiceAssignMember : public AbstractModel
                {
                public:
                    OrganizationServiceAssignMember();
                    ~OrganizationServiceAssignMember() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取集团服务ID。
                     * @return ServiceId 集团服务ID。
                     * 
                     */
                    uint64_t GetServiceId() const;

                    /**
                     * 设置集团服务ID。
                     * @param _serviceId 集团服务ID。
                     * 
                     */
                    void SetServiceId(const uint64_t& _serviceId);

                    /**
                     * 判断参数 ServiceId 是否已赋值
                     * @return ServiceId 是否已赋值
                     * 
                     */
                    bool ServiceIdHasBeenSet() const;

                    /**
                     * 获取集团服务产品名称。
                     * @return ProductName 集团服务产品名称。
                     * 
                     */
                    std::string GetProductName() const;

                    /**
                     * 设置集团服务产品名称。
                     * @param _productName 集团服务产品名称。
                     * 
                     */
                    void SetProductName(const std::string& _productName);

                    /**
                     * 判断参数 ProductName 是否已赋值
                     * @return ProductName 是否已赋值
                     * 
                     */
                    bool ProductNameHasBeenSet() const;

                    /**
                     * 获取委派管理员Uin。
                     * @return MemberUin 委派管理员Uin。
                     * 
                     */
                    int64_t GetMemberUin() const;

                    /**
                     * 设置委派管理员Uin。
                     * @param _memberUin 委派管理员Uin。
                     * 
                     */
                    void SetMemberUin(const int64_t& _memberUin);

                    /**
                     * 判断参数 MemberUin 是否已赋值
                     * @return MemberUin 是否已赋值
                     * 
                     */
                    bool MemberUinHasBeenSet() const;

                    /**
                     * 获取委派管理员名称。
                     * @return MemberName 委派管理员名称。
                     * 
                     */
                    std::string GetMemberName() const;

                    /**
                     * 设置委派管理员名称。
                     * @param _memberName 委派管理员名称。
                     * 
                     */
                    void SetMemberName(const std::string& _memberName);

                    /**
                     * 判断参数 MemberName 是否已赋值
                     * @return MemberName 是否已赋值
                     * 
                     */
                    bool MemberNameHasBeenSet() const;

                    /**
                     * 获取启用状态 。取值：0-服务无启用状态  1-已启用  2-未启用
                     * @return UsageStatus 启用状态 。取值：0-服务无启用状态  1-已启用  2-未启用
                     * 
                     */
                    uint64_t GetUsageStatus() const;

                    /**
                     * 设置启用状态 。取值：0-服务无启用状态  1-已启用  2-未启用
                     * @param _usageStatus 启用状态 。取值：0-服务无启用状态  1-已启用  2-未启用
                     * 
                     */
                    void SetUsageStatus(const uint64_t& _usageStatus);

                    /**
                     * 判断参数 UsageStatus 是否已赋值
                     * @return UsageStatus 是否已赋值
                     * 
                     */
                    bool UsageStatusHasBeenSet() const;

                    /**
                     * 获取委派时间。
                     * @return CreateTime 委派时间。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置委派时间。
                     * @param _createTime 委派时间。
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
                     * 获取委派管理员管理范围。取值: 1-全部成员  2-部分成员
                     * @return ManagementScope 委派管理员管理范围。取值: 1-全部成员  2-部分成员
                     * 
                     */
                    uint64_t GetManagementScope() const;

                    /**
                     * 设置委派管理员管理范围。取值: 1-全部成员  2-部分成员
                     * @param _managementScope 委派管理员管理范围。取值: 1-全部成员  2-部分成员
                     * 
                     */
                    void SetManagementScope(const uint64_t& _managementScope);

                    /**
                     * 判断参数 ManagementScope 是否已赋值
                     * @return ManagementScope 是否已赋值
                     * 
                     */
                    bool ManagementScopeHasBeenSet() const;

                    /**
                     * 获取管理的成员Uin列表。ManagementScope值为2时该参数有效
                     * @return ManagementScopeMembers 管理的成员Uin列表。ManagementScope值为2时该参数有效
                     * 
                     */
                    std::vector<MemberMainInfo> GetManagementScopeMembers() const;

                    /**
                     * 设置管理的成员Uin列表。ManagementScope值为2时该参数有效
                     * @param _managementScopeMembers 管理的成员Uin列表。ManagementScope值为2时该参数有效
                     * 
                     */
                    void SetManagementScopeMembers(const std::vector<MemberMainInfo>& _managementScopeMembers);

                    /**
                     * 判断参数 ManagementScopeMembers 是否已赋值
                     * @return ManagementScopeMembers 是否已赋值
                     * 
                     */
                    bool ManagementScopeMembersHasBeenSet() const;

                    /**
                     * 获取管理的部门ID列表。ManagementScope值为2时该参数有效
                     * @return ManagementScopeNodes 管理的部门ID列表。ManagementScope值为2时该参数有效
                     * 
                     */
                    std::vector<NodeMainInfo> GetManagementScopeNodes() const;

                    /**
                     * 设置管理的部门ID列表。ManagementScope值为2时该参数有效
                     * @param _managementScopeNodes 管理的部门ID列表。ManagementScope值为2时该参数有效
                     * 
                     */
                    void SetManagementScopeNodes(const std::vector<NodeMainInfo>& _managementScopeNodes);

                    /**
                     * 判断参数 ManagementScopeNodes 是否已赋值
                     * @return ManagementScopeNodes 是否已赋值
                     * 
                     */
                    bool ManagementScopeNodesHasBeenSet() const;

                private:

                    /**
                     * 集团服务ID。
                     */
                    uint64_t m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 集团服务产品名称。
                     */
                    std::string m_productName;
                    bool m_productNameHasBeenSet;

                    /**
                     * 委派管理员Uin。
                     */
                    int64_t m_memberUin;
                    bool m_memberUinHasBeenSet;

                    /**
                     * 委派管理员名称。
                     */
                    std::string m_memberName;
                    bool m_memberNameHasBeenSet;

                    /**
                     * 启用状态 。取值：0-服务无启用状态  1-已启用  2-未启用
                     */
                    uint64_t m_usageStatus;
                    bool m_usageStatusHasBeenSet;

                    /**
                     * 委派时间。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 委派管理员管理范围。取值: 1-全部成员  2-部分成员
                     */
                    uint64_t m_managementScope;
                    bool m_managementScopeHasBeenSet;

                    /**
                     * 管理的成员Uin列表。ManagementScope值为2时该参数有效
                     */
                    std::vector<MemberMainInfo> m_managementScopeMembers;
                    bool m_managementScopeMembersHasBeenSet;

                    /**
                     * 管理的部门ID列表。ManagementScope值为2时该参数有效
                     */
                    std::vector<NodeMainInfo> m_managementScopeNodes;
                    bool m_managementScopeNodesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGANIZATIONSERVICEASSIGNMEMBER_H_
