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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWOPTION_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWOPTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/CreateResultPageConfig.h>
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
                     * 获取<p>是否允许修改发起合同时确认弹窗的合同信息（合同名称、合同类型、签署截止时间），若不允许编辑，则表单字段将被禁止输入。<br><br>true：允许编辑<br>false：不允许编辑（默认值）<br></p>
                     * @return CanEditFlow <p>是否允许修改发起合同时确认弹窗的合同信息（合同名称、合同类型、签署截止时间），若不允许编辑，则表单字段将被禁止输入。<br><br>true：允许编辑<br>false：不允许编辑（默认值）<br></p>
                     * 
                     */
                    bool GetCanEditFlow() const;

                    /**
                     * 设置<p>是否允许修改发起合同时确认弹窗的合同信息（合同名称、合同类型、签署截止时间），若不允许编辑，则表单字段将被禁止输入。<br><br>true：允许编辑<br>false：不允许编辑（默认值）<br></p>
                     * @param _canEditFlow <p>是否允许修改发起合同时确认弹窗的合同信息（合同名称、合同类型、签署截止时间），若不允许编辑，则表单字段将被禁止输入。<br><br>true：允许编辑<br>false：不允许编辑（默认值）<br></p>
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
                     * 获取<p>是否允许编辑模板控件<br><br>true:允许编辑模板控件信息<br><br>false:不允许编辑模板控件信息（默认值）<br><br></p>
                     * @return CanEditFormField <p>是否允许编辑模板控件<br><br>true:允许编辑模板控件信息<br><br>false:不允许编辑模板控件信息（默认值）<br><br></p>
                     * 
                     */
                    bool GetCanEditFormField() const;

                    /**
                     * 设置<p>是否允许编辑模板控件<br><br>true:允许编辑模板控件信息<br><br>false:不允许编辑模板控件信息（默认值）<br><br></p>
                     * @param _canEditFormField <p>是否允许编辑模板控件<br><br>true:允许编辑模板控件信息<br><br>false:不允许编辑模板控件信息（默认值）<br><br></p>
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
                     * 获取<p>发起页面隐藏合同名称展示<br><br>true:发起页面隐藏合同名称展示<br><br>false:发起页面不隐藏合同名称展示（默认值）<br><br></p>
                     * @return HideShowFlowName <p>发起页面隐藏合同名称展示<br><br>true:发起页面隐藏合同名称展示<br><br>false:发起页面不隐藏合同名称展示（默认值）<br><br></p>
                     * 
                     */
                    bool GetHideShowFlowName() const;

                    /**
                     * 设置<p>发起页面隐藏合同名称展示<br><br>true:发起页面隐藏合同名称展示<br><br>false:发起页面不隐藏合同名称展示（默认值）<br><br></p>
                     * @param _hideShowFlowName <p>发起页面隐藏合同名称展示<br><br>true:发起页面隐藏合同名称展示<br><br>false:发起页面不隐藏合同名称展示（默认值）<br><br></p>
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
                     * 获取<p>发起页面隐藏合同类型展示<br><br>true:发起页面隐藏合同类型展示<br><br>false:发起页面不隐藏合同类型展示（默认值）<br><br></p>
                     * @return HideShowFlowType <p>发起页面隐藏合同类型展示<br><br>true:发起页面隐藏合同类型展示<br><br>false:发起页面不隐藏合同类型展示（默认值）<br><br></p>
                     * 
                     */
                    bool GetHideShowFlowType() const;

                    /**
                     * 设置<p>发起页面隐藏合同类型展示<br><br>true:发起页面隐藏合同类型展示<br><br>false:发起页面不隐藏合同类型展示（默认值）<br><br></p>
                     * @param _hideShowFlowType <p>发起页面隐藏合同类型展示<br><br>true:发起页面隐藏合同类型展示<br><br>false:发起页面不隐藏合同类型展示（默认值）<br><br></p>
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
                     * 获取<p>发起页面隐藏合同截止日期展示<br><br>true:发起页面隐藏合同截止日期展示<br><br>false:发起页面不隐藏合同截止日期展示（默认值）<br><br></p>
                     * @return HideShowDeadline <p>发起页面隐藏合同截止日期展示<br><br>true:发起页面隐藏合同截止日期展示<br><br>false:发起页面不隐藏合同截止日期展示（默认值）<br><br></p>
                     * 
                     */
                    bool GetHideShowDeadline() const;

                    /**
                     * 设置<p>发起页面隐藏合同截止日期展示<br><br>true:发起页面隐藏合同截止日期展示<br><br>false:发起页面不隐藏合同截止日期展示（默认值）<br><br></p>
                     * @param _hideShowDeadline <p>发起页面隐藏合同截止日期展示<br><br>true:发起页面隐藏合同截止日期展示<br><br>false:发起页面不隐藏合同截止日期展示（默认值）<br><br></p>
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
                     * 获取<p>发起页面允许跳过添加签署人环节<br><br>true:发起页面允许跳过添加签署人环节<br><br>false:发起页面不允许跳过添加签署人环节（默认值）<br><br></p>
                     * @return CanSkipAddApprover <p>发起页面允许跳过添加签署人环节<br><br>true:发起页面允许跳过添加签署人环节<br><br>false:发起页面不允许跳过添加签署人环节（默认值）<br><br></p>
                     * 
                     */
                    bool GetCanSkipAddApprover() const;

                    /**
                     * 设置<p>发起页面允许跳过添加签署人环节<br><br>true:发起页面允许跳过添加签署人环节<br><br>false:发起页面不允许跳过添加签署人环节（默认值）<br><br></p>
                     * @param _canSkipAddApprover <p>发起页面允许跳过添加签署人环节<br><br>true:发起页面允许跳过添加签署人环节<br><br>false:发起页面不允许跳过添加签署人环节（默认值）<br><br></p>
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
                     * 获取<p>文件发起页面跳过文件上传步骤<br><br>true:文件发起页面跳过文件上传步骤<br><br>false:文件发起页面不跳过文件上传步骤（默认值）<br><br></p>
                     * @return SkipUploadFile <p>文件发起页面跳过文件上传步骤<br><br>true:文件发起页面跳过文件上传步骤<br><br>false:文件发起页面不跳过文件上传步骤（默认值）<br><br></p>
                     * 
                     */
                    bool GetSkipUploadFile() const;

                    /**
                     * 设置<p>文件发起页面跳过文件上传步骤<br><br>true:文件发起页面跳过文件上传步骤<br><br>false:文件发起页面不跳过文件上传步骤（默认值）<br><br></p>
                     * @param _skipUploadFile <p>文件发起页面跳过文件上传步骤<br><br>true:文件发起页面跳过文件上传步骤<br><br>false:文件发起页面不跳过文件上传步骤（默认值）<br><br></p>
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
                     * 获取<p>禁止编辑填写控件<br><br>true:禁止编辑填写控件<br><br>false:允许编辑填写控件（默认值）<br><br></p>
                     * @return ForbidEditFillComponent <p>禁止编辑填写控件<br><br>true:禁止编辑填写控件<br><br>false:允许编辑填写控件（默认值）<br><br></p>
                     * 
                     */
                    bool GetForbidEditFillComponent() const;

                    /**
                     * 设置<p>禁止编辑填写控件<br><br>true:禁止编辑填写控件<br><br>false:允许编辑填写控件（默认值）<br><br></p>
                     * @param _forbidEditFillComponent <p>禁止编辑填写控件<br><br>true:禁止编辑填写控件<br><br>false:允许编辑填写控件（默认值）<br><br></p>
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
                     * 获取<p>定制化发起合同弹窗的描述信息，描述信息最长500字符</p>
                     * @return CustomCreateFlowDescription <p>定制化发起合同弹窗的描述信息，描述信息最长500字符</p>
                     * 
                     */
                    std::string GetCustomCreateFlowDescription() const;

                    /**
                     * 设置<p>定制化发起合同弹窗的描述信息，描述信息最长500字符</p>
                     * @param _customCreateFlowDescription <p>定制化发起合同弹窗的描述信息，描述信息最长500字符</p>
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
                     * 获取<p>禁止添加签署方，若为true则在发起流程的可嵌入页面隐藏“添加签署人按钮”</p>
                     * @return ForbidAddApprover <p>禁止添加签署方，若为true则在发起流程的可嵌入页面隐藏“添加签署人按钮”</p>
                     * 
                     */
                    bool GetForbidAddApprover() const;

                    /**
                     * 设置<p>禁止添加签署方，若为true则在发起流程的可嵌入页面隐藏“添加签署人按钮”</p>
                     * @param _forbidAddApprover <p>禁止添加签署方，若为true则在发起流程的可嵌入页面隐藏“添加签署人按钮”</p>
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
                     * 获取<p>是否可以编辑签署人包括新增，修改，删除 </p><ul><li>（默认） false -可以编辑签署人</li> <li> true - 禁止编辑签署人</li></ul><p>注意：如果设置参数为  true， 则 参数签署人 <a href="https://qian.tencent.com/developers/partnerApis/embedPages/ChannelCreatePrepareFlow">FlowApproverList</a> 不能为空</p>
                     * @return ForbidEditApprover <p>是否可以编辑签署人包括新增，修改，删除 </p><ul><li>（默认） false -可以编辑签署人</li> <li> true - 禁止编辑签署人</li></ul><p>注意：如果设置参数为  true， 则 参数签署人 <a href="https://qian.tencent.com/developers/partnerApis/embedPages/ChannelCreatePrepareFlow">FlowApproverList</a> 不能为空</p>
                     * 
                     */
                    bool GetForbidEditApprover() const;

                    /**
                     * 设置<p>是否可以编辑签署人包括新增，修改，删除 </p><ul><li>（默认） false -可以编辑签署人</li> <li> true - 禁止编辑签署人</li></ul><p>注意：如果设置参数为  true， 则 参数签署人 <a href="https://qian.tencent.com/developers/partnerApis/embedPages/ChannelCreatePrepareFlow">FlowApproverList</a> 不能为空</p>
                     * @param _forbidEditApprover <p>是否可以编辑签署人包括新增，修改，删除 </p><ul><li>（默认） false -可以编辑签署人</li> <li> true - 禁止编辑签署人</li></ul><p>注意：如果设置参数为  true， 则 参数签署人 <a href="https://qian.tencent.com/developers/partnerApis/embedPages/ChannelCreatePrepareFlow">FlowApproverList</a> 不能为空</p>
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
                     * 获取<p>禁止设置签署流程属性 (顺序、合同签署认证方式等)，若为true则在发起流程的可嵌入页面隐藏签署流程设置面板</p>
                     * @return ForbidEditFlowProperties <p>禁止设置签署流程属性 (顺序、合同签署认证方式等)，若为true则在发起流程的可嵌入页面隐藏签署流程设置面板</p>
                     * 
                     */
                    bool GetForbidEditFlowProperties() const;

                    /**
                     * 设置<p>禁止设置签署流程属性 (顺序、合同签署认证方式等)，若为true则在发起流程的可嵌入页面隐藏签署流程设置面板</p>
                     * @param _forbidEditFlowProperties <p>禁止设置签署流程属性 (顺序、合同签署认证方式等)，若为true则在发起流程的可嵌入页面隐藏签署流程设置面板</p>
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
                     * 获取<p>在发起流程的可嵌入页面要隐藏的控件列表，和 ShowComponentTypes 参数 只能二选一使用（注:<br><font color="red">空数组代表未指定</font>），具体的控件类型如下</p><ul><li>SIGN_SIGNATURE : 个人签名/印章</li><li>SIGN_SEAL : 企业印章</li><li>SIGN_PAGING_SEAL : 骑缝章</li><li>SIGN_LEGAL_PERSON_SEAL : 法定代表人章</li><li>SIGN_APPROVE : 签批</li><li>SIGN_OPINION : 签署意见</li><li>SIGN_PAGING_SIGNATURE : 手写签名骑缝控件</li><li>BUSI-FULL-NAME  : 企业全称</li><li>BUSI-CREDIT-CODE : 统一社会信用代码</li><li>BUSI-LEGAL-NAME : 法人/经营者姓名</li><li>PERSONAL-NAME : 签署人姓名</li><li>PERSONAL-MOBILE : 签署人手机号</li><li>PERSONAL-IDCARD-TYPE : 签署人证件类型</li><li>PERSONAL-IDCARD : 签署人证件号</li><li>TEXT : 单行文本</li><li>MULTI_LINE_TEXT : 多行文本</li><li>CHECK_BOX : 勾选框</li><li>SELECTOR : 选择器</li><li>DIGIT : 数字</li><li>DATE : 日期</li><li>FILL_IMAGE : 图片</li><li>ATTACHMENT : 附件</li><li>EMAIL : 邮箱</li><li>LOCATION : 地址</li><li>EDUCATION : 学历</li><li>GENDER : 性别</li><li>DISTRICT : 省市区</li></ul>
                     * @return HideComponentTypes <p>在发起流程的可嵌入页面要隐藏的控件列表，和 ShowComponentTypes 参数 只能二选一使用（注:<br><font color="red">空数组代表未指定</font>），具体的控件类型如下</p><ul><li>SIGN_SIGNATURE : 个人签名/印章</li><li>SIGN_SEAL : 企业印章</li><li>SIGN_PAGING_SEAL : 骑缝章</li><li>SIGN_LEGAL_PERSON_SEAL : 法定代表人章</li><li>SIGN_APPROVE : 签批</li><li>SIGN_OPINION : 签署意见</li><li>SIGN_PAGING_SIGNATURE : 手写签名骑缝控件</li><li>BUSI-FULL-NAME  : 企业全称</li><li>BUSI-CREDIT-CODE : 统一社会信用代码</li><li>BUSI-LEGAL-NAME : 法人/经营者姓名</li><li>PERSONAL-NAME : 签署人姓名</li><li>PERSONAL-MOBILE : 签署人手机号</li><li>PERSONAL-IDCARD-TYPE : 签署人证件类型</li><li>PERSONAL-IDCARD : 签署人证件号</li><li>TEXT : 单行文本</li><li>MULTI_LINE_TEXT : 多行文本</li><li>CHECK_BOX : 勾选框</li><li>SELECTOR : 选择器</li><li>DIGIT : 数字</li><li>DATE : 日期</li><li>FILL_IMAGE : 图片</li><li>ATTACHMENT : 附件</li><li>EMAIL : 邮箱</li><li>LOCATION : 地址</li><li>EDUCATION : 学历</li><li>GENDER : 性别</li><li>DISTRICT : 省市区</li></ul>
                     * 
                     */
                    std::vector<std::string> GetHideComponentTypes() const;

                    /**
                     * 设置<p>在发起流程的可嵌入页面要隐藏的控件列表，和 ShowComponentTypes 参数 只能二选一使用（注:<br><font color="red">空数组代表未指定</font>），具体的控件类型如下</p><ul><li>SIGN_SIGNATURE : 个人签名/印章</li><li>SIGN_SEAL : 企业印章</li><li>SIGN_PAGING_SEAL : 骑缝章</li><li>SIGN_LEGAL_PERSON_SEAL : 法定代表人章</li><li>SIGN_APPROVE : 签批</li><li>SIGN_OPINION : 签署意见</li><li>SIGN_PAGING_SIGNATURE : 手写签名骑缝控件</li><li>BUSI-FULL-NAME  : 企业全称</li><li>BUSI-CREDIT-CODE : 统一社会信用代码</li><li>BUSI-LEGAL-NAME : 法人/经营者姓名</li><li>PERSONAL-NAME : 签署人姓名</li><li>PERSONAL-MOBILE : 签署人手机号</li><li>PERSONAL-IDCARD-TYPE : 签署人证件类型</li><li>PERSONAL-IDCARD : 签署人证件号</li><li>TEXT : 单行文本</li><li>MULTI_LINE_TEXT : 多行文本</li><li>CHECK_BOX : 勾选框</li><li>SELECTOR : 选择器</li><li>DIGIT : 数字</li><li>DATE : 日期</li><li>FILL_IMAGE : 图片</li><li>ATTACHMENT : 附件</li><li>EMAIL : 邮箱</li><li>LOCATION : 地址</li><li>EDUCATION : 学历</li><li>GENDER : 性别</li><li>DISTRICT : 省市区</li></ul>
                     * @param _hideComponentTypes <p>在发起流程的可嵌入页面要隐藏的控件列表，和 ShowComponentTypes 参数 只能二选一使用（注:<br><font color="red">空数组代表未指定</font>），具体的控件类型如下</p><ul><li>SIGN_SIGNATURE : 个人签名/印章</li><li>SIGN_SEAL : 企业印章</li><li>SIGN_PAGING_SEAL : 骑缝章</li><li>SIGN_LEGAL_PERSON_SEAL : 法定代表人章</li><li>SIGN_APPROVE : 签批</li><li>SIGN_OPINION : 签署意见</li><li>SIGN_PAGING_SIGNATURE : 手写签名骑缝控件</li><li>BUSI-FULL-NAME  : 企业全称</li><li>BUSI-CREDIT-CODE : 统一社会信用代码</li><li>BUSI-LEGAL-NAME : 法人/经营者姓名</li><li>PERSONAL-NAME : 签署人姓名</li><li>PERSONAL-MOBILE : 签署人手机号</li><li>PERSONAL-IDCARD-TYPE : 签署人证件类型</li><li>PERSONAL-IDCARD : 签署人证件号</li><li>TEXT : 单行文本</li><li>MULTI_LINE_TEXT : 多行文本</li><li>CHECK_BOX : 勾选框</li><li>SELECTOR : 选择器</li><li>DIGIT : 数字</li><li>DATE : 日期</li><li>FILL_IMAGE : 图片</li><li>ATTACHMENT : 附件</li><li>EMAIL : 邮箱</li><li>LOCATION : 地址</li><li>EDUCATION : 学历</li><li>GENDER : 性别</li><li>DISTRICT : 省市区</li></ul>
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
                     * 获取<p>在发起流程的可嵌入页面要显示的控件列表，和 HideComponentTypes 参数 只能二选一使用（注:<br><font color="red">空数组代表未指定</font>），具体的控件类型如下</p><ul><li>SIGN_SIGNATURE : 个人签名/印章</li><li>SIGN_SEAL : 企业印章</li><li>SIGN_PAGING_SEAL : 骑缝章</li><li>SIGN_LEGAL_PERSON_SEAL : 法定代表人章</li><li>SIGN_APPROVE : 签批</li><li>SIGN_OPINION : 签署意见</li><li>SIGN_PAGING_SIGNATURE : 手写签名骑缝控件</li><li>BUSI-FULL-NAME  : 企业全称</li><li>BUSI-CREDIT-CODE : 统一社会信用代码</li><li>BUSI-LEGAL-NAME : 法人/经营者姓名</li><li>PERSONAL-NAME : 签署人姓名</li><li>PERSONAL-MOBILE : 签署人手机号</li><li>PERSONAL-IDCARD-TYPE : 签署人证件类型</li><li>PERSONAL-IDCARD : 签署人证件号</li><li>TEXT : 单行文本</li><li>MULTI_LINE_TEXT : 多行文本</li><li>CHECK_BOX : 勾选框</li><li>SELECTOR : 选择器</li><li>DIGIT : 数字</li><li>DATE : 日期</li><li>FILL_IMAGE : 图片</li><li>ATTACHMENT : 附件</li><li>EMAIL : 邮箱</li><li>LOCATION : 地址</li><li>EDUCATION : 学历</li><li>GENDER : 性别</li><li>DISTRICT : 省市区</li></ul>
                     * @return ShowComponentTypes <p>在发起流程的可嵌入页面要显示的控件列表，和 HideComponentTypes 参数 只能二选一使用（注:<br><font color="red">空数组代表未指定</font>），具体的控件类型如下</p><ul><li>SIGN_SIGNATURE : 个人签名/印章</li><li>SIGN_SEAL : 企业印章</li><li>SIGN_PAGING_SEAL : 骑缝章</li><li>SIGN_LEGAL_PERSON_SEAL : 法定代表人章</li><li>SIGN_APPROVE : 签批</li><li>SIGN_OPINION : 签署意见</li><li>SIGN_PAGING_SIGNATURE : 手写签名骑缝控件</li><li>BUSI-FULL-NAME  : 企业全称</li><li>BUSI-CREDIT-CODE : 统一社会信用代码</li><li>BUSI-LEGAL-NAME : 法人/经营者姓名</li><li>PERSONAL-NAME : 签署人姓名</li><li>PERSONAL-MOBILE : 签署人手机号</li><li>PERSONAL-IDCARD-TYPE : 签署人证件类型</li><li>PERSONAL-IDCARD : 签署人证件号</li><li>TEXT : 单行文本</li><li>MULTI_LINE_TEXT : 多行文本</li><li>CHECK_BOX : 勾选框</li><li>SELECTOR : 选择器</li><li>DIGIT : 数字</li><li>DATE : 日期</li><li>FILL_IMAGE : 图片</li><li>ATTACHMENT : 附件</li><li>EMAIL : 邮箱</li><li>LOCATION : 地址</li><li>EDUCATION : 学历</li><li>GENDER : 性别</li><li>DISTRICT : 省市区</li></ul>
                     * 
                     */
                    std::vector<std::string> GetShowComponentTypes() const;

                    /**
                     * 设置<p>在发起流程的可嵌入页面要显示的控件列表，和 HideComponentTypes 参数 只能二选一使用（注:<br><font color="red">空数组代表未指定</font>），具体的控件类型如下</p><ul><li>SIGN_SIGNATURE : 个人签名/印章</li><li>SIGN_SEAL : 企业印章</li><li>SIGN_PAGING_SEAL : 骑缝章</li><li>SIGN_LEGAL_PERSON_SEAL : 法定代表人章</li><li>SIGN_APPROVE : 签批</li><li>SIGN_OPINION : 签署意见</li><li>SIGN_PAGING_SIGNATURE : 手写签名骑缝控件</li><li>BUSI-FULL-NAME  : 企业全称</li><li>BUSI-CREDIT-CODE : 统一社会信用代码</li><li>BUSI-LEGAL-NAME : 法人/经营者姓名</li><li>PERSONAL-NAME : 签署人姓名</li><li>PERSONAL-MOBILE : 签署人手机号</li><li>PERSONAL-IDCARD-TYPE : 签署人证件类型</li><li>PERSONAL-IDCARD : 签署人证件号</li><li>TEXT : 单行文本</li><li>MULTI_LINE_TEXT : 多行文本</li><li>CHECK_BOX : 勾选框</li><li>SELECTOR : 选择器</li><li>DIGIT : 数字</li><li>DATE : 日期</li><li>FILL_IMAGE : 图片</li><li>ATTACHMENT : 附件</li><li>EMAIL : 邮箱</li><li>LOCATION : 地址</li><li>EDUCATION : 学历</li><li>GENDER : 性别</li><li>DISTRICT : 省市区</li></ul>
                     * @param _showComponentTypes <p>在发起流程的可嵌入页面要显示的控件列表，和 HideComponentTypes 参数 只能二选一使用（注:<br><font color="red">空数组代表未指定</font>），具体的控件类型如下</p><ul><li>SIGN_SIGNATURE : 个人签名/印章</li><li>SIGN_SEAL : 企业印章</li><li>SIGN_PAGING_SEAL : 骑缝章</li><li>SIGN_LEGAL_PERSON_SEAL : 法定代表人章</li><li>SIGN_APPROVE : 签批</li><li>SIGN_OPINION : 签署意见</li><li>SIGN_PAGING_SIGNATURE : 手写签名骑缝控件</li><li>BUSI-FULL-NAME  : 企业全称</li><li>BUSI-CREDIT-CODE : 统一社会信用代码</li><li>BUSI-LEGAL-NAME : 法人/经营者姓名</li><li>PERSONAL-NAME : 签署人姓名</li><li>PERSONAL-MOBILE : 签署人手机号</li><li>PERSONAL-IDCARD-TYPE : 签署人证件类型</li><li>PERSONAL-IDCARD : 签署人证件号</li><li>TEXT : 单行文本</li><li>MULTI_LINE_TEXT : 多行文本</li><li>CHECK_BOX : 勾选框</li><li>SELECTOR : 选择器</li><li>DIGIT : 数字</li><li>DATE : 日期</li><li>FILL_IMAGE : 图片</li><li>ATTACHMENT : 附件</li><li>EMAIL : 邮箱</li><li>LOCATION : 地址</li><li>EDUCATION : 学历</li><li>GENDER : 性别</li><li>DISTRICT : 省市区</li></ul>
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
                     * 获取<p>发起流程的可嵌入页面结果页配置</p>
                     * @return ResultPageConfig <p>发起流程的可嵌入页面结果页配置</p>
                     * 
                     */
                    std::vector<CreateResultPageConfig> GetResultPageConfig() const;

                    /**
                     * 设置<p>发起流程的可嵌入页面结果页配置</p>
                     * @param _resultPageConfig <p>发起流程的可嵌入页面结果页配置</p>
                     * 
                     */
                    void SetResultPageConfig(const std::vector<CreateResultPageConfig>& _resultPageConfig);

                    /**
                     * 判断参数 ResultPageConfig 是否已赋值
                     * @return ResultPageConfig 是否已赋值
                     * 
                     */
                    bool ResultPageConfigHasBeenSet() const;

                    /**
                     * 获取<p>签署控件的配置信息，用在嵌入式发起的页面配置，包括 </p><ul><li>签署控件 是否默认展示日期.</li></ul>
                     * @return SignComponentConfig <p>签署控件的配置信息，用在嵌入式发起的页面配置，包括 </p><ul><li>签署控件 是否默认展示日期.</li></ul>
                     * 
                     */
                    SignComponentConfig GetSignComponentConfig() const;

                    /**
                     * 设置<p>签署控件的配置信息，用在嵌入式发起的页面配置，包括 </p><ul><li>签署控件 是否默认展示日期.</li></ul>
                     * @param _signComponentConfig <p>签署控件的配置信息，用在嵌入式发起的页面配置，包括 </p><ul><li>签署控件 是否默认展示日期.</li></ul>
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
                     * 获取<p>是否禁止编辑（展示）水印控件属性</p><ul><li>（默认） false -否</li> <li> true - 禁止编辑</li></ul>
                     * @return ForbidEditWatermark <p>是否禁止编辑（展示）水印控件属性</p><ul><li>（默认） false -否</li> <li> true - 禁止编辑</li></ul>
                     * 
                     */
                    bool GetForbidEditWatermark() const;

                    /**
                     * 设置<p>是否禁止编辑（展示）水印控件属性</p><ul><li>（默认） false -否</li> <li> true - 禁止编辑</li></ul>
                     * @param _forbidEditWatermark <p>是否禁止编辑（展示）水印控件属性</p><ul><li>（默认） false -否</li> <li> true - 禁止编辑</li></ul>
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
                     * 获取<p>隐藏操作指引: 具体的控件类型如下</p><ul><li>1 : 操作指引入口</li><li>2 : 操作文档</li><li>3 : 操作视频</li></ul>注：仅对新版页面生效
                     * @return HideOperationInstructions <p>隐藏操作指引: 具体的控件类型如下</p><ul><li>1 : 操作指引入口</li><li>2 : 操作文档</li><li>3 : 操作视频</li></ul>注：仅对新版页面生效
                     * @deprecated
                     */
                    std::vector<uint64_t> GetHideOperationInstructions() const;

                    /**
                     * 设置<p>隐藏操作指引: 具体的控件类型如下</p><ul><li>1 : 操作指引入口</li><li>2 : 操作文档</li><li>3 : 操作视频</li></ul>注：仅对新版页面生效
                     * @param _hideOperationInstructions <p>隐藏操作指引: 具体的控件类型如下</p><ul><li>1 : 操作指引入口</li><li>2 : 操作文档</li><li>3 : 操作视频</li></ul>注：仅对新版页面生效
                     * @deprecated
                     */
                    void SetHideOperationInstructions(const std::vector<uint64_t>& _hideOperationInstructions);

                    /**
                     * 判断参数 HideOperationInstructions 是否已赋值
                     * @return HideOperationInstructions 是否已赋值
                     * @deprecated
                     */
                    bool HideOperationInstructionsHasBeenSet() const;

                    /**
                     * 获取<p>隐藏操作步骤: 具体的控件类型如下</p><ul><li>1 : 选择文件及签署方</li><li>2 : 补充文件内容</li><li>4 : 发起前合同信息与设置确认</li></ul>注：仅对新版页面生效
                     * @return HideOperationSteps <p>隐藏操作步骤: 具体的控件类型如下</p><ul><li>1 : 选择文件及签署方</li><li>2 : 补充文件内容</li><li>4 : 发起前合同信息与设置确认</li></ul>注：仅对新版页面生效
                     * 
                     */
                    std::vector<uint64_t> GetHideOperationSteps() const;

                    /**
                     * 设置<p>隐藏操作步骤: 具体的控件类型如下</p><ul><li>1 : 选择文件及签署方</li><li>2 : 补充文件内容</li><li>4 : 发起前合同信息与设置确认</li></ul>注：仅对新版页面生效
                     * @param _hideOperationSteps <p>隐藏操作步骤: 具体的控件类型如下</p><ul><li>1 : 选择文件及签署方</li><li>2 : 补充文件内容</li><li>4 : 发起前合同信息与设置确认</li></ul>注：仅对新版页面生效
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
                     * 获取<p>本企业简称，注：仅对新版页面生效</p>
                     * @return SelfName <p>本企业简称，注：仅对新版页面生效</p>
                     * 
                     */
                    std::string GetSelfName() const;

                    /**
                     * 设置<p>本企业简称，注：仅对新版页面生效</p>
                     * @param _selfName <p>本企业简称，注：仅对新版页面生效</p>
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
                     * 获取<p>发起后签署码隐藏，默认false，注：仅对新版页面生效</p>
                     * @return HideSignCodeAfterStart <p>发起后签署码隐藏，默认false，注：仅对新版页面生效</p>
                     * 
                     */
                    bool GetHideSignCodeAfterStart() const;

                    /**
                     * 设置<p>发起后签署码隐藏，默认false，注：仅对新版页面生效</p>
                     * @param _hideSignCodeAfterStart <p>发起后签署码隐藏，默认false，注：仅对新版页面生效</p>
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
                     * 获取<p>发起成功后是否预览合同 <ul><li>（默认） false -否</li> <li> true - 展示预览按钮</li></ul></p>
                     * @return PreviewAfterStart <p>发起成功后是否预览合同 <ul><li>（默认） false -否</li> <li> true - 展示预览按钮</li></ul></p>
                     * 
                     */
                    bool GetPreviewAfterStart() const;

                    /**
                     * 设置<p>发起成功后是否预览合同 <ul><li>（默认） false -否</li> <li> true - 展示预览按钮</li></ul></p>
                     * @param _previewAfterStart <p>发起成功后是否预览合同 <ul><li>（默认） false -否</li> <li> true - 展示预览按钮</li></ul></p>
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
                     * 获取<p>发起成功之后是否签署合同，仅当前经办人作为签署人时生效 <ul><li>（默认） false -否</li> <li> true - 展示签署按钮</li></ul></p>
                     * @return SignAfterStart <p>发起成功之后是否签署合同，仅当前经办人作为签署人时生效 <ul><li>（默认） false -否</li> <li> true - 展示签署按钮</li></ul></p>
                     * 
                     */
                    bool GetSignAfterStart() const;

                    /**
                     * 设置<p>发起成功之后是否签署合同，仅当前经办人作为签署人时生效 <ul><li>（默认） false -否</li> <li> true - 展示签署按钮</li></ul></p>
                     * @param _signAfterStart <p>发起成功之后是否签署合同，仅当前经办人作为签署人时生效 <ul><li>（默认） false -否</li> <li> true - 展示签署按钮</li></ul></p>
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
                     * 获取<p>发起过程中是否保存草稿</p>
                     * @return NeedFlowDraft <p>发起过程中是否保存草稿</p>
                     * 
                     */
                    bool GetNeedFlowDraft() const;

                    /**
                     * 设置<p>发起过程中是否保存草稿</p>
                     * @param _needFlowDraft <p>发起过程中是否保存草稿</p>
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
                     * 获取<p>若指定了合同抄送人，此参数用来控制操作人能否在嵌入式页面看见或编辑（修改、增加、删除）抄送人信息。</p><p>枚举值：</p><ul><li>0： 不可见不可编辑</li><li>1： 可见不可编辑</li><li>2： 可见可编辑</li></ul><p>默认值：0</p>
                     * @return CcInfoVisibility <p>若指定了合同抄送人，此参数用来控制操作人能否在嵌入式页面看见或编辑（修改、增加、删除）抄送人信息。</p><p>枚举值：</p><ul><li>0： 不可见不可编辑</li><li>1： 可见不可编辑</li><li>2： 可见可编辑</li></ul><p>默认值：0</p>
                     * 
                     */
                    int64_t GetCcInfoVisibility() const;

                    /**
                     * 设置<p>若指定了合同抄送人，此参数用来控制操作人能否在嵌入式页面看见或编辑（修改、增加、删除）抄送人信息。</p><p>枚举值：</p><ul><li>0： 不可见不可编辑</li><li>1： 可见不可编辑</li><li>2： 可见可编辑</li></ul><p>默认值：0</p>
                     * @param _ccInfoVisibility <p>若指定了合同抄送人，此参数用来控制操作人能否在嵌入式页面看见或编辑（修改、增加、删除）抄送人信息。</p><p>枚举值：</p><ul><li>0： 不可见不可编辑</li><li>1： 可见不可编辑</li><li>2： 可见可编辑</li></ul><p>默认值：0</p>
                     * 
                     */
                    void SetCcInfoVisibility(const int64_t& _ccInfoVisibility);

                    /**
                     * 判断参数 CcInfoVisibility 是否已赋值
                     * @return CcInfoVisibility 是否已赋值
                     * 
                     */
                    bool CcInfoVisibilityHasBeenSet() const;

                private:

                    /**
                     * <p>是否允许修改发起合同时确认弹窗的合同信息（合同名称、合同类型、签署截止时间），若不允许编辑，则表单字段将被禁止输入。<br><br>true：允许编辑<br>false：不允许编辑（默认值）<br></p>
                     */
                    bool m_canEditFlow;
                    bool m_canEditFlowHasBeenSet;

                    /**
                     * <p>是否允许编辑模板控件<br><br>true:允许编辑模板控件信息<br><br>false:不允许编辑模板控件信息（默认值）<br><br></p>
                     */
                    bool m_canEditFormField;
                    bool m_canEditFormFieldHasBeenSet;

                    /**
                     * <p>发起页面隐藏合同名称展示<br><br>true:发起页面隐藏合同名称展示<br><br>false:发起页面不隐藏合同名称展示（默认值）<br><br></p>
                     */
                    bool m_hideShowFlowName;
                    bool m_hideShowFlowNameHasBeenSet;

                    /**
                     * <p>发起页面隐藏合同类型展示<br><br>true:发起页面隐藏合同类型展示<br><br>false:发起页面不隐藏合同类型展示（默认值）<br><br></p>
                     */
                    bool m_hideShowFlowType;
                    bool m_hideShowFlowTypeHasBeenSet;

                    /**
                     * <p>发起页面隐藏合同截止日期展示<br><br>true:发起页面隐藏合同截止日期展示<br><br>false:发起页面不隐藏合同截止日期展示（默认值）<br><br></p>
                     */
                    bool m_hideShowDeadline;
                    bool m_hideShowDeadlineHasBeenSet;

                    /**
                     * <p>发起页面允许跳过添加签署人环节<br><br>true:发起页面允许跳过添加签署人环节<br><br>false:发起页面不允许跳过添加签署人环节（默认值）<br><br></p>
                     */
                    bool m_canSkipAddApprover;
                    bool m_canSkipAddApproverHasBeenSet;

                    /**
                     * <p>文件发起页面跳过文件上传步骤<br><br>true:文件发起页面跳过文件上传步骤<br><br>false:文件发起页面不跳过文件上传步骤（默认值）<br><br></p>
                     */
                    bool m_skipUploadFile;
                    bool m_skipUploadFileHasBeenSet;

                    /**
                     * <p>禁止编辑填写控件<br><br>true:禁止编辑填写控件<br><br>false:允许编辑填写控件（默认值）<br><br></p>
                     */
                    bool m_forbidEditFillComponent;
                    bool m_forbidEditFillComponentHasBeenSet;

                    /**
                     * <p>定制化发起合同弹窗的描述信息，描述信息最长500字符</p>
                     */
                    std::string m_customCreateFlowDescription;
                    bool m_customCreateFlowDescriptionHasBeenSet;

                    /**
                     * <p>禁止添加签署方，若为true则在发起流程的可嵌入页面隐藏“添加签署人按钮”</p>
                     */
                    bool m_forbidAddApprover;
                    bool m_forbidAddApproverHasBeenSet;

                    /**
                     * <p>是否可以编辑签署人包括新增，修改，删除 </p><ul><li>（默认） false -可以编辑签署人</li> <li> true - 禁止编辑签署人</li></ul><p>注意：如果设置参数为  true， 则 参数签署人 <a href="https://qian.tencent.com/developers/partnerApis/embedPages/ChannelCreatePrepareFlow">FlowApproverList</a> 不能为空</p>
                     */
                    bool m_forbidEditApprover;
                    bool m_forbidEditApproverHasBeenSet;

                    /**
                     * <p>禁止设置签署流程属性 (顺序、合同签署认证方式等)，若为true则在发起流程的可嵌入页面隐藏签署流程设置面板</p>
                     */
                    bool m_forbidEditFlowProperties;
                    bool m_forbidEditFlowPropertiesHasBeenSet;

                    /**
                     * <p>在发起流程的可嵌入页面要隐藏的控件列表，和 ShowComponentTypes 参数 只能二选一使用（注:<br><font color="red">空数组代表未指定</font>），具体的控件类型如下</p><ul><li>SIGN_SIGNATURE : 个人签名/印章</li><li>SIGN_SEAL : 企业印章</li><li>SIGN_PAGING_SEAL : 骑缝章</li><li>SIGN_LEGAL_PERSON_SEAL : 法定代表人章</li><li>SIGN_APPROVE : 签批</li><li>SIGN_OPINION : 签署意见</li><li>SIGN_PAGING_SIGNATURE : 手写签名骑缝控件</li><li>BUSI-FULL-NAME  : 企业全称</li><li>BUSI-CREDIT-CODE : 统一社会信用代码</li><li>BUSI-LEGAL-NAME : 法人/经营者姓名</li><li>PERSONAL-NAME : 签署人姓名</li><li>PERSONAL-MOBILE : 签署人手机号</li><li>PERSONAL-IDCARD-TYPE : 签署人证件类型</li><li>PERSONAL-IDCARD : 签署人证件号</li><li>TEXT : 单行文本</li><li>MULTI_LINE_TEXT : 多行文本</li><li>CHECK_BOX : 勾选框</li><li>SELECTOR : 选择器</li><li>DIGIT : 数字</li><li>DATE : 日期</li><li>FILL_IMAGE : 图片</li><li>ATTACHMENT : 附件</li><li>EMAIL : 邮箱</li><li>LOCATION : 地址</li><li>EDUCATION : 学历</li><li>GENDER : 性别</li><li>DISTRICT : 省市区</li></ul>
                     */
                    std::vector<std::string> m_hideComponentTypes;
                    bool m_hideComponentTypesHasBeenSet;

                    /**
                     * <p>在发起流程的可嵌入页面要显示的控件列表，和 HideComponentTypes 参数 只能二选一使用（注:<br><font color="red">空数组代表未指定</font>），具体的控件类型如下</p><ul><li>SIGN_SIGNATURE : 个人签名/印章</li><li>SIGN_SEAL : 企业印章</li><li>SIGN_PAGING_SEAL : 骑缝章</li><li>SIGN_LEGAL_PERSON_SEAL : 法定代表人章</li><li>SIGN_APPROVE : 签批</li><li>SIGN_OPINION : 签署意见</li><li>SIGN_PAGING_SIGNATURE : 手写签名骑缝控件</li><li>BUSI-FULL-NAME  : 企业全称</li><li>BUSI-CREDIT-CODE : 统一社会信用代码</li><li>BUSI-LEGAL-NAME : 法人/经营者姓名</li><li>PERSONAL-NAME : 签署人姓名</li><li>PERSONAL-MOBILE : 签署人手机号</li><li>PERSONAL-IDCARD-TYPE : 签署人证件类型</li><li>PERSONAL-IDCARD : 签署人证件号</li><li>TEXT : 单行文本</li><li>MULTI_LINE_TEXT : 多行文本</li><li>CHECK_BOX : 勾选框</li><li>SELECTOR : 选择器</li><li>DIGIT : 数字</li><li>DATE : 日期</li><li>FILL_IMAGE : 图片</li><li>ATTACHMENT : 附件</li><li>EMAIL : 邮箱</li><li>LOCATION : 地址</li><li>EDUCATION : 学历</li><li>GENDER : 性别</li><li>DISTRICT : 省市区</li></ul>
                     */
                    std::vector<std::string> m_showComponentTypes;
                    bool m_showComponentTypesHasBeenSet;

                    /**
                     * <p>发起流程的可嵌入页面结果页配置</p>
                     */
                    std::vector<CreateResultPageConfig> m_resultPageConfig;
                    bool m_resultPageConfigHasBeenSet;

                    /**
                     * <p>签署控件的配置信息，用在嵌入式发起的页面配置，包括 </p><ul><li>签署控件 是否默认展示日期.</li></ul>
                     */
                    SignComponentConfig m_signComponentConfig;
                    bool m_signComponentConfigHasBeenSet;

                    /**
                     * <p>是否禁止编辑（展示）水印控件属性</p><ul><li>（默认） false -否</li> <li> true - 禁止编辑</li></ul>
                     */
                    bool m_forbidEditWatermark;
                    bool m_forbidEditWatermarkHasBeenSet;

                    /**
                     * <p>隐藏操作指引: 具体的控件类型如下</p><ul><li>1 : 操作指引入口</li><li>2 : 操作文档</li><li>3 : 操作视频</li></ul>注：仅对新版页面生效
                     */
                    std::vector<uint64_t> m_hideOperationInstructions;
                    bool m_hideOperationInstructionsHasBeenSet;

                    /**
                     * <p>隐藏操作步骤: 具体的控件类型如下</p><ul><li>1 : 选择文件及签署方</li><li>2 : 补充文件内容</li><li>4 : 发起前合同信息与设置确认</li></ul>注：仅对新版页面生效
                     */
                    std::vector<uint64_t> m_hideOperationSteps;
                    bool m_hideOperationStepsHasBeenSet;

                    /**
                     * <p>本企业简称，注：仅对新版页面生效</p>
                     */
                    std::string m_selfName;
                    bool m_selfNameHasBeenSet;

                    /**
                     * <p>发起后签署码隐藏，默认false，注：仅对新版页面生效</p>
                     */
                    bool m_hideSignCodeAfterStart;
                    bool m_hideSignCodeAfterStartHasBeenSet;

                    /**
                     * <p>发起成功后是否预览合同 <ul><li>（默认） false -否</li> <li> true - 展示预览按钮</li></ul></p>
                     */
                    bool m_previewAfterStart;
                    bool m_previewAfterStartHasBeenSet;

                    /**
                     * <p>发起成功之后是否签署合同，仅当前经办人作为签署人时生效 <ul><li>（默认） false -否</li> <li> true - 展示签署按钮</li></ul></p>
                     */
                    bool m_signAfterStart;
                    bool m_signAfterStartHasBeenSet;

                    /**
                     * <p>发起过程中是否保存草稿</p>
                     */
                    bool m_needFlowDraft;
                    bool m_needFlowDraftHasBeenSet;

                    /**
                     * <p>若指定了合同抄送人，此参数用来控制操作人能否在嵌入式页面看见或编辑（修改、增加、删除）抄送人信息。</p><p>枚举值：</p><ul><li>0： 不可见不可编辑</li><li>1： 可见不可编辑</li><li>2： 可见可编辑</li></ul><p>默认值：0</p>
                     */
                    int64_t m_ccInfoVisibility;
                    bool m_ccInfoVisibilityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_CREATEFLOWOPTION_H_
