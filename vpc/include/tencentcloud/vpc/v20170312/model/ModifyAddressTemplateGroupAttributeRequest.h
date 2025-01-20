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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYADDRESSTEMPLATEGROUPATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYADDRESSTEMPLATEGROUPATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * ModifyAddressTemplateGroupAttribute请求参数结构体
                */
                class ModifyAddressTemplateGroupAttributeRequest : public AbstractModel
                {
                public:
                    ModifyAddressTemplateGroupAttributeRequest();
                    ~ModifyAddressTemplateGroupAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取IP地址模板集合实例ID，例如：ipmg-2uw6ujo6。
                     * @return AddressTemplateGroupId IP地址模板集合实例ID，例如：ipmg-2uw6ujo6。
                     * 
                     */
                    std::string GetAddressTemplateGroupId() const;

                    /**
                     * 设置IP地址模板集合实例ID，例如：ipmg-2uw6ujo6。
                     * @param _addressTemplateGroupId IP地址模板集合实例ID，例如：ipmg-2uw6ujo6。
                     * 
                     */
                    void SetAddressTemplateGroupId(const std::string& _addressTemplateGroupId);

                    /**
                     * 判断参数 AddressTemplateGroupId 是否已赋值
                     * @return AddressTemplateGroupId 是否已赋值
                     * 
                     */
                    bool AddressTemplateGroupIdHasBeenSet() const;

                    /**
                     * 获取IP地址模板集合名称。
                     * @return AddressTemplateGroupName IP地址模板集合名称。
                     * 
                     */
                    std::string GetAddressTemplateGroupName() const;

                    /**
                     * 设置IP地址模板集合名称。
                     * @param _addressTemplateGroupName IP地址模板集合名称。
                     * 
                     */
                    void SetAddressTemplateGroupName(const std::string& _addressTemplateGroupName);

                    /**
                     * 判断参数 AddressTemplateGroupName 是否已赋值
                     * @return AddressTemplateGroupName 是否已赋值
                     * 
                     */
                    bool AddressTemplateGroupNameHasBeenSet() const;

                    /**
                     * 获取IP地址模板实例ID， 例如：ipm-mdunqeb6。
                     * @return AddressTemplateIds IP地址模板实例ID， 例如：ipm-mdunqeb6。
                     * 
                     */
                    std::vector<std::string> GetAddressTemplateIds() const;

                    /**
                     * 设置IP地址模板实例ID， 例如：ipm-mdunqeb6。
                     * @param _addressTemplateIds IP地址模板实例ID， 例如：ipm-mdunqeb6。
                     * 
                     */
                    void SetAddressTemplateIds(const std::vector<std::string>& _addressTemplateIds);

                    /**
                     * 判断参数 AddressTemplateIds 是否已赋值
                     * @return AddressTemplateIds 是否已赋值
                     * 
                     */
                    bool AddressTemplateIdsHasBeenSet() const;

                private:

                    /**
                     * IP地址模板集合实例ID，例如：ipmg-2uw6ujo6。
                     */
                    std::string m_addressTemplateGroupId;
                    bool m_addressTemplateGroupIdHasBeenSet;

                    /**
                     * IP地址模板集合名称。
                     */
                    std::string m_addressTemplateGroupName;
                    bool m_addressTemplateGroupNameHasBeenSet;

                    /**
                     * IP地址模板实例ID， 例如：ipm-mdunqeb6。
                     */
                    std::vector<std::string> m_addressTemplateIds;
                    bool m_addressTemplateIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_MODIFYADDRESSTEMPLATEGROUPATTRIBUTEREQUEST_H_
