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

#ifndef TENCENTCLOUD_DBBRAIN_V20191016_MODEL_ADDUSERCONTACTREQUEST_H_
#define TENCENTCLOUD_DBBRAIN_V20191016_MODEL_ADDUSERCONTACTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20191016
        {
            namespace Model
            {
                /**
                * AddUserContact请求参数结构体
                */
                class AddUserContactRequest : public AbstractModel
                {
                public:
                    AddUserContactRequest();
                    ~AddUserContactRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取联系人姓名，大小写字母+数字+下划线，最小 2 位最大 60 位的长度， 不能以"_"开头，且联系人名保持唯一。
                     * @return Name 联系人姓名，大小写字母+数字+下划线，最小 2 位最大 60 位的长度， 不能以"_"开头，且联系人名保持唯一。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置联系人姓名，大小写字母+数字+下划线，最小 2 位最大 60 位的长度， 不能以"_"开头，且联系人名保持唯一。
                     * @param _name 联系人姓名，大小写字母+数字+下划线，最小 2 位最大 60 位的长度， 不能以"_"开头，且联系人名保持唯一。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取邮箱地址，大小写字母、数字及下划线组成， 不能以"_"开头。
                     * @return ContactInfo 邮箱地址，大小写字母、数字及下划线组成， 不能以"_"开头。
                     * 
                     */
                    std::string GetContactInfo() const;

                    /**
                     * 设置邮箱地址，大小写字母、数字及下划线组成， 不能以"_"开头。
                     * @param _contactInfo 邮箱地址，大小写字母、数字及下划线组成， 不能以"_"开头。
                     * 
                     */
                    void SetContactInfo(const std::string& _contactInfo);

                    /**
                     * 判断参数 ContactInfo 是否已赋值
                     * @return ContactInfo 是否已赋值
                     * 
                     */
                    bool ContactInfoHasBeenSet() const;

                    /**
                     * 获取服务产品类型，固定值："mysql"。
                     * @return Product 服务产品类型，固定值："mysql"。
                     * 
                     */
                    std::string GetProduct() const;

                    /**
                     * 设置服务产品类型，固定值："mysql"。
                     * @param _product 服务产品类型，固定值："mysql"。
                     * 
                     */
                    void SetProduct(const std::string& _product);

                    /**
                     * 判断参数 Product 是否已赋值
                     * @return Product 是否已赋值
                     * 
                     */
                    bool ProductHasBeenSet() const;

                private:

                    /**
                     * 联系人姓名，大小写字母+数字+下划线，最小 2 位最大 60 位的长度， 不能以"_"开头，且联系人名保持唯一。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 邮箱地址，大小写字母、数字及下划线组成， 不能以"_"开头。
                     */
                    std::string m_contactInfo;
                    bool m_contactInfoHasBeenSet;

                    /**
                     * 服务产品类型，固定值："mysql"。
                     */
                    std::string m_product;
                    bool m_productHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20191016_MODEL_ADDUSERCONTACTREQUEST_H_
