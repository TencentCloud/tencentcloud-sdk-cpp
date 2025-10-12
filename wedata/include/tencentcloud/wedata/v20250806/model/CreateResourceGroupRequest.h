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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATERESOURCEGROUPREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATERESOURCEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/ResourceType.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * CreateResourceGroup请求参数结构体
                */
                class CreateResourceGroupRequest : public AbstractModel
                {
                public:
                    CreateResourceGroupRequest();
                    ~CreateResourceGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资源组名称。创建通用资源组的名称，必须以字母开头，可包含字母、数字、下划线（_），最多 64 个字符。
                     * @return Name 资源组名称。创建通用资源组的名称，必须以字母开头，可包含字母、数字、下划线（_），最多 64 个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置资源组名称。创建通用资源组的名称，必须以字母开头，可包含字母、数字、下划线（_），最多 64 个字符。
                     * @param _name 资源组名称。创建通用资源组的名称，必须以字母开头，可包含字母、数字、下划线（_），最多 64 个字符。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取开通的资源组信息
                     * @return Type 开通的资源组信息
                     * 
                     */
                    ResourceType GetType() const;

                    /**
                     * 设置开通的资源组信息
                     * @param _type 开通的资源组信息
                     * 
                     */
                    void SetType(const ResourceType& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取是否自动续费
                     * @return AutoRenewEnabled 是否自动续费
                     * 
                     */
                    bool GetAutoRenewEnabled() const;

                    /**
                     * 设置是否自动续费
                     * @param _autoRenewEnabled 是否自动续费
                     * 
                     */
                    void SetAutoRenewEnabled(const bool& _autoRenewEnabled);

                    /**
                     * 判断参数 AutoRenewEnabled 是否已赋值
                     * @return AutoRenewEnabled 是否已赋值
                     * 
                     */
                    bool AutoRenewEnabledHasBeenSet() const;

                    /**
                     * 获取购买时长，单位月
                     * @return PurchasePeriod 购买时长，单位月
                     * 
                     */
                    int64_t GetPurchasePeriod() const;

                    /**
                     * 设置购买时长，单位月
                     * @param _purchasePeriod 购买时长，单位月
                     * 
                     */
                    void SetPurchasePeriod(const int64_t& _purchasePeriod);

                    /**
                     * 判断参数 PurchasePeriod 是否已赋值
                     * @return PurchasePeriod 是否已赋值
                     * 
                     */
                    bool PurchasePeriodHasBeenSet() const;

                    /**
                     * 获取vpcId
                     * @return VpcId vpcId
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置vpcId
                     * @param _vpcId vpcId
                     * 
                     */
                    void SetVpcId(const std::string& _vpcId);

                    /**
                     * 判断参数 VpcId 是否已赋值
                     * @return VpcId 是否已赋值
                     * 
                     */
                    bool VpcIdHasBeenSet() const;

                    /**
                     * 获取子网
                     * @return SubNet 子网
                     * 
                     */
                    std::string GetSubNet() const;

                    /**
                     * 设置子网
                     * @param _subNet 子网
                     * 
                     */
                    void SetSubNet(const std::string& _subNet);

                    /**
                     * 判断参数 SubNet 是否已赋值
                     * @return SubNet 是否已赋值
                     * 
                     */
                    bool SubNetHasBeenSet() const;

                    /**
                     * 获取资源购买地域
                     * @return ResourceRegion 资源购买地域
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置资源购买地域
                     * @param _resourceRegion 资源购买地域
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                    /**
                     * 获取关联项目空间项目id
                     * @return AssociatedProjectId 关联项目空间项目id
                     * 
                     */
                    std::string GetAssociatedProjectId() const;

                    /**
                     * 设置关联项目空间项目id
                     * @param _associatedProjectId 关联项目空间项目id
                     * 
                     */
                    void SetAssociatedProjectId(const std::string& _associatedProjectId);

                    /**
                     * 判断参数 AssociatedProjectId 是否已赋值
                     * @return AssociatedProjectId 是否已赋值
                     * 
                     */
                    bool AssociatedProjectIdHasBeenSet() const;

                    /**
                     * 获取资源组描述
                     * @return Description 资源组描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置资源组描述
                     * @param _description 资源组描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                private:

                    /**
                     * 资源组名称。创建通用资源组的名称，必须以字母开头，可包含字母、数字、下划线（_），最多 64 个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 开通的资源组信息
                     */
                    ResourceType m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 是否自动续费
                     */
                    bool m_autoRenewEnabled;
                    bool m_autoRenewEnabledHasBeenSet;

                    /**
                     * 购买时长，单位月
                     */
                    int64_t m_purchasePeriod;
                    bool m_purchasePeriodHasBeenSet;

                    /**
                     * vpcId
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * 子网
                     */
                    std::string m_subNet;
                    bool m_subNetHasBeenSet;

                    /**
                     * 资源购买地域
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * 关联项目空间项目id
                     */
                    std::string m_associatedProjectId;
                    bool m_associatedProjectIdHasBeenSet;

                    /**
                     * 资源组描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATERESOURCEGROUPREQUEST_H_
