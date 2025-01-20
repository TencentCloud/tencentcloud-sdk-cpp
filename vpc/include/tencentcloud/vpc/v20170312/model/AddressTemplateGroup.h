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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESSTEMPLATEGROUP_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESSTEMPLATEGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/AddressTemplateItem.h>
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
                * IP地址模板集合
                */
                class AddressTemplateGroup : public AbstractModel
                {
                public:
                    AddressTemplateGroup();
                    ~AddressTemplateGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取IP地址模板集合实例ID，例如：ipmg-dih8xdbq。
                     * @return AddressTemplateGroupId IP地址模板集合实例ID，例如：ipmg-dih8xdbq。
                     * 
                     */
                    std::string GetAddressTemplateGroupId() const;

                    /**
                     * 设置IP地址模板集合实例ID，例如：ipmg-dih8xdbq。
                     * @param _addressTemplateGroupId IP地址模板集合实例ID，例如：ipmg-dih8xdbq。
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
                     * 获取IP地址模板ID。
                     * @return AddressTemplateIdSet IP地址模板ID。
                     * 
                     */
                    std::vector<std::string> GetAddressTemplateIdSet() const;

                    /**
                     * 设置IP地址模板ID。
                     * @param _addressTemplateIdSet IP地址模板ID。
                     * 
                     */
                    void SetAddressTemplateIdSet(const std::vector<std::string>& _addressTemplateIdSet);

                    /**
                     * 判断参数 AddressTemplateIdSet 是否已赋值
                     * @return AddressTemplateIdSet 是否已赋值
                     * 
                     */
                    bool AddressTemplateIdSetHasBeenSet() const;

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
                     * 获取IP地址模板实例。
                     * @return AddressTemplateSet IP地址模板实例。
                     * 
                     */
                    std::vector<AddressTemplateItem> GetAddressTemplateSet() const;

                    /**
                     * 设置IP地址模板实例。
                     * @param _addressTemplateSet IP地址模板实例。
                     * 
                     */
                    void SetAddressTemplateSet(const std::vector<AddressTemplateItem>& _addressTemplateSet);

                    /**
                     * 判断参数 AddressTemplateSet 是否已赋值
                     * @return AddressTemplateSet 是否已赋值
                     * 
                     */
                    bool AddressTemplateSetHasBeenSet() const;

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
                     * IP地址模板集合名称。
                     */
                    std::string m_addressTemplateGroupName;
                    bool m_addressTemplateGroupNameHasBeenSet;

                    /**
                     * IP地址模板集合实例ID，例如：ipmg-dih8xdbq。
                     */
                    std::string m_addressTemplateGroupId;
                    bool m_addressTemplateGroupIdHasBeenSet;

                    /**
                     * IP地址模板ID。
                     */
                    std::vector<std::string> m_addressTemplateIdSet;
                    bool m_addressTemplateIdSetHasBeenSet;

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
                     * IP地址模板实例。
                     */
                    std::vector<AddressTemplateItem> m_addressTemplateSet;
                    bool m_addressTemplateSetHasBeenSet;

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

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESSTEMPLATEGROUP_H_
