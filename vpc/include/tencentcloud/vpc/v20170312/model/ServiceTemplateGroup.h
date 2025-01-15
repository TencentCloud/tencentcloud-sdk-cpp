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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SERVICETEMPLATEGROUP_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SERVICETEMPLATEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/ServiceTemplate.h>
#include <tencentcloud/vpc/v20170312/model/Tag.h>


namespace TencentCloud
{
    namespace Vpc
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 协议端口模板集合
                */
                class ServiceTemplateGroup : public AbstractModel
                {
                public:
                    ServiceTemplateGroup();
                    ~ServiceTemplateGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取协议端口模板集合实例ID，例如：ppmg-2klmrefu。
                     * @return ServiceTemplateGroupId 协议端口模板集合实例ID，例如：ppmg-2klmrefu。
                     * 
                     */
                    std::string GetServiceTemplateGroupId() const;

                    /**
                     * 设置协议端口模板集合实例ID，例如：ppmg-2klmrefu。
                     * @param _serviceTemplateGroupId 协议端口模板集合实例ID，例如：ppmg-2klmrefu。
                     * 
                     */
                    void SetServiceTemplateGroupId(const std::string& _serviceTemplateGroupId);

                    /**
                     * 判断参数 ServiceTemplateGroupId 是否已赋值
                     * @return ServiceTemplateGroupId 是否已赋值
                     * 
                     */
                    bool ServiceTemplateGroupIdHasBeenSet() const;

                    /**
                     * 获取协议端口模板集合名称。
                     * @return ServiceTemplateGroupName 协议端口模板集合名称。
                     * 
                     */
                    std::string GetServiceTemplateGroupName() const;

                    /**
                     * 设置协议端口模板集合名称。
                     * @param _serviceTemplateGroupName 协议端口模板集合名称。
                     * 
                     */
                    void SetServiceTemplateGroupName(const std::string& _serviceTemplateGroupName);

                    /**
                     * 判断参数 ServiceTemplateGroupName 是否已赋值
                     * @return ServiceTemplateGroupName 是否已赋值
                     * 
                     */
                    bool ServiceTemplateGroupNameHasBeenSet() const;

                    /**
                     * 获取协议端口模板实例ID。
                     * @return ServiceTemplateIdSet 协议端口模板实例ID。
                     * 
                     */
                    std::vector<std::string> GetServiceTemplateIdSet() const;

                    /**
                     * 设置协议端口模板实例ID。
                     * @param _serviceTemplateIdSet 协议端口模板实例ID。
                     * 
                     */
                    void SetServiceTemplateIdSet(const std::vector<std::string>& _serviceTemplateIdSet);

                    /**
                     * 判断参数 ServiceTemplateIdSet 是否已赋值
                     * @return ServiceTemplateIdSet 是否已赋值
                     * 
                     */
                    bool ServiceTemplateIdSetHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreatedTime 创建时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createdTime 创建时间。
                     * 
                     */
                    void SetCreatedTime(const std::string& _createdTime);

                    /**
                     * 判断参数 CreatedTime 是否已赋值
                     * @return CreatedTime 是否已赋值
                     * 
                     */
                    bool CreatedTimeHasBeenSet() const;

                    /**
                     * 获取最后更新时间。
                     * @return UpdatedTime 最后更新时间。
                     * 
                     */
                    std::string GetUpdatedTime() const;

                    /**
                     * 设置最后更新时间。
                     * @param _updatedTime 最后更新时间。
                     * 
                     */
                    void SetUpdatedTime(const std::string& _updatedTime);

                    /**
                     * 判断参数 UpdatedTime 是否已赋值
                     * @return UpdatedTime 是否已赋值
                     * 
                     */
                    bool UpdatedTimeHasBeenSet() const;

                    /**
                     * 获取协议端口模板实例信息。
                     * @return ServiceTemplateSet 协议端口模板实例信息。
                     * 
                     */
                    std::vector<ServiceTemplate> GetServiceTemplateSet() const;

                    /**
                     * 设置协议端口模板实例信息。
                     * @param _serviceTemplateSet 协议端口模板实例信息。
                     * 
                     */
                    void SetServiceTemplateSet(const std::vector<ServiceTemplate>& _serviceTemplateSet);

                    /**
                     * 判断参数 ServiceTemplateSet 是否已赋值
                     * @return ServiceTemplateSet 是否已赋值
                     * 
                     */
                    bool ServiceTemplateSetHasBeenSet() const;

                    /**
                     * 获取标签键值对。	
                     * @return TagSet 标签键值对。	
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置标签键值对。	
                     * @param _tagSet 标签键值对。	
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                private:

                    /**
                     * 协议端口模板集合实例ID，例如：ppmg-2klmrefu。
                     */
                    std::string m_serviceTemplateGroupId;
                    bool m_serviceTemplateGroupIdHasBeenSet;

                    /**
                     * 协议端口模板集合名称。
                     */
                    std::string m_serviceTemplateGroupName;
                    bool m_serviceTemplateGroupNameHasBeenSet;

                    /**
                     * 协议端口模板实例ID。
                     */
                    std::vector<std::string> m_serviceTemplateIdSet;
                    bool m_serviceTemplateIdSetHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * 最后更新时间。
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                    /**
                     * 协议端口模板实例信息。
                     */
                    std::vector<ServiceTemplate> m_serviceTemplateSet;
                    bool m_serviceTemplateSetHasBeenSet;

                    /**
                     * 标签键值对。	
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SERVICETEMPLATEGROUP_H_
