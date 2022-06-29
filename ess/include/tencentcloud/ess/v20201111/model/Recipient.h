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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_RECIPIENT_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_RECIPIENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 签署参与者信息
                */
                class Recipient : public AbstractModel
                {
                public:
                    Recipient();
                    ~Recipient() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取签署参与者ID
                     * @return RecipientId 签署参与者ID
                     */
                    std::string GetRecipientId() const;

                    /**
                     * 设置签署参与者ID
                     * @param RecipientId 签署参与者ID
                     */
                    void SetRecipientId(const std::string& _recipientId);

                    /**
                     * 判断参数 RecipientId 是否已赋值
                     * @return RecipientId 是否已赋值
                     */
                    bool RecipientIdHasBeenSet() const;

                    /**
                     * 获取参与者类型（ENTERPRISE/INDIVIDUAL）
                     * @return RecipientType 参与者类型（ENTERPRISE/INDIVIDUAL）
                     */
                    std::string GetRecipientType() const;

                    /**
                     * 设置参与者类型（ENTERPRISE/INDIVIDUAL）
                     * @param RecipientType 参与者类型（ENTERPRISE/INDIVIDUAL）
                     */
                    void SetRecipientType(const std::string& _recipientType);

                    /**
                     * 判断参数 RecipientType 是否已赋值
                     * @return RecipientType 是否已赋值
                     */
                    bool RecipientTypeHasBeenSet() const;

                    /**
                     * 获取描述信息
                     * @return Description 描述信息
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息
                     * @param Description 描述信息
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取角色名称
                     * @return RoleName 角色名称
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置角色名称
                     * @param RoleName 角色名称
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取是否需要验证，默认为false
                     * @return RequireValidation 是否需要验证，默认为false
                     */
                    bool GetRequireValidation() const;

                    /**
                     * 设置是否需要验证，默认为false
                     * @param RequireValidation 是否需要验证，默认为false
                     */
                    void SetRequireValidation(const bool& _requireValidation);

                    /**
                     * 判断参数 RequireValidation 是否已赋值
                     * @return RequireValidation 是否已赋值
                     */
                    bool RequireValidationHasBeenSet() const;

                    /**
                     * 获取是否需要签署，默认为true
                     * @return RequireSign 是否需要签署，默认为true
                     */
                    bool GetRequireSign() const;

                    /**
                     * 设置是否需要签署，默认为true
                     * @param RequireSign 是否需要签署，默认为true
                     */
                    void SetRequireSign(const bool& _requireSign);

                    /**
                     * 判断参数 RequireSign 是否已赋值
                     * @return RequireSign 是否已赋值
                     */
                    bool RequireSignHasBeenSet() const;

                    /**
                     * 获取添加序列
                     * @return RoutingOrder 添加序列
                     */
                    int64_t GetRoutingOrder() const;

                    /**
                     * 设置添加序列
                     * @param RoutingOrder 添加序列
                     */
                    void SetRoutingOrder(const int64_t& _routingOrder);

                    /**
                     * 判断参数 RoutingOrder 是否已赋值
                     * @return RoutingOrder 是否已赋值
                     */
                    bool RoutingOrderHasBeenSet() const;

                    /**
                     * 获取是否需要发送，默认为true
                     * @return RequireDelivery 是否需要发送，默认为true
                     */
                    bool GetRequireDelivery() const;

                    /**
                     * 设置是否需要发送，默认为true
                     * @param RequireDelivery 是否需要发送，默认为true
                     */
                    void SetRequireDelivery(const bool& _requireDelivery);

                    /**
                     * 判断参数 RequireDelivery 是否已赋值
                     * @return RequireDelivery 是否已赋值
                     */
                    bool RequireDeliveryHasBeenSet() const;

                    /**
                     * 获取邮箱地址
                     * @return Email 邮箱地址
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置邮箱地址
                     * @param Email 邮箱地址
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取电话号码
                     * @return Mobile 电话号码
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置电话号码
                     * @param Mobile 电话号码
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取关联的用户ID
                     * @return UserId 关联的用户ID
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置关联的用户ID
                     * @param UserId 关联的用户ID
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取发送方式（EMAIL/MOBILE）
                     * @return DeliveryMethod 发送方式（EMAIL/MOBILE）
                     */
                    std::string GetDeliveryMethod() const;

                    /**
                     * 设置发送方式（EMAIL/MOBILE）
                     * @param DeliveryMethod 发送方式（EMAIL/MOBILE）
                     */
                    void SetDeliveryMethod(const std::string& _deliveryMethod);

                    /**
                     * 判断参数 DeliveryMethod 是否已赋值
                     * @return DeliveryMethod 是否已赋值
                     */
                    bool DeliveryMethodHasBeenSet() const;

                    /**
                     * 获取附属信息
                     * @return RecipientExtra 附属信息
                     */
                    std::string GetRecipientExtra() const;

                    /**
                     * 设置附属信息
                     * @param RecipientExtra 附属信息
                     */
                    void SetRecipientExtra(const std::string& _recipientExtra);

                    /**
                     * 判断参数 RecipientExtra 是否已赋值
                     * @return RecipientExtra 是否已赋值
                     */
                    bool RecipientExtraHasBeenSet() const;

                private:

                    /**
                     * 签署参与者ID
                     */
                    std::string m_recipientId;
                    bool m_recipientIdHasBeenSet;

                    /**
                     * 参与者类型（ENTERPRISE/INDIVIDUAL）
                     */
                    std::string m_recipientType;
                    bool m_recipientTypeHasBeenSet;

                    /**
                     * 描述信息
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 角色名称
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * 是否需要验证，默认为false
                     */
                    bool m_requireValidation;
                    bool m_requireValidationHasBeenSet;

                    /**
                     * 是否需要签署，默认为true
                     */
                    bool m_requireSign;
                    bool m_requireSignHasBeenSet;

                    /**
                     * 添加序列
                     */
                    int64_t m_routingOrder;
                    bool m_routingOrderHasBeenSet;

                    /**
                     * 是否需要发送，默认为true
                     */
                    bool m_requireDelivery;
                    bool m_requireDeliveryHasBeenSet;

                    /**
                     * 邮箱地址
                     */
                    std::string m_email;
                    bool m_emailHasBeenSet;

                    /**
                     * 电话号码
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 关联的用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 发送方式（EMAIL/MOBILE）
                     */
                    std::string m_deliveryMethod;
                    bool m_deliveryMethodHasBeenSet;

                    /**
                     * 附属信息
                     */
                    std::string m_recipientExtra;
                    bool m_recipientExtraHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_RECIPIENT_H_
