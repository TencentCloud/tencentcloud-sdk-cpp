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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWOPTION_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWOPTION_H_

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
                * 创建合同个性化参数
                */
                class CreateFlowOption : public AbstractModel
                {
                public:
                    CreateFlowOption();
                    ~CreateFlowOption() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否允许修改发起合同时确认弹窗的合同信息（合同名称、合同类型、签署截止时间），若不允许编辑，则表单字段将被禁止输入。
<br/>true：允许编辑（默认），<br/>false：不允许编辑<br/>默认：false：不允许编辑
                     * @return CanEditFlow 是否允许修改发起合同时确认弹窗的合同信息（合同名称、合同类型、签署截止时间），若不允许编辑，则表单字段将被禁止输入。
<br/>true：允许编辑（默认），<br/>false：不允许编辑<br/>默认：false：不允许编辑
                     * 
                     */
                    bool GetCanEditFlow() const;

                    /**
                     * 设置是否允许修改发起合同时确认弹窗的合同信息（合同名称、合同类型、签署截止时间），若不允许编辑，则表单字段将被禁止输入。
<br/>true：允许编辑（默认），<br/>false：不允许编辑<br/>默认：false：不允许编辑
                     * @param _canEditFlow 是否允许修改发起合同时确认弹窗的合同信息（合同名称、合同类型、签署截止时间），若不允许编辑，则表单字段将被禁止输入。
<br/>true：允许编辑（默认），<br/>false：不允许编辑<br/>默认：false：不允许编辑
                     * 
                     */
                    void SetCanEditFlow(const bool& _canEditFlow);

                    /**
                     * 判断参数 CanEditFlow 是否已赋值
                     * @return CanEditFlow 是否已赋值
                     * 
                     */
                    bool CanEditFlowHasBeenSet() const;

                    /**
                     * 获取是否允许编辑模板控件
<br/>true:允许编辑模板控件信息
<br/>false:不允许编辑模板控件信息
<br/>默认false:不允许编辑模板控件信息
                     * @return CanEditFormField 是否允许编辑模板控件
<br/>true:允许编辑模板控件信息
<br/>false:不允许编辑模板控件信息
<br/>默认false:不允许编辑模板控件信息
                     * 
                     */
                    bool GetCanEditFormField() const;

                    /**
                     * 设置是否允许编辑模板控件
<br/>true:允许编辑模板控件信息
<br/>false:不允许编辑模板控件信息
<br/>默认false:不允许编辑模板控件信息
                     * @param _canEditFormField 是否允许编辑模板控件
<br/>true:允许编辑模板控件信息
<br/>false:不允许编辑模板控件信息
<br/>默认false:不允许编辑模板控件信息
                     * 
                     */
                    void SetCanEditFormField(const bool& _canEditFormField);

                    /**
                     * 判断参数 CanEditFormField 是否已赋值
                     * @return CanEditFormField 是否已赋值
                     * 
                     */
                    bool CanEditFormFieldHasBeenSet() const;

                    /**
                     * 获取发起页面隐藏合同名称展示
<br/>true:发起页面隐藏合同名称展示
<br/>false:发起页面不隐藏合同名称展示
<br/>默认false:发起页面不隐藏合同名称展示
                     * @return HideShowFlowName 发起页面隐藏合同名称展示
<br/>true:发起页面隐藏合同名称展示
<br/>false:发起页面不隐藏合同名称展示
<br/>默认false:发起页面不隐藏合同名称展示
                     * 
                     */
                    bool GetHideShowFlowName() const;

                    /**
                     * 设置发起页面隐藏合同名称展示
<br/>true:发起页面隐藏合同名称展示
<br/>false:发起页面不隐藏合同名称展示
<br/>默认false:发起页面不隐藏合同名称展示
                     * @param _hideShowFlowName 发起页面隐藏合同名称展示
<br/>true:发起页面隐藏合同名称展示
<br/>false:发起页面不隐藏合同名称展示
<br/>默认false:发起页面不隐藏合同名称展示
                     * 
                     */
                    void SetHideShowFlowName(const bool& _hideShowFlowName);

                    /**
                     * 判断参数 HideShowFlowName 是否已赋值
                     * @return HideShowFlowName 是否已赋值
                     * 
                     */
                    bool HideShowFlowNameHasBeenSet() const;

                    /**
                     * 获取发起页面隐藏合同类型展示
<br/>true:发起页面隐藏合同类型展示
<br/>false:发起页面不隐藏合同类型展示
<br/>默认false:发起页面不隐藏合同类型展示

                     * @return HideShowFlowType 发起页面隐藏合同类型展示
<br/>true:发起页面隐藏合同类型展示
<br/>false:发起页面不隐藏合同类型展示
<br/>默认false:发起页面不隐藏合同类型展示

                     * 
                     */
                    bool GetHideShowFlowType() const;

                    /**
                     * 设置发起页面隐藏合同类型展示
<br/>true:发起页面隐藏合同类型展示
<br/>false:发起页面不隐藏合同类型展示
<br/>默认false:发起页面不隐藏合同类型展示

                     * @param _hideShowFlowType 发起页面隐藏合同类型展示
<br/>true:发起页面隐藏合同类型展示
<br/>false:发起页面不隐藏合同类型展示
<br/>默认false:发起页面不隐藏合同类型展示

                     * 
                     */
                    void SetHideShowFlowType(const bool& _hideShowFlowType);

                    /**
                     * 判断参数 HideShowFlowType 是否已赋值
                     * @return HideShowFlowType 是否已赋值
                     * 
                     */
                    bool HideShowFlowTypeHasBeenSet() const;

                    /**
                     * 获取发起页面隐藏合同截止日期展示
<br/>true:发起页面隐藏合同截止日期展示
<br/>false:发起页面不隐藏合同截止日期展示
<br/>默认false:发起页面不隐藏合同截止日期展示
                     * @return HideShowDeadline 发起页面隐藏合同截止日期展示
<br/>true:发起页面隐藏合同截止日期展示
<br/>false:发起页面不隐藏合同截止日期展示
<br/>默认false:发起页面不隐藏合同截止日期展示
                     * 
                     */
                    bool GetHideShowDeadline() const;

                    /**
                     * 设置发起页面隐藏合同截止日期展示
<br/>true:发起页面隐藏合同截止日期展示
<br/>false:发起页面不隐藏合同截止日期展示
<br/>默认false:发起页面不隐藏合同截止日期展示
                     * @param _hideShowDeadline 发起页面隐藏合同截止日期展示
<br/>true:发起页面隐藏合同截止日期展示
<br/>false:发起页面不隐藏合同截止日期展示
<br/>默认false:发起页面不隐藏合同截止日期展示
                     * 
                     */
                    void SetHideShowDeadline(const bool& _hideShowDeadline);

                    /**
                     * 判断参数 HideShowDeadline 是否已赋值
                     * @return HideShowDeadline 是否已赋值
                     * 
                     */
                    bool HideShowDeadlineHasBeenSet() const;

                    /**
                     * 获取发起页面允许跳过添加签署人环节
<br/>true:发起页面允许跳过添加签署人环节
<br/>false:发起页面不允许跳过添加签署人环节
<br/>默认false:发起页面不允许跳过添加签署人环节

                     * @return CanSkipAddApprover 发起页面允许跳过添加签署人环节
<br/>true:发起页面允许跳过添加签署人环节
<br/>false:发起页面不允许跳过添加签署人环节
<br/>默认false:发起页面不允许跳过添加签署人环节

                     * 
                     */
                    bool GetCanSkipAddApprover() const;

                    /**
                     * 设置发起页面允许跳过添加签署人环节
<br/>true:发起页面允许跳过添加签署人环节
<br/>false:发起页面不允许跳过添加签署人环节
<br/>默认false:发起页面不允许跳过添加签署人环节

                     * @param _canSkipAddApprover 发起页面允许跳过添加签署人环节
<br/>true:发起页面允许跳过添加签署人环节
<br/>false:发起页面不允许跳过添加签署人环节
<br/>默认false:发起页面不允许跳过添加签署人环节

                     * 
                     */
                    void SetCanSkipAddApprover(const bool& _canSkipAddApprover);

                    /**
                     * 判断参数 CanSkipAddApprover 是否已赋值
                     * @return CanSkipAddApprover 是否已赋值
                     * 
                     */
                    bool CanSkipAddApproverHasBeenSet() const;

                    /**
                     * 获取文件发起页面跳过文件上传步骤
<br/>true:文件发起页面跳过文件上传步骤
<br/>false:文件发起页面不跳过文件上传步骤
<br/>默认false:文件发起页面不跳过文件上传步骤
                     * @return SkipUploadFile 文件发起页面跳过文件上传步骤
<br/>true:文件发起页面跳过文件上传步骤
<br/>false:文件发起页面不跳过文件上传步骤
<br/>默认false:文件发起页面不跳过文件上传步骤
                     * 
                     */
                    bool GetSkipUploadFile() const;

                    /**
                     * 设置文件发起页面跳过文件上传步骤
<br/>true:文件发起页面跳过文件上传步骤
<br/>false:文件发起页面不跳过文件上传步骤
<br/>默认false:文件发起页面不跳过文件上传步骤
                     * @param _skipUploadFile 文件发起页面跳过文件上传步骤
<br/>true:文件发起页面跳过文件上传步骤
<br/>false:文件发起页面不跳过文件上传步骤
<br/>默认false:文件发起页面不跳过文件上传步骤
                     * 
                     */
                    void SetSkipUploadFile(const bool& _skipUploadFile);

                    /**
                     * 判断参数 SkipUploadFile 是否已赋值
                     * @return SkipUploadFile 是否已赋值
                     * 
                     */
                    bool SkipUploadFileHasBeenSet() const;

                    /**
                     * 获取禁止编辑填写控件
<br/>true:禁止编辑填写控件
<br/>false:允许编辑填写控件
<br/>默认false:允许编辑填写控件
                     * @return ForbidEditFillComponent 禁止编辑填写控件
<br/>true:禁止编辑填写控件
<br/>false:允许编辑填写控件
<br/>默认false:允许编辑填写控件
                     * 
                     */
                    bool GetForbidEditFillComponent() const;

                    /**
                     * 设置禁止编辑填写控件
<br/>true:禁止编辑填写控件
<br/>false:允许编辑填写控件
<br/>默认false:允许编辑填写控件
                     * @param _forbidEditFillComponent 禁止编辑填写控件
<br/>true:禁止编辑填写控件
<br/>false:允许编辑填写控件
<br/>默认false:允许编辑填写控件
                     * 
                     */
                    void SetForbidEditFillComponent(const bool& _forbidEditFillComponent);

                    /**
                     * 判断参数 ForbidEditFillComponent 是否已赋值
                     * @return ForbidEditFillComponent 是否已赋值
                     * 
                     */
                    bool ForbidEditFillComponentHasBeenSet() const;

                    /**
                     * 获取定制化发起合同弹窗的描述信息，描述信息最长500

                     * @return CustomCreateFlowDescription 定制化发起合同弹窗的描述信息，描述信息最长500

                     * 
                     */
                    std::string GetCustomCreateFlowDescription() const;

                    /**
                     * 设置定制化发起合同弹窗的描述信息，描述信息最长500

                     * @param _customCreateFlowDescription 定制化发起合同弹窗的描述信息，描述信息最长500

                     * 
                     */
                    void SetCustomCreateFlowDescription(const std::string& _customCreateFlowDescription);

                    /**
                     * 判断参数 CustomCreateFlowDescription 是否已赋值
                     * @return CustomCreateFlowDescription 是否已赋值
                     * 
                     */
                    bool CustomCreateFlowDescriptionHasBeenSet() const;

                private:

                    /**
                     * 是否允许修改发起合同时确认弹窗的合同信息（合同名称、合同类型、签署截止时间），若不允许编辑，则表单字段将被禁止输入。
<br/>true：允许编辑（默认），<br/>false：不允许编辑<br/>默认：false：不允许编辑
                     */
                    bool m_canEditFlow;
                    bool m_canEditFlowHasBeenSet;

                    /**
                     * 是否允许编辑模板控件
<br/>true:允许编辑模板控件信息
<br/>false:不允许编辑模板控件信息
<br/>默认false:不允许编辑模板控件信息
                     */
                    bool m_canEditFormField;
                    bool m_canEditFormFieldHasBeenSet;

                    /**
                     * 发起页面隐藏合同名称展示
<br/>true:发起页面隐藏合同名称展示
<br/>false:发起页面不隐藏合同名称展示
<br/>默认false:发起页面不隐藏合同名称展示
                     */
                    bool m_hideShowFlowName;
                    bool m_hideShowFlowNameHasBeenSet;

                    /**
                     * 发起页面隐藏合同类型展示
<br/>true:发起页面隐藏合同类型展示
<br/>false:发起页面不隐藏合同类型展示
<br/>默认false:发起页面不隐藏合同类型展示

                     */
                    bool m_hideShowFlowType;
                    bool m_hideShowFlowTypeHasBeenSet;

                    /**
                     * 发起页面隐藏合同截止日期展示
<br/>true:发起页面隐藏合同截止日期展示
<br/>false:发起页面不隐藏合同截止日期展示
<br/>默认false:发起页面不隐藏合同截止日期展示
                     */
                    bool m_hideShowDeadline;
                    bool m_hideShowDeadlineHasBeenSet;

                    /**
                     * 发起页面允许跳过添加签署人环节
<br/>true:发起页面允许跳过添加签署人环节
<br/>false:发起页面不允许跳过添加签署人环节
<br/>默认false:发起页面不允许跳过添加签署人环节

                     */
                    bool m_canSkipAddApprover;
                    bool m_canSkipAddApproverHasBeenSet;

                    /**
                     * 文件发起页面跳过文件上传步骤
<br/>true:文件发起页面跳过文件上传步骤
<br/>false:文件发起页面不跳过文件上传步骤
<br/>默认false:文件发起页面不跳过文件上传步骤
                     */
                    bool m_skipUploadFile;
                    bool m_skipUploadFileHasBeenSet;

                    /**
                     * 禁止编辑填写控件
<br/>true:禁止编辑填写控件
<br/>false:允许编辑填写控件
<br/>默认false:允许编辑填写控件
                     */
                    bool m_forbidEditFillComponent;
                    bool m_forbidEditFillComponentHasBeenSet;

                    /**
                     * 定制化发起合同弹窗的描述信息，描述信息最长500

                     */
                    std::string m_customCreateFlowDescription;
                    bool m_customCreateFlowDescriptionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWOPTION_H_
