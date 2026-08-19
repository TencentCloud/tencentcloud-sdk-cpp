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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_NATSNATRULEITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_NATSNATRULEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * SNAT规则
                */
                class NatSnatRuleItem : public AbstractModel
                {
                public:
                    NatSnatRuleItem();
                    ~NatSnatRuleItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>网关SNat ID</p>
                     * @return NatGatewaySnatId <p>网关SNat ID</p>
                     * 
                     */
                    std::string GetNatGatewaySnatId() const;

                    /**
                     * 设置<p>网关SNat ID</p>
                     * @param _natGatewaySnatId <p>网关SNat ID</p>
                     * 
                     */
                    void SetNatGatewaySnatId(const std::string& _natGatewaySnatId);

                    /**
                     * 判断参数 NatGatewaySnatId 是否已赋值
                     * @return NatGatewaySnatId 是否已赋值
                     * 
                     */
                    bool NatGatewaySnatIdHasBeenSet() const;

                    /**
                     * 获取<p>资源ID</p>
                     * @return ResourceId <p>资源ID</p>
                     * 
                     */
                    std::string GetResourceId() const;

                    /**
                     * 设置<p>资源ID</p>
                     * @param _resourceId <p>资源ID</p>
                     * 
                     */
                    void SetResourceId(const std::string& _resourceId);

                    /**
                     * 判断参数 ResourceId 是否已赋值
                     * @return ResourceId 是否已赋值
                     * 
                     */
                    bool ResourceIdHasBeenSet() const;

                    /**
                     * 获取<p>资源类型</p>
                     * @return ResourceType <p>资源类型</p>
                     * 
                     */
                    std::string GetResourceType() const;

                    /**
                     * 设置<p>资源类型</p>
                     * @param _resourceType <p>资源类型</p>
                     * 
                     */
                    void SetResourceType(const std::string& _resourceType);

                    /**
                     * 判断参数 ResourceType 是否已赋值
                     * @return ResourceType 是否已赋值
                     * 
                     */
                    bool ResourceTypeHasBeenSet() const;

                    /**
                     * 获取<p>内网IP地址</p>
                     * @return PrivateIpAddress <p>内网IP地址</p>
                     * 
                     */
                    std::string GetPrivateIpAddress() const;

                    /**
                     * 设置<p>内网IP地址</p>
                     * @param _privateIpAddress <p>内网IP地址</p>
                     * 
                     */
                    void SetPrivateIpAddress(const std::string& _privateIpAddress);

                    /**
                     * 判断参数 PrivateIpAddress 是否已赋值
                     * @return PrivateIpAddress 是否已赋值
                     * 
                     */
                    bool PrivateIpAddressHasBeenSet() const;

                    /**
                     * 获取<p>公网IP地址</p>
                     * @return PublicIpAddresses <p>公网IP地址</p>
                     * 
                     */
                    std::string GetPublicIpAddresses() const;

                    /**
                     * 设置<p>公网IP地址</p>
                     * @param _publicIpAddresses <p>公网IP地址</p>
                     * 
                     */
                    void SetPublicIpAddresses(const std::string& _publicIpAddresses);

                    /**
                     * 判断参数 PublicIpAddresses 是否已赋值
                     * @return PublicIpAddresses 是否已赋值
                     * 
                     */
                    bool PublicIpAddressesHasBeenSet() const;

                    /**
                     * 获取<p>描述</p>
                     * @return Description <p>描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>描述</p>
                     * @param _description <p>描述</p>
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
                     * 获取<p>创建时间</p>
                     * @return CreatedTime <p>创建时间</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>创建时间</p>
                     * @param _createdTime <p>创建时间</p>
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                private:

                    /**
                     * <p>网关SNat ID</p>
                     */
                    std::string m_natGatewaySnatId;
                    bool m_natGatewaySnatIdHasBeenSet;

                    /**
                     * <p>资源ID</p>
                     */
                    std::string m_resourceId;
                    bool m_resourceIdHasBeenSet;

                    /**
                     * <p>资源类型</p>
                     */
                    std::string m_resourceType;
                    bool m_resourceTypeHasBeenSet;

                    /**
                     * <p>内网IP地址</p>
                     */
                    std::string m_privateIpAddress;
                    bool m_privateIpAddressHasBeenSet;

                    /**
                     * <p>公网IP地址</p>
                     */
                    std::string m_publicIpAddresses;
                    bool m_publicIpAddressesHasBeenSet;

                    /**
                     * <p>描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_NATSNATRULEITEM_H_
