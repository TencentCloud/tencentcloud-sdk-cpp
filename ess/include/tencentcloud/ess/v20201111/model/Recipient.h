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
                * 流程中参与方的信息结构
                */
                class Recipient : public AbstractModel
                {
                public:
                    Recipient();
                    ~Recipient() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取签署参与者ID，唯一标识
                     * @return RecipientId 签署参与者ID，唯一标识
                     * 
                     */
                    std::string GetRecipientId() const;

                    /**
                     * 设置签署参与者ID，唯一标识
                     * @param _recipientId 签署参与者ID，唯一标识
                     * 
                     */
                    void SetRecipientId(const std::string& _recipientId);

                    /**
                     * 判断参数 RecipientId 是否已赋值
                     * @return RecipientId 是否已赋值
                     * 
                     */
                    bool RecipientIdHasBeenSet() const;

                    /**
                     * 获取参与者类型。
默认为空。
ENTERPRISE-企业；
INDIVIDUAL-个人；
PROMOTER-发起方
                     * @return RecipientType 参与者类型。
默认为空。
ENTERPRISE-企业；
INDIVIDUAL-个人；
PROMOTER-发起方
                     * 
                     */
                    std::string GetRecipientType() const;

                    /**
                     * 设置参与者类型。
默认为空。
ENTERPRISE-企业；
INDIVIDUAL-个人；
PROMOTER-发起方
                     * @param _recipientType 参与者类型。
默认为空。
ENTERPRISE-企业；
INDIVIDUAL-个人；
PROMOTER-发起方
                     * 
                     */
                    void SetRecipientType(const std::string& _recipientType);

                    /**
                     * 判断参数 RecipientType 是否已赋值
                     * @return RecipientType 是否已赋值
                     * 
                     */
                    bool RecipientTypeHasBeenSet() const;

                    /**
                     * 获取描述信息
                     * @return Description 描述信息
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述信息
                     * @param _description 描述信息
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
                     * 获取角色名称
                     * @return RoleName 角色名称
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置角色名称
                     * @param _roleName 角色名称
                     * 
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     * 
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取是否需要验证，
默认为false-不需要验证
                     * @return RequireValidation 是否需要验证，
默认为false-不需要验证
                     * 
                     */
                    bool GetRequireValidation() const;

                    /**
                     * 设置是否需要验证，
默认为false-不需要验证
                     * @param _requireValidation 是否需要验证，
默认为false-不需要验证
                     * 
                     */
                    void SetRequireValidation(const bool& _requireValidation);

                    /**
                     * 判断参数 RequireValidation 是否已赋值
                     * @return RequireValidation 是否已赋值
                     * 
                     */
                    bool RequireValidationHasBeenSet() const;

                    /**
                     * 获取是否需要签署，
默认为true-需要签署
                     * @return RequireSign 是否需要签署，
默认为true-需要签署
                     * 
                     */
                    bool GetRequireSign() const;

                    /**
                     * 设置是否需要签署，
默认为true-需要签署
                     * @param _requireSign 是否需要签署，
默认为true-需要签署
                     * 
                     */
                    void SetRequireSign(const bool& _requireSign);

                    /**
                     * 判断参数 RequireSign 是否已赋值
                     * @return RequireSign 是否已赋值
                     * 
                     */
                    bool RequireSignHasBeenSet() const;

                    /**
                     * 获取此参与方添加的顺序，从0～N
                     * @return RoutingOrder 此参与方添加的顺序，从0～N
                     * 
                     */
                    int64_t GetRoutingOrder() const;

                    /**
                     * 设置此参与方添加的顺序，从0～N
                     * @param _routingOrder 此参与方添加的顺序，从0～N
                     * 
                     */
                    void SetRoutingOrder(const int64_t& _routingOrder);

                    /**
                     * 判断参数 RoutingOrder 是否已赋值
                     * @return RoutingOrder 是否已赋值
                     * 
                     */
                    bool RoutingOrderHasBeenSet() const;

                    /**
                     * 获取是否需要发送，
默认为true-需要发送
                     * @return RequireDelivery 是否需要发送，
默认为true-需要发送
                     * 
                     */
                    bool GetRequireDelivery() const;

                    /**
                     * 设置是否需要发送，
默认为true-需要发送
                     * @param _requireDelivery 是否需要发送，
默认为true-需要发送
                     * 
                     */
                    void SetRequireDelivery(const bool& _requireDelivery);

                    /**
                     * 判断参数 RequireDelivery 是否已赋值
                     * @return RequireDelivery 是否已赋值
                     * 
                     */
                    bool RequireDeliveryHasBeenSet() const;

                    /**
                     * 获取邮箱地址
                     * @return Email 邮箱地址
                     * 
                     */
                    std::string GetEmail() const;

                    /**
                     * 设置邮箱地址
                     * @param _email 邮箱地址
                     * 
                     */
                    void SetEmail(const std::string& _email);

                    /**
                     * 判断参数 Email 是否已赋值
                     * @return Email 是否已赋值
                     * 
                     */
                    bool EmailHasBeenSet() const;

                    /**
                     * 获取电话号码
                     * @return Mobile 电话号码
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置电话号码
                     * @param _mobile 电话号码
                     * 
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     * 
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取关联的用户ID，电子签系统的用户ID
                     * @return UserId 关联的用户ID，电子签系统的用户ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置关联的用户ID，电子签系统的用户ID
                     * @param _userId 关联的用户ID，电子签系统的用户ID
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取发送方式，默认为EMAIL。
EMAIL-邮件；
MOBILE-手机短信；
WECHAT-微信通知
                     * @return DeliveryMethod 发送方式，默认为EMAIL。
EMAIL-邮件；
MOBILE-手机短信；
WECHAT-微信通知
                     * 
                     */
                    std::string GetDeliveryMethod() const;

                    /**
                     * 设置发送方式，默认为EMAIL。
EMAIL-邮件；
MOBILE-手机短信；
WECHAT-微信通知
                     * @param _deliveryMethod 发送方式，默认为EMAIL。
EMAIL-邮件；
MOBILE-手机短信；
WECHAT-微信通知
                     * 
                     */
                    void SetDeliveryMethod(const std::string& _deliveryMethod);

                    /**
                     * 判断参数 DeliveryMethod 是否已赋值
                     * @return DeliveryMethod 是否已赋值
                     * 
                     */
                    bool DeliveryMethodHasBeenSet() const;

                    /**
                     * 获取参与方的一些附属信息，json格式
                     * @return RecipientExtra 参与方的一些附属信息，json格式
                     * 
                     */
                    std::string GetRecipientExtra() const;

                    /**
                     * 设置参与方的一些附属信息，json格式
                     * @param _recipientExtra 参与方的一些附属信息，json格式
                     * 
                     */
                    void SetRecipientExtra(const std::string& _recipientExtra);

                    /**
                     * 判断参数 RecipientExtra 是否已赋值
                     * @return RecipientExtra 是否已赋值
                     * 
                     */
                    bool RecipientExtraHasBeenSet() const;

                    /**
                     * 获取签署人查看合同校验方式, 支持的类型如下:
<ul><li> 1 :实名认证查看</li>
<li> 2 :手机号校验查看</li></ul>
                     * @return ApproverVerifyTypes 签署人查看合同校验方式, 支持的类型如下:
<ul><li> 1 :实名认证查看</li>
<li> 2 :手机号校验查看</li></ul>
                     * 
                     */
                    std::vector<int64_t> GetApproverVerifyTypes() const;

                    /**
                     * 设置签署人查看合同校验方式, 支持的类型如下:
<ul><li> 1 :实名认证查看</li>
<li> 2 :手机号校验查看</li></ul>
                     * @param _approverVerifyTypes 签署人查看合同校验方式, 支持的类型如下:
<ul><li> 1 :实名认证查看</li>
<li> 2 :手机号校验查看</li></ul>
                     * 
                     */
                    void SetApproverVerifyTypes(const std::vector<int64_t>& _approverVerifyTypes);

                    /**
                     * 判断参数 ApproverVerifyTypes 是否已赋值
                     * @return ApproverVerifyTypes 是否已赋值
                     * 
                     */
                    bool ApproverVerifyTypesHasBeenSet() const;

                    /**
                     * 获取签署人进行合同签署时的认证方式，支持的类型如下:
<ul><li> 1 :人脸认证</li>
<li> 2 :签署密码</li>
<li> 3 :运营商三要素认证</li>
<li> 4 :UKey认证</li>
<li> 5 :设备指纹识别</li>
<li> 6 :设备面容识别</li></ul>
                     * @return ApproverSignTypes 签署人进行合同签署时的认证方式，支持的类型如下:
<ul><li> 1 :人脸认证</li>
<li> 2 :签署密码</li>
<li> 3 :运营商三要素认证</li>
<li> 4 :UKey认证</li>
<li> 5 :设备指纹识别</li>
<li> 6 :设备面容识别</li></ul>
                     * 
                     */
                    std::vector<int64_t> GetApproverSignTypes() const;

                    /**
                     * 设置签署人进行合同签署时的认证方式，支持的类型如下:
<ul><li> 1 :人脸认证</li>
<li> 2 :签署密码</li>
<li> 3 :运营商三要素认证</li>
<li> 4 :UKey认证</li>
<li> 5 :设备指纹识别</li>
<li> 6 :设备面容识别</li></ul>
                     * @param _approverSignTypes 签署人进行合同签署时的认证方式，支持的类型如下:
<ul><li> 1 :人脸认证</li>
<li> 2 :签署密码</li>
<li> 3 :运营商三要素认证</li>
<li> 4 :UKey认证</li>
<li> 5 :设备指纹识别</li>
<li> 6 :设备面容识别</li></ul>
                     * 
                     */
                    void SetApproverSignTypes(const std::vector<int64_t>& _approverSignTypes);

                    /**
                     * 判断参数 ApproverSignTypes 是否已赋值
                     * @return ApproverSignTypes 是否已赋值
                     * 
                     */
                    bool ApproverSignTypesHasBeenSet() const;

                    /**
                     * 获取签署方是否可以转他人处理

<ul><li> **false** : ( 默认)可以转他人处理</li>
<li> **true** :不可以转他人处理</li></ul>
                     * @return NoTransfer 签署方是否可以转他人处理

<ul><li> **false** : ( 默认)可以转他人处理</li>
<li> **true** :不可以转他人处理</li></ul>
                     * 
                     */
                    bool GetNoTransfer() const;

                    /**
                     * 设置签署方是否可以转他人处理

<ul><li> **false** : ( 默认)可以转他人处理</li>
<li> **true** :不可以转他人处理</li></ul>
                     * @param _noTransfer 签署方是否可以转他人处理

<ul><li> **false** : ( 默认)可以转他人处理</li>
<li> **true** :不可以转他人处理</li></ul>
                     * 
                     */
                    void SetNoTransfer(const bool& _noTransfer);

                    /**
                     * 判断参数 NoTransfer 是否已赋值
                     * @return NoTransfer 是否已赋值
                     * 
                     */
                    bool NoTransferHasBeenSet() const;

                private:

                    /**
                     * 签署参与者ID，唯一标识
                     */
                    std::string m_recipientId;
                    bool m_recipientIdHasBeenSet;

                    /**
                     * 参与者类型。
默认为空。
ENTERPRISE-企业；
INDIVIDUAL-个人；
PROMOTER-发起方
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
                     * 是否需要验证，
默认为false-不需要验证
                     */
                    bool m_requireValidation;
                    bool m_requireValidationHasBeenSet;

                    /**
                     * 是否需要签署，
默认为true-需要签署
                     */
                    bool m_requireSign;
                    bool m_requireSignHasBeenSet;

                    /**
                     * 此参与方添加的顺序，从0～N
                     */
                    int64_t m_routingOrder;
                    bool m_routingOrderHasBeenSet;

                    /**
                     * 是否需要发送，
默认为true-需要发送
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
                     * 关联的用户ID，电子签系统的用户ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 发送方式，默认为EMAIL。
EMAIL-邮件；
MOBILE-手机短信；
WECHAT-微信通知
                     */
                    std::string m_deliveryMethod;
                    bool m_deliveryMethodHasBeenSet;

                    /**
                     * 参与方的一些附属信息，json格式
                     */
                    std::string m_recipientExtra;
                    bool m_recipientExtraHasBeenSet;

                    /**
                     * 签署人查看合同校验方式, 支持的类型如下:
<ul><li> 1 :实名认证查看</li>
<li> 2 :手机号校验查看</li></ul>
                     */
                    std::vector<int64_t> m_approverVerifyTypes;
                    bool m_approverVerifyTypesHasBeenSet;

                    /**
                     * 签署人进行合同签署时的认证方式，支持的类型如下:
<ul><li> 1 :人脸认证</li>
<li> 2 :签署密码</li>
<li> 3 :运营商三要素认证</li>
<li> 4 :UKey认证</li>
<li> 5 :设备指纹识别</li>
<li> 6 :设备面容识别</li></ul>
                     */
                    std::vector<int64_t> m_approverSignTypes;
                    bool m_approverSignTypesHasBeenSet;

                    /**
                     * 签署方是否可以转他人处理

<ul><li> **false** : ( 默认)可以转他人处理</li>
<li> **true** :不可以转他人处理</li></ul>
                     */
                    bool m_noTransfer;
                    bool m_noTransferHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_RECIPIENT_H_
