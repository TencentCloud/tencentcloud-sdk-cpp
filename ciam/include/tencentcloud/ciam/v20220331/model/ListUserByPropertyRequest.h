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

#ifndef TENCENTCLOUD_CIAM_V20220331_MODEL_LISTUSERBYPROPERTYREQUEST_H_
#define TENCENTCLOUD_CIAM_V20220331_MODEL_LISTUSERBYPROPERTYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ciam
    {
        namespace V20220331
        {
            namespace Model
            {
                /**
                * ListUserByProperty请求参数结构体
                */
                class ListUserByPropertyRequest : public AbstractModel
                {
                public:
                    ListUserByPropertyRequest();
                    ~ListUserByPropertyRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取用户目录ID
                     * @return UserStoreId 用户目录ID
                     * 
                     */
                    std::string GetUserStoreId() const;

                    /**
                     * 设置用户目录ID
                     * @param _userStoreId 用户目录ID
                     * 
                     */
                    void SetUserStoreId(const std::string& _userStoreId);

                    /**
                     * 判断参数 UserStoreId 是否已赋值
                     * @return UserStoreId 是否已赋值
                     * 
                     */
                    bool UserStoreIdHasBeenSet() const;

                    /**
                     * 获取查询的属性

<li> **phoneNumber** </li>	  手机号码
<li> **email** </li>  邮箱
                     * @return PropertyCode 查询的属性

<li> **phoneNumber** </li>	  手机号码
<li> **email** </li>  邮箱
                     * 
                     */
                    std::string GetPropertyCode() const;

                    /**
                     * 设置查询的属性

<li> **phoneNumber** </li>	  手机号码
<li> **email** </li>  邮箱
                     * @param _propertyCode 查询的属性

<li> **phoneNumber** </li>	  手机号码
<li> **email** </li>  邮箱
                     * 
                     */
                    void SetPropertyCode(const std::string& _propertyCode);

                    /**
                     * 判断参数 PropertyCode 是否已赋值
                     * @return PropertyCode 是否已赋值
                     * 
                     */
                    bool PropertyCodeHasBeenSet() const;

                    /**
                     * 获取属性值
                     * @return PropertyValue 属性值
                     * 
                     */
                    std::string GetPropertyValue() const;

                    /**
                     * 设置属性值
                     * @param _propertyValue 属性值
                     * 
                     */
                    void SetPropertyValue(const std::string& _propertyValue);

                    /**
                     * 判断参数 PropertyValue 是否已赋值
                     * @return PropertyValue 是否已赋值
                     * 
                     */
                    bool PropertyValueHasBeenSet() const;

                    /**
                     * 获取返回信息是否为原文
                     * @return Original 返回信息是否为原文
                     * 
                     */
                    bool GetOriginal() const;

                    /**
                     * 设置返回信息是否为原文
                     * @param _original 返回信息是否为原文
                     * 
                     */
                    void SetOriginal(const bool& _original);

                    /**
                     * 判断参数 Original 是否已赋值
                     * @return Original 是否已赋值
                     * 
                     */
                    bool OriginalHasBeenSet() const;

                private:

                    /**
                     * 用户目录ID
                     */
                    std::string m_userStoreId;
                    bool m_userStoreIdHasBeenSet;

                    /**
                     * 查询的属性

<li> **phoneNumber** </li>	  手机号码
<li> **email** </li>  邮箱
                     */
                    std::string m_propertyCode;
                    bool m_propertyCodeHasBeenSet;

                    /**
                     * 属性值
                     */
                    std::string m_propertyValue;
                    bool m_propertyValueHasBeenSet;

                    /**
                     * 返回信息是否为原文
                     */
                    bool m_original;
                    bool m_originalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CIAM_V20220331_MODEL_LISTUSERBYPROPERTYREQUEST_H_
