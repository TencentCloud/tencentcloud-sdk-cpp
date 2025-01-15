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

#ifndef TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESSTEMPLATEITEM_H_
#define TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESSTEMPLATEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 地址信息
                */
                class AddressTemplateItem : public AbstractModel
                {
                public:
                    AddressTemplateItem();
                    ~AddressTemplateItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取IP地址模板ID
                     * @return AddressTemplateId IP地址模板ID
                     * 
                     */
                    std::string GetAddressTemplateId() const;

                    /**
                     * 设置IP地址模板ID
                     * @param _addressTemplateId IP地址模板ID
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
                     * 获取IP模板名称，废弃字段。
                     * @return AddressTemplateName IP模板名称，废弃字段。
                     * 
                     */
                    std::string GetAddressTemplateName() const;

                    /**
                     * 设置IP模板名称，废弃字段。
                     * @param _addressTemplateName IP模板名称，废弃字段。
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
                     * 获取废弃字段。
                     * @return From 废弃字段。
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置废弃字段。
                     * @param _from 废弃字段。
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取废弃字段
                     * @return To 废弃字段
                     * 
                     */
                    std::string GetTo() const;

                    /**
                     * 设置废弃字段
                     * @param _to 废弃字段
                     * 
                     */
                    void SetTo(const std::string& _to);

                    /**
                     * 判断参数 To 是否已赋值
                     * @return To 是否已赋值
                     * 
                     */
                    bool ToHasBeenSet() const;

                    /**
                     * 获取备注。
                     * @return Description 备注。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置备注。
                     * @param _description 备注。
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

                private:

                    /**
                     * IP地址模板ID
                     */
                    std::string m_addressTemplateId;
                    bool m_addressTemplateIdHasBeenSet;

                    /**
                     * IP模板名称，废弃字段。
                     */
                    std::string m_addressTemplateName;
                    bool m_addressTemplateNameHasBeenSet;

                    /**
                     * 废弃字段。
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 废弃字段
                     */
                    std::string m_to;
                    bool m_toHasBeenSet;

                    /**
                     * 备注。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 最后更新时间。
                     */
                    std::string m_updatedTime;
                    bool m_updatedTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VPC_V20170312_MODEL_ADDRESSTEMPLATEITEM_H_
