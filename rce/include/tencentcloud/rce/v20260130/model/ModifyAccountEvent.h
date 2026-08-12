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

#ifndef TENCENTCLOUD_RCE_V20260130_MODEL_MODIFYACCOUNTEVENT_H_
#define TENCENTCLOUD_RCE_V20260130_MODEL_MODIFYACCOUNTEVENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rce/v20260130/model/User.h>
#include <tencentcloud/rce/v20260130/model/Person.h>
#include <tencentcloud/rce/v20260130/model/Address.h>
#include <tencentcloud/rce/v20260130/model/Cust.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20260130
        {
            namespace Model
            {
                /**
                * 修改账号事件详情
                */
                class ModifyAccountEvent : public AbstractModel
                {
                public:
                    ModifyAccountEvent();
                    ~ModifyAccountEvent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>用户基础信息</p>
                     * @return UserInfo <p>用户基础信息</p>
                     * 
                     */
                    User GetUserInfo() const;

                    /**
                     * 设置<p>用户基础信息</p>
                     * @param _userInfo <p>用户基础信息</p>
                     * 
                     */
                    void SetUserInfo(const User& _userInfo);

                    /**
                     * 判断参数 UserInfo 是否已赋值
                     * @return UserInfo 是否已赋值
                     * 
                     */
                    bool UserInfoHasBeenSet() const;

                    /**
                     * 获取<p>用户填写的个人信息</p>
                     * @return Person <p>用户填写的个人信息</p>
                     * 
                     */
                    Person GetPerson() const;

                    /**
                     * 设置<p>用户填写的个人信息</p>
                     * @param _person <p>用户填写的个人信息</p>
                     * 
                     */
                    void SetPerson(const Person& _person);

                    /**
                     * 判断参数 Person 是否已赋值
                     * @return Person 是否已赋值
                     * 
                     */
                    bool PersonHasBeenSet() const;

                    /**
                     * 获取<p>用户填写的账单地址</p>
                     * @return BillingAddress <p>用户填写的账单地址</p>
                     * 
                     */
                    Address GetBillingAddress() const;

                    /**
                     * 设置<p>用户填写的账单地址</p>
                     * @param _billingAddress <p>用户填写的账单地址</p>
                     * 
                     */
                    void SetBillingAddress(const Address& _billingAddress);

                    /**
                     * 判断参数 BillingAddress 是否已赋值
                     * @return BillingAddress 是否已赋值
                     * 
                     */
                    bool BillingAddressHasBeenSet() const;

                    /**
                     * 获取<p>用户填写的收货地址</p>
                     * @return DeliveryAddress <p>用户填写的收货地址</p>
                     * 
                     */
                    Address GetDeliveryAddress() const;

                    /**
                     * 设置<p>用户填写的收货地址</p>
                     * @param _deliveryAddress <p>用户填写的收货地址</p>
                     * 
                     */
                    void SetDeliveryAddress(const Address& _deliveryAddress);

                    /**
                     * 判断参数 DeliveryAddress 是否已赋值
                     * @return DeliveryAddress 是否已赋值
                     * 
                     */
                    bool DeliveryAddressHasBeenSet() const;

                    /**
                     * 获取<p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * @return Cust <p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * 
                     */
                    std::vector<Cust> GetCust() const;

                    /**
                     * 设置<p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * @param _cust <p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     * 
                     */
                    void SetCust(const std::vector<Cust>& _cust);

                    /**
                     * 判断参数 Cust 是否已赋值
                     * @return Cust 是否已赋值
                     * 
                     */
                    bool CustHasBeenSet() const;

                private:

                    /**
                     * <p>用户基础信息</p>
                     */
                    User m_userInfo;
                    bool m_userInfoHasBeenSet;

                    /**
                     * <p>用户填写的个人信息</p>
                     */
                    Person m_person;
                    bool m_personHasBeenSet;

                    /**
                     * <p>用户填写的账单地址</p>
                     */
                    Address m_billingAddress;
                    bool m_billingAddressHasBeenSet;

                    /**
                     * <p>用户填写的收货地址</p>
                     */
                    Address m_deliveryAddress;
                    bool m_deliveryAddressHasBeenSet;

                    /**
                     * <p>与RCE约定的定制化信息，为K:V 格式的对象数组，示例：[{&quot;Key&quot;: &quot;ApproverName&quot;, &quot;Value&quot;: &quot;bob&quot;},{&quot;Key&quot;:&quot;ApproverPhone&quot;,&quot;Value&quot;: &quot;+86131****5678&quot;}]</p>
                     */
                    std::vector<Cust> m_cust;
                    bool m_custHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20260130_MODEL_MODIFYACCOUNTEVENT_H_
