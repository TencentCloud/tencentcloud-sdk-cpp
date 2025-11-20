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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEFLOWOPTION_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEFLOWOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/SignComponentConfig.h>
#include <tencentcloud/essbasic/v20210526/model/CreateResultPageConfig.h>


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
                     * 获取是否可以编辑签署人包括新增，修改，删除 
<ul><li>（默认） false -可以编辑签署人</li> <li> true - 禁止编辑签署人</li></ul>



注意：
* 如果设置参数为 true， 则 参数签署人 [FlowApproverList](https://qian.tencent.com/developers/partnerApis/embedPages/ChannelCreatePrepareFlow) 不能为空
* 此参数对子客和自动签无效，不允许进行修改。
                     * @return ForbidEditApprover 是否可以编辑签署人包括新增，修改，删除 
<ul><li>（默认） false -可以编辑签署人</li> <li> true - 禁止编辑签署人</li></ul>



注意：
* 如果设置参数为 true， 则 参数签署人 [FlowApproverList](https://qian.tencent.com/developers/partnerApis/embedPages/ChannelCreatePrepareFlow) 不能为空
* 此参数对子客和自动签无效，不允许进行修改。
                     * 
                     */
                    bool GetForbidEditApprover() const;

                    /**
                     * 设置是否可以编辑签署人包括新增，修改，删除 
<ul><li>（默认） false -可以编辑签署人</li> <li> true - 禁止编辑签署人</li></ul>



注意：
* 如果设置参数为 true， 则 参数签署人 [FlowApproverList](https://qian.tencent.com/developers/partnerApis/embedPages/ChannelCreatePrepareFlow) 不能为空
* 此参数对子客和自动签无效，不允许进行修改。
                     * @param _forbidEditApprover 是否可以编辑签署人包括新增，修改，删除 
<ul><li>（默认） false -可以编辑签署人</li> <li> true - 禁止编辑签署人</li></ul>



注意：
* 如果设置参数为 true， 则 参数签署人 [FlowApproverList](https://qian.tencent.com/developers/partnerApis/embedPages/ChannelCreatePrepareFlow) 不能为空
* 此参数对子客和自动签无效，不允许进行修改。
                     * 
                     */
                    void SetForbidEditApprover(const bool& _forbidEditApprover);

                    /**
                     * 判断参数 ForbidEditApprover 是否已赋值
                     * @return ForbidEditApprover 是否已赋值
                     * 
                     */
                    bool ForbidEditApproverHasBeenSet() const;

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
                    bool GetSkipUploadFile() const;

                    /**
                     * 设置跳过上传文件步骤

**true**：跳过
**false**：（默认）不跳过，需要传ResourceId
                     * @param _skipUploadFile 跳过上传文件步骤

**true**：跳过
**false**：（默认）不跳过，需要传ResourceId
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
                     * 获取签署控件的配置信息，用在嵌入式发起的页面配置，包括 
 - 签署控件 是否默认展示日期.
                     * @return SignComponentConfig 签署控件的配置信息，用在嵌入式发起的页面配置，包括 
 - 签署控件 是否默认展示日期.
                     * 
                     */
                    SignComponentConfig GetSignComponentConfig() const;

                    /**
                     * 设置签署控件的配置信息，用在嵌入式发起的页面配置，包括 
 - 签署控件 是否默认展示日期.
                     * @param _signComponentConfig 签署控件的配置信息，用在嵌入式发起的页面配置，包括 
 - 签署控件 是否默认展示日期.
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
                     * 获取是否禁止编辑（展示）水印控件属性
<ul><li>（默认） false -否</li> <li> true - 禁止编辑</li></ul>
                     * @return ForbidEditWatermark 是否禁止编辑（展示）水印控件属性
<ul><li>（默认） false -否</li> <li> true - 禁止编辑</li></ul>
                     * 
                     */
                    bool GetForbidEditWatermark() const;

                    /**
                     * 设置是否禁止编辑（展示）水印控件属性
<ul><li>（默认） false -否</li> <li> true - 禁止编辑</li></ul>
                     * @param _forbidEditWatermark 是否禁止编辑（展示）水印控件属性
<ul><li>（默认） false -否</li> <li> true - 禁止编辑</li></ul>
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
                     * 获取发起成功后是否预览合同
<ul><li>（默认） false -否</li> <li> true - 展示预览按钮</li></ul>
                     * @return PreviewAfterStart 发起成功后是否预览合同
<ul><li>（默认） false -否</li> <li> true - 展示预览按钮</li></ul>
                     * 
                     */
                    bool GetPreviewAfterStart() const;

                    /**
                     * 设置发起成功后是否预览合同
<ul><li>（默认） false -否</li> <li> true - 展示预览按钮</li></ul>
                     * @param _previewAfterStart 发起成功后是否预览合同
<ul><li>（默认） false -否</li> <li> true - 展示预览按钮</li></ul>
                     * 
                     */
                    void SetPreviewAfterStart(const bool& _previewAfterStart);

                    /**
                     * 判断参数 PreviewAfterStart 是否已赋值
                     * @return PreviewAfterStart 是否已赋值
                     * 
                     */
                    bool PreviewAfterStartHasBeenSet() const;

                    /**
                     * 获取发起成功之后是否签署合同，仅当前经办人作为签署人时生效
<ul><li>（默认） false -否</li> <li> true - 展示签署按钮</li></ul>
                     * @return SignAfterStart 发起成功之后是否签署合同，仅当前经办人作为签署人时生效
<ul><li>（默认） false -否</li> <li> true - 展示签署按钮</li></ul>
                     * 
                     */
                    bool GetSignAfterStart() const;

                    /**
                     * 设置发起成功之后是否签署合同，仅当前经办人作为签署人时生效
<ul><li>（默认） false -否</li> <li> true - 展示签署按钮</li></ul>
                     * @param _signAfterStart 发起成功之后是否签署合同，仅当前经办人作为签署人时生效
<ul><li>（默认） false -否</li> <li> true - 展示签署按钮</li></ul>
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
                     * 获取隐藏操作步骤: 具体的控件类型如下

<ul><li>1 : 选择文件及签署方</li>
<li>2 : 补充文件内容</li>
<li>4 : 发起前合同信息与设置确认</li>
</ul>
注：仅对新版页面生效
                     * @return HideOperationSteps 隐藏操作步骤: 具体的控件类型如下

<ul><li>1 : 选择文件及签署方</li>
<li>2 : 补充文件内容</li>
<li>4 : 发起前合同信息与设置确认</li>
</ul>
注：仅对新版页面生效
                     * 
                     */
                    std::vector<uint64_t> GetHideOperationSteps() const;

                    /**
                     * 设置隐藏操作步骤: 具体的控件类型如下

<ul><li>1 : 选择文件及签署方</li>
<li>2 : 补充文件内容</li>
<li>4 : 发起前合同信息与设置确认</li>
</ul>
注：仅对新版页面生效
                     * @param _hideOperationSteps 隐藏操作步骤: 具体的控件类型如下

<ul><li>1 : 选择文件及签署方</li>
<li>2 : 补充文件内容</li>
<li>4 : 发起前合同信息与设置确认</li>
</ul>
注：仅对新版页面生效
                     * 
                     */
                    void SetHideOperationSteps(const std::vector<uint64_t>& _hideOperationSteps);

                    /**
                     * 判断参数 HideOperationSteps 是否已赋值
                     * @return HideOperationSteps 是否已赋值
                     * 
                     */
                    bool HideOperationStepsHasBeenSet() const;

                    /**
                     * 获取本企业简称，注：仅对新版页面生效
                     * @return SelfName 本企业简称，注：仅对新版页面生效
                     * 
                     */
                    std::string GetSelfName() const;

                    /**
                     * 设置本企业简称，注：仅对新版页面生效
                     * @param _selfName 本企业简称，注：仅对新版页面生效
                     * 
                     */
                    void SetSelfName(const std::string& _selfName);

                    /**
                     * 判断参数 SelfName 是否已赋值
                     * @return SelfName 是否已赋值
                     * 
                     */
                    bool SelfNameHasBeenSet() const;

                    /**
                     * 获取发起后签署码隐藏，默认false，注：仅对新版页面生效
                     * @return HideSignCodeAfterStart 发起后签署码隐藏，默认false，注：仅对新版页面生效
                     * 
                     */
                    bool GetHideSignCodeAfterStart() const;

                    /**
                     * 设置发起后签署码隐藏，默认false，注：仅对新版页面生效
                     * @param _hideSignCodeAfterStart 发起后签署码隐藏，默认false，注：仅对新版页面生效
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
                     * 获取发起过程中是否保存草稿	
                     * @return NeedFlowDraft 发起过程中是否保存草稿	
                     * 
                     */
                    bool GetNeedFlowDraft() const;

                    /**
                     * 设置发起过程中是否保存草稿	
                     * @param _needFlowDraft 发起过程中是否保存草稿	
                     * 
                     */
                    void SetNeedFlowDraft(const bool& _needFlowDraft);

                    /**
                     * 判断参数 NeedFlowDraft 是否已赋值
                     * @return NeedFlowDraft 是否已赋值
                     * 
                     */
                    bool NeedFlowDraftHasBeenSet() const;

                    /**
                     * 获取在发起流程的可嵌入页面要隐藏的控件列表，和 ShowComponentTypes 参数 只能二选一使用（注: 
<font color='red'>空数组代表未指定</font>），具体的控件类型如下

<ul><li>SIGN_SIGNATURE : 个人签名/印章</li>
<li>SIGN_SEAL : 企业印章</li>
<li>SIGN_PAGING_SEAL : 骑缝章</li>
<li>SIGN_LEGAL_PERSON_SEAL : 法定代表人章</li>
<li>SIGN_APPROVE : 签批</li>
<li>SIGN_OPINION : 签署意见</li>
<li>SIGN_PAGING_SIGNATURE : 手写签名骑缝控件</li>
<li>BUSI-FULL-NAME  : 企业全称</li>
<li>BUSI-CREDIT-CODE : 统一社会信用代码</li>
<li>BUSI-LEGAL-NAME : 法人/经营者姓名</li>
<li>PERSONAL-NAME : 签署人姓名</li>
<li>PERSONAL-MOBILE : 签署人手机号</li>
<li>PERSONAL-IDCARD-TYPE : 签署人证件类型</li>
<li>PERSONAL-IDCARD : 签署人证件号</li>
<li>TEXT : 单行文本</li>
<li>MULTI_LINE_TEXT : 多行文本</li>
<li>CHECK_BOX : 勾选框</li>
<li>SELECTOR : 选择器</li>
<li>DIGIT : 数字</li>
<li>DATE : 日期</li>
<li>FILL_IMAGE : 图片</li>
<li>ATTACHMENT : 附件</li>
<li>EMAIL : 邮箱</li>
<li>LOCATION : 地址</li>
<li>EDUCATION : 学历</li>
<li>GENDER : 性别</li>
<li>DISTRICT : 省市区</li></ul>
                     * @return HideComponentTypes 在发起流程的可嵌入页面要隐藏的控件列表，和 ShowComponentTypes 参数 只能二选一使用（注: 
<font color='red'>空数组代表未指定</font>），具体的控件类型如下

<ul><li>SIGN_SIGNATURE : 个人签名/印章</li>
<li>SIGN_SEAL : 企业印章</li>
<li>SIGN_PAGING_SEAL : 骑缝章</li>
<li>SIGN_LEGAL_PERSON_SEAL : 法定代表人章</li>
<li>SIGN_APPROVE : 签批</li>
<li>SIGN_OPINION : 签署意见</li>
<li>SIGN_PAGING_SIGNATURE : 手写签名骑缝控件</li>
<li>BUSI-FULL-NAME  : 企业全称</li>
<li>BUSI-CREDIT-CODE : 统一社会信用代码</li>
<li>BUSI-LEGAL-NAME : 法人/经营者姓名</li>
<li>PERSONAL-NAME : 签署人姓名</li>
<li>PERSONAL-MOBILE : 签署人手机号</li>
<li>PERSONAL-IDCARD-TYPE : 签署人证件类型</li>
<li>PERSONAL-IDCARD : 签署人证件号</li>
<li>TEXT : 单行文本</li>
<li>MULTI_LINE_TEXT : 多行文本</li>
<li>CHECK_BOX : 勾选框</li>
<li>SELECTOR : 选择器</li>
<li>DIGIT : 数字</li>
<li>DATE : 日期</li>
<li>FILL_IMAGE : 图片</li>
<li>ATTACHMENT : 附件</li>
<li>EMAIL : 邮箱</li>
<li>LOCATION : 地址</li>
<li>EDUCATION : 学历</li>
<li>GENDER : 性别</li>
<li>DISTRICT : 省市区</li></ul>
                     * 
                     */
                    std::vector<std::string> GetHideComponentTypes() const;

                    /**
                     * 设置在发起流程的可嵌入页面要隐藏的控件列表，和 ShowComponentTypes 参数 只能二选一使用（注: 
<font color='red'>空数组代表未指定</font>），具体的控件类型如下

<ul><li>SIGN_SIGNATURE : 个人签名/印章</li>
<li>SIGN_SEAL : 企业印章</li>
<li>SIGN_PAGING_SEAL : 骑缝章</li>
<li>SIGN_LEGAL_PERSON_SEAL : 法定代表人章</li>
<li>SIGN_APPROVE : 签批</li>
<li>SIGN_OPINION : 签署意见</li>
<li>SIGN_PAGING_SIGNATURE : 手写签名骑缝控件</li>
<li>BUSI-FULL-NAME  : 企业全称</li>
<li>BUSI-CREDIT-CODE : 统一社会信用代码</li>
<li>BUSI-LEGAL-NAME : 法人/经营者姓名</li>
<li>PERSONAL-NAME : 签署人姓名</li>
<li>PERSONAL-MOBILE : 签署人手机号</li>
<li>PERSONAL-IDCARD-TYPE : 签署人证件类型</li>
<li>PERSONAL-IDCARD : 签署人证件号</li>
<li>TEXT : 单行文本</li>
<li>MULTI_LINE_TEXT : 多行文本</li>
<li>CHECK_BOX : 勾选框</li>
<li>SELECTOR : 选择器</li>
<li>DIGIT : 数字</li>
<li>DATE : 日期</li>
<li>FILL_IMAGE : 图片</li>
<li>ATTACHMENT : 附件</li>
<li>EMAIL : 邮箱</li>
<li>LOCATION : 地址</li>
<li>EDUCATION : 学历</li>
<li>GENDER : 性别</li>
<li>DISTRICT : 省市区</li></ul>
                     * @param _hideComponentTypes 在发起流程的可嵌入页面要隐藏的控件列表，和 ShowComponentTypes 参数 只能二选一使用（注: 
<font color='red'>空数组代表未指定</font>），具体的控件类型如下

<ul><li>SIGN_SIGNATURE : 个人签名/印章</li>
<li>SIGN_SEAL : 企业印章</li>
<li>SIGN_PAGING_SEAL : 骑缝章</li>
<li>SIGN_LEGAL_PERSON_SEAL : 法定代表人章</li>
<li>SIGN_APPROVE : 签批</li>
<li>SIGN_OPINION : 签署意见</li>
<li>SIGN_PAGING_SIGNATURE : 手写签名骑缝控件</li>
<li>BUSI-FULL-NAME  : 企业全称</li>
<li>BUSI-CREDIT-CODE : 统一社会信用代码</li>
<li>BUSI-LEGAL-NAME : 法人/经营者姓名</li>
<li>PERSONAL-NAME : 签署人姓名</li>
<li>PERSONAL-MOBILE : 签署人手机号</li>
<li>PERSONAL-IDCARD-TYPE : 签署人证件类型</li>
<li>PERSONAL-IDCARD : 签署人证件号</li>
<li>TEXT : 单行文本</li>
<li>MULTI_LINE_TEXT : 多行文本</li>
<li>CHECK_BOX : 勾选框</li>
<li>SELECTOR : 选择器</li>
<li>DIGIT : 数字</li>
<li>DATE : 日期</li>
<li>FILL_IMAGE : 图片</li>
<li>ATTACHMENT : 附件</li>
<li>EMAIL : 邮箱</li>
<li>LOCATION : 地址</li>
<li>EDUCATION : 学历</li>
<li>GENDER : 性别</li>
<li>DISTRICT : 省市区</li></ul>
                     * 
                     */
                    void SetHideComponentTypes(const std::vector<std::string>& _hideComponentTypes);

                    /**
                     * 判断参数 HideComponentTypes 是否已赋值
                     * @return HideComponentTypes 是否已赋值
                     * 
                     */
                    bool HideComponentTypesHasBeenSet() const;

                    /**
                     * 获取在发起流程的可嵌入页面要显示的控件列表，和 HideComponentTypes 参数 只能二选一使用（注: 
<font color='red'>空数组代表未指定</font>），具体的控件类型如下
<ul><li>SIGN_SIGNATURE : 个人签名/印章</li>
<li>SIGN_SEAL : 企业印章</li>
<li>SIGN_PAGING_SEAL : 骑缝章</li>
<li>SIGN_LEGAL_PERSON_SEAL : 法定代表人章</li>
<li>SIGN_APPROVE : 签批</li>
<li>SIGN_OPINION : 签署意见</li>
<li>SIGN_PAGING_SIGNATURE : 手写签名骑缝控件</li>
<li>BUSI-FULL-NAME  : 企业全称</li>
<li>BUSI-CREDIT-CODE : 统一社会信用代码</li>
<li>BUSI-LEGAL-NAME : 法人/经营者姓名</li>
<li>PERSONAL-NAME : 签署人姓名</li>
<li>PERSONAL-MOBILE : 签署人手机号</li>
<li>PERSONAL-IDCARD-TYPE : 签署人证件类型</li>
<li>PERSONAL-IDCARD : 签署人证件号</li>
<li>TEXT : 单行文本</li>
<li>MULTI_LINE_TEXT : 多行文本</li>
<li>CHECK_BOX : 勾选框</li>
<li>SELECTOR : 选择器</li>
<li>DIGIT : 数字</li>
<li>DATE : 日期</li>
<li>FILL_IMAGE : 图片</li>
<li>ATTACHMENT : 附件</li>
<li>EMAIL : 邮箱</li>
<li>LOCATION : 地址</li>
<li>EDUCATION : 学历</li>
<li>GENDER : 性别</li>
<li>DISTRICT : 省市区</li></ul>
                     * @return ShowComponentTypes 在发起流程的可嵌入页面要显示的控件列表，和 HideComponentTypes 参数 只能二选一使用（注: 
<font color='red'>空数组代表未指定</font>），具体的控件类型如下
<ul><li>SIGN_SIGNATURE : 个人签名/印章</li>
<li>SIGN_SEAL : 企业印章</li>
<li>SIGN_PAGING_SEAL : 骑缝章</li>
<li>SIGN_LEGAL_PERSON_SEAL : 法定代表人章</li>
<li>SIGN_APPROVE : 签批</li>
<li>SIGN_OPINION : 签署意见</li>
<li>SIGN_PAGING_SIGNATURE : 手写签名骑缝控件</li>
<li>BUSI-FULL-NAME  : 企业全称</li>
<li>BUSI-CREDIT-CODE : 统一社会信用代码</li>
<li>BUSI-LEGAL-NAME : 法人/经营者姓名</li>
<li>PERSONAL-NAME : 签署人姓名</li>
<li>PERSONAL-MOBILE : 签署人手机号</li>
<li>PERSONAL-IDCARD-TYPE : 签署人证件类型</li>
<li>PERSONAL-IDCARD : 签署人证件号</li>
<li>TEXT : 单行文本</li>
<li>MULTI_LINE_TEXT : 多行文本</li>
<li>CHECK_BOX : 勾选框</li>
<li>SELECTOR : 选择器</li>
<li>DIGIT : 数字</li>
<li>DATE : 日期</li>
<li>FILL_IMAGE : 图片</li>
<li>ATTACHMENT : 附件</li>
<li>EMAIL : 邮箱</li>
<li>LOCATION : 地址</li>
<li>EDUCATION : 学历</li>
<li>GENDER : 性别</li>
<li>DISTRICT : 省市区</li></ul>
                     * 
                     */
                    std::vector<std::string> GetShowComponentTypes() const;

                    /**
                     * 设置在发起流程的可嵌入页面要显示的控件列表，和 HideComponentTypes 参数 只能二选一使用（注: 
<font color='red'>空数组代表未指定</font>），具体的控件类型如下
<ul><li>SIGN_SIGNATURE : 个人签名/印章</li>
<li>SIGN_SEAL : 企业印章</li>
<li>SIGN_PAGING_SEAL : 骑缝章</li>
<li>SIGN_LEGAL_PERSON_SEAL : 法定代表人章</li>
<li>SIGN_APPROVE : 签批</li>
<li>SIGN_OPINION : 签署意见</li>
<li>SIGN_PAGING_SIGNATURE : 手写签名骑缝控件</li>
<li>BUSI-FULL-NAME  : 企业全称</li>
<li>BUSI-CREDIT-CODE : 统一社会信用代码</li>
<li>BUSI-LEGAL-NAME : 法人/经营者姓名</li>
<li>PERSONAL-NAME : 签署人姓名</li>
<li>PERSONAL-MOBILE : 签署人手机号</li>
<li>PERSONAL-IDCARD-TYPE : 签署人证件类型</li>
<li>PERSONAL-IDCARD : 签署人证件号</li>
<li>TEXT : 单行文本</li>
<li>MULTI_LINE_TEXT : 多行文本</li>
<li>CHECK_BOX : 勾选框</li>
<li>SELECTOR : 选择器</li>
<li>DIGIT : 数字</li>
<li>DATE : 日期</li>
<li>FILL_IMAGE : 图片</li>
<li>ATTACHMENT : 附件</li>
<li>EMAIL : 邮箱</li>
<li>LOCATION : 地址</li>
<li>EDUCATION : 学历</li>
<li>GENDER : 性别</li>
<li>DISTRICT : 省市区</li></ul>
                     * @param _showComponentTypes 在发起流程的可嵌入页面要显示的控件列表，和 HideComponentTypes 参数 只能二选一使用（注: 
<font color='red'>空数组代表未指定</font>），具体的控件类型如下
<ul><li>SIGN_SIGNATURE : 个人签名/印章</li>
<li>SIGN_SEAL : 企业印章</li>
<li>SIGN_PAGING_SEAL : 骑缝章</li>
<li>SIGN_LEGAL_PERSON_SEAL : 法定代表人章</li>
<li>SIGN_APPROVE : 签批</li>
<li>SIGN_OPINION : 签署意见</li>
<li>SIGN_PAGING_SIGNATURE : 手写签名骑缝控件</li>
<li>BUSI-FULL-NAME  : 企业全称</li>
<li>BUSI-CREDIT-CODE : 统一社会信用代码</li>
<li>BUSI-LEGAL-NAME : 法人/经营者姓名</li>
<li>PERSONAL-NAME : 签署人姓名</li>
<li>PERSONAL-MOBILE : 签署人手机号</li>
<li>PERSONAL-IDCARD-TYPE : 签署人证件类型</li>
<li>PERSONAL-IDCARD : 签署人证件号</li>
<li>TEXT : 单行文本</li>
<li>MULTI_LINE_TEXT : 多行文本</li>
<li>CHECK_BOX : 勾选框</li>
<li>SELECTOR : 选择器</li>
<li>DIGIT : 数字</li>
<li>DATE : 日期</li>
<li>FILL_IMAGE : 图片</li>
<li>ATTACHMENT : 附件</li>
<li>EMAIL : 邮箱</li>
<li>LOCATION : 地址</li>
<li>EDUCATION : 学历</li>
<li>GENDER : 性别</li>
<li>DISTRICT : 省市区</li></ul>
                     * 
                     */
                    void SetShowComponentTypes(const std::vector<std::string>& _showComponentTypes);

                    /**
                     * 判断参数 ShowComponentTypes 是否已赋值
                     * @return ShowComponentTypes 是否已赋值
                     * 
                     */
                    bool ShowComponentTypesHasBeenSet() const;

                    /**
                     * 获取 禁止添加签署方，若为true则在发起流程的可嵌入页面隐藏“添加签署人按钮”

                     * @return ForbidAddApprover  禁止添加签署方，若为true则在发起流程的可嵌入页面隐藏“添加签署人按钮”

                     * 
                     */
                    bool GetForbidAddApprover() const;

                    /**
                     * 设置 禁止添加签署方，若为true则在发起流程的可嵌入页面隐藏“添加签署人按钮”

                     * @param _forbidAddApprover  禁止添加签署方，若为true则在发起流程的可嵌入页面隐藏“添加签署人按钮”

                     * 
                     */
                    void SetForbidAddApprover(const bool& _forbidAddApprover);

                    /**
                     * 判断参数 ForbidAddApprover 是否已赋值
                     * @return ForbidAddApprover 是否已赋值
                     * 
                     */
                    bool ForbidAddApproverHasBeenSet() const;

                    /**
                     * 获取  禁止设置签署流程属性 (顺序、合同签署认证方式等)，若为true则在发起流程的可嵌入页面隐藏签署流程设置面板

                     * @return ForbidEditFlowProperties   禁止设置签署流程属性 (顺序、合同签署认证方式等)，若为true则在发起流程的可嵌入页面隐藏签署流程设置面板

                     * 
                     */
                    bool GetForbidEditFlowProperties() const;

                    /**
                     * 设置  禁止设置签署流程属性 (顺序、合同签署认证方式等)，若为true则在发起流程的可嵌入页面隐藏签署流程设置面板

                     * @param _forbidEditFlowProperties   禁止设置签署流程属性 (顺序、合同签署认证方式等)，若为true则在发起流程的可嵌入页面隐藏签署流程设置面板

                     * 
                     */
                    void SetForbidEditFlowProperties(const bool& _forbidEditFlowProperties);

                    /**
                     * 判断参数 ForbidEditFlowProperties 是否已赋值
                     * @return ForbidEditFlowProperties 是否已赋值
                     * 
                     */
                    bool ForbidEditFlowPropertiesHasBeenSet() const;

                    /**
                     * 获取发起流程的可嵌入页面结果页配置
                     * @return ResultPageConfig 发起流程的可嵌入页面结果页配置
                     * 
                     */
                    CreateResultPageConfig GetResultPageConfig() const;

                    /**
                     * 设置发起流程的可嵌入页面结果页配置
                     * @param _resultPageConfig 发起流程的可嵌入页面结果页配置
                     * 
                     */
                    void SetResultPageConfig(const CreateResultPageConfig& _resultPageConfig);

                    /**
                     * 判断参数 ResultPageConfig 是否已赋值
                     * @return ResultPageConfig 是否已赋值
                     * 
                     */
                    bool ResultPageConfigHasBeenSet() const;

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
                     * 是否可以编辑签署人包括新增，修改，删除 
<ul><li>（默认） false -可以编辑签署人</li> <li> true - 禁止编辑签署人</li></ul>



注意：
* 如果设置参数为 true， 则 参数签署人 [FlowApproverList](https://qian.tencent.com/developers/partnerApis/embedPages/ChannelCreatePrepareFlow) 不能为空
* 此参数对子客和自动签无效，不允许进行修改。
                     */
                    bool m_forbidEditApprover;
                    bool m_forbidEditApproverHasBeenSet;

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
                    bool m_skipUploadFile;
                    bool m_skipUploadFileHasBeenSet;

                    /**
                     * 签署控件的配置信息，用在嵌入式发起的页面配置，包括 
 - 签署控件 是否默认展示日期.
                     */
                    SignComponentConfig m_signComponentConfig;
                    bool m_signComponentConfigHasBeenSet;

                    /**
                     * 是否禁止编辑（展示）水印控件属性
<ul><li>（默认） false -否</li> <li> true - 禁止编辑</li></ul>
                     */
                    bool m_forbidEditWatermark;
                    bool m_forbidEditWatermarkHasBeenSet;

                    /**
                     * 发起成功后是否预览合同
<ul><li>（默认） false -否</li> <li> true - 展示预览按钮</li></ul>
                     */
                    bool m_previewAfterStart;
                    bool m_previewAfterStartHasBeenSet;

                    /**
                     * 发起成功之后是否签署合同，仅当前经办人作为签署人时生效
<ul><li>（默认） false -否</li> <li> true - 展示签署按钮</li></ul>
                     */
                    bool m_signAfterStart;
                    bool m_signAfterStartHasBeenSet;

                    /**
                     * 隐藏操作步骤: 具体的控件类型如下

<ul><li>1 : 选择文件及签署方</li>
<li>2 : 补充文件内容</li>
<li>4 : 发起前合同信息与设置确认</li>
</ul>
注：仅对新版页面生效
                     */
                    std::vector<uint64_t> m_hideOperationSteps;
                    bool m_hideOperationStepsHasBeenSet;

                    /**
                     * 本企业简称，注：仅对新版页面生效
                     */
                    std::string m_selfName;
                    bool m_selfNameHasBeenSet;

                    /**
                     * 发起后签署码隐藏，默认false，注：仅对新版页面生效
                     */
                    bool m_hideSignCodeAfterStart;
                    bool m_hideSignCodeAfterStartHasBeenSet;

                    /**
                     * 发起过程中是否保存草稿	
                     */
                    bool m_needFlowDraft;
                    bool m_needFlowDraftHasBeenSet;

                    /**
                     * 在发起流程的可嵌入页面要隐藏的控件列表，和 ShowComponentTypes 参数 只能二选一使用（注: 
<font color='red'>空数组代表未指定</font>），具体的控件类型如下

<ul><li>SIGN_SIGNATURE : 个人签名/印章</li>
<li>SIGN_SEAL : 企业印章</li>
<li>SIGN_PAGING_SEAL : 骑缝章</li>
<li>SIGN_LEGAL_PERSON_SEAL : 法定代表人章</li>
<li>SIGN_APPROVE : 签批</li>
<li>SIGN_OPINION : 签署意见</li>
<li>SIGN_PAGING_SIGNATURE : 手写签名骑缝控件</li>
<li>BUSI-FULL-NAME  : 企业全称</li>
<li>BUSI-CREDIT-CODE : 统一社会信用代码</li>
<li>BUSI-LEGAL-NAME : 法人/经营者姓名</li>
<li>PERSONAL-NAME : 签署人姓名</li>
<li>PERSONAL-MOBILE : 签署人手机号</li>
<li>PERSONAL-IDCARD-TYPE : 签署人证件类型</li>
<li>PERSONAL-IDCARD : 签署人证件号</li>
<li>TEXT : 单行文本</li>
<li>MULTI_LINE_TEXT : 多行文本</li>
<li>CHECK_BOX : 勾选框</li>
<li>SELECTOR : 选择器</li>
<li>DIGIT : 数字</li>
<li>DATE : 日期</li>
<li>FILL_IMAGE : 图片</li>
<li>ATTACHMENT : 附件</li>
<li>EMAIL : 邮箱</li>
<li>LOCATION : 地址</li>
<li>EDUCATION : 学历</li>
<li>GENDER : 性别</li>
<li>DISTRICT : 省市区</li></ul>
                     */
                    std::vector<std::string> m_hideComponentTypes;
                    bool m_hideComponentTypesHasBeenSet;

                    /**
                     * 在发起流程的可嵌入页面要显示的控件列表，和 HideComponentTypes 参数 只能二选一使用（注: 
<font color='red'>空数组代表未指定</font>），具体的控件类型如下
<ul><li>SIGN_SIGNATURE : 个人签名/印章</li>
<li>SIGN_SEAL : 企业印章</li>
<li>SIGN_PAGING_SEAL : 骑缝章</li>
<li>SIGN_LEGAL_PERSON_SEAL : 法定代表人章</li>
<li>SIGN_APPROVE : 签批</li>
<li>SIGN_OPINION : 签署意见</li>
<li>SIGN_PAGING_SIGNATURE : 手写签名骑缝控件</li>
<li>BUSI-FULL-NAME  : 企业全称</li>
<li>BUSI-CREDIT-CODE : 统一社会信用代码</li>
<li>BUSI-LEGAL-NAME : 法人/经营者姓名</li>
<li>PERSONAL-NAME : 签署人姓名</li>
<li>PERSONAL-MOBILE : 签署人手机号</li>
<li>PERSONAL-IDCARD-TYPE : 签署人证件类型</li>
<li>PERSONAL-IDCARD : 签署人证件号</li>
<li>TEXT : 单行文本</li>
<li>MULTI_LINE_TEXT : 多行文本</li>
<li>CHECK_BOX : 勾选框</li>
<li>SELECTOR : 选择器</li>
<li>DIGIT : 数字</li>
<li>DATE : 日期</li>
<li>FILL_IMAGE : 图片</li>
<li>ATTACHMENT : 附件</li>
<li>EMAIL : 邮箱</li>
<li>LOCATION : 地址</li>
<li>EDUCATION : 学历</li>
<li>GENDER : 性别</li>
<li>DISTRICT : 省市区</li></ul>
                     */
                    std::vector<std::string> m_showComponentTypes;
                    bool m_showComponentTypesHasBeenSet;

                    /**
                     *  禁止添加签署方，若为true则在发起流程的可嵌入页面隐藏“添加签署人按钮”

                     */
                    bool m_forbidAddApprover;
                    bool m_forbidAddApproverHasBeenSet;

                    /**
                     *   禁止设置签署流程属性 (顺序、合同签署认证方式等)，若为true则在发起流程的可嵌入页面隐藏签署流程设置面板

                     */
                    bool m_forbidEditFlowProperties;
                    bool m_forbidEditFlowPropertiesHasBeenSet;

                    /**
                     * 发起流程的可嵌入页面结果页配置
                     */
                    CreateResultPageConfig m_resultPageConfig;
                    bool m_resultPageConfigHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_CREATEFLOWOPTION_H_
