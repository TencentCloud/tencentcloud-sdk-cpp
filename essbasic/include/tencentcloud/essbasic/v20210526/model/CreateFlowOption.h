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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEFLOWOPTION_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEFLOWOPTION_H_

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
                     * 获取是否允许修改合同信息，
**true**：可以
**false**：（默认）不可以
                     * @return CanEditFlow 是否允许修改合同信息，
**true**：可以
**false**：（默认）不可以
                     * 
                     */
                    bool GetCanEditFlow() const;

                    /**
                     * 设置是否允许修改合同信息，
**true**：可以
**false**：（默认）不可以
                     * @param _canEditFlow 是否允许修改合同信息，
**true**：可以
**false**：（默认）不可以
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
                     * 获取是否允许发起合同弹窗隐藏合同名称
**true**：允许
**false**：（默认）不允许
                     * @return HideShowFlowName 是否允许发起合同弹窗隐藏合同名称
**true**：允许
**false**：（默认）不允许
                     * 
                     */
                    bool GetHideShowFlowName() const;

                    /**
                     * 设置是否允许发起合同弹窗隐藏合同名称
**true**：允许
**false**：（默认）不允许
                     * @param _hideShowFlowName 是否允许发起合同弹窗隐藏合同名称
**true**：允许
**false**：（默认）不允许
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
                     * 获取是否允许发起合同弹窗隐藏合同类型，
**true**：允许
**false**：（默认）不允许
                     * @return HideShowFlowType 是否允许发起合同弹窗隐藏合同类型，
**true**：允许
**false**：（默认）不允许
                     * 
                     */
                    bool GetHideShowFlowType() const;

                    /**
                     * 设置是否允许发起合同弹窗隐藏合同类型，
**true**：允许
**false**：（默认）不允许
                     * @param _hideShowFlowType 是否允许发起合同弹窗隐藏合同类型，
**true**：允许
**false**：（默认）不允许
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
                     * 获取是否允许发起合同弹窗隐藏合同到期时间
**true**：允许
**false**：（默认）不允许
                     * @return HideShowDeadline 是否允许发起合同弹窗隐藏合同到期时间
**true**：允许
**false**：（默认）不允许
                     * 
                     */
                    bool GetHideShowDeadline() const;

                    /**
                     * 设置是否允许发起合同弹窗隐藏合同到期时间
**true**：允许
**false**：（默认）不允许
                     * @param _hideShowDeadline 是否允许发起合同弹窗隐藏合同到期时间
**true**：允许
**false**：（默认）不允许
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
                     * 获取是否允许发起合同步骤跳过指定签署方步骤
**true**：允许
**false**：（默认）不允许
                     * @return CanSkipAddApprover 是否允许发起合同步骤跳过指定签署方步骤
**true**：允许
**false**：（默认）不允许
                     * 
                     */
                    bool GetCanSkipAddApprover() const;

                    /**
                     * 设置是否允许发起合同步骤跳过指定签署方步骤
**true**：允许
**false**：（默认）不允许
                     * @param _canSkipAddApprover 是否允许发起合同步骤跳过指定签署方步骤
**true**：允许
**false**：（默认）不允许
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
                     * 获取定制化发起合同弹窗的描述信息，长度不能超过500，只能由中文、字母、数字和标点组成。
                     * @return CustomCreateFlowDescription 定制化发起合同弹窗的描述信息，长度不能超过500，只能由中文、字母、数字和标点组成。
                     * 
                     */
                    std::string GetCustomCreateFlowDescription() const;

                    /**
                     * 设置定制化发起合同弹窗的描述信息，长度不能超过500，只能由中文、字母、数字和标点组成。
                     * @param _customCreateFlowDescription 定制化发起合同弹窗的描述信息，长度不能超过500，只能由中文、字母、数字和标点组成。
                     * 
                     */
                    void SetCustomCreateFlowDescription(const std::string& _customCreateFlowDescription);

                    /**
                     * 判断参数 CustomCreateFlowDescription 是否已赋值
                     * @return CustomCreateFlowDescription 是否已赋值
                     * 
                     */
                    bool CustomCreateFlowDescriptionHasBeenSet() const;

                    /**
                     * 获取禁止编辑填写控件

**true**：禁止编辑填写控件
**false**：（默认）允许编辑填写控件
                     * @return ForbidEditFillComponent 禁止编辑填写控件

**true**：禁止编辑填写控件
**false**：（默认）允许编辑填写控件
                     * 
                     */
                    bool GetForbidEditFillComponent() const;

                    /**
                     * 设置禁止编辑填写控件

**true**：禁止编辑填写控件
**false**：（默认）允许编辑填写控件
                     * @param _forbidEditFillComponent 禁止编辑填写控件

**true**：禁止编辑填写控件
**false**：（默认）允许编辑填写控件
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
                     * 获取跳过上传文件步骤

**true**：跳过
**false**：（默认）不跳过，需要传ResourceId
                     * @return SkipUploadFile 跳过上传文件步骤

**true**：跳过
**false**：（默认）不跳过，需要传ResourceId
                     * 
                     */
                    std::string GetSkipUploadFile() const;

                    /**
                     * 设置跳过上传文件步骤

**true**：跳过
**false**：（默认）不跳过，需要传ResourceId
                     * @param _skipUploadFile 跳过上传文件步骤

**true**：跳过
**false**：（默认）不跳过，需要传ResourceId
                     * 
                     */
                    void SetSkipUploadFile(const std::string& _skipUploadFile);

                    /**
                     * 判断参数 SkipUploadFile 是否已赋值
                     * @return SkipUploadFile 是否已赋值
                     * 
                     */
                    bool SkipUploadFileHasBeenSet() const;

                private:

                    /**
                     * 是否允许修改合同信息，
**true**：可以
**false**：（默认）不可以
                     */
                    bool m_canEditFlow;
                    bool m_canEditFlowHasBeenSet;

                    /**
                     * 是否允许发起合同弹窗隐藏合同名称
**true**：允许
**false**：（默认）不允许
                     */
                    bool m_hideShowFlowName;
                    bool m_hideShowFlowNameHasBeenSet;

                    /**
                     * 是否允许发起合同弹窗隐藏合同类型，
**true**：允许
**false**：（默认）不允许
                     */
                    bool m_hideShowFlowType;
                    bool m_hideShowFlowTypeHasBeenSet;

                    /**
                     * 是否允许发起合同弹窗隐藏合同到期时间
**true**：允许
**false**：（默认）不允许
                     */
                    bool m_hideShowDeadline;
                    bool m_hideShowDeadlineHasBeenSet;

                    /**
                     * 是否允许发起合同步骤跳过指定签署方步骤
**true**：允许
**false**：（默认）不允许
                     */
                    bool m_canSkipAddApprover;
                    bool m_canSkipAddApproverHasBeenSet;

                    /**
                     * 定制化发起合同弹窗的描述信息，长度不能超过500，只能由中文、字母、数字和标点组成。
                     */
                    std::string m_customCreateFlowDescription;
                    bool m_customCreateFlowDescriptionHasBeenSet;

                    /**
                     * 禁止编辑填写控件

**true**：禁止编辑填写控件
**false**：（默认）允许编辑填写控件
                     */
                    bool m_forbidEditFillComponent;
                    bool m_forbidEditFillComponentHasBeenSet;

                    /**
                     * 跳过上传文件步骤

**true**：跳过
**false**：（默认）不跳过，需要传ResourceId
                     */
                    std::string m_skipUploadFile;
                    bool m_skipUploadFileHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEFLOWOPTION_H_
