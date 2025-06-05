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
                     * 获取签署链接，过期时间为90天

注：<font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）
                     * @return SignUrl 签署链接，过期时间为90天

注：<font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）
                     * 
                     */
                    std::string GetSignUrl() const;

                    /**
                     * 设置签署链接，过期时间为90天

注：<font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）
                     * @param _signUrl 签署链接，过期时间为90天

注：<font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）
                     * 
                     */
                    void SetSignUrl(const std::string& _signUrl);

                    /**
                     * 判断参数 SignUrl 是否已赋值
                     * @return SignUrl 是否已赋值
                     * 
                     */
                    bool SignUrlHasBeenSet() const;

                    /**
                     * 获取合同过期时间戳，单位秒
                     * @return Deadline 合同过期时间戳，单位秒
                     * 
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置合同过期时间戳，单位秒
                     * @param _deadline 合同过期时间戳，单位秒
                     * 
                     */
                    void SetDeadline(const int64_t& _deadline);

                    /**
                     * 判断参数 Deadline 是否已赋值
                     * @return Deadline 是否已赋值
                     * 
                     */
                    bool DeadlineHasBeenSet() const;

                    /**
                     * 获取当流程为顺序签署此参数有效时，数字越小优先级越高，暂不支持并行签署 可选
                     * @return SignOrder 当流程为顺序签署此参数有效时，数字越小优先级越高，暂不支持并行签署 可选
                     * 
                     */
                    int64_t GetSignOrder() const;

                    /**
                     * 设置当流程为顺序签署此参数有效时，数字越小优先级越高，暂不支持并行签署 可选
                     * @param _signOrder 当流程为顺序签署此参数有效时，数字越小优先级越高，暂不支持并行签署 可选
                     * 
                     */
                    void SetSignOrder(const int64_t& _signOrder);

                    /**
                     * 判断参数 SignOrder 是否已赋值
                     * @return SignOrder 是否已赋值
                     * 
                     */
                    bool SignOrderHasBeenSet() const;

                    /**
                     * 获取签署人编号
                     * @return SignId 签署人编号
                     * 
                     */
                    std::string GetSignId() const;

                    /**
                     * 设置签署人编号
                     * @param _signId 签署人编号
                     * 
                     */
                    void SetSignId(const std::string& _signId);

                    /**
                     * 判断参数 SignId 是否已赋值
                     * @return SignId 是否已赋值
                     * 
                     */
                    bool SignIdHasBeenSet() const;

                    /**
                     * 获取自定义用户编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CustomUserId 自定义用户编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    std::string GetCustomUserId() const;

                    /**
                     * 设置自定义用户编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _customUserId 自定义用户编号
注意：此字段可能返回 null，表示取不到有效值。
                     * @deprecated
                     */
                    void SetCustomUserId(const std::string& _customUserId);

                    /**
                     * 判断参数 CustomUserId 是否已赋值
                     * @return CustomUserId 是否已赋值
                     * @deprecated
                     */
                    bool CustomUserIdHasBeenSet() const;

                    /**
                     * 获取用户姓名
                     * @return Name 用户姓名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置用户姓名
                     * @param _name 用户姓名
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
                     * 获取用户手机号码
                     * @return Mobile 用户手机号码
                     * 
                     */
                    std::string GetMobile() const;

                    /**
                     * 设置用户手机号码
                     * @param _mobile 用户手机号码
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
                     * 获取签署参与者机构名字
                     * @return OrganizationName 签署参与者机构名字
                     * 
                     */
                    std::string GetOrganizationName() const;

                    /**
                     * 设置签署参与者机构名字
                     * @param _organizationName 签署参与者机构名字
                     * 
                     */
                    void SetOrganizationName(const std::string& _organizationName);

                    /**
                     * 判断参数 OrganizationName 是否已赋值
                     * @return OrganizationName 是否已赋值
                     * 
                     */
                    bool OrganizationNameHasBeenSet() const;

                    /**
                     * 获取参与者类型, 类型如下:
**ORGANIZATION**:企业经办人
**PERSON**: 自然人
                     * @return ApproverType 参与者类型, 类型如下:
**ORGANIZATION**:企业经办人
**PERSON**: 自然人
                     * 
                     */
                    std::string GetApproverType() const;

                    /**
                     * 设置参与者类型, 类型如下:
**ORGANIZATION**:企业经办人
**PERSON**: 自然人
                     * @param _approverType 参与者类型, 类型如下:
**ORGANIZATION**:企业经办人
**PERSON**: 自然人
                     * 
                     */
                    void SetApproverType(const std::string& _approverType);

                    /**
                     * 判断参数 ApproverType 是否已赋值
                     * @return ApproverType 是否已赋值
                     * 
                     */
                    bool ApproverTypeHasBeenSet() const;

                    /**
                     * 获取经办人身份证号
                     * @return IdCardNumber 经办人身份证号
                     * 
                     */
                    std::string GetIdCardNumber() const;

                    /**
                     * 设置经办人身份证号
                     * @param _idCardNumber 经办人身份证号
                     * 
                     */
                    void SetIdCardNumber(const std::string& _idCardNumber);

                    /**
                     * 判断参数 IdCardNumber 是否已赋值
                     * @return IdCardNumber 是否已赋值
                     * 
                     */
                    bool IdCardNumberHasBeenSet() const;

                    /**
                     * 获取签署链接对应流程Id
                     * @return FlowId 签署链接对应流程Id
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置签署链接对应流程Id
                     * @param _flowId 签署链接对应流程Id
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取企业经办人 用户在渠道的编号
                     * @return OpenId 企业经办人 用户在渠道的编号
                     * 
                     */
                    std::string GetOpenId() const;

                    /**
                     * 设置企业经办人 用户在渠道的编号
                     * @param _openId 企业经办人 用户在渠道的编号
                     * 
                     */
                    void SetOpenId(const std::string& _openId);

                    /**
                     * 判断参数 OpenId 是否已赋值
                     * @return OpenId 是否已赋值
                     * 
                     */
                    bool OpenIdHasBeenSet() const;

                    /**
                     * 获取合同组签署链接对应的合同组id
                     * @return FlowGroupId 合同组签署链接对应的合同组id
                     * 
                     */
                    std::string GetFlowGroupId() const;

                    /**
                     * 设置合同组签署链接对应的合同组id
                     * @param _flowGroupId 合同组签署链接对应的合同组id
                     * 
                     */
                    void SetFlowGroupId(const std::string& _flowGroupId);

                    /**
                     * 判断参数 FlowGroupId 是否已赋值
                     * @return FlowGroupId 是否已赋值
                     * 
                     */
                    bool FlowGroupIdHasBeenSet() const;

                    /**
                     * 获取二维码，在生成动态签署人跳转封面页链接时返回

注：`此二维码下载链接有效期为5分钟，可下载二维码后本地保存，二维码有效期为90天。`
                     * @return SignQrcodeUrl 二维码，在生成动态签署人跳转封面页链接时返回

注：`此二维码下载链接有效期为5分钟，可下载二维码后本地保存，二维码有效期为90天。`
                     * 
                     */
                    std::string GetSignQrcodeUrl() const;

                    /**
                     * 设置二维码，在生成动态签署人跳转封面页链接时返回

注：`此二维码下载链接有效期为5分钟，可下载二维码后本地保存，二维码有效期为90天。`
                     * @param _signQrcodeUrl 二维码，在生成动态签署人跳转封面页链接时返回

注：`此二维码下载链接有效期为5分钟，可下载二维码后本地保存，二维码有效期为90天。`
                     * 
                     */
                    void SetSignQrcodeUrl(const std::string& _signQrcodeUrl);

                    /**
                     * 判断参数 SignQrcodeUrl 是否已赋值
                     * @return SignQrcodeUrl 是否已赋值
                     * 
                     */
                    bool SignQrcodeUrlHasBeenSet() const;

                private:

                    /**
                     * 签署链接，过期时间为90天

注：<font color="red">生成的链路后面不能再增加参数</font>（会出现覆盖链接中已有参数导致错误）
                     */
                    std::string m_signUrl;
                    bool m_signUrlHasBeenSet;

                    /**
                     * 合同过期时间戳，单位秒
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 当流程为顺序签署此参数有效时，数字越小优先级越高，暂不支持并行签署 可选
                     */
                    int64_t m_signOrder;
                    bool m_signOrderHasBeenSet;

                    /**
                     * 签署人编号
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
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 用户手机号码
                     */
                    std::string m_mobile;
                    bool m_mobileHasBeenSet;

                    /**
                     * 签署参与者机构名字
                     */
                    std::string m_organizationName;
                    bool m_organizationNameHasBeenSet;

                    /**
                     * 参与者类型, 类型如下:
**ORGANIZATION**:企业经办人
**PERSON**: 自然人
                     */
                    std::string m_approverType;
                    bool m_approverTypeHasBeenSet;

                    /**
                     * 经办人身份证号
                     */
                    std::string m_idCardNumber;
                    bool m_idCardNumberHasBeenSet;

                    /**
                     * 签署链接对应流程Id
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 企业经办人 用户在渠道的编号
                     */
                    std::string m_openId;
                    bool m_openIdHasBeenSet;

                    /**
                     * 合同组签署链接对应的合同组id
                     */
                    std::string m_flowGroupId;
                    bool m_flowGroupIdHasBeenSet;

                    /**
                     * 二维码，在生成动态签署人跳转封面页链接时返回

注：`此二维码下载链接有效期为5分钟，可下载二维码后本地保存，二维码有效期为90天。`
                     */
                    std::string m_signQrcodeUrl;
                    bool m_signQrcodeUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_SIGNURLINFO_H_
