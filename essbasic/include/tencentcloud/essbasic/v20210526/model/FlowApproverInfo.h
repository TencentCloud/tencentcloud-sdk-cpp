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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWAPPROVERINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWAPPROVERINFO_H_

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
                * 创建流程签署人入参
                */
                class FlowApproverInfo : public AbstractModel
                {
                public:
                    FlowApproverInfo();
                    ~FlowApproverInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取签署人姓名
                     * @return Name 签署人姓名
                     */
                    std::string GetName() const;

                    /**
                     * 设置签署人姓名
                     * @param Name 签署人姓名
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取签署人手机号，脱敏显示
                     * @return Mobile 签署人手机号，脱敏显示
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置签署人手机号，脱敏显示
                     * @param Mobile 签署人手机号，脱敏显示
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取经办人身份证号
                     * @return IdCardNumber 经办人身份证号
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置经办人身份证号
                     * @param IdCardNumber 经办人身份证号
                     */
                    void SetIdCardNumber(const std::string& _idCardNumber);

                    /**
                     * 判断参数 IdCardNumber 是否已赋值
                     * @return IdCardNumber 是否已赋值
                     */
                    bool IdCardNumberHasBeenSet() const;

                    /**
                     * 获取签署完前端跳转的url，暂未使用
                     * @return JumpUrl 签署完前端跳转的url，暂未使用
                     */
                    std::string GetJumpUrl() const;

                    /**
                     * 设置签署完前端跳转的url，暂未使用
                     * @param JumpUrl 签署完前端跳转的url，暂未使用
                     */
                    void SetJumpUrl(const std::string& _jumpUrl);

                    /**
                     * 判断参数 JumpUrl 是否已赋值
                     * @return JumpUrl 是否已赋值
                     */
                    bool JumpUrlHasBeenSet() const;

                    /**
                     * 获取签署截止时间
                     * @return Deadline 签署截止时间
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置签署截止时间
                     * @param Deadline 签署截止时间
                     */
                    void SetDeadline(const int64_t& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取签署完回调url
                     * @return CallbackUrl 签署完回调url
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置签署完回调url
                     * @param CallbackUrl 签署完回调url
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取签署人类型，PERSON和ORGANIZATION
                     * @return ApproverType 签署人类型，PERSON和ORGANIZATION
                     */
                    std::string GetApproverType() const;

                    /**
                     * 设置签署人类型，PERSON和ORGANIZATION
                     * @param ApproverType 签署人类型，PERSON和ORGANIZATION
                     */
                    void SetApproverType(const std::string& _approverType);

                    /**
                     * 判断参数 ApproverType 是否已赋值
                     * @return ApproverType 是否已赋值
                     */
                    bool ApproverTypeHasBeenSet() const;

                    /**
                     * 获取用户侧第三方id
                     * @return OpenId 用户侧第三方id
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置用户侧第三方id
                     * @param OpenId 用户侧第三方id
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     */
                    bool OpenIdHasBeenSet() const;

                private:

                    /**
                     * 签署人姓名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 签署人手机号，脱敏显示
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 经办人身份证号
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                    /**
                     * 签署完前端跳转的url，暂未使用
                     */
                    std::string m_jumpUrl;
                    bool m_jumpUrlHasBeenSet;

                    /**
                     * 签署截止时间
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 签署完回调url
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 签署人类型，PERSON和ORGANIZATION
                     */
                    std::string m_approverType;
                    bool m_approverTypeHasBeenSet;

                    /**
                     * 用户侧第三方id
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWAPPROVERINFO_H_
