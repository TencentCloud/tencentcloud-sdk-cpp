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
                     * 获取合同(流程)的Id
                     * @return FlowId 合同(流程)的Id
                     * 
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置合同(流程)的Id
                     * @param _flowId 合同(流程)的Id
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
                     * 获取合同(流程)的名字
                     * @return FlowName 合同(流程)的名字
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置合同(流程)的名字
                     * @param _flowName 合同(流程)的名字
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
                     * 获取合同(流程)的类型
                     * @return FlowType 合同(流程)的类型
                     * 
                     */
                    std::string GetFlowType() const;

                    /**
                     * 设置合同(流程)的类型
                     * @param _flowType 合同(流程)的类型
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
                     * 获取合同(流程)的状态, 状态如下

INIT 还没发起
PART 部分签署
REJECT 拒签
ALL 全部签署
DEADLINE 流签
CANCEL 取消
RELIEVED 解除
 
                     * @return FlowStatus 合同(流程)的状态, 状态如下

INIT 还没发起
PART 部分签署
REJECT 拒签
ALL 全部签署
DEADLINE 流签
CANCEL 取消
RELIEVED 解除
 
                     * 
                     */
                    std::string GetFlowStatus() const;

                    /**
                     * 设置合同(流程)的状态, 状态如下

INIT 还没发起
PART 部分签署
REJECT 拒签
ALL 全部签署
DEADLINE 流签
CANCEL 取消
RELIEVED 解除
 
                     * @param _flowStatus 合同(流程)的状态, 状态如下

INIT 还没发起
PART 部分签署
REJECT 拒签
ALL 全部签署
DEADLINE 流签
CANCEL 取消
RELIEVED 解除
 
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
                     * 获取合同(流程)的信息
                     * @return FlowMessage 合同(流程)的信息
                     * 
                     */
                    std::string GetFlowMessage() const;

                    /**
                     * 设置合同(流程)的信息
                     * @param _flowMessage 合同(流程)的信息
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
                     * 获取合同(流程)的创建时间戳，单位秒
                     * @return CreateOn 合同(流程)的创建时间戳，单位秒
                     * 
                     */
                    int64_t GetCreateOn() const;

                    /**
                     * 设置合同(流程)的创建时间戳，单位秒
                     * @param _createOn 合同(流程)的创建时间戳，单位秒
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
                     * 获取合同(流程)的签署截止时间戳，单位秒
                     * @return DeadLine 合同(流程)的签署截止时间戳，单位秒
                     * 
                     */
                    int64_t GetDeadLine() const;

                    /**
                     * 设置合同(流程)的签署截止时间戳，单位秒
                     * @param _deadLine 合同(流程)的签署截止时间戳，单位秒
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
                     * 获取用户自定义数据
                     * @return CustomData 用户自定义数据
                     * 
                     */
                    std::string GetCustomData() const;

                    /**
                     * 设置用户自定义数据
                     * @param _customData 用户自定义数据
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
                     * 获取合同(流程)的签署人数组
                     * @return FlowApproverInfos 合同(流程)的签署人数组
                     * 
                     */
                    std::vector<FlowApproverDetail> GetFlowApproverInfos() const;

                    /**
                     * 设置合同(流程)的签署人数组
                     * @param _flowApproverInfos 合同(流程)的签署人数组
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
                     * 获取合同(流程)关注方信息列表
                     * @return CcInfos 合同(流程)关注方信息列表
                     * 
                     */
                    std::vector<FlowApproverDetail> GetCcInfos() const;

                    /**
                     * 设置合同(流程)关注方信息列表
                     * @param _ccInfos 合同(流程)关注方信息列表
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
                     * 获取是否需要发起前审批，当NeedCreateReview为true，表明当前流程是需要发起前审核的合同，可能无法进行查看，签署操作，需要等审核完成后，才可以继续后续流程
                     * @return NeedCreateReview 是否需要发起前审批，当NeedCreateReview为true，表明当前流程是需要发起前审核的合同，可能无法进行查看，签署操作，需要等审核完成后，才可以继续后续流程
                     * 
                     */
                    bool GetNeedCreateReview() const;

                    /**
                     * 设置是否需要发起前审批，当NeedCreateReview为true，表明当前流程是需要发起前审核的合同，可能无法进行查看，签署操作，需要等审核完成后，才可以继续后续流程
                     * @param _needCreateReview 是否需要发起前审批，当NeedCreateReview为true，表明当前流程是需要发起前审核的合同，可能无法进行查看，签署操作，需要等审核完成后，才可以继续后续流程
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
                     * 合同(流程)的Id
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 合同(流程)的名字
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 合同(流程)的类型
                     */
                    std::string m_flowType;
                    bool m_flowTypeHasBeenSet;

                    /**
                     * 合同(流程)的状态, 状态如下

INIT 还没发起
PART 部分签署
REJECT 拒签
ALL 全部签署
DEADLINE 流签
CANCEL 取消
RELIEVED 解除
 
                     */
                    std::string m_flowStatus;
                    bool m_flowStatusHasBeenSet;

                    /**
                     * 合同(流程)的信息
                     */
                    std::string m_flowMessage;
                    bool m_flowMessageHasBeenSet;

                    /**
                     * 合同(流程)的创建时间戳，单位秒
                     */
                    int64_t m_createOn;
                    bool m_createOnHasBeenSet;

                    /**
                     * 合同(流程)的签署截止时间戳，单位秒
                     */
                    int64_t m_deadLine;
                    bool m_deadLineHasBeenSet;

                    /**
                     * 用户自定义数据
                     */
                    std::string m_customData;
                    bool m_customDataHasBeenSet;

                    /**
                     * 合同(流程)的签署人数组
                     */
                    std::vector<FlowApproverDetail> m_flowApproverInfos;
                    bool m_flowApproverInfosHasBeenSet;

                    /**
                     * 合同(流程)关注方信息列表
                     */
                    std::vector<FlowApproverDetail> m_ccInfos;
                    bool m_ccInfosHasBeenSet;

                    /**
                     * 是否需要发起前审批，当NeedCreateReview为true，表明当前流程是需要发起前审核的合同，可能无法进行查看，签署操作，需要等审核完成后，才可以继续后续流程
                     */
                    bool m_needCreateReview;
                    bool m_needCreateReviewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESSBASIC_V20210526_MODEL_FLOWDETAILINFO_H_
