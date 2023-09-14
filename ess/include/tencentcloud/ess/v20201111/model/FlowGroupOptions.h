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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_FLOWGROUPOPTIONS_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_FLOWGROUPOPTIONS_H_

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
                * 此结构体(FlowGroupOptions)描述的是合同组的个性化配置，支持控制是否发送短信、未实名个人签署方查看合同组时是否需要实名认证（仅在合同组文件发起配置时生效）
                */
                class FlowGroupOptions : public AbstractModel
                {
                public:
                    FlowGroupOptions();
                    ~FlowGroupOptions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取签署人校验方式,支持以下类型
<ul><li>VerifyCheck : 人脸识别 (默认值)</li>
<li>MobileCheck : 手机号验证</li></ul>
参数说明：此参数仅在合同组文件发起有效，可选人脸识别或手机号验证两种方式，若选择后者，未实名个人签署方在签署合同时，无需经过实名认证和意愿确认两次人脸识别，该能力仅适用于个人签署方。
                     * @return ApproverVerifyType 签署人校验方式,支持以下类型
<ul><li>VerifyCheck : 人脸识别 (默认值)</li>
<li>MobileCheck : 手机号验证</li></ul>
参数说明：此参数仅在合同组文件发起有效，可选人脸识别或手机号验证两种方式，若选择后者，未实名个人签署方在签署合同时，无需经过实名认证和意愿确认两次人脸识别，该能力仅适用于个人签署方。
                     * 
                     */
                    std::string GetApproverVerifyType() const;

                    /**
                     * 设置签署人校验方式,支持以下类型
<ul><li>VerifyCheck : 人脸识别 (默认值)</li>
<li>MobileCheck : 手机号验证</li></ul>
参数说明：此参数仅在合同组文件发起有效，可选人脸识别或手机号验证两种方式，若选择后者，未实名个人签署方在签署合同时，无需经过实名认证和意愿确认两次人脸识别，该能力仅适用于个人签署方。
                     * @param _approverVerifyType 签署人校验方式,支持以下类型
<ul><li>VerifyCheck : 人脸识别 (默认值)</li>
<li>MobileCheck : 手机号验证</li></ul>
参数说明：此参数仅在合同组文件发起有效，可选人脸识别或手机号验证两种方式，若选择后者，未实名个人签署方在签署合同时，无需经过实名认证和意愿确认两次人脸识别，该能力仅适用于个人签署方。
                     * 
                     */
                    void SetApproverVerifyType(const std::string& _approverVerifyType);

                    /**
                     * 判断参数 ApproverVerifyType 是否已赋值
                     * @return ApproverVerifyType 是否已赋值
                     * 
                     */
                    bool ApproverVerifyTypeHasBeenSet() const;

                    /**
                     * 获取发起合同（流程）组本方企业经办人通知方式
签署通知类型，支持以下类型
<ul><li>sms : 短信 (默认值)</li><li>none : 不通知</li></ul>
                     * @return SelfOrganizationApproverNotifyType 发起合同（流程）组本方企业经办人通知方式
签署通知类型，支持以下类型
<ul><li>sms : 短信 (默认值)</li><li>none : 不通知</li></ul>
                     * 
                     */
                    std::string GetSelfOrganizationApproverNotifyType() const;

                    /**
                     * 设置发起合同（流程）组本方企业经办人通知方式
签署通知类型，支持以下类型
<ul><li>sms : 短信 (默认值)</li><li>none : 不通知</li></ul>
                     * @param _selfOrganizationApproverNotifyType 发起合同（流程）组本方企业经办人通知方式
签署通知类型，支持以下类型
<ul><li>sms : 短信 (默认值)</li><li>none : 不通知</li></ul>
                     * 
                     */
                    void SetSelfOrganizationApproverNotifyType(const std::string& _selfOrganizationApproverNotifyType);

                    /**
                     * 判断参数 SelfOrganizationApproverNotifyType 是否已赋值
                     * @return SelfOrganizationApproverNotifyType 是否已赋值
                     * 
                     */
                    bool SelfOrganizationApproverNotifyTypeHasBeenSet() const;

                    /**
                     * 获取发起合同（流程）组他方经办人通知方式
签署通知类型，支持以下类型
<ul><li>sms : 短信 (默认值)</li><li>none : 不通知</li></ul>
                     * @return OtherApproverNotifyType 发起合同（流程）组他方经办人通知方式
签署通知类型，支持以下类型
<ul><li>sms : 短信 (默认值)</li><li>none : 不通知</li></ul>
                     * 
                     */
                    std::string GetOtherApproverNotifyType() const;

                    /**
                     * 设置发起合同（流程）组他方经办人通知方式
签署通知类型，支持以下类型
<ul><li>sms : 短信 (默认值)</li><li>none : 不通知</li></ul>
                     * @param _otherApproverNotifyType 发起合同（流程）组他方经办人通知方式
签署通知类型，支持以下类型
<ul><li>sms : 短信 (默认值)</li><li>none : 不通知</li></ul>
                     * 
                     */
                    void SetOtherApproverNotifyType(const std::string& _otherApproverNotifyType);

                    /**
                     * 判断参数 OtherApproverNotifyType 是否已赋值
                     * @return OtherApproverNotifyType 是否已赋值
                     * 
                     */
                    bool OtherApproverNotifyTypeHasBeenSet() const;

                private:

                    /**
                     * 签署人校验方式,支持以下类型
<ul><li>VerifyCheck : 人脸识别 (默认值)</li>
<li>MobileCheck : 手机号验证</li></ul>
参数说明：此参数仅在合同组文件发起有效，可选人脸识别或手机号验证两种方式，若选择后者，未实名个人签署方在签署合同时，无需经过实名认证和意愿确认两次人脸识别，该能力仅适用于个人签署方。
                     */
                    std::string m_approverVerifyType;
                    bool m_approverVerifyTypeHasBeenSet;

                    /**
                     * 发起合同（流程）组本方企业经办人通知方式
签署通知类型，支持以下类型
<ul><li>sms : 短信 (默认值)</li><li>none : 不通知</li></ul>
                     */
                    std::string m_selfOrganizationApproverNotifyType;
                    bool m_selfOrganizationApproverNotifyTypeHasBeenSet;

                    /**
                     * 发起合同（流程）组他方经办人通知方式
签署通知类型，支持以下类型
<ul><li>sms : 短信 (默认值)</li><li>none : 不通知</li></ul>
                     */
                    std::string m_otherApproverNotifyType;
                    bool m_otherApproverNotifyTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FLOWGROUPOPTIONS_H_
