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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_SECURITYGROUP_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_SECURITYGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecm/v20190719/model/Tag.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
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
                     * 获取安全组实例ID，例如：esg-ohuuioma。
                     * @return SecurityGroupId 安全组实例ID，例如：esg-ohuuioma。
                     * 
                     */
                    std::string GetSecurityGroupId() const;

                    /**
                     * 设置安全组实例ID，例如：esg-ohuuioma。
                     * @param _securityGroupId 安全组实例ID，例如：esg-ohuuioma。
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
                     * @return SecurityGroupName 安全组名称，可任意命名，但不得超过60个字符。
                     * 
                     */
                    std::string GetSecurityGroupName() const;

                    /**
                     * 设置安全组名称，可任意命名，但不得超过60个字符。
                     * @param _securityGroupName 安全组名称，可任意命名，但不得超过60个字符。
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
                     * 获取安全组备注，最多100个字符。
                     * @return SecurityGroupDesc 安全组备注，最多100个字符。
                     * 
                     */
                    std::string GetSecurityGroupDesc() const;

                    /**
                     * 设置安全组备注，最多100个字符。
                     * @param _securityGroupDesc 安全组备注，最多100个字符。
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
                     * 获取是否是默认安全组，默认安全组不支持删除。
                     * @return IsDefault 是否是默认安全组，默认安全组不支持删除。
                     * 
                     */
                    bool GetIsDefault() const;

                    /**
                     * 设置是否是默认安全组，默认安全组不支持删除。
                     * @param _isDefault 是否是默认安全组，默认安全组不支持删除。
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
                     * 获取安全组创建时间。
                     * @return CreatedTime 安全组创建时间。
                     * 
                     */
                    std::string GetCreatedTime() const;

                    /**
                     * 设置安全组创建时间。
                     * @param _createdTime 安全组创建时间。
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
                     * 安全组实例ID，例如：esg-ohuuioma。
                     */
                    std::string m_securityGroupId;
                    bool m_securityGroupIdHasBeenSet;

                    /**
                     * 安全组名称，可任意命名，但不得超过60个字符。
                     */
                    std::string m_securityGroupName;
                    bool m_securityGroupNameHasBeenSet;

                    /**
                     * 安全组备注，最多100个字符。
                     */
                    std::string m_securityGroupDesc;
                    bool m_securityGroupDescHasBeenSet;

                    /**
                     * 是否是默认安全组，默认安全组不支持删除。
                     */
                    bool m_isDefault;
                    bool m_isDefaultHasBeenSet;

                    /**
                     * 安全组创建时间。
                     */
                    std::string m_createdTime;
                    bool m_createdTimeHasBeenSet;

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

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_SECURITYGROUP_H_
