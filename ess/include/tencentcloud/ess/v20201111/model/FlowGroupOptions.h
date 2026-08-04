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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_FLOWGROUPOPTIONS_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_FLOWGROUPOPTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/SignComponentConfig.h>


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
                     * 获取<p>签署人校验方式,支持以下类型</p><ul><li>VerifyCheck : 人脸识别 (默认值)</li><li>MobileCheck : 手机号验证</li></ul>参数说明：此参数仅在合同组文件发起有效，可选人脸识别或手机号验证两种方式，若选择后者，未实名个人签署方在签署合同时，无需经过实名认证和意愿确认两次人脸识别，该能力仅适用于个人签署方。
                     * @return ApproverVerifyType <p>签署人校验方式,支持以下类型</p><ul><li>VerifyCheck : 人脸识别 (默认值)</li><li>MobileCheck : 手机号验证</li></ul>参数说明：此参数仅在合同组文件发起有效，可选人脸识别或手机号验证两种方式，若选择后者，未实名个人签署方在签署合同时，无需经过实名认证和意愿确认两次人脸识别，该能力仅适用于个人签署方。
                     * 
                     */
                    std::string GetApproverVerifyType() const;

                    /**
                     * 设置<p>签署人校验方式,支持以下类型</p><ul><li>VerifyCheck : 人脸识别 (默认值)</li><li>MobileCheck : 手机号验证</li></ul>参数说明：此参数仅在合同组文件发起有效，可选人脸识别或手机号验证两种方式，若选择后者，未实名个人签署方在签署合同时，无需经过实名认证和意愿确认两次人脸识别，该能力仅适用于个人签署方。
                     * @param _approverVerifyType <p>签署人校验方式,支持以下类型</p><ul><li>VerifyCheck : 人脸识别 (默认值)</li><li>MobileCheck : 手机号验证</li></ul>参数说明：此参数仅在合同组文件发起有效，可选人脸识别或手机号验证两种方式，若选择后者，未实名个人签署方在签署合同时，无需经过实名认证和意愿确认两次人脸识别，该能力仅适用于个人签署方。
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
                     * 获取<p>发起合同（流程）组本方企业经办人通知方式<br>签署通知类型，支持以下类型</p><ul><li>sms : 短信 (默认值)</li><li>none : 不通知</li></ul>
                     * @return SelfOrganizationApproverNotifyType <p>发起合同（流程）组本方企业经办人通知方式<br>签署通知类型，支持以下类型</p><ul><li>sms : 短信 (默认值)</li><li>none : 不通知</li></ul>
                     * 
                     */
                    std::string GetSelfOrganizationApproverNotifyType() const;

                    /**
                     * 设置<p>发起合同（流程）组本方企业经办人通知方式<br>签署通知类型，支持以下类型</p><ul><li>sms : 短信 (默认值)</li><li>none : 不通知</li></ul>
                     * @param _selfOrganizationApproverNotifyType <p>发起合同（流程）组本方企业经办人通知方式<br>签署通知类型，支持以下类型</p><ul><li>sms : 短信 (默认值)</li><li>none : 不通知</li></ul>
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
                     * 获取<p>发起合同（流程）组他方经办人通知方式<br>签署通知类型，支持以下类型</p><ul><li>sms : 短信 (默认值)</li><li>none : 不通知</li></ul>
                     * @return OtherApproverNotifyType <p>发起合同（流程）组他方经办人通知方式<br>签署通知类型，支持以下类型</p><ul><li>sms : 短信 (默认值)</li><li>none : 不通知</li></ul>
                     * 
                     */
                    std::string GetOtherApproverNotifyType() const;

                    /**
                     * 设置<p>发起合同（流程）组他方经办人通知方式<br>签署通知类型，支持以下类型</p><ul><li>sms : 短信 (默认值)</li><li>none : 不通知</li></ul>
                     * @param _otherApproverNotifyType <p>发起合同（流程）组他方经办人通知方式<br>签署通知类型，支持以下类型</p><ul><li>sms : 短信 (默认值)</li><li>none : 不通知</li></ul>
                     * 
                     */
                    void SetOtherApproverNotifyType(const std::string& _otherApproverNotifyType);

                    /**
                     * 判断参数 OtherApproverNotifyType 是否已赋值
                     * @return OtherApproverNotifyType 是否已赋值
                     * 
                     */
                    bool OtherApproverNotifyTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否开启发起合同组的发起审批，默认：false(不开启)，开启后，发起合同组会提交电子签内置审批流</p>
                     * @return FlowGroupNeedWorkflow <p>是否开启发起合同组的发起审批，默认：false(不开启)，开启后，发起合同组会提交电子签内置审批流</p>
                     * 
                     */
                    bool GetFlowGroupNeedWorkflow() const;

                    /**
                     * 设置<p>是否开启发起合同组的发起审批，默认：false(不开启)，开启后，发起合同组会提交电子签内置审批流</p>
                     * @param _flowGroupNeedWorkflow <p>是否开启发起合同组的发起审批，默认：false(不开启)，开启后，发起合同组会提交电子签内置审批流</p>
                     * 
                     */
                    void SetFlowGroupNeedWorkflow(const bool& _flowGroupNeedWorkflow);

                    /**
                     * 判断参数 FlowGroupNeedWorkflow 是否已赋值
                     * @return FlowGroupNeedWorkflow 是否已赋值
                     * 
                     */
                    bool FlowGroupNeedWorkflowHasBeenSet() const;

                    /**
                     * 获取<p>是否不可编辑合同名称 true-不可编辑 false-可编辑(默认)</p>
                     * @return NoEditFlowName <p>是否不可编辑合同名称 true-不可编辑 false-可编辑(默认)</p>
                     * 
                     */
                    bool GetNoEditFlowName() const;

                    /**
                     * 设置<p>是否不可编辑合同名称 true-不可编辑 false-可编辑(默认)</p>
                     * @param _noEditFlowName <p>是否不可编辑合同名称 true-不可编辑 false-可编辑(默认)</p>
                     * 
                     */
                    void SetNoEditFlowName(const bool& _noEditFlowName);

                    /**
                     * 判断参数 NoEditFlowName 是否已赋值
                     * @return NoEditFlowName 是否已赋值
                     * 
                     */
                    bool NoEditFlowNameHasBeenSet() const;

                    /**
                     * 获取<p>是否不可编辑合同类型 true-不可编辑 false-可编辑(默认)</p>
                     * @return NoEditFlowType <p>是否不可编辑合同类型 true-不可编辑 false-可编辑(默认)</p>
                     * 
                     */
                    bool GetNoEditFlowType() const;

                    /**
                     * 设置<p>是否不可编辑合同类型 true-不可编辑 false-可编辑(默认)</p>
                     * @param _noEditFlowType <p>是否不可编辑合同类型 true-不可编辑 false-可编辑(默认)</p>
                     * 
                     */
                    void SetNoEditFlowType(const bool& _noEditFlowType);

                    /**
                     * 判断参数 NoEditFlowType 是否已赋值
                     * @return NoEditFlowType 是否已赋值
                     * 
                     */
                    bool NoEditFlowTypeHasBeenSet() const;

                    /**
                     * 获取<p>是否不可编辑合同截止日期 true-不可编辑 false-可编辑(默认)</p>
                     * @return NoEditDeadline <p>是否不可编辑合同截止日期 true-不可编辑 false-可编辑(默认)</p>
                     * 
                     */
                    bool GetNoEditDeadline() const;

                    /**
                     * 设置<p>是否不可编辑合同截止日期 true-不可编辑 false-可编辑(默认)</p>
                     * @param _noEditDeadline <p>是否不可编辑合同截止日期 true-不可编辑 false-可编辑(默认)</p>
                     * 
                     */
                    void SetNoEditDeadline(const bool& _noEditDeadline);

                    /**
                     * 判断参数 NoEditDeadline 是否已赋值
                     * @return NoEditDeadline 是否已赋值
                     * 
                     */
                    bool NoEditDeadlineHasBeenSet() const;

                    /**
                     * 获取<p>签署控件配置(如是否默认展示日期)，用于嵌入式发起页面配置</p>
                     * @return SignComponentConfig <p>签署控件配置(如是否默认展示日期)，用于嵌入式发起页面配置</p>
                     * 
                     */
                    SignComponentConfig GetSignComponentConfig() const;

                    /**
                     * 设置<p>签署控件配置(如是否默认展示日期)，用于嵌入式发起页面配置</p>
                     * @param _signComponentConfig <p>签署控件配置(如是否默认展示日期)，用于嵌入式发起页面配置</p>
                     * 
                     */
                    void SetSignComponentConfig(const SignComponentConfig& _signComponentConfig);

                    /**
                     * 判断参数 SignComponentConfig 是否已赋值
                     * @return SignComponentConfig 是否已赋值
                     * 
                     */
                    bool SignComponentConfigHasBeenSet() const;

                    /**
                     * 获取<p>是否禁止编辑水印控件属性 true-禁止 false-否(默认)</p>
                     * @return ForbidEditWatermark <p>是否禁止编辑水印控件属性 true-禁止 false-否(默认)</p>
                     * 
                     */
                    bool GetForbidEditWatermark() const;

                    /**
                     * 设置<p>是否禁止编辑水印控件属性 true-禁止 false-否(默认)</p>
                     * @param _forbidEditWatermark <p>是否禁止编辑水印控件属性 true-禁止 false-否(默认)</p>
                     * 
                     */
                    void SetForbidEditWatermark(const bool& _forbidEditWatermark);

                    /**
                     * 判断参数 ForbidEditWatermark 是否已赋值
                     * @return ForbidEditWatermark 是否已赋值
                     * 
                     */
                    bool ForbidEditWatermarkHasBeenSet() const;

                    /**
                     * 获取<p>发起成功后是否隐藏签署码 true-隐藏 false-否(默认)</p>
                     * @return HideSignCodeAfterStart <p>发起成功后是否隐藏签署码 true-隐藏 false-否(默认)</p>
                     * 
                     */
                    bool GetHideSignCodeAfterStart() const;

                    /**
                     * 设置<p>发起成功后是否隐藏签署码 true-隐藏 false-否(默认)</p>
                     * @param _hideSignCodeAfterStart <p>发起成功后是否隐藏签署码 true-隐藏 false-否(默认)</p>
                     * 
                     */
                    void SetHideSignCodeAfterStart(const bool& _hideSignCodeAfterStart);

                    /**
                     * 判断参数 HideSignCodeAfterStart 是否已赋值
                     * @return HideSignCodeAfterStart 是否已赋值
                     * 
                     */
                    bool HideSignCodeAfterStartHasBeenSet() const;

                    /**
                     * 获取<p>发起成功后是否签署合同,仅当前经办人为签署人时生效 true-展示签署 false-否(默认)</p>
                     * @return SignAfterStart <p>发起成功后是否签署合同,仅当前经办人为签署人时生效 true-展示签署 false-否(默认)</p>
                     * 
                     */
                    bool GetSignAfterStart() const;

                    /**
                     * 设置<p>发起成功后是否签署合同,仅当前经办人为签署人时生效 true-展示签署 false-否(默认)</p>
                     * @param _signAfterStart <p>发起成功后是否签署合同,仅当前经办人为签署人时生效 true-展示签署 false-否(默认)</p>
                     * 
                     */
                    void SetSignAfterStart(const bool& _signAfterStart);

                    /**
                     * 判断参数 SignAfterStart 是否已赋值
                     * @return SignAfterStart 是否已赋值
                     * 
                     */
                    bool SignAfterStartHasBeenSet() const;

                    /**
                     * 获取<p>发起成功后是否预览合同 true-展示预览按钮 false-否(默认)</p>
                     * @return PreviewAfterStart <p>发起成功后是否预览合同 true-展示预览按钮 false-否(默认)</p>
                     * 
                     */
                    bool GetPreviewAfterStart() const;

                    /**
                     * 设置<p>发起成功后是否预览合同 true-展示预览按钮 false-否(默认)</p>
                     * @param _previewAfterStart <p>发起成功后是否预览合同 true-展示预览按钮 false-否(默认)</p>
                     * 
                     */
                    void SetPreviewAfterStart(const bool& _previewAfterStart);

                    /**
                     * 判断参数 PreviewAfterStart 是否已赋值
                     * @return PreviewAfterStart 是否已赋值
                     * 
                     */
                    bool PreviewAfterStartHasBeenSet() const;

                private:

                    /**
                     * <p>签署人校验方式,支持以下类型</p><ul><li>VerifyCheck : 人脸识别 (默认值)</li><li>MobileCheck : 手机号验证</li></ul>参数说明：此参数仅在合同组文件发起有效，可选人脸识别或手机号验证两种方式，若选择后者，未实名个人签署方在签署合同时，无需经过实名认证和意愿确认两次人脸识别，该能力仅适用于个人签署方。
                     */
                    std::string m_approverVerifyType;
                    bool m_approverVerifyTypeHasBeenSet;

                    /**
                     * <p>发起合同（流程）组本方企业经办人通知方式<br>签署通知类型，支持以下类型</p><ul><li>sms : 短信 (默认值)</li><li>none : 不通知</li></ul>
                     */
                    std::string m_selfOrganizationApproverNotifyType;
                    bool m_selfOrganizationApproverNotifyTypeHasBeenSet;

                    /**
                     * <p>发起合同（流程）组他方经办人通知方式<br>签署通知类型，支持以下类型</p><ul><li>sms : 短信 (默认值)</li><li>none : 不通知</li></ul>
                     */
                    std::string m_otherApproverNotifyType;
                    bool m_otherApproverNotifyTypeHasBeenSet;

                    /**
                     * <p>是否开启发起合同组的发起审批，默认：false(不开启)，开启后，发起合同组会提交电子签内置审批流</p>
                     */
                    bool m_flowGroupNeedWorkflow;
                    bool m_flowGroupNeedWorkflowHasBeenSet;

                    /**
                     * <p>是否不可编辑合同名称 true-不可编辑 false-可编辑(默认)</p>
                     */
                    bool m_noEditFlowName;
                    bool m_noEditFlowNameHasBeenSet;

                    /**
                     * <p>是否不可编辑合同类型 true-不可编辑 false-可编辑(默认)</p>
                     */
                    bool m_noEditFlowType;
                    bool m_noEditFlowTypeHasBeenSet;

                    /**
                     * <p>是否不可编辑合同截止日期 true-不可编辑 false-可编辑(默认)</p>
                     */
                    bool m_noEditDeadline;
                    bool m_noEditDeadlineHasBeenSet;

                    /**
                     * <p>签署控件配置(如是否默认展示日期)，用于嵌入式发起页面配置</p>
                     */
                    SignComponentConfig m_signComponentConfig;
                    bool m_signComponentConfigHasBeenSet;

                    /**
                     * <p>是否禁止编辑水印控件属性 true-禁止 false-否(默认)</p>
                     */
                    bool m_forbidEditWatermark;
                    bool m_forbidEditWatermarkHasBeenSet;

                    /**
                     * <p>发起成功后是否隐藏签署码 true-隐藏 false-否(默认)</p>
                     */
                    bool m_hideSignCodeAfterStart;
                    bool m_hideSignCodeAfterStartHasBeenSet;

                    /**
                     * <p>发起成功后是否签署合同,仅当前经办人为签署人时生效 true-展示签署 false-否(默认)</p>
                     */
                    bool m_signAfterStart;
                    bool m_signAfterStartHasBeenSet;

                    /**
                     * <p>发起成功后是否预览合同 true-展示预览按钮 false-否(默认)</p>
                     */
                    bool m_previewAfterStart;
                    bool m_previewAfterStartHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FLOWGROUPOPTIONS_H_
