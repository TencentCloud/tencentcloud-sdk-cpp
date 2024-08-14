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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_RECIPIENT_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_RECIPIENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 流程中签署方和填写方(如果有填写控件存证时)的信息
                */
                class Recipient : public AbstractModel
                {
                public:
                    Recipient();
                    ~Recipient() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取合同参与方的角色ID
                     * @return RecipientId 合同参与方的角色ID
                     * 
                     */
                    std::string GetRecipientId() const;

                    /**
                     * 设置合同参与方的角色ID
                     * @param _recipientId 合同参与方的角色ID
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
                     * 获取参与者类型, 可以选择的类型如下:
<ul><li> **ENTERPRISE** :此角色为企业参与方</li>
<li> **INDIVIDUAL** :此角色为个人参与方</li>
<li> **PROMOTER** :此角色是发起方</li></ul>
                     * @return RecipientType 参与者类型, 可以选择的类型如下:
<ul><li> **ENTERPRISE** :此角色为企业参与方</li>
<li> **INDIVIDUAL** :此角色为个人参与方</li>
<li> **PROMOTER** :此角色是发起方</li></ul>
                     * 
                     */
                    std::string GetRecipientType() const;

                    /**
                     * 设置参与者类型, 可以选择的类型如下:
<ul><li> **ENTERPRISE** :此角色为企业参与方</li>
<li> **INDIVIDUAL** :此角色为个人参与方</li>
<li> **PROMOTER** :此角色是发起方</li></ul>
                     * @param _recipientType 参与者类型, 可以选择的类型如下:
<ul><li> **ENTERPRISE** :此角色为企业参与方</li>
<li> **INDIVIDUAL** :此角色为个人参与方</li>
<li> **PROMOTER** :此角色是发起方</li></ul>
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
                     * 获取合同参与方的角色描述，长度不能超过100，只能由中文、字母、数字和下划线组成。
                     * @return Description 合同参与方的角色描述，长度不能超过100，只能由中文、字母、数字和下划线组成。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置合同参与方的角色描述，长度不能超过100，只能由中文、字母、数字和下划线组成。
                     * @param _description 合同参与方的角色描述，长度不能超过100，只能由中文、字母、数字和下划线组成。
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
                     * 获取合同参与方的角色名字，长度不能超过20，只能由中文、字母、数字和下划线组成。
                     * @return RoleName 合同参与方的角色名字，长度不能超过20，只能由中文、字母、数字和下划线组成。
                     * 
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置合同参与方的角色名字，长度不能超过20，只能由中文、字母、数字和下划线组成。
                     * @param _roleName 合同参与方的角色名字，长度不能超过20，只能由中文、字母、数字和下划线组成。
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
                     * 获取是否需要校验，
true-是，
false-否
                     * @return RequireValidation 是否需要校验，
true-是，
false-否
                     * 
                     */
                    bool GetRequireValidation() const;

                    /**
                     * 设置是否需要校验，
true-是，
false-否
                     * @param _requireValidation 是否需要校验，
true-是，
false-否
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
                     * 获取是否必须填写，
true-是，
false-否
                     * @return RequireSign 是否必须填写，
true-是，
false-否
                     * 
                     */
                    bool GetRequireSign() const;

                    /**
                     * 设置是否必须填写，
true-是，
false-否
                     * @param _requireSign 是否必须填写，
true-是，
false-否
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
                     * 获取内部字段，签署类型
                     * @return SignType 内部字段，签署类型
                     * 
                     */
                    int64_t GetSignType() const;

                    /**
                     * 设置内部字段，签署类型
                     * @param _signType 内部字段，签署类型
                     * 
                     */
                    void SetSignType(const int64_t& _signType);

                    /**
                     * 判断参数 SignType 是否已赋值
                     * @return SignType 是否已赋值
                     * 
                     */
                    bool SignTypeHasBeenSet() const;

                    /**
                     * 获取签署顺序：数字越小优先级越高
                     * @return RoutingOrder 签署顺序：数字越小优先级越高
                     * 
                     */
                    int64_t GetRoutingOrder() const;

                    /**
                     * 设置签署顺序：数字越小优先级越高
                     * @param _routingOrder 签署顺序：数字越小优先级越高
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
                     * 获取是否是发起方，
true-是 
false-否
                     * @return IsPromoter 是否是发起方，
true-是 
false-否
                     * 
                     */
                    bool GetIsPromoter() const;

                    /**
                     * 设置是否是发起方，
true-是 
false-否
                     * @param _isPromoter 是否是发起方，
true-是 
false-否
                     * 
                     */
                    void SetIsPromoter(const bool& _isPromoter);

                    /**
                     * 判断参数 IsPromoter 是否已赋值
                     * @return IsPromoter 是否已赋值
                     * 
                     */
                    bool IsPromoterHasBeenSet() const;

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
                     * 合同参与方的角色ID
                     */
                    std::string m_recipientId;
                    bool m_recipientIdHasBeenSet;

                    /**
                     * 参与者类型, 可以选择的类型如下:
<ul><li> **ENTERPRISE** :此角色为企业参与方</li>
<li> **INDIVIDUAL** :此角色为个人参与方</li>
<li> **PROMOTER** :此角色是发起方</li></ul>
                     */
                    std::string m_recipientType;
                    bool m_recipientTypeHasBeenSet;

                    /**
                     * 合同参与方的角色描述，长度不能超过100，只能由中文、字母、数字和下划线组成。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 合同参与方的角色名字，长度不能超过20，只能由中文、字母、数字和下划线组成。
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * 是否需要校验，
true-是，
false-否
                     */
                    bool m_requireValidation;
                    bool m_requireValidationHasBeenSet;

                    /**
                     * 是否必须填写，
true-是，
false-否
                     */
                    bool m_requireSign;
                    bool m_requireSignHasBeenSet;

                    /**
                     * 内部字段，签署类型
                     */
                    int64_t m_signType;
                    bool m_signTypeHasBeenSet;

                    /**
                     * 签署顺序：数字越小优先级越高
                     */
                    int64_t m_routingOrder;
                    bool m_routingOrderHasBeenSet;

                    /**
                     * 是否是发起方，
true-是 
false-否
                     */
                    bool m_isPromoter;
                    bool m_isPromoterHasBeenSet;

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

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_RECIPIENT_H_
