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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEORGSERVICEASSIGNREQUEST_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEORGSERVICEASSIGNREQUEST_H_

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
                * CreateOrgServiceAssign请求参数结构体
                */
                class CreateOrgServiceAssignRequest : public AbstractModel
                {
                public:
                    CreateOrgServiceAssignRequest();
                    ~CreateOrgServiceAssignRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取委派管理员Uin列表。 最大长度20个
                     * @return MemberUins 委派管理员Uin列表。 最大长度20个
                     * 
                     */
                    std::vector<int64_t> GetMemberUins() const;

                    /**
                     * 设置委派管理员Uin列表。 最大长度20个
                     * @param _memberUins 委派管理员Uin列表。 最大长度20个
                     * 
                     */
                    void SetMemberUins(const std::vector<int64_t>& _memberUins);

                    /**
                     * 判断参数 MemberUins 是否已赋值
                     * @return MemberUins 是否已赋值
                     * 
                     */
                    bool MemberUinsHasBeenSet() const;

                    /**
                     * 获取集团服务ID。和集团服务产品标识二选一必填，可以通过[ListOrganizationService](https://cloud.tencent.com/document/product/850/109561)获取
                     * @return ServiceId 集团服务ID。和集团服务产品标识二选一必填，可以通过[ListOrganizationService](https://cloud.tencent.com/document/product/850/109561)获取
                     * 
                     */
                    uint64_t GetServiceId() const;

                    /**
                     * 设置集团服务ID。和集团服务产品标识二选一必填，可以通过[ListOrganizationService](https://cloud.tencent.com/document/product/850/109561)获取
                     * @param _serviceId 集团服务ID。和集团服务产品标识二选一必填，可以通过[ListOrganizationService](https://cloud.tencent.com/document/product/850/109561)获取
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
                     * 获取集团服务产品标识。和集团服务ID二选一必填，可以通过[ListOrganizationService](https://cloud.tencent.com/document/product/850/109561)获取
                     * @return Product 集团服务产品标识。和集团服务ID二选一必填，可以通过[ListOrganizationService](https://cloud.tencent.com/document/product/850/109561)获取
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置集团服务产品标识。和集团服务ID二选一必填，可以通过[ListOrganizationService](https://cloud.tencent.com/document/product/850/109561)获取
                     * @param _product 集团服务产品标识。和集团服务ID二选一必填，可以通过[ListOrganizationService](https://cloud.tencent.com/document/product/850/109561)获取
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                    /**
                     * 获取委派管理员管理范围。 取值：1-全部成员 2-部分成员，默认值1
                     * @return ManagementScope 委派管理员管理范围。 取值：1-全部成员 2-部分成员，默认值1
                     * 
                     */
                    uint64_t GetManagementScope() const;

                    /**
                     * 设置委派管理员管理范围。 取值：1-全部成员 2-部分成员，默认值1
                     * @param _managementScope 委派管理员管理范围。 取值：1-全部成员 2-部分成员，默认值1
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
                     * 获取管理的成员Uin列表。ManagementScope为2时该参数有效
                     * @return ManagementScopeUins 管理的成员Uin列表。ManagementScope为2时该参数有效
                     * 
                     */
                    std::vector<int64_t> GetManagementScopeUins() const;

                    /**
                     * 设置管理的成员Uin列表。ManagementScope为2时该参数有效
                     * @param _managementScopeUins 管理的成员Uin列表。ManagementScope为2时该参数有效
                     * 
                     */
                    void SetManagementScopeUins(const std::vector<int64_t>& _managementScopeUins);

                    /**
                     * 判断参数 ManagementScopeUins 是否已赋值
                     * @return ManagementScopeUins 是否已赋值
                     * 
                     */
                    bool ManagementScopeUinsHasBeenSet() const;

                    /**
                     * 获取管理的部门ID列表。ManagementScope为2时该参数有效
                     * @return ManagementScopeNodeIds 管理的部门ID列表。ManagementScope为2时该参数有效
                     * 
                     */
                    std::vector<int64_t> GetManagementScopeNodeIds() const;

                    /**
                     * 设置管理的部门ID列表。ManagementScope为2时该参数有效
                     * @param _managementScopeNodeIds 管理的部门ID列表。ManagementScope为2时该参数有效
                     * 
                     */
                    void SetManagementScopeNodeIds(const std::vector<int64_t>& _managementScopeNodeIds);

                    /**
                     * 判断参数 ManagementScopeNodeIds 是否已赋值
                     * @return ManagementScopeNodeIds 是否已赋值
                     * 
                     */
                    bool ManagementScopeNodeIdsHasBeenSet() const;

                private:

                    /**
                     * 委派管理员Uin列表。 最大长度20个
                     */
                    std::vector<int64_t> m_memberUins;
                    bool m_memberUinsHasBeenSet;

                    /**
                     * 集团服务ID。和集团服务产品标识二选一必填，可以通过[ListOrganizationService](https://cloud.tencent.com/document/product/850/109561)获取
                     */
                    uint64_t m_serviceId;
                    bool m_serviceIdHasBeenSet;

                    /**
                     * 集团服务产品标识。和集团服务ID二选一必填，可以通过[ListOrganizationService](https://cloud.tencent.com/document/product/850/109561)获取
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 委派管理员管理范围。 取值：1-全部成员 2-部分成员，默认值1
                     */
                    uint64_t m_managementScope;
                    bool m_managementScopeHasBeenSet;

                    /**
                     * 管理的成员Uin列表。ManagementScope为2时该参数有效
                     */
                    std::vector<int64_t> m_managementScopeUins;
                    bool m_managementScopeUinsHasBeenSet;

                    /**
                     * 管理的部门ID列表。ManagementScope为2时该参数有效
                     */
                    std::vector<int64_t> m_managementScopeNodeIds;
                    bool m_managementScopeNodeIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_CREATEORGSERVICEASSIGNREQUEST_H_
