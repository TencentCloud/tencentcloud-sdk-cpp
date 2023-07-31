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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_BASEFLOWINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_BASEFLOWINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/FormField.h>
#include <tencentcloud/essbasic/v20210526/model/CcInfo.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 基础流程信息
                */
                class BaseFlowInfo : public AbstractModel
                {
                public:
                    BaseFlowInfo();
                    ~BaseFlowInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取合同流程名称
                     * @return FlowName 合同流程名称
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置合同流程名称
                     * @param _flowName 合同流程名称
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
                     * 获取合同流程类型
<br/>客户自定义，用于合同分类展示
                     * @return FlowType 合同流程类型
<br/>客户自定义，用于合同分类展示
                     * 
                     */
                    std::string GetFlowType() const;

                    /**
                     * 设置合同流程类型
<br/>客户自定义，用于合同分类展示
                     * @param _flowType 合同流程类型
<br/>客户自定义，用于合同分类展示
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
                     * 获取合同流程描述信息
                     * @return FlowDescription 合同流程描述信息
                     * 
                     */
                    std::string GetFlowDescription() const;

                    /**
                     * 设置合同流程描述信息
                     * @param _flowDescription 合同流程描述信息
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
                     * 获取合同流程截止时间，unix时间戳，单位秒
                     * @return Deadline 合同流程截止时间，unix时间戳，单位秒
                     * 
                     */
                    int64_t GetDeadline() const;

                    /**
                     * 设置合同流程截止时间，unix时间戳，单位秒
                     * @param _deadline 合同流程截止时间，unix时间戳，单位秒
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
                     * 获取是否顺序签署(true:无序签,false:顺序签)
<br/>默认false，有序签署合同
                     * @return Unordered 是否顺序签署(true:无序签,false:顺序签)
<br/>默认false，有序签署合同
                     * 
                     */
                    bool GetUnordered() const;

                    /**
                     * 设置是否顺序签署(true:无序签,false:顺序签)
<br/>默认false，有序签署合同
                     * @param _unordered 是否顺序签署(true:无序签,false:顺序签)
<br/>默认false，有序签署合同
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
                     * 获取是否打开智能添加填写区(默认开启，打开:"OPEN" 关闭："CLOSE")
                     * @return IntelligentStatus 是否打开智能添加填写区(默认开启，打开:"OPEN" 关闭："CLOSE")
                     * 
                     */
                    std::string GetIntelligentStatus() const;

                    /**
                     * 设置是否打开智能添加填写区(默认开启，打开:"OPEN" 关闭："CLOSE")
                     * @param _intelligentStatus 是否打开智能添加填写区(默认开启，打开:"OPEN" 关闭："CLOSE")
                     * 
                     */
                    void SetIntelligentStatus(const std::string& _intelligentStatus);

                    /**
                     * 判断参数 IntelligentStatus 是否已赋值
                     * @return IntelligentStatus 是否已赋值
                     * 
                     */
                    bool IntelligentStatusHasBeenSet() const;

                    /**
                     * 获取填写控件内容
                     * @return FormFields 填写控件内容
                     * 
                     */
                    std::vector<FormField> GetFormFields() const;

                    /**
                     * 设置填写控件内容
                     * @param _formFields 填写控件内容
                     * 
                     */
                    void SetFormFields(const std::vector<FormField>& _formFields);

                    /**
                     * 判断参数 FormFields 是否已赋值
                     * @return FormFields 是否已赋值
                     * 
                     */
                    bool FormFieldsHasBeenSet() const;

                    /**
                     * 获取本企业(发起方企业)是否需要签署审批
<br/>true：开启发起方签署审批
<br/>false：不开启发起方签署审批
<br/>开启后，使用ChannelCreateFlowSignReview接口提交审批结果，才能继续完成签署
                     * @return NeedSignReview 本企业(发起方企业)是否需要签署审批
<br/>true：开启发起方签署审批
<br/>false：不开启发起方签署审批
<br/>开启后，使用ChannelCreateFlowSignReview接口提交审批结果，才能继续完成签署
                     * 
                     */
                    bool GetNeedSignReview() const;

                    /**
                     * 设置本企业(发起方企业)是否需要签署审批
<br/>true：开启发起方签署审批
<br/>false：不开启发起方签署审批
<br/>开启后，使用ChannelCreateFlowSignReview接口提交审批结果，才能继续完成签署
                     * @param _needSignReview 本企业(发起方企业)是否需要签署审批
<br/>true：开启发起方签署审批
<br/>false：不开启发起方签署审批
<br/>开启后，使用ChannelCreateFlowSignReview接口提交审批结果，才能继续完成签署
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
                     * 获取用户流程自定义数据参数
                     * @return UserData 用户流程自定义数据参数
                     * 
                     */
                    std::string GetUserData() const;

                    /**
                     * 设置用户流程自定义数据参数
                     * @param _userData 用户流程自定义数据参数
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
                     * 获取抄送人信息
                     * @return CcInfos 抄送人信息
                     * 
                     */
                    std::vector<CcInfo> GetCcInfos() const;

                    /**
                     * 设置抄送人信息
                     * @param _ccInfos 抄送人信息
                     * 
                     */
                    void SetCcInfos(const std::vector<CcInfo>& _ccInfos);

                    /**
                     * 判断参数 CcInfos 是否已赋值
                     * @return CcInfos 是否已赋值
                     * 
                     */
                    bool CcInfosHasBeenSet() const;

                    /**
                     * 获取是否需要开启发起方发起前审核
<br/>true：开启发起方发起前审核
<br/>false：不开启发起方发起前审核
<br/>当指定NeedCreateReview=true，则提交审核后，需要使用接口：ChannelCreateFlowSignReview，来完成发起前审核，审核通过后，可以继续查看，签署合同
                     * @return NeedCreateReview 是否需要开启发起方发起前审核
<br/>true：开启发起方发起前审核
<br/>false：不开启发起方发起前审核
<br/>当指定NeedCreateReview=true，则提交审核后，需要使用接口：ChannelCreateFlowSignReview，来完成发起前审核，审核通过后，可以继续查看，签署合同
                     * 
                     */
                    bool GetNeedCreateReview() const;

                    /**
                     * 设置是否需要开启发起方发起前审核
<br/>true：开启发起方发起前审核
<br/>false：不开启发起方发起前审核
<br/>当指定NeedCreateReview=true，则提交审核后，需要使用接口：ChannelCreateFlowSignReview，来完成发起前审核，审核通过后，可以继续查看，签署合同
                     * @param _needCreateReview 是否需要开启发起方发起前审核
<br/>true：开启发起方发起前审核
<br/>false：不开启发起方发起前审核
<br/>当指定NeedCreateReview=true，则提交审核后，需要使用接口：ChannelCreateFlowSignReview，来完成发起前审核，审核通过后，可以继续查看，签署合同
                     * 
                     */
                    void SetNeedCreateReview(const bool& _needCreateReview);

                    /**
                     * 判断参数 NeedCreateReview 是否已赋值
                     * @return NeedCreateReview 是否已赋值
                     * 
                     */
                    bool NeedCreateReviewHasBeenSet() const;

                private:

                    /**
                     * 合同流程名称
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 合同流程类型
<br/>客户自定义，用于合同分类展示
                     */
                    std::string m_flowType;
                    bool m_flowTypeHasBeenSet;

                    /**
                     * 合同流程描述信息
                     */
                    std::string m_flowDescription;
                    bool m_flowDescriptionHasBeenSet;

                    /**
                     * 合同流程截止时间，unix时间戳，单位秒
                     */
                    int64_t m_deadline;
                    bool m_deadlineHasBeenSet;

                    /**
                     * 是否顺序签署(true:无序签,false:顺序签)
<br/>默认false，有序签署合同
                     */
                    bool m_unordered;
                    bool m_unorderedHasBeenSet;

                    /**
                     * 是否打开智能添加填写区(默认开启，打开:"OPEN" 关闭："CLOSE")
                     */
                    std::string m_intelligentStatus;
                    bool m_intelligentStatusHasBeenSet;

                    /**
                     * 填写控件内容
                     */
                    std::vector<FormField> m_formFields;
                    bool m_formFieldsHasBeenSet;

                    /**
                     * 本企业(发起方企业)是否需要签署审批
<br/>true：开启发起方签署审批
<br/>false：不开启发起方签署审批
<br/>开启后，使用ChannelCreateFlowSignReview接口提交审批结果，才能继续完成签署
                     */
                    bool m_needSignReview;
                    bool m_needSignReviewHasBeenSet;

                    /**
                     * 用户流程自定义数据参数
                     */
                    std::string m_userData;
                    bool m_userDataHasBeenSet;

                    /**
                     * 抄送人信息
                     */
                    std::vector<CcInfo> m_ccInfos;
                    bool m_ccInfosHasBeenSet;

                    /**
                     * 是否需要开启发起方发起前审核
<br/>true：开启发起方发起前审核
<br/>false：不开启发起方发起前审核
<br/>当指定NeedCreateReview=true，则提交审核后，需要使用接口：ChannelCreateFlowSignReview，来完成发起前审核，审核通过后，可以继续查看，签署合同
                     */
                    bool m_needCreateReview;
                    bool m_needCreateReviewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_BASEFLOWINFO_H_
