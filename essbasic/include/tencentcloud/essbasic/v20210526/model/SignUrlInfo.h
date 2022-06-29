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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SIGNURLINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SIGNURLINFO_H_

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
                * 签署链接内容
                */
                class SignUrlInfo : public AbstractModel
                {
                public:
                    SignUrlInfo();
                    ~SignUrlInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取签署链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SignUrl 签署链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSignUrl() const;

                    /**
                     * 设置签署链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SignUrl 签署链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSignUrl(const std::string& _signUrl);

                    /**
                     * 判断参数 SignUrl 是否已赋值
                     * @return SignUrl 是否已赋值
                     */
                    bool SignUrlHasBeenSet() const;

                    /**
                     * 获取链接失效时间,默认30分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Deadline 链接失效时间,默认30分钟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置链接失效时间,默认30分钟
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Deadline 链接失效时间,默认30分钟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDeadline(const int64_t& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取当流程为顺序签署此参数有效时，数字越小优先级越高，暂不支持并行签署 可选
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SignOrder 当流程为顺序签署此参数有效时，数字越小优先级越高，暂不支持并行签署 可选
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetSignOrder() const;

                    /**
                     * 设置当流程为顺序签署此参数有效时，数字越小优先级越高，暂不支持并行签署 可选
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SignOrder 当流程为顺序签署此参数有效时，数字越小优先级越高，暂不支持并行签署 可选
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSignOrder(const int64_t& _signOrder);

                    /**
                     * 判断参数 SignOrder 是否已赋值
                     * @return SignOrder 是否已赋值
                     */
                    bool SignOrderHasBeenSet() const;

                    /**
                     * 获取签署人编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SignId 签署人编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetSignId() const;

                    /**
                     * 设置签署人编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SignId 签署人编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSignId(const std::string& _signId);

                    /**
                     * 判断参数 SignId 是否已赋值
                     * @return SignId 是否已赋值
                     */
                    bool SignIdHasBeenSet() const;

                    /**
                     * 获取自定义用户编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomUserId 自定义用户编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCustomUserId() const;

                    /**
                     * 设置自定义用户编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CustomUserId 自定义用户编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCustomUserId(const std::string& _customUserId);

                    /**
                     * 判断参数 CustomUserId 是否已赋值
                     * @return CustomUserId 是否已赋值
                     */
                    bool CustomUserIdHasBeenSet() const;

                    /**
                     * 获取用户姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 用户姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置用户姓名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 用户姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取用户手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mobile 用户手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置用户手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Mobile 用户手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMobile(const std::string& _mobile);

                    /**
                     * 判断参数 Mobile 是否已赋值
                     * @return Mobile 是否已赋值
                     */
                    bool MobileHasBeenSet() const;

                    /**
                     * 获取签署参与者机构名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OrganizationName 签署参与者机构名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置签署参与者机构名字
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OrganizationName 签署参与者机构名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取参与者类型:
ORGANIZATION 企业经办人
PERSON 自然人
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApproverType 参与者类型:
ORGANIZATION 企业经办人
PERSON 自然人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetApproverType() const;

                    /**
                     * 设置参与者类型:
ORGANIZATION 企业经办人
PERSON 自然人
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ApproverType 参与者类型:
ORGANIZATION 企业经办人
PERSON 自然人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetApproverType(const std::string& _approverType);

                    /**
                     * 判断参数 ApproverType 是否已赋值
                     * @return ApproverType 是否已赋值
                     */
                    bool ApproverTypeHasBeenSet() const;

                    /**
                     * 获取经办人身份证号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IdCardNumber 经办人身份证号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置经办人身份证号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IdCardNumber 经办人身份证号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIdCardNumber(const std::string& _idCardNumber);

                    /**
                     * 判断参数 IdCardNumber 是否已赋值
                     * @return IdCardNumber 是否已赋值
                     */
                    bool IdCardNumberHasBeenSet() const;

                    /**
                     * 获取签署链接对应流程Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowId 签署链接对应流程Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置签署链接对应流程Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FlowId 签署链接对应流程Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取企业经办人 用户在渠道的编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OpenId 企业经办人 用户在渠道的编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置企业经办人 用户在渠道的编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param OpenId 企业经办人 用户在渠道的编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     */
                    bool OpenIdHasBeenSet() const;

                private:

                    /**
                     * 签署链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_signUrl;
                    bool m_signUrlHasBeenSet;

                    /**
                     * 链接失效时间,默认30分钟
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 当流程为顺序签署此参数有效时，数字越小优先级越高，暂不支持并行签署 可选
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_signOrder;
                    bool m_signOrderHasBeenSet;

                    /**
                     * 签署人编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_signId;
                    bool m_signIdHasBeenSet;

                    /**
                     * 自定义用户编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_customUserId;
                    bool m_customUserIdHasBeenSet;

                    /**
                     * 用户姓名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 用户手机号码
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 签署参与者机构名字
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 参与者类型:
ORGANIZATION 企业经办人
PERSON 自然人
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_approverType;
                    bool m_approverTypeHasBeenSet;

                    /**
                     * 经办人身份证号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                    /**
                     * 签署链接对应流程Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 企业经办人 用户在渠道的编号
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SIGNURLINFO_H_
