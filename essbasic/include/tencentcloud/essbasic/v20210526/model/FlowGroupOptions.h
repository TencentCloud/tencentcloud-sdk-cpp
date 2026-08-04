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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWGROUPOPTIONS_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWGROUPOPTIONS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/SignComponentConfig.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 合同组的配置项信息包括：在合同组签署过程中，是否需要对每个子合同进行独立的意愿确认。
                */
                class FlowGroupOptions : public AbstractModel
                {
                public:
                    FlowGroupOptions();
                    ~FlowGroupOptions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>发起方企业经办人（即签署人为发起方企业员工）是否需要对子合同进行独立的意愿确认</p><ul><li>**false**（默认）：发起方企业经办人签署时对所有子合同进行统一的意愿确认。</li><li>**true**：发起方企业经办人签署时需要对子合同进行独立的意愿确认。</li></ul>
                     * @return SelfOrganizationApproverSignEach <p>发起方企业经办人（即签署人为发起方企业员工）是否需要对子合同进行独立的意愿确认</p><ul><li>**false**（默认）：发起方企业经办人签署时对所有子合同进行统一的意愿确认。</li><li>**true**：发起方企业经办人签署时需要对子合同进行独立的意愿确认。</li></ul>
                     * 
                     */
                    bool GetSelfOrganizationApproverSignEach() const;

                    /**
                     * 设置<p>发起方企业经办人（即签署人为发起方企业员工）是否需要对子合同进行独立的意愿确认</p><ul><li>**false**（默认）：发起方企业经办人签署时对所有子合同进行统一的意愿确认。</li><li>**true**：发起方企业经办人签署时需要对子合同进行独立的意愿确认。</li></ul>
                     * @param _selfOrganizationApproverSignEach <p>发起方企业经办人（即签署人为发起方企业员工）是否需要对子合同进行独立的意愿确认</p><ul><li>**false**（默认）：发起方企业经办人签署时对所有子合同进行统一的意愿确认。</li><li>**true**：发起方企业经办人签署时需要对子合同进行独立的意愿确认。</li></ul>
                     * 
                     */
                    void SetSelfOrganizationApproverSignEach(const bool& _selfOrganizationApproverSignEach);

                    /**
                     * 判断参数 SelfOrganizationApproverSignEach 是否已赋值
                     * @return SelfOrganizationApproverSignEach 是否已赋值
                     * 
                     */
                    bool SelfOrganizationApproverSignEachHasBeenSet() const;

                    /**
                     * 获取<p>非发起方企业经办人（即：签署人为个人或者不为发起方企业的员工）是否需要对子合同进行独立的意愿确认</p><ul><li>**false**（默认）：非发起方企业经办人签署时对所有子合同进行统一的意愿确认。</li><li>**true**：非发起方企业经办人签署时需要对子合同进行独立的意愿确认。</li></ul>
                     * @return OtherApproverSignEach <p>非发起方企业经办人（即：签署人为个人或者不为发起方企业的员工）是否需要对子合同进行独立的意愿确认</p><ul><li>**false**（默认）：非发起方企业经办人签署时对所有子合同进行统一的意愿确认。</li><li>**true**：非发起方企业经办人签署时需要对子合同进行独立的意愿确认。</li></ul>
                     * 
                     */
                    bool GetOtherApproverSignEach() const;

                    /**
                     * 设置<p>非发起方企业经办人（即：签署人为个人或者不为发起方企业的员工）是否需要对子合同进行独立的意愿确认</p><ul><li>**false**（默认）：非发起方企业经办人签署时对所有子合同进行统一的意愿确认。</li><li>**true**：非发起方企业经办人签署时需要对子合同进行独立的意愿确认。</li></ul>
                     * @param _otherApproverSignEach <p>非发起方企业经办人（即：签署人为个人或者不为发起方企业的员工）是否需要对子合同进行独立的意愿确认</p><ul><li>**false**（默认）：非发起方企业经办人签署时对所有子合同进行统一的意愿确认。</li><li>**true**：非发起方企业经办人签署时需要对子合同进行独立的意愿确认。</li></ul>
                     * 
                     */
                    void SetOtherApproverSignEach(const bool& _otherApproverSignEach);

                    /**
                     * 判断参数 OtherApproverSignEach 是否已赋值
                     * @return OtherApproverSignEach 是否已赋值
                     * 
                     */
                    bool OtherApproverSignEachHasBeenSet() const;

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
                     * <p>发起方企业经办人（即签署人为发起方企业员工）是否需要对子合同进行独立的意愿确认</p><ul><li>**false**（默认）：发起方企业经办人签署时对所有子合同进行统一的意愿确认。</li><li>**true**：发起方企业经办人签署时需要对子合同进行独立的意愿确认。</li></ul>
                     */
                    bool m_selfOrganizationApproverSignEach;
                    bool m_selfOrganizationApproverSignEachHasBeenSet;

                    /**
                     * <p>非发起方企业经办人（即：签署人为个人或者不为发起方企业的员工）是否需要对子合同进行独立的意愿确认</p><ul><li>**false**（默认）：非发起方企业经办人签署时对所有子合同进行统一的意愿确认。</li><li>**true**：非发起方企业经办人签署时需要对子合同进行独立的意愿确认。</li></ul>
                     */
                    bool m_otherApproverSignEach;
                    bool m_otherApproverSignEachHasBeenSet;

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

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWGROUPOPTIONS_H_
