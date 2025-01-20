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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SERVICETEMPLATE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SERVICETEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/ServicesInfo.h>
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
                * 协议端口模板
                */
                class ServiceTemplate : public AbstractModel
                {
                public:
                    ServiceTemplate();
                    ~ServiceTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取协议端口实例ID，例如：ppm-f5n1f8da。
                     * @return ServiceTemplateId 协议端口实例ID，例如：ppm-f5n1f8da。
                     * 
                     */
                    std::string GetServiceTemplateId() const;

                    /**
                     * 设置协议端口实例ID，例如：ppm-f5n1f8da。
                     * @param _serviceTemplateId 协议端口实例ID，例如：ppm-f5n1f8da。
                     * 
                     */
                    void SetServiceTemplateId(const std::string& _serviceTemplateId);

                    /**
                     * 判断参数 ServiceTemplateId 是否已赋值
                     * @return ServiceTemplateId 是否已赋值
                     * 
                     */
                    bool ServiceTemplateIdHasBeenSet() const;

                    /**
                     * 获取模板名称。
                     * @return ServiceTemplateName 模板名称。
                     * 
                     */
                    std::string GetServiceTemplateName() const;

                    /**
                     * 设置模板名称。
                     * @param _serviceTemplateName 模板名称。
                     * 
                     */
                    void SetServiceTemplateName(const std::string& _serviceTemplateName);

                    /**
                     * 判断参数 ServiceTemplateName 是否已赋值
                     * @return ServiceTemplateName 是否已赋值
                     * 
                     */
                    bool ServiceTemplateNameHasBeenSet() const;

                    /**
                     * 获取协议端口信息。
                     * @return ServiceSet 协议端口信息。
                     * 
                     */
                    std::vector<std::string> GetServiceSet() const;

                    /**
                     * 设置协议端口信息。
                     * @param _serviceSet 协议端口信息。
                     * 
                     */
                    void SetServiceSet(const std::vector<std::string>& _serviceSet);

                    /**
                     * 判断参数 ServiceSet 是否已赋值
                     * @return ServiceSet 是否已赋值
                     * 
                     */
                    bool ServiceSetHasBeenSet() const;

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
                     * 获取带备注的协议端口信息。
                     * @return ServiceExtraSet 带备注的协议端口信息。
                     * 
                     */
                    std::vector<ServicesInfo> GetServiceExtraSet() const;

                    /**
                     * 设置带备注的协议端口信息。
                     * @param _serviceExtraSet 带备注的协议端口信息。
                     * 
                     */
                    void SetServiceExtraSet(const std::vector<ServicesInfo>& _serviceExtraSet);

                    /**
                     * 判断参数 ServiceExtraSet 是否已赋值
                     * @return ServiceExtraSet 是否已赋值
                     * 
                     */
                    bool ServiceExtraSetHasBeenSet() const;

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
                     * 协议端口实例ID，例如：ppm-f5n1f8da。
                     */
                    std::string m_serviceTemplateId;
                    bool m_serviceTemplateIdHasBeenSet;

                    /**
                     * 模板名称。
                     */
                    std::string m_serviceTemplateName;
                    bool m_serviceTemplateNameHasBeenSet;

                    /**
                     * 协议端口信息。
                     */
                    std::vector<std::string> m_serviceSet;
                    bool m_serviceSetHasBeenSet;

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
                     * 带备注的协议端口信息。
                     */
                    std::vector<ServicesInfo> m_serviceExtraSet;
                    bool m_serviceExtraSetHasBeenSet;

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

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SERVICETEMPLATE_H_
