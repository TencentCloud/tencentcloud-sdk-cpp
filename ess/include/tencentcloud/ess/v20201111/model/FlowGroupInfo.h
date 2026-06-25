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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_FLOWGROUPINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_FLOWGROUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/ApproverInfo.h>
#include <tencentcloud/ess/v20201111/model/Component.h>
#include <tencentcloud/ess/v20201111/model/CcInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 此结构体(FlowGroupInfo)描述的是合同组(流程组)的单个合同(流程)信息
                */
                class FlowGroupInfo : public AbstractModel
                {
                public:
                    FlowGroupInfo();
                    ~FlowGroupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。<br>该名称还将用于合同签署完成后的下载文件名。</p>
                     * @return FlowName <p>合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。<br>该名称还将用于合同签署完成后的下载文件名。</p>
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置<p>合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。<br>该名称还将用于合同签署完成后的下载文件名。</p>
                     * @param _flowName <p>合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。<br>该名称还将用于合同签署完成后的下载文件名。</p>
                     * 
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     * 
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取<p>签署流程参与者信息，最大限制50方<br>注意 approver中的顺序需要和模板中的顺序保持一致， 否则会导致模板中配置的信息无效。</p>
                     * @return Approvers <p>签署流程参与者信息，最大限制50方<br>注意 approver中的顺序需要和模板中的顺序保持一致， 否则会导致模板中配置的信息无效。</p>
                     * 
                     */
                    std::vector<ApproverInfo> GetApprovers() const;

                    /**
                     * 设置<p>签署流程参与者信息，最大限制50方<br>注意 approver中的顺序需要和模板中的顺序保持一致， 否则会导致模板中配置的信息无效。</p>
                     * @param _approvers <p>签署流程参与者信息，最大限制50方<br>注意 approver中的顺序需要和模板中的顺序保持一致， 否则会导致模板中配置的信息无效。</p>
                     * 
                     */
                    void SetApprovers(const std::vector<ApproverInfo>& _approvers);

                    /**
                     * 判断参数 Approvers 是否已赋值
                     * @return Approvers 是否已赋值
                     * 
                     */
                    bool ApproversHasBeenSet() const;

                    /**
                     * 获取<p>文件资源ID，通过多文件上传<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles">UploadFiles</a>接口获得，为32位字符串。<br>注：此字段定义为数组，但仅支持单个文件</p>
                     * @return FileIds <p>文件资源ID，通过多文件上传<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles">UploadFiles</a>接口获得，为32位字符串。<br>注：此字段定义为数组，但仅支持单个文件</p>
                     * 
                     */
                    std::vector<std::string> GetFileIds() const;

                    /**
                     * 设置<p>文件资源ID，通过多文件上传<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles">UploadFiles</a>接口获得，为32位字符串。<br>注：此字段定义为数组，但仅支持单个文件</p>
                     * @param _fileIds <p>文件资源ID，通过多文件上传<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles">UploadFiles</a>接口获得，为32位字符串。<br>注：此字段定义为数组，但仅支持单个文件</p>
                     * 
                     */
                    void SetFileIds(const std::vector<std::string>& _fileIds);

                    /**
                     * 判断参数 FileIds 是否已赋值
                     * @return FileIds 是否已赋值
                     * 
                     */
                    bool FileIdsHasBeenSet() const;

                    /**
                     * 获取<p>合同模板ID，为32位字符串。<br>建议开发者保存此模板ID，后续用此模板发起合同流程需要此参数。<br>可登录腾讯电子签控制台，在 &quot;模板&quot;-&gt;&quot;模板中心&quot;-&gt;&quot;列表展示设置&quot;选中模板 ID 中查看某个模板的TemplateId(在页面中展示为模板ID)。</p>
                     * @return TemplateId <p>合同模板ID，为32位字符串。<br>建议开发者保存此模板ID，后续用此模板发起合同流程需要此参数。<br>可登录腾讯电子签控制台，在 &quot;模板&quot;-&gt;&quot;模板中心&quot;-&gt;&quot;列表展示设置&quot;选中模板 ID 中查看某个模板的TemplateId(在页面中展示为模板ID)。</p>
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置<p>合同模板ID，为32位字符串。<br>建议开发者保存此模板ID，后续用此模板发起合同流程需要此参数。<br>可登录腾讯电子签控制台，在 &quot;模板&quot;-&gt;&quot;模板中心&quot;-&gt;&quot;列表展示设置&quot;选中模板 ID 中查看某个模板的TemplateId(在页面中展示为模板ID)。</p>
                     * @param _templateId <p>合同模板ID，为32位字符串。<br>建议开发者保存此模板ID，后续用此模板发起合同流程需要此参数。<br>可登录腾讯电子签控制台，在 &quot;模板&quot;-&gt;&quot;模板中心&quot;-&gt;&quot;列表展示设置&quot;选中模板 ID 中查看某个模板的TemplateId(在页面中展示为模板ID)。</p>
                     * 
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     * 
                     */
                    bool TemplateIdHasBeenSet() const;

                    /**
                     * 获取<p>签署流程的类型(如销售合同/入职合同等)，最大长度200个字符</p>
                     * @return FlowType <p>签署流程的类型(如销售合同/入职合同等)，最大长度200个字符</p>
                     * 
                     */
                    std::string GetFlowType() const;

                    /**
                     * 设置<p>签署流程的类型(如销售合同/入职合同等)，最大长度200个字符</p>
                     * @param _flowType <p>签署流程的类型(如销售合同/入职合同等)，最大长度200个字符</p>
                     * 
                     */
                    void SetFlowType(const std::string& _flowType);

                    /**
                     * 判断参数 FlowType 是否已赋值
                     * @return FlowType 是否已赋值
                     * 
                     */
                    bool FlowTypeHasBeenSet() const;

                    /**
                     * 获取<p>签署流程描述,最大长度1000个字符</p>
                     * @return FlowDescription <p>签署流程描述,最大长度1000个字符</p>
                     * 
                     */
                    std::string GetFlowDescription() const;

                    /**
                     * 设置<p>签署流程描述,最大长度1000个字符</p>
                     * @param _flowDescription <p>签署流程描述,最大长度1000个字符</p>
                     * 
                     */
                    void SetFlowDescription(const std::string& _flowDescription);

                    /**
                     * 判断参数 FlowDescription 是否已赋值
                     * @return FlowDescription 是否已赋值
                     * 
                     */
                    bool FlowDescriptionHasBeenSet() const;

                    /**
                     * 获取<p>签署流程的签署截止时间。</p><p>值为unix时间戳,精确到秒,不传默认为当前时间一年后<br>示例值：1604912664</p>
                     * @return Deadline <p>签署流程的签署截止时间。</p><p>值为unix时间戳,精确到秒,不传默认为当前时间一年后<br>示例值：1604912664</p>
                     * 
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置<p>签署流程的签署截止时间。</p><p>值为unix时间戳,精确到秒,不传默认为当前时间一年后<br>示例值：1604912664</p>
                     * @param _deadline <p>签署流程的签署截止时间。</p><p>值为unix时间戳,精确到秒,不传默认为当前时间一年后<br>示例值：1604912664</p>
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
                     * 获取<p>合同（流程）的回调地址</p>
                     * @return CallbackUrl <p>合同（流程）的回调地址</p>
                     * @deprecated
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置<p>合同（流程）的回调地址</p>
                     * @param _callbackUrl <p>合同（流程）的回调地址</p>
                     * @deprecated
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * @deprecated
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取<p>调用方自定义的个性化字段(可自定义此字段的值)，并以base64方式编码，支持的最大数据大小为 20480长度。<br>在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。<br>回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。</p>
                     * @return UserData <p>调用方自定义的个性化字段(可自定义此字段的值)，并以base64方式编码，支持的最大数据大小为 20480长度。<br>在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。<br>回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。</p>
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置<p>调用方自定义的个性化字段(可自定义此字段的值)，并以base64方式编码，支持的最大数据大小为 20480长度。<br>在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。<br>回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。</p>
                     * @param _userData <p>调用方自定义的个性化字段(可自定义此字段的值)，并以base64方式编码，支持的最大数据大小为 20480长度。<br>在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。<br>回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。</p>
                     * 
                     */
                    void SetUserData(const std::string& _userData);

                    /**
                     * 判断参数 UserData 是否已赋值
                     * @return UserData 是否已赋值
                     * 
                     */
                    bool UserDataHasBeenSet() const;

                    /**
                     * 获取<p>发送类型：<br>true：无序签<br>false：有序签<br>注：默认为false（有序签），请和模板中的配置保持一致<br>示例值：true</p>
                     * @return Unordered <p>发送类型：<br>true：无序签<br>false：有序签<br>注：默认为false（有序签），请和模板中的配置保持一致<br>示例值：true</p>
                     * 
                     */
                    bool GetUnordered() const;

                    /**
                     * 设置<p>发送类型：<br>true：无序签<br>false：有序签<br>注：默认为false（有序签），请和模板中的配置保持一致<br>示例值：true</p>
                     * @param _unordered <p>发送类型：<br>true：无序签<br>false：有序签<br>注：默认为false（有序签），请和模板中的配置保持一致<br>示例值：true</p>
                     * 
                     */
                    void SetUnordered(const bool& _unordered);

                    /**
                     * 判断参数 Unordered 是否已赋值
                     * @return Unordered 是否已赋值
                     * 
                     */
                    bool UnorderedHasBeenSet() const;

                    /**
                     * 获取<p>模板或者合同中的填写控件列表，列表中可支持下列多种填写控件，控件的详细定义参考开发者中心的Component结构体</p><ul><li>单行文本控件</li><li>多行文本控件</li><li>勾选框控件</li><li>数字控件</li><li>图片控件</li><li>动态表格等填写控件</li></ul>
                     * @return Components <p>模板或者合同中的填写控件列表，列表中可支持下列多种填写控件，控件的详细定义参考开发者中心的Component结构体</p><ul><li>单行文本控件</li><li>多行文本控件</li><li>勾选框控件</li><li>数字控件</li><li>图片控件</li><li>动态表格等填写控件</li></ul>
                     * 
                     */
                    std::vector<Component> GetComponents() const;

                    /**
                     * 设置<p>模板或者合同中的填写控件列表，列表中可支持下列多种填写控件，控件的详细定义参考开发者中心的Component结构体</p><ul><li>单行文本控件</li><li>多行文本控件</li><li>勾选框控件</li><li>数字控件</li><li>图片控件</li><li>动态表格等填写控件</li></ul>
                     * @param _components <p>模板或者合同中的填写控件列表，列表中可支持下列多种填写控件，控件的详细定义参考开发者中心的Component结构体</p><ul><li>单行文本控件</li><li>多行文本控件</li><li>勾选框控件</li><li>数字控件</li><li>图片控件</li><li>动态表格等填写控件</li></ul>
                     * 
                     */
                    void SetComponents(const std::vector<Component>& _components);

                    /**
                     * 判断参数 Components 是否已赋值
                     * @return Components 是否已赋值
                     * 
                     */
                    bool ComponentsHasBeenSet() const;

                    /**
                     * 获取<p>发起方企业的签署人进行签署操作是否需要企业内部审批。使用此功能需要发起方企业有参与签署。<br>若设置为true，审核结果需通过接口 <a href="https://qian.tencent.com/developers/companyApis/operateFlows/CreateFlowSignReview">CreateFlowSignReview</a> 通知电子签，审核通过后，发起方企业签署人方可进行签署操作，否则会阻塞其签署操作。</p><p>注：企业可以通过此功能与企业内部的审批流程进行关联，支持手动、静默签署合同。<br>示例值：true</p>
                     * @return NeedSignReview <p>发起方企业的签署人进行签署操作是否需要企业内部审批。使用此功能需要发起方企业有参与签署。<br>若设置为true，审核结果需通过接口 <a href="https://qian.tencent.com/developers/companyApis/operateFlows/CreateFlowSignReview">CreateFlowSignReview</a> 通知电子签，审核通过后，发起方企业签署人方可进行签署操作，否则会阻塞其签署操作。</p><p>注：企业可以通过此功能与企业内部的审批流程进行关联，支持手动、静默签署合同。<br>示例值：true</p>
                     * 
                     */
                    bool GetNeedSignReview() const;

                    /**
                     * 设置<p>发起方企业的签署人进行签署操作是否需要企业内部审批。使用此功能需要发起方企业有参与签署。<br>若设置为true，审核结果需通过接口 <a href="https://qian.tencent.com/developers/companyApis/operateFlows/CreateFlowSignReview">CreateFlowSignReview</a> 通知电子签，审核通过后，发起方企业签署人方可进行签署操作，否则会阻塞其签署操作。</p><p>注：企业可以通过此功能与企业内部的审批流程进行关联，支持手动、静默签署合同。<br>示例值：true</p>
                     * @param _needSignReview <p>发起方企业的签署人进行签署操作是否需要企业内部审批。使用此功能需要发起方企业有参与签署。<br>若设置为true，审核结果需通过接口 <a href="https://qian.tencent.com/developers/companyApis/operateFlows/CreateFlowSignReview">CreateFlowSignReview</a> 通知电子签，审核通过后，发起方企业签署人方可进行签署操作，否则会阻塞其签署操作。</p><p>注：企业可以通过此功能与企业内部的审批流程进行关联，支持手动、静默签署合同。<br>示例值：true</p>
                     * 
                     */
                    void SetNeedSignReview(const bool& _needSignReview);

                    /**
                     * 判断参数 NeedSignReview 是否已赋值
                     * @return NeedSignReview 是否已赋值
                     * 
                     */
                    bool NeedSignReviewHasBeenSet() const;

                    /**
                     * 获取<p>个人自动签场景。发起自动签署时，需设置对应自动签署场景，目前仅支持场景：处方单-E_PRESCRIPTION_AUTO_SIGN</p>
                     * @return AutoSignScene <p>个人自动签场景。发起自动签署时，需设置对应自动签署场景，目前仅支持场景：处方单-E_PRESCRIPTION_AUTO_SIGN</p>
                     * 
                     */
                    std::string GetAutoSignScene() const;

                    /**
                     * 设置<p>个人自动签场景。发起自动签署时，需设置对应自动签署场景，目前仅支持场景：处方单-E_PRESCRIPTION_AUTO_SIGN</p>
                     * @param _autoSignScene <p>个人自动签场景。发起自动签署时，需设置对应自动签署场景，目前仅支持场景：处方单-E_PRESCRIPTION_AUTO_SIGN</p>
                     * 
                     */
                    void SetAutoSignScene(const std::string& _autoSignScene);

                    /**
                     * 判断参数 AutoSignScene 是否已赋值
                     * @return AutoSignScene 是否已赋值
                     * 
                     */
                    bool AutoSignSceneHasBeenSet() const;

                    /**
                     * 获取<p>在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：  <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul>效果如下:<img src="https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png" alt="FlowDisplayType"></p>
                     * @return FlowDisplayType <p>在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：  <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul>效果如下:<img src="https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png" alt="FlowDisplayType"></p>
                     * 
                     */
                    int64_t GetFlowDisplayType() const;

                    /**
                     * 设置<p>在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：  <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul>效果如下:<img src="https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png" alt="FlowDisplayType"></p>
                     * @param _flowDisplayType <p>在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：  <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul>效果如下:<img src="https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png" alt="FlowDisplayType"></p>
                     * 
                     */
                    void SetFlowDisplayType(const int64_t& _flowDisplayType);

                    /**
                     * 判断参数 FlowDisplayType 是否已赋值
                     * @return FlowDisplayType 是否已赋值
                     * 
                     */
                    bool FlowDisplayTypeHasBeenSet() const;

                    /**
                     * 获取<p>抄送人信息</p>
                     * @return CcInfos <p>抄送人信息</p>
                     * 
                     */
                    std::vector<CcInfo> GetCcInfos() const;

                    /**
                     * 设置<p>抄送人信息</p>
                     * @param _ccInfos <p>抄送人信息</p>
                     * 
                     */
                    void SetCcInfos(const std::vector<CcInfo>& _ccInfos);

                    /**
                     * 判断参数 CcInfos 是否已赋值
                     * @return CcInfos 是否已赋值
                     * 
                     */
                    bool CcInfosHasBeenSet() const;

                private:

                    /**
                     * <p>合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。<br>该名称还将用于合同签署完成后的下载文件名。</p>
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * <p>签署流程参与者信息，最大限制50方<br>注意 approver中的顺序需要和模板中的顺序保持一致， 否则会导致模板中配置的信息无效。</p>
                     */
                    std::vector<ApproverInfo> m_approvers;
                    bool m_approversHasBeenSet;

                    /**
                     * <p>文件资源ID，通过多文件上传<a href="https://qian.tencent.com/developers/companyApis/templatesAndFiles/UploadFiles">UploadFiles</a>接口获得，为32位字符串。<br>注：此字段定义为数组，但仅支持单个文件</p>
                     */
                    std::vector<std::string> m_fileIds;
                    bool m_fileIdsHasBeenSet;

                    /**
                     * <p>合同模板ID，为32位字符串。<br>建议开发者保存此模板ID，后续用此模板发起合同流程需要此参数。<br>可登录腾讯电子签控制台，在 &quot;模板&quot;-&gt;&quot;模板中心&quot;-&gt;&quot;列表展示设置&quot;选中模板 ID 中查看某个模板的TemplateId(在页面中展示为模板ID)。</p>
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * <p>签署流程的类型(如销售合同/入职合同等)，最大长度200个字符</p>
                     */
                    std::string m_flowType;
                    bool m_flowTypeHasBeenSet;

                    /**
                     * <p>签署流程描述,最大长度1000个字符</p>
                     */
                    std::string m_flowDescription;
                    bool m_flowDescriptionHasBeenSet;

                    /**
                     * <p>签署流程的签署截止时间。</p><p>值为unix时间戳,精确到秒,不传默认为当前时间一年后<br>示例值：1604912664</p>
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * <p>合同（流程）的回调地址</p>
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * <p>调用方自定义的个性化字段(可自定义此字段的值)，并以base64方式编码，支持的最大数据大小为 20480长度。<br>在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。<br>回调的相关说明可参考开发者中心的<a href="https://qian.tencent.com/developers/company/callback_types_v2" target="_blank">回调通知</a>模块。</p>
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * <p>发送类型：<br>true：无序签<br>false：有序签<br>注：默认为false（有序签），请和模板中的配置保持一致<br>示例值：true</p>
                     */
                    bool m_unordered;
                    bool m_unorderedHasBeenSet;

                    /**
                     * <p>模板或者合同中的填写控件列表，列表中可支持下列多种填写控件，控件的详细定义参考开发者中心的Component结构体</p><ul><li>单行文本控件</li><li>多行文本控件</li><li>勾选框控件</li><li>数字控件</li><li>图片控件</li><li>动态表格等填写控件</li></ul>
                     */
                    std::vector<Component> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * <p>发起方企业的签署人进行签署操作是否需要企业内部审批。使用此功能需要发起方企业有参与签署。<br>若设置为true，审核结果需通过接口 <a href="https://qian.tencent.com/developers/companyApis/operateFlows/CreateFlowSignReview">CreateFlowSignReview</a> 通知电子签，审核通过后，发起方企业签署人方可进行签署操作，否则会阻塞其签署操作。</p><p>注：企业可以通过此功能与企业内部的审批流程进行关联，支持手动、静默签署合同。<br>示例值：true</p>
                     */
                    bool m_needSignReview;
                    bool m_needSignReviewHasBeenSet;

                    /**
                     * <p>个人自动签场景。发起自动签署时，需设置对应自动签署场景，目前仅支持场景：处方单-E_PRESCRIPTION_AUTO_SIGN</p>
                     */
                    std::string m_autoSignScene;
                    bool m_autoSignSceneHasBeenSet;

                    /**
                     * <p>在短信通知、填写、签署流程中，若标题、按钮、合同详情等地方存在“合同”字样时，可根据此配置指定文案，可选文案如下：  <ul><li> <b>0</b> :合同（默认值）</li> <li> <b>1</b> :文件</li> <li> <b>2</b> :协议</li><li> <b>3</b> :文书</li></ul>效果如下:<img src="https://qcloudimg.tencent-cloud.cn/raw/e4a2c4d638717cc901d3dbd5137c9bbc.png" alt="FlowDisplayType"></p>
                     */
                    int64_t m_flowDisplayType;
                    bool m_flowDisplayTypeHasBeenSet;

                    /**
                     * <p>抄送人信息</p>
                     */
                    std::vector<CcInfo> m_ccInfos;
                    bool m_ccInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FLOWGROUPINFO_H_
