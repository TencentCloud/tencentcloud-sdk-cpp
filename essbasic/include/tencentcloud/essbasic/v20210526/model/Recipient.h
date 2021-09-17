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
                     * 获取签署人唯一标识
                     * @return RecipientId 签署人唯一标识
                     */
                    std::string GetRecipientId() const;

                    /**
                     * 设置签署人唯一标识
                     * @param RecipientId 签署人唯一标识
                     */
                    void SetRecipientId(const std::string& _recipientId);

                    /**
                     * 判断参数 RecipientId 是否已赋值
                     * @return RecipientId 是否已赋值
                     */
                    bool RecipientIdHasBeenSet() const;

                    /**
                     * 获取签署方类型：ENTERPRISE-企业INDIVIDUAL-自然人
                     * @return RecipientType 签署方类型：ENTERPRISE-企业INDIVIDUAL-自然人
                     */
                    std::string GetRecipientType() const;

                    /**
                     * 设置签署方类型：ENTERPRISE-企业INDIVIDUAL-自然人
                     * @param RecipientType 签署方类型：ENTERPRISE-企业INDIVIDUAL-自然人
                     */
                    void SetRecipientType(const std::string& _recipientType);

                    /**
                     * 判断参数 RecipientType 是否已赋值
                     * @return RecipientType 是否已赋值
                     */
                    bool RecipientTypeHasBeenSet() const;

                    /**
                     * 获取描述
                     * @return Description 描述
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置描述
                     * @param Description 描述
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取签署方备注信息
                     * @return RoleName 签署方备注信息
                     */
                    std::string GetRoleName() const;

                    /**
                     * 设置签署方备注信息
                     * @param RoleName 签署方备注信息
                     */
                    void SetRoleName(const std::string& _roleName);

                    /**
                     * 判断参数 RoleName 是否已赋值
                     * @return RoleName 是否已赋值
                     */
                    bool RoleNameHasBeenSet() const;

                    /**
                     * 获取是否需要校验
                     * @return RequireValidation 是否需要校验
                     */
                    bool GetRequireValidation() const;

                    /**
                     * 设置是否需要校验
                     * @param RequireValidation 是否需要校验
                     */
                    void SetRequireValidation(const bool& _requireValidation);

                    /**
                     * 判断参数 RequireValidation 是否已赋值
                     * @return RequireValidation 是否已赋值
                     */
                    bool RequireValidationHasBeenSet() const;

                    /**
                     * 获取是否必须填写
                     * @return RequireSign 是否必须填写
                     */
                    bool GetRequireSign() const;

                    /**
                     * 设置是否必须填写
                     * @param RequireSign 是否必须填写
                     */
                    void SetRequireSign(const bool& _requireSign);

                    /**
                     * 判断参数 RequireSign 是否已赋值
                     * @return RequireSign 是否已赋值
                     */
                    bool RequireSignHasBeenSet() const;

                    /**
                     * 获取签署类型
                     * @return SignType 签署类型
                     */
                    int64_t GetSignType() const;

                    /**
                     * 设置签署类型
                     * @param SignType 签署类型
                     */
                    void SetSignType(const int64_t& _signType);

                    /**
                     * 判断参数 SignType 是否已赋值
                     * @return SignType 是否已赋值
                     */
                    bool SignTypeHasBeenSet() const;

                    /**
                     * 获取签署顺序：数字越小优先级越高
                     * @return RoutingOrder 签署顺序：数字越小优先级越高
                     */
                    int64_t GetRoutingOrder() const;

                    /**
                     * 设置签署顺序：数字越小优先级越高
                     * @param RoutingOrder 签署顺序：数字越小优先级越高
                     */
                    void SetRoutingOrder(const int64_t& _routingOrder);

                    /**
                     * 判断参数 RoutingOrder 是否已赋值
                     * @return RoutingOrder 是否已赋值
                     */
                    bool RoutingOrderHasBeenSet() const;

                private:

                    /**
                     * 签署人唯一标识
                     */
                    std::string m_recipientId;
                    bool m_recipientIdHasBeenSet;

                    /**
                     * 签署方类型：ENTERPRISE-企业INDIVIDUAL-自然人
                     */
                    std::string m_recipientType;
                    bool m_recipientTypeHasBeenSet;

                    /**
                     * 描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 签署方备注信息
                     */
                    std::string m_roleName;
                    bool m_roleNameHasBeenSet;

                    /**
                     * 是否需要校验
                     */
                    bool m_requireValidation;
                    bool m_requireValidationHasBeenSet;

                    /**
                     * 是否必须填写
                     */
                    bool m_requireSign;
                    bool m_requireSignHasBeenSet;

                    /**
                     * 签署类型
                     */
                    int64_t m_signType;
                    bool m_signTypeHasBeenSet;

                    /**
                     * 签署顺序：数字越小优先级越高
                     */
                    int64_t m_routingOrder;
                    bool m_routingOrderHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_RECIPIENT_H_
