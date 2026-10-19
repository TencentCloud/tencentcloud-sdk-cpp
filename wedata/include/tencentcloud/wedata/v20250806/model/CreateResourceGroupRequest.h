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
#include <tencentcloud/wedata/v20250806/model/ResourceTag.h>


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
                     * 获取<p>资源组名称。创建通用资源组的名称，必须以字母开头，可包含字母、数字、下划线（_），最多 64 个字符。</p>
                     * @return Name <p>资源组名称。创建通用资源组的名称，必须以字母开头，可包含字母、数字、下划线（_），最多 64 个字符。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>资源组名称。创建通用资源组的名称，必须以字母开头，可包含字母、数字、下划线（_），最多 64 个字符。</p>
                     * @param _name <p>资源组名称。创建通用资源组的名称，必须以字母开头，可包含字母、数字、下划线（_），最多 64 个字符。</p>
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
                     * 获取<p>开通的资源组信息</p>
                     * @return Type <p>开通的资源组信息</p>
                     * 
                     */
                    ResourceType GetType() const;

                    /**
                     * 设置<p>开通的资源组信息</p>
                     * @param _type <p>开通的资源组信息</p>
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
                     * 获取<p>是否自动续费</p>
                     * @return AutoRenewEnabled <p>是否自动续费</p>
                     * 
                     */
                    bool GetAutoRenewEnabled() const;

                    /**
                     * 设置<p>是否自动续费</p>
                     * @param _autoRenewEnabled <p>是否自动续费</p>
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
                     * 获取<p>购买时长，单位月</p>
                     * @return PurchasePeriod <p>购买时长，单位月</p>
                     * 
                     */
                    int64_t GetPurchasePeriod() const;

                    /**
                     * 设置<p>购买时长，单位月</p>
                     * @param _purchasePeriod <p>购买时长，单位月</p>
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
                     * 获取<p>vpcId</p>
                     * @return VpcId <p>vpcId</p>
                     * 
                     */
                    std::string GetVpcId() const;

                    /**
                     * 设置<p>vpcId</p>
                     * @param _vpcId <p>vpcId</p>
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
                     * 获取<p>子网</p>
                     * @return SubNet <p>子网</p>
                     * 
                     */
                    std::string GetSubNet() const;

                    /**
                     * 设置<p>子网</p>
                     * @param _subNet <p>子网</p>
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
                     * 获取<p>资源购买地域</p>
                     * @return ResourceRegion <p>资源购买地域</p>
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置<p>资源购买地域</p>
                     * @param _resourceRegion <p>资源购买地域</p>
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
                     * 获取<p>关联项目空间项目id</p>
                     * @return AssociatedProjectId <p>关联项目空间项目id</p>
                     * 
                     */
                    std::string GetAssociatedProjectId() const;

                    /**
                     * 设置<p>关联项目空间项目id</p>
                     * @param _associatedProjectId <p>关联项目空间项目id</p>
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
                     * 获取<p>资源组描述</p>
                     * @return Description <p>资源组描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>资源组描述</p>
                     * @param _description <p>资源组描述</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>标签值</p>
                     * @return Tags <p>标签值</p>
                     * 
                     */
                    std::vector<ResourceTag> GetTags() const;

                    /**
                     * 设置<p>标签值</p>
                     * @param _tags <p>标签值</p>
                     * 
                     */
                    void SetTags(const std::vector<ResourceTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>资源组名称。创建通用资源组的名称，必须以字母开头，可包含字母、数字、下划线（_），最多 64 个字符。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>开通的资源组信息</p>
                     */
                    ResourceType m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>是否自动续费</p>
                     */
                    bool m_autoRenewEnabled;
                    bool m_autoRenewEnabledHasBeenSet;

                    /**
                     * <p>购买时长，单位月</p>
                     */
                    int64_t m_purchasePeriod;
                    bool m_purchasePeriodHasBeenSet;

                    /**
                     * <p>vpcId</p>
                     */
                    std::string m_vpcId;
                    bool m_vpcIdHasBeenSet;

                    /**
                     * <p>子网</p>
                     */
                    std::string m_subNet;
                    bool m_subNetHasBeenSet;

                    /**
                     * <p>资源购买地域</p>
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                    /**
                     * <p>关联项目空间项目id</p>
                     */
                    std::string m_associatedProjectId;
                    bool m_associatedProjectIdHasBeenSet;

                    /**
                     * <p>资源组描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>标签值</p>
                     */
                    std::vector<ResourceTag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATERESOURCEGROUPREQUEST_H_
