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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYSECURITYGROUPATTRIBUTEREQUEST_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYSECURITYGROUPATTRIBUTEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * ModifySecurityGroupAttribute请求参数结构体
                */
                class ModifySecurityGroupAttributeRequest : public AbstractModel
                {
                public:
                    ModifySecurityGroupAttributeRequest();
                    ~ModifySecurityGroupAttributeRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取安全组实例ID，例如esg-33ocnj9n，可通过DescribeSecurityGroups获取。
                     * @return SecurityGroupId 安全组实例ID，例如esg-33ocnj9n，可通过DescribeSecurityGroups获取。
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置安全组实例ID，例如esg-33ocnj9n，可通过DescribeSecurityGroups获取。
                     * @param _securityGroupId 安全组实例ID，例如esg-33ocnj9n，可通过DescribeSecurityGroups获取。
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
                     * 获取安全组名称，可任意命名，但不得超过60个字符。
                     * @return GroupName 安全组名称，可任意命名，但不得超过60个字符。
                     * 
                     */
                    std::string GetGroupName() const;

                    /**
                     * 设置安全组名称，可任意命名，但不得超过60个字符。
                     * @param _groupName 安全组名称，可任意命名，但不得超过60个字符。
                     * 
                     */
                    void SetGroupName(const std::string& _groupName);

                    /**
                     * 判断参数 GroupName 是否已赋值
                     * @return GroupName 是否已赋值
                     * 
                     */
                    bool GroupNameHasBeenSet() const;

                    /**
                     * 获取安全组备注，最多100个字符。
                     * @return GroupDescription 安全组备注，最多100个字符。
                     * 
                     */
                    std::string GetGroupDescription() const;

                    /**
                     * 设置安全组备注，最多100个字符。
                     * @param _groupDescription 安全组备注，最多100个字符。
                     * 
                     */
                    void SetGroupDescription(const std::string& _groupDescription);

                    /**
                     * 判断参数 GroupDescription 是否已赋值
                     * @return GroupDescription 是否已赋值
                     * 
                     */
                    bool GroupDescriptionHasBeenSet() const;

                private:

                    /**
                     * 安全组实例ID，例如esg-33ocnj9n，可通过DescribeSecurityGroups获取。
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * 安全组名称，可任意命名，但不得超过60个字符。
                     */
                    std::string m_groupName;
                    bool m_groupNameHasBeenSet;

                    /**
                     * 安全组备注，最多100个字符。
                     */
                    std::string m_groupDescription;
                    bool m_groupDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_MODIFYSECURITYGROUPATTRIBUTEREQUEST_H_
