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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESSTEMPLATE_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESSTEMPLATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vpc/v20170312/model/AddressInfo.h>
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
                * IP地址模板
                */
                class AddressTemplate : public AbstractModel
                {
                public:
                    AddressTemplate();
                    ~AddressTemplate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP地址模板名称。
                     * @return AddressTemplateName IP地址模板名称。
                     * 
                     */
                    std::string GetAddressTemplateName() const;

                    /**
                     * 设置IP地址模板名称。
                     * @param _addressTemplateName IP地址模板名称。
                     * 
                     */
                    void SetAddressTemplateName(const std::string& _addressTemplateName);

                    /**
                     * 判断参数 AddressTemplateName 是否已赋值
                     * @return AddressTemplateName 是否已赋值
                     * 
                     */
                    bool AddressTemplateNameHasBeenSet() const;

                    /**
                     * 获取IP地址模板实例唯一ID。
                     * @return AddressTemplateId IP地址模板实例唯一ID。
                     * 
                     */
                    std::string GetAddressTemplateId() const;

                    /**
                     * 设置IP地址模板实例唯一ID。
                     * @param _addressTemplateId IP地址模板实例唯一ID。
                     * 
                     */
                    void SetAddressTemplateId(const std::string& _addressTemplateId);

                    /**
                     * 判断参数 AddressTemplateId 是否已赋值
                     * @return AddressTemplateId 是否已赋值
                     * 
                     */
                    bool AddressTemplateIdHasBeenSet() const;

                    /**
                     * 获取IP地址信息。
                     * @return AddressSet IP地址信息。
                     * 
                     */
                    std::vector<std::string> GetAddressSet() const;

                    /**
                     * 设置IP地址信息。
                     * @param _addressSet IP地址信息。
                     * 
                     */
                    void SetAddressSet(const std::vector<std::string>& _addressSet);

                    /**
                     * 判断参数 AddressSet 是否已赋值
                     * @return AddressSet 是否已赋值
                     * 
                     */
                    bool AddressSetHasBeenSet() const;

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
                     * 获取带备注的IP地址信息。
                     * @return AddressExtraSet 带备注的IP地址信息。
                     * 
                     */
                    std::vector<AddressInfo> GetAddressExtraSet() const;

                    /**
                     * 设置带备注的IP地址信息。
                     * @param _addressExtraSet 带备注的IP地址信息。
                     * 
                     */
                    void SetAddressExtraSet(const std::vector<AddressInfo>& _addressExtraSet);

                    /**
                     * 判断参数 AddressExtraSet 是否已赋值
                     * @return AddressExtraSet 是否已赋值
                     * 
                     */
                    bool AddressExtraSetHasBeenSet() const;

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
                     * IP地址模板名称。
                     */
                    std::string m_addressTemplateName;
                    bool m_addressTemplateNameHasBeenSet;

                    /**
                     * IP地址模板实例唯一ID。
                     */
                    std::string m_addressTemplateId;
                    bool m_addressTemplateIdHasBeenSet;

                    /**
                     * IP地址信息。
                     */
                    std::vector<std::string> m_addressSet;
                    bool m_addressSetHasBeenSet;

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
                     * 带备注的IP地址信息。
                     */
                    std::vector<AddressInfo> m_addressExtraSet;
                    bool m_addressExtraSetHasBeenSet;

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

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESSTEMPLATE_H_
