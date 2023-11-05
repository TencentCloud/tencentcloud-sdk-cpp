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

#ifndef TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWDETAILINFO_H_
#define TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/essbasic/v20210526/model/FlowApproverDetail.h>


namespace TencentCloud
{
    namespace Essbasic
    {
        namespace V20210526
        {
            namespace Model
            {
                /**
                * 此结构体(FlowDetailInfo)描述的是合同(流程)的详细信息
                */
                class FlowDetailInfo : public AbstractModel
                {
                public:
                    FlowDetailInfo();
                    ~FlowDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取合同流程ID，为32位字符串。
                     * @return FlowId 合同流程ID，为32位字符串。
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置合同流程ID，为32位字符串。
                     * @param _flowId 合同流程ID，为32位字符串。
                     * 
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     * 
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。
                     * @return FlowName 合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。
                     * @param _flowName 合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。
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
                     * 获取合同流程的类别分类（如销售合同/入职合同等）。
                     * @return FlowType 合同流程的类别分类（如销售合同/入职合同等）。
                     * 
                     */
                    std::string GetFlowType() const;

                    /**
                     * 设置合同流程的类别分类（如销售合同/入职合同等）。
                     * @param _flowType 合同流程的类别分类（如销售合同/入职合同等）。
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
                     * 获取合同流程当前的签署状态, 会存在下列的状态值
<ul><li> **INIT** :合同创建</li>
<li> **PART** :合同签署中(至少有一个签署方已经签署)</li>
<li> **REJECT** :合同拒签</li>
<li> **ALL** :合同签署完成</li>
<li> **DEADLINE** :合同流签(合同过期)</li>
<li> **CANCEL** :合同撤回</li>
<li> **RELIEVED** :解除协议（已解除）</li></ul>
 
                     * @return FlowStatus 合同流程当前的签署状态, 会存在下列的状态值
<ul><li> **INIT** :合同创建</li>
<li> **PART** :合同签署中(至少有一个签署方已经签署)</li>
<li> **REJECT** :合同拒签</li>
<li> **ALL** :合同签署完成</li>
<li> **DEADLINE** :合同流签(合同过期)</li>
<li> **CANCEL** :合同撤回</li>
<li> **RELIEVED** :解除协议（已解除）</li></ul>
 
                     * 
                     */
                    std::string GetFlowStatus() const;

                    /**
                     * 设置合同流程当前的签署状态, 会存在下列的状态值
<ul><li> **INIT** :合同创建</li>
<li> **PART** :合同签署中(至少有一个签署方已经签署)</li>
<li> **REJECT** :合同拒签</li>
<li> **ALL** :合同签署完成</li>
<li> **DEADLINE** :合同流签(合同过期)</li>
<li> **CANCEL** :合同撤回</li>
<li> **RELIEVED** :解除协议（已解除）</li></ul>
 
                     * @param _flowStatus 合同流程当前的签署状态, 会存在下列的状态值
<ul><li> **INIT** :合同创建</li>
<li> **PART** :合同签署中(至少有一个签署方已经签署)</li>
<li> **REJECT** :合同拒签</li>
<li> **ALL** :合同签署完成</li>
<li> **DEADLINE** :合同流签(合同过期)</li>
<li> **CANCEL** :合同撤回</li>
<li> **RELIEVED** :解除协议（已解除）</li></ul>
 
                     * 
                     */
                    void SetFlowStatus(const std::string& _flowStatus);

                    /**
                     * 判断参数 FlowStatus 是否已赋值
                     * @return FlowStatus 是否已赋值
                     * 
                     */
                    bool FlowStatusHasBeenSet() const;

                    /**
                     * 获取当合同流程状态为已拒签（即 FlowStatus=REJECT）或已撤销（即 FlowStatus=CANCEL ）时，此字段 FlowMessage 为拒签或撤销原因。
                     * @return FlowMessage 当合同流程状态为已拒签（即 FlowStatus=REJECT）或已撤销（即 FlowStatus=CANCEL ）时，此字段 FlowMessage 为拒签或撤销原因。
                     * 
                     */
                    std::string GetFlowMessage() const;

                    /**
                     * 设置当合同流程状态为已拒签（即 FlowStatus=REJECT）或已撤销（即 FlowStatus=CANCEL ）时，此字段 FlowMessage 为拒签或撤销原因。
                     * @param _flowMessage 当合同流程状态为已拒签（即 FlowStatus=REJECT）或已撤销（即 FlowStatus=CANCEL ）时，此字段 FlowMessage 为拒签或撤销原因。
                     * 
                     */
                    void SetFlowMessage(const std::string& _flowMessage);

                    /**
                     * 判断参数 FlowMessage 是否已赋值
                     * @return FlowMessage 是否已赋值
                     * 
                     */
                    bool FlowMessageHasBeenSet() const;

                    /**
                     * 获取合同流程的创建时间戳，格式为Unix标准时间戳（秒）。
                     * @return CreateOn 合同流程的创建时间戳，格式为Unix标准时间戳（秒）。
                     * 
                     */
                    int64_t GetCreateOn() const;

                    /**
                     * 设置合同流程的创建时间戳，格式为Unix标准时间戳（秒）。
                     * @param _createOn 合同流程的创建时间戳，格式为Unix标准时间戳（秒）。
                     * 
                     */
                    void SetCreateOn(const int64_t& _createOn);

                    /**
                     * 判断参数 CreateOn 是否已赋值
                     * @return CreateOn 是否已赋值
                     * 
                     */
                    bool CreateOnHasBeenSet() const;

                    /**
                     * 获取签署流程的签署截止时间, 值为unix时间戳, 精确到秒。
                     * @return DeadLine 签署流程的签署截止时间, 值为unix时间戳, 精确到秒。
                     * 
                     */
                    int64_t GetDeadLine() const;

                    /**
                     * 设置签署流程的签署截止时间, 值为unix时间戳, 精确到秒。
                     * @param _deadLine 签署流程的签署截止时间, 值为unix时间戳, 精确到秒。
                     * 
                     */
                    void SetDeadLine(const int64_t& _deadLine);

                    /**
                     * 判断参数 DeadLine 是否已赋值
                     * @return DeadLine 是否已赋值
                     * 
                     */
                    bool DeadLineHasBeenSet() const;

                    /**
                     * 获取调用方自定义的个性化字段(可自定义此字段的值)，并以base64方式编码，支持的最大数据大小为 1000长度。
在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。
                     * @return CustomData 调用方自定义的个性化字段(可自定义此字段的值)，并以base64方式编码，支持的最大数据大小为 1000长度。
在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。
                     * 
                     */
                    std::string GetCustomData() const;

                    /**
                     * 设置调用方自定义的个性化字段(可自定义此字段的值)，并以base64方式编码，支持的最大数据大小为 1000长度。
在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。
                     * @param _customData 调用方自定义的个性化字段(可自定义此字段的值)，并以base64方式编码，支持的最大数据大小为 1000长度。
在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。
                     * 
                     */
                    void SetCustomData(const std::string& _customData);

                    /**
                     * 判断参数 CustomData 是否已赋值
                     * @return CustomData 是否已赋值
                     * 
                     */
                    bool CustomDataHasBeenSet() const;

                    /**
                     * 获取合同流程的签署方数组
                     * @return FlowApproverInfos 合同流程的签署方数组
                     * 
                     */
                    std::vector<FlowApproverDetail> GetFlowApproverInfos() const;

                    /**
                     * 设置合同流程的签署方数组
                     * @param _flowApproverInfos 合同流程的签署方数组
                     * 
                     */
                    void SetFlowApproverInfos(const std::vector<FlowApproverDetail>& _flowApproverInfos);

                    /**
                     * 判断参数 FlowApproverInfos 是否已赋值
                     * @return FlowApproverInfos 是否已赋值
                     * 
                     */
                    bool FlowApproverInfosHasBeenSet() const;

                    /**
                     * 获取合同流程的关注方信息数组
                     * @return CcInfos 合同流程的关注方信息数组
                     * 
                     */
                    std::vector<FlowApproverDetail> GetCcInfos() const;

                    /**
                     * 设置合同流程的关注方信息数组
                     * @param _ccInfos 合同流程的关注方信息数组
                     * 
                     */
                    void SetCcInfos(const std::vector<FlowApproverDetail>& _ccInfos);

                    /**
                     * 判断参数 CcInfos 是否已赋值
                     * @return CcInfos 是否已赋值
                     * 
                     */
                    bool CcInfosHasBeenSet() const;

                    /**
                     * 获取是否需要发起前审批
<ul><li>当NeedCreateReview为true，表明当前流程是需要发起前审核的合同，可能无法进行查看，签署操作，需要等审核完成后，才可以继续后续流程</li>
<li>当NeedCreateReview为false，不需要发起前审核的合同</li></ul>
                     * @return NeedCreateReview 是否需要发起前审批
<ul><li>当NeedCreateReview为true，表明当前流程是需要发起前审核的合同，可能无法进行查看，签署操作，需要等审核完成后，才可以继续后续流程</li>
<li>当NeedCreateReview为false，不需要发起前审核的合同</li></ul>
                     * 
                     */
                    bool GetNeedCreateReview() const;

                    /**
                     * 设置是否需要发起前审批
<ul><li>当NeedCreateReview为true，表明当前流程是需要发起前审核的合同，可能无法进行查看，签署操作，需要等审核完成后，才可以继续后续流程</li>
<li>当NeedCreateReview为false，不需要发起前审核的合同</li></ul>
                     * @param _needCreateReview 是否需要发起前审批
<ul><li>当NeedCreateReview为true，表明当前流程是需要发起前审核的合同，可能无法进行查看，签署操作，需要等审核完成后，才可以继续后续流程</li>
<li>当NeedCreateReview为false，不需要发起前审核的合同</li></ul>
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
                     * 合同流程ID，为32位字符串。
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 合同流程的名称（可自定义此名称），长度不能超过200，只能由中文、字母、数字和下划线组成。
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 合同流程的类别分类（如销售合同/入职合同等）。
                     */
                    std::string m_flowType;
                    bool m_flowTypeHasBeenSet;

                    /**
                     * 合同流程当前的签署状态, 会存在下列的状态值
<ul><li> **INIT** :合同创建</li>
<li> **PART** :合同签署中(至少有一个签署方已经签署)</li>
<li> **REJECT** :合同拒签</li>
<li> **ALL** :合同签署完成</li>
<li> **DEADLINE** :合同流签(合同过期)</li>
<li> **CANCEL** :合同撤回</li>
<li> **RELIEVED** :解除协议（已解除）</li></ul>
 
                     */
                    std::string m_flowStatus;
                    bool m_flowStatusHasBeenSet;

                    /**
                     * 当合同流程状态为已拒签（即 FlowStatus=REJECT）或已撤销（即 FlowStatus=CANCEL ）时，此字段 FlowMessage 为拒签或撤销原因。
                     */
                    std::string m_flowMessage;
                    bool m_flowMessageHasBeenSet;

                    /**
                     * 合同流程的创建时间戳，格式为Unix标准时间戳（秒）。
                     */
                    int64_t m_createOn;
                    bool m_createOnHasBeenSet;

                    /**
                     * 签署流程的签署截止时间, 值为unix时间戳, 精确到秒。
                     */
                    int64_t m_deadLine;
                    bool m_deadLineHasBeenSet;

                    /**
                     * 调用方自定义的个性化字段(可自定义此字段的值)，并以base64方式编码，支持的最大数据大小为 1000长度。
在合同状态变更的回调信息等场景中，该字段的信息将原封不动地透传给贵方。
                     */
                    std::string m_customData;
                    bool m_customDataHasBeenSet;

                    /**
                     * 合同流程的签署方数组
                     */
                    std::vector<FlowApproverDetail> m_flowApproverInfos;
                    bool m_flowApproverInfosHasBeenSet;

                    /**
                     * 合同流程的关注方信息数组
                     */
                    std::vector<FlowApproverDetail> m_ccInfos;
                    bool m_ccInfosHasBeenSet;

                    /**
                     * 是否需要发起前审批
<ul><li>当NeedCreateReview为true，表明当前流程是需要发起前审核的合同，可能无法进行查看，签署操作，需要等审核完成后，才可以继续后续流程</li>
<li>当NeedCreateReview为false，不需要发起前审核的合同</li></ul>
                     */
                    bool m_needCreateReview;
                    bool m_needCreateReviewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWDETAILINFO_H_
