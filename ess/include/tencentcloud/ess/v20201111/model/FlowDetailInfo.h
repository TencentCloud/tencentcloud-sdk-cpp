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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_FLOWDETAILINFO_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_FLOWDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/FlowApproverDetail.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
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
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置合同(流程)的Id
                     * @param FlowId 合同(流程)的Id
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取合同(流程)的名字
                     * @return FlowName 合同(流程)的名字
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置合同(流程)的名字
                     * @param FlowName 合同(流程)的名字
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     */
                    bool FlowNameHasBeenSet() const;

                    /**
                     * 获取合同(流程)的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowType 合同(流程)的类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFlowType() const;

                    /**
                     * 设置合同(流程)的类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FlowType 合同(流程)的类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFlowType(const std::string& _flowType);

                    /**
                     * 判断参数 FlowType 是否已赋值
                     * @return FlowType 是否已赋值
                     */
                    bool FlowTypeHasBeenSet() const;

                    /**
                     * 获取流程状态
- 0 还没有发起
- 1 未签署
- 2 部分签署
- 3 已退回
- 4 完成签署
- 5 已过期
- 6 已取消
- 7 还没有预发起
- 8 等待填写
- 9 部分填写
- 10 拒填
                     * @return FlowStatus 流程状态
- 0 还没有发起
- 1 未签署
- 2 部分签署
- 3 已退回
- 4 完成签署
- 5 已过期
- 6 已取消
- 7 还没有预发起
- 8 等待填写
- 9 部分填写
- 10 拒填
                     */
                    int64_t GetFlowStatus() const;

                    /**
                     * 设置流程状态
- 0 还没有发起
- 1 未签署
- 2 部分签署
- 3 已退回
- 4 完成签署
- 5 已过期
- 6 已取消
- 7 还没有预发起
- 8 等待填写
- 9 部分填写
- 10 拒填
                     * @param FlowStatus 流程状态
- 0 还没有发起
- 1 未签署
- 2 部分签署
- 3 已退回
- 4 完成签署
- 5 已过期
- 6 已取消
- 7 还没有预发起
- 8 等待填写
- 9 部分填写
- 10 拒填
                     */
                    void SetFlowStatus(const int64_t& _flowStatus);

                    /**
                     * 判断参数 FlowStatus 是否已赋值
                     * @return FlowStatus 是否已赋值
                     */
                    bool FlowStatusHasBeenSet() const;

                    /**
                     * 获取合同(流程)的信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowMessage 合同(流程)的信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFlowMessage() const;

                    /**
                     * 设置合同(流程)的信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FlowMessage 合同(流程)的信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFlowMessage(const std::string& _flowMessage);

                    /**
                     * 判断参数 FlowMessage 是否已赋值
                     * @return FlowMessage 是否已赋值
                     */
                    bool FlowMessageHasBeenSet() const;

                    /**
                     * 获取流程的描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowDescription 流程的描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFlowDescription() const;

                    /**
                     * 设置流程的描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FlowDescription 流程的描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFlowDescription(const std::string& _flowDescription);

                    /**
                     * 判断参数 FlowDescription 是否已赋值
                     * @return FlowDescription 是否已赋值
                     */
                    bool FlowDescriptionHasBeenSet() const;

                    /**
                     * 获取合同(流程)的创建时间戳
                     * @return CreatedOn 合同(流程)的创建时间戳
                     */
                    int64_t GetCreatedOn() const;

                    /**
                     * 设置合同(流程)的创建时间戳
                     * @param CreatedOn 合同(流程)的创建时间戳
                     */
                    void SetCreatedOn(const int64_t& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取合同(流程)的签署人数组
                     * @return FlowApproverInfos 合同(流程)的签署人数组
                     */
                    std::vector<FlowApproverDetail> GetFlowApproverInfos() const;

                    /**
                     * 设置合同(流程)的签署人数组
                     * @param FlowApproverInfos 合同(流程)的签署人数组
                     */
                    void SetFlowApproverInfos(const std::vector<FlowApproverDetail>& _flowApproverInfos);

                    /**
                     * 判断参数 FlowApproverInfos 是否已赋值
                     * @return FlowApproverInfos 是否已赋值
                     */
                    bool FlowApproverInfosHasBeenSet() const;

                    /**
                     * 获取合同(流程)的关注方信息列表
                     * @return CcInfos 合同(流程)的关注方信息列表
                     */
                    std::vector<FlowApproverDetail> GetCcInfos() const;

                    /**
                     * 设置合同(流程)的关注方信息列表
                     * @param CcInfos 合同(流程)的关注方信息列表
                     */
                    void SetCcInfos(const std::vector<FlowApproverDetail>& _ccInfos);

                    /**
                     * 判断参数 CcInfos 是否已赋值
                     * @return CcInfos 是否已赋值
                     */
                    bool CcInfosHasBeenSet() const;

                    /**
                     * 获取合同发起人UserId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Creator 合同发起人UserId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreator() const;

                    /**
                     * 设置合同发起人UserId
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Creator 合同发起人UserId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreator(const std::string& _creator);

                    /**
                     * 判断参数 Creator 是否已赋值
                     * @return Creator 是否已赋值
                     */
                    bool CreatorHasBeenSet() const;

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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flowType;
                    bool m_flowTypeHasBeenSet;

                    /**
                     * 流程状态
- 0 还没有发起
- 1 未签署
- 2 部分签署
- 3 已退回
- 4 完成签署
- 5 已过期
- 6 已取消
- 7 还没有预发起
- 8 等待填写
- 9 部分填写
- 10 拒填
                     */
                    int64_t m_flowStatus;
                    bool m_flowStatusHasBeenSet;

                    /**
                     * 合同(流程)的信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flowMessage;
                    bool m_flowMessageHasBeenSet;

                    /**
                     * 流程的描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flowDescription;
                    bool m_flowDescriptionHasBeenSet;

                    /**
                     * 合同(流程)的创建时间戳
                     */
                    int64_t m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 合同(流程)的签署人数组
                     */
                    std::vector<FlowApproverDetail> m_flowApproverInfos;
                    bool m_flowApproverInfosHasBeenSet;

                    /**
                     * 合同(流程)的关注方信息列表
                     */
                    std::vector<FlowApproverDetail> m_ccInfos;
                    bool m_ccInfosHasBeenSet;

                    /**
                     * 合同发起人UserId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_creator;
                    bool m_creatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FLOWDETAILINFO_H_
