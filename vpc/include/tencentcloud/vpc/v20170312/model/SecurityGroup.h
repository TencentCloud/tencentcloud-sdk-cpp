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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_SECURITYGROUP_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_SECURITYGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
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
                * 安全组对象
                */
                class SecurityGroup : public AbstractModel
                {
                public:
                    SecurityGroup();
                    ~SecurityGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>安全组实例ID，例如：sg-ohuuioma。</p>
                     * @return SecurityGroupId <p>安全组实例ID，例如：sg-ohuuioma。</p>
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置<p>安全组实例ID，例如：sg-ohuuioma。</p>
                     * @param _securityGroupId <p>安全组实例ID，例如：sg-ohuuioma。</p>
                     * 
                     */
                    void SetSecurityGroupId(const std::string& _securityGroupId);

                    /**
                     * 判断参数 SecurityGroupId 是否已赋值
                     * @return SecurityGroupId 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdHasBeenSet() const;

                    /**
                     * 获取<p>安全组名称，可任意命名，但不得超过60个字符。</p>
                     * @return SecurityGroupName <p>安全组名称，可任意命名，但不得超过60个字符。</p>
                     * 
                     */
                    std::string GetSecurityGroupName() const;

                    /**
                     * 设置<p>安全组名称，可任意命名，但不得超过60个字符。</p>
                     * @param _securityGroupName <p>安全组名称，可任意命名，但不得超过60个字符。</p>
                     * 
                     */
                    void SetSecurityGroupName(const std::string& _securityGroupName);

                    /**
                     * 判断参数 SecurityGroupName 是否已赋值
                     * @return SecurityGroupName 是否已赋值
                     * 
                     */
                    bool SecurityGroupNameHasBeenSet() const;

                    /**
                     * 获取<p>安全组备注，最多100个字符。</p>
                     * @return SecurityGroupDesc <p>安全组备注，最多100个字符。</p>
                     * 
                     */
                    std::string GetSecurityGroupDesc() const;

                    /**
                     * 设置<p>安全组备注，最多100个字符。</p>
                     * @param _securityGroupDesc <p>安全组备注，最多100个字符。</p>
                     * 
                     */
                    void SetSecurityGroupDesc(const std::string& _securityGroupDesc);

                    /**
                     * 判断参数 SecurityGroupDesc 是否已赋值
                     * @return SecurityGroupDesc 是否已赋值
                     * 
                     */
                    bool SecurityGroupDescHasBeenSet() const;

                    /**
                     * 获取<p>项目id，默认0。可在qcloud控制台项目管理页面查询到。</p>
                     * @return ProjectId <p>项目id，默认0。可在qcloud控制台项目管理页面查询到。</p>
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置<p>项目id，默认0。可在qcloud控制台项目管理页面查询到。</p>
                     * @param _projectId <p>项目id，默认0。可在qcloud控制台项目管理页面查询到。</p>
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取<p>是否是默认安全组，默认安全组不支持删除。</p>
                     * @return IsDefault <p>是否是默认安全组，默认安全组不支持删除。</p>
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置<p>是否是默认安全组，默认安全组不支持删除。</p>
                     * @param _isDefault <p>是否是默认安全组，默认安全组不支持删除。</p>
                     * 
                     */
                    void SetIsDefault(const bool& _isDefault);

                    /**
                     * 判断参数 IsDefault 是否已赋值
                     * @return IsDefault 是否已赋值
                     * 
                     */
                    bool IsDefaultHasBeenSet() const;

                    /**
                     * 获取<p>安全组创建时间。</p>
                     * @return CreatedTime <p>安全组创建时间。</p>
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置<p>安全组创建时间。</p>
                     * @param _createdTime <p>安全组创建时间。</p>
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
                     * 获取<p>标签键值对。</p>
                     * @return TagSet <p>标签键值对。</p>
                     * 
                     */
                    std::vector<Tag> GetTagSet() const;

                    /**
                     * 设置<p>标签键值对。</p>
                     * @param _tagSet <p>标签键值对。</p>
                     * 
                     */
                    void SetTagSet(const std::vector<Tag>& _tagSet);

                    /**
                     * 判断参数 TagSet 是否已赋值
                     * @return TagSet 是否已赋值
                     * 
                     */
                    bool TagSetHasBeenSet() const;

                    /**
                     * 获取<p>安全组更新时间。</p>
                     * @return UpdateTime <p>安全组更新时间。</p>
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置<p>安全组更新时间。</p>
                     * @param _updateTime <p>安全组更新时间。</p>
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取<p>是否为托管安全组</p>
                     * @return ServiceManaged <p>是否为托管安全组</p>
                     * 
                     */
                    bool GetServiceManaged() const;

                    /**
                     * 设置<p>是否为托管安全组</p>
                     * @param _serviceManaged <p>是否为托管安全组</p>
                     * 
                     */
                    void SetServiceManaged(const bool& _serviceManaged);

                    /**
                     * 判断参数 ServiceManaged 是否已赋值
                     * @return ServiceManaged 是否已赋值
                     * 
                     */
                    bool ServiceManagedHasBeenSet() const;

                private:

                    /**
                     * <p>安全组实例ID，例如：sg-ohuuioma。</p>
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * <p>安全组名称，可任意命名，但不得超过60个字符。</p>
                     */
                    std::string m_securityGroupName;
                    bool m_securityGroupNameHasBeenSet;

                    /**
                     * <p>安全组备注，最多100个字符。</p>
                     */
                    std::string m_securityGroupDesc;
                    bool m_securityGroupDescHasBeenSet;

                    /**
                     * <p>项目id，默认0。可在qcloud控制台项目管理页面查询到。</p>
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * <p>是否是默认安全组，默认安全组不支持删除。</p>
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * <p>安全组创建时间。</p>
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

                    /**
                     * <p>标签键值对。</p>
                     */
                    std::vector<Tag> m_tagSet;
                    bool m_tagSetHasBeenSet;

                    /**
                     * <p>安全组更新时间。</p>
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * <p>是否为托管安全组</p>
                     */
                    bool m_serviceManaged;
                    bool m_serviceManagedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_SECURITYGROUP_H_
