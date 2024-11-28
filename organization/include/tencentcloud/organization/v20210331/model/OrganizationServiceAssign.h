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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGANIZATIONSERVICEASSIGN_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGANIZATIONSERVICEASSIGN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 集团服务设置
                */
                class OrganizationServiceAssign : public AbstractModel
                {
                public:
                    OrganizationServiceAssign();
                    ~OrganizationServiceAssign() = default;
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
                     * 获取是否支持委派。取值: 1-是  2-否
                     * @return IsAssign 是否支持委派。取值: 1-是  2-否
                     * 
                     */
                    uint64_t GetIsAssign() const;

                    /**
                     * 设置是否支持委派。取值: 1-是  2-否
                     * @param _isAssign 是否支持委派。取值: 1-是  2-否
                     * 
                     */
                    void SetIsAssign(const uint64_t& _isAssign);

                    /**
                     * 判断参数 IsAssign 是否已赋值
                     * @return IsAssign 是否已赋值
                     * 
                     */
                    bool IsAssignHasBeenSet() const;

                    /**
                     * 获取集团服务描述。
                     * @return Description 集团服务描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置集团服务描述。
                     * @param _description 集团服务描述。
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
                     * 获取当前委派管理员数。
                     * @return MemberNum 当前委派管理员数。
                     * 
                     */
                    std::string GetMemberNum() const;

                    /**
                     * 设置当前委派管理员数。
                     * @param _memberNum 当前委派管理员数。
                     * 
                     */
                    void SetMemberNum(const std::string& _memberNum);

                    /**
                     * 判断参数 MemberNum 是否已赋值
                     * @return MemberNum 是否已赋值
                     * 
                     */
                    bool MemberNumHasBeenSet() const;

                    /**
                     * 获取帮助文档。
                     * @return Document 帮助文档。
                     * 
                     */
                    std::string GetDocument() const;

                    /**
                     * 设置帮助文档。
                     * @param _document 帮助文档。
                     * 
                     */
                    void SetDocument(const std::string& _document);

                    /**
                     * 判断参数 Document 是否已赋值
                     * @return Document 是否已赋值
                     * 
                     */
                    bool DocumentHasBeenSet() const;

                    /**
                     * 获取集团服务产品控制台路径。
                     * @return ConsoleUrl 集团服务产品控制台路径。
                     * 
                     */
                    std::string GetConsoleUrl() const;

                    /**
                     * 设置集团服务产品控制台路径。
                     * @param _consoleUrl 集团服务产品控制台路径。
                     * 
                     */
                    void SetConsoleUrl(const std::string& _consoleUrl);

                    /**
                     * 判断参数 ConsoleUrl 是否已赋值
                     * @return ConsoleUrl 是否已赋值
                     * 
                     */
                    bool ConsoleUrlHasBeenSet() const;

                    /**
                     * 获取是否接入使用状态。取值: 1-是 
 2-否
                     * @return IsUsageStatus 是否接入使用状态。取值: 1-是 
 2-否
                     * 
                     */
                    uint64_t GetIsUsageStatus() const;

                    /**
                     * 设置是否接入使用状态。取值: 1-是 
 2-否
                     * @param _isUsageStatus 是否接入使用状态。取值: 1-是 
 2-否
                     * 
                     */
                    void SetIsUsageStatus(const uint64_t& _isUsageStatus);

                    /**
                     * 判断参数 IsUsageStatus 是否已赋值
                     * @return IsUsageStatus 是否已赋值
                     * 
                     */
                    bool IsUsageStatusHasBeenSet() const;

                    /**
                     * 获取委派管理员数量限制。
                     * @return CanAssignCount 委派管理员数量限制。
                     * 
                     */
                    uint64_t GetCanAssignCount() const;

                    /**
                     * 设置委派管理员数量限制。
                     * @param _canAssignCount 委派管理员数量限制。
                     * 
                     */
                    void SetCanAssignCount(const uint64_t& _canAssignCount);

                    /**
                     * 判断参数 CanAssignCount 是否已赋值
                     * @return CanAssignCount 是否已赋值
                     * 
                     */
                    bool CanAssignCountHasBeenSet() const;

                    /**
                     * 获取集团服务产品标识。
                     * @return Product 集团服务产品标识。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置集团服务产品标识。
                     * @param _product 集团服务产品标识。
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
                     * 获取是否支持集团服务授权。取值 1-是、2-否
                     * @return ServiceGrant 是否支持集团服务授权。取值 1-是、2-否
                     * 
                     */
                    uint64_t GetServiceGrant() const;

                    /**
                     * 设置是否支持集团服务授权。取值 1-是、2-否
                     * @param _serviceGrant 是否支持集团服务授权。取值 1-是、2-否
                     * 
                     */
                    void SetServiceGrant(const uint64_t& _serviceGrant);

                    /**
                     * 判断参数 ServiceGrant 是否已赋值
                     * @return ServiceGrant 是否已赋值
                     * 
                     */
                    bool ServiceGrantHasBeenSet() const;

                    /**
                     * 获取集团服务授权启用状态。ServiceGrant值为1时该字段有效 ，取值：Enabled-开启  Disabled-关闭 
                     * @return GrantStatus 集团服务授权启用状态。ServiceGrant值为1时该字段有效 ，取值：Enabled-开启  Disabled-关闭 
                     * 
                     */
                    std::string GetGrantStatus() const;

                    /**
                     * 设置集团服务授权启用状态。ServiceGrant值为1时该字段有效 ，取值：Enabled-开启  Disabled-关闭 
                     * @param _grantStatus 集团服务授权启用状态。ServiceGrant值为1时该字段有效 ，取值：Enabled-开启  Disabled-关闭 
                     * 
                     */
                    void SetGrantStatus(const std::string& _grantStatus);

                    /**
                     * 判断参数 GrantStatus 是否已赋值
                     * @return GrantStatus 是否已赋值
                     * 
                     */
                    bool GrantStatusHasBeenSet() const;

                    /**
                     * 获取是否支持设置委派管理范围。取值: 1-是  2-否
                     * @return IsSetManagementScope 是否支持设置委派管理范围。取值: 1-是  2-否
                     * 
                     */
                    uint64_t GetIsSetManagementScope() const;

                    /**
                     * 设置是否支持设置委派管理范围。取值: 1-是  2-否
                     * @param _isSetManagementScope 是否支持设置委派管理范围。取值: 1-是  2-否
                     * 
                     */
                    void SetIsSetManagementScope(const uint64_t& _isSetManagementScope);

                    /**
                     * 判断参数 IsSetManagementScope 是否已赋值
                     * @return IsSetManagementScope 是否已赋值
                     * 
                     */
                    bool IsSetManagementScopeHasBeenSet() const;

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
                     * 是否支持委派。取值: 1-是  2-否
                     */
                    uint64_t m_isAssign;
                    bool m_isAssignHasBeenSet;

                    /**
                     * 集团服务描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 当前委派管理员数。
                     */
                    std::string m_memberNum;
                    bool m_memberNumHasBeenSet;

                    /**
                     * 帮助文档。
                     */
                    std::string m_document;
                    bool m_documentHasBeenSet;

                    /**
                     * 集团服务产品控制台路径。
                     */
                    std::string m_consoleUrl;
                    bool m_consoleUrlHasBeenSet;

                    /**
                     * 是否接入使用状态。取值: 1-是 
 2-否
                     */
                    uint64_t m_isUsageStatus;
                    bool m_isUsageStatusHasBeenSet;

                    /**
                     * 委派管理员数量限制。
                     */
                    uint64_t m_canAssignCount;
                    bool m_canAssignCountHasBeenSet;

                    /**
                     * 集团服务产品标识。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                    /**
                     * 是否支持集团服务授权。取值 1-是、2-否
                     */
                    uint64_t m_serviceGrant;
                    bool m_serviceGrantHasBeenSet;

                    /**
                     * 集团服务授权启用状态。ServiceGrant值为1时该字段有效 ，取值：Enabled-开启  Disabled-关闭 
                     */
                    std::string m_grantStatus;
                    bool m_grantStatusHasBeenSet;

                    /**
                     * 是否支持设置委派管理范围。取值: 1-是  2-否
                     */
                    uint64_t m_isSetManagementScope;
                    bool m_isSetManagementScopeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_ORGANIZATIONSERVICEASSIGN_H_
