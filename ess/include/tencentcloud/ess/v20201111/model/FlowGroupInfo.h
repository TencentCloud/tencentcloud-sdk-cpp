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
                     * 获取合同（流程）的名称
                     * @return FlowName 合同（流程）的名称
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置合同（流程）的名称
                     * @param _flowName 合同（流程）的名称
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
                     * 获取合同（流程）的签署方信息
                     * @return Approvers 合同（流程）的签署方信息
                     * 
                     */
                    std::vector<ApproverInfo> GetApprovers() const;

                    /**
                     * 设置合同（流程）的签署方信息
                     * @param _approvers 合同（流程）的签署方信息
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
                     * 获取发起合同（流程）的资源Id,此资源必须是PDF文件,来自UploadFiles,使用文件发起合同(流程)组时必传
                     * @return FileIds 发起合同（流程）的资源Id,此资源必须是PDF文件,来自UploadFiles,使用文件发起合同(流程)组时必传
                     * 
                     */
                    std::vector<std::string> GetFileIds() const;

                    /**
                     * 设置发起合同（流程）的资源Id,此资源必须是PDF文件,来自UploadFiles,使用文件发起合同(流程)组时必传
                     * @param _fileIds 发起合同（流程）的资源Id,此资源必须是PDF文件,来自UploadFiles,使用文件发起合同(流程)组时必传
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
                     * 获取发起合同（流程）的模板Id,用模板发起合同（流程）组时必填
                     * @return TemplateId 发起合同（流程）的模板Id,用模板发起合同（流程）组时必填
                     * 
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置发起合同（流程）的模板Id,用模板发起合同（流程）组时必填
                     * @param _templateId 发起合同（流程）的模板Id,用模板发起合同（流程）组时必填
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
                     * 获取合同（流程）的类型
                     * @return FlowType 合同（流程）的类型
                     * 
                     */
                    std::string GetFlowType() const;

                    /**
                     * 设置合同（流程）的类型
                     * @param _flowType 合同（流程）的类型
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
                     * 获取合同（流程）的描述
                     * @return FlowDescription 合同（流程）的描述
                     * 
                     */
                    std::string GetFlowDescription() const;

                    /**
                     * 设置合同（流程）的描述
                     * @param _flowDescription 合同（流程）的描述
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
                     * 获取合同（流程）的截止时间戳，单位秒。默认是一年
                     * @return Deadline 合同（流程）的截止时间戳，单位秒。默认是一年
                     * 
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置合同（流程）的截止时间戳，单位秒。默认是一年
                     * @param _deadline 合同（流程）的截止时间戳，单位秒。默认是一年
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
                     * 获取合同（流程）的回调地址
                     * @return CallbackUrl 合同（流程）的回调地址
                     * 
                     */
                    std::string GetCallbackUrl() const;

                    /**
                     * 设置合同（流程）的回调地址
                     * @param _callbackUrl 合同（流程）的回调地址
                     * 
                     */
                    void SetCallbackUrl(const std::string& _callbackUrl);

                    /**
                     * 判断参数 CallbackUrl 是否已赋值
                     * @return CallbackUrl 是否已赋值
                     * 
                     */
                    bool CallbackUrlHasBeenSet() const;

                    /**
                     * 获取第三方平台传递过来的信息, 限制1024字符 格式必须是base64的
                     * @return UserData 第三方平台传递过来的信息, 限制1024字符 格式必须是base64的
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置第三方平台传递过来的信息, 限制1024字符 格式必须是base64的
                     * @param _userData 第三方平台传递过来的信息, 限制1024字符 格式必须是base64的
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
                     * 获取合同（流程）的签署是否是无序签, true - 无序。 false - 有序, 默认 
                     * @return Unordered 合同（流程）的签署是否是无序签, true - 无序。 false - 有序, 默认 
                     * 
                     */
                    bool GetUnordered() const;

                    /**
                     * 设置合同（流程）的签署是否是无序签, true - 无序。 false - 有序, 默认 
                     * @param _unordered 合同（流程）的签署是否是无序签, true - 无序。 false - 有序, 默认 
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
                     * 获取合同（流程）发起方的填写控件，用户
                     * @return Components 合同（流程）发起方的填写控件，用户
                     * 
                     */
                    std::vector<Component> GetComponents() const;

                    /**
                     * 设置合同（流程）发起方的填写控件，用户
                     * @param _components 合同（流程）发起方的填写控件，用户
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
                     * 获取本企业（发起方）是否需要签署审批，若需要审批则只允许查看不允许签署，需要您调用接口CreateFlowSignReview提交审批结果。
                     * @return NeedSignReview 本企业（发起方）是否需要签署审批，若需要审批则只允许查看不允许签署，需要您调用接口CreateFlowSignReview提交审批结果。
                     * 
                     */
                    bool GetNeedSignReview() const;

                    /**
                     * 设置本企业（发起方）是否需要签署审批，若需要审批则只允许查看不允许签署，需要您调用接口CreateFlowSignReview提交审批结果。
                     * @param _needSignReview 本企业（发起方）是否需要签署审批，若需要审批则只允许查看不允许签署，需要您调用接口CreateFlowSignReview提交审批结果。
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
                     * 获取本企业（发起方）自动签署，需要您在发起合同时给印章控件指定自动签的印章。
                     * @return AutoSignScene 本企业（发起方）自动签署，需要您在发起合同时给印章控件指定自动签的印章。
                     * 
                     */
                    std::string GetAutoSignScene() const;

                    /**
                     * 设置本企业（发起方）自动签署，需要您在发起合同时给印章控件指定自动签的印章。
                     * @param _autoSignScene 本企业（发起方）自动签署，需要您在发起合同时给印章控件指定自动签的印章。
                     * 
                     */
                    void SetAutoSignScene(const std::string& _autoSignScene);

                    /**
                     * 判断参数 AutoSignScene 是否已赋值
                     * @return AutoSignScene 是否已赋值
                     * 
                     */
                    bool AutoSignSceneHasBeenSet() const;

                private:

                    /**
                     * 合同（流程）的名称
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 合同（流程）的签署方信息
                     */
                    std::vector<ApproverInfo> m_approvers;
                    bool m_approversHasBeenSet;

                    /**
                     * 发起合同（流程）的资源Id,此资源必须是PDF文件,来自UploadFiles,使用文件发起合同(流程)组时必传
                     */
                    std::vector<std::string> m_fileIds;
                    bool m_fileIdsHasBeenSet;

                    /**
                     * 发起合同（流程）的模板Id,用模板发起合同（流程）组时必填
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                    /**
                     * 合同（流程）的类型
                     */
                    std::string m_flowType;
                    bool m_flowTypeHasBeenSet;

                    /**
                     * 合同（流程）的描述
                     */
                    std::string m_flowDescription;
                    bool m_flowDescriptionHasBeenSet;

                    /**
                     * 合同（流程）的截止时间戳，单位秒。默认是一年
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 合同（流程）的回调地址
                     */
                    std::string m_callbackUrl;
                    bool m_callbackUrlHasBeenSet;

                    /**
                     * 第三方平台传递过来的信息, 限制1024字符 格式必须是base64的
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * 合同（流程）的签署是否是无序签, true - 无序。 false - 有序, 默认 
                     */
                    bool m_unordered;
                    bool m_unorderedHasBeenSet;

                    /**
                     * 合同（流程）发起方的填写控件，用户
                     */
                    std::vector<Component> m_components;
                    bool m_componentsHasBeenSet;

                    /**
                     * 本企业（发起方）是否需要签署审批，若需要审批则只允许查看不允许签署，需要您调用接口CreateFlowSignReview提交审批结果。
                     */
                    bool m_needSignReview;
                    bool m_needSignReviewHasBeenSet;

                    /**
                     * 本企业（发起方）自动签署，需要您在发起合同时给印章控件指定自动签的印章。
                     */
                    std::string m_autoSignScene;
                    bool m_autoSignSceneHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FLOWGROUPINFO_H_
