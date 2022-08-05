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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_FLOWBRIEF_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_FLOWBRIEF_H_

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
                * 流程信息摘要
                */
                class FlowBrief : public AbstractModel
                {
                public:
                    FlowBrief();
                    ~FlowBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流程的编号
                     * @return FlowId 流程的编号
                     */
                    std::string GetFlowId() const;

                    /**
                     * 设置流程的编号
                     * @param FlowId 流程的编号
                     */
                    void SetFlowId(const std::string& _flowId);

                    /**
                     * 判断参数 FlowId 是否已赋值
                     * @return FlowId 是否已赋值
                     */
                    bool FlowIdHasBeenSet() const;

                    /**
                     * 获取流程的名称
                     * @return FlowName 流程的名称
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置流程的名称
                     * @param FlowName 流程的名称
                     */
                    void SetFlowName(const std::string& _flowName);

                    /**
                     * 判断参数 FlowName 是否已赋值
                     * @return FlowName 是否已赋值
                     */
                    bool FlowNameHasBeenSet() const;

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
                     * 获取流程的类型
                     * @return FlowType 流程的类型
                     */
                    std::string GetFlowType() const;

                    /**
                     * 设置流程的类型
                     * @param FlowType 流程的类型
                     */
                    void SetFlowType(const std::string& _flowType);

                    /**
                     * 判断参数 FlowType 是否已赋值
                     * @return FlowType 是否已赋值
                     */
                    bool FlowTypeHasBeenSet() const;

                    /**
                     * 获取流程状态
- `0`  还没有发起
- `1`  未签署
- `2`  部分签署
- `3`  已退回
- `4`  完成签署
- `5`  已过期
- `6`  已取消
- `7`  还没有预发起
- `8`  等待填写
- `9`  部分填写
- `10`  拒填
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowStatus 流程状态
- `0`  还没有发起
- `1`  未签署
- `2`  部分签署
- `3`  已退回
- `4`  完成签署
- `5`  已过期
- `6`  已取消
- `7`  还没有预发起
- `8`  等待填写
- `9`  部分填写
- `10`  拒填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetFlowStatus() const;

                    /**
                     * 设置流程状态
- `0`  还没有发起
- `1`  未签署
- `2`  部分签署
- `3`  已退回
- `4`  完成签署
- `5`  已过期
- `6`  已取消
- `7`  还没有预发起
- `8`  等待填写
- `9`  部分填写
- `10`  拒填
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FlowStatus 流程状态
- `0`  还没有发起
- `1`  未签署
- `2`  部分签署
- `3`  已退回
- `4`  完成签署
- `5`  已过期
- `6`  已取消
- `7`  还没有预发起
- `8`  等待填写
- `9`  部分填写
- `10`  拒填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFlowStatus(const int64_t& _flowStatus);

                    /**
                     * 判断参数 FlowStatus 是否已赋值
                     * @return FlowStatus 是否已赋值
                     */
                    bool FlowStatusHasBeenSet() const;

                    /**
                     * 获取流程创建的时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreatedOn 流程创建的时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetCreatedOn() const;

                    /**
                     * 设置流程创建的时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreatedOn 流程创建的时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreatedOn(const int64_t& _createdOn);

                    /**
                     * 判断参数 CreatedOn 是否已赋值
                     * @return CreatedOn 是否已赋值
                     */
                    bool CreatedOnHasBeenSet() const;

                    /**
                     * 获取拒签或者取消的原因描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FlowMessage 拒签或者取消的原因描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFlowMessage() const;

                    /**
                     * 设置拒签或者取消的原因描述
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FlowMessage 拒签或者取消的原因描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFlowMessage(const std::string& _flowMessage);

                    /**
                     * 判断参数 FlowMessage 是否已赋值
                     * @return FlowMessage 是否已赋值
                     */
                    bool FlowMessageHasBeenSet() const;

                private:

                    /**
                     * 流程的编号
                     */
                    std::string m_flowId;
                    bool m_flowIdHasBeenSet;

                    /**
                     * 流程的名称
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * 流程的描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flowDescription;
                    bool m_flowDescriptionHasBeenSet;

                    /**
                     * 流程的类型
                     */
                    std::string m_flowType;
                    bool m_flowTypeHasBeenSet;

                    /**
                     * 流程状态
- `0`  还没有发起
- `1`  未签署
- `2`  部分签署
- `3`  已退回
- `4`  完成签署
- `5`  已过期
- `6`  已取消
- `7`  还没有预发起
- `8`  等待填写
- `9`  部分填写
- `10`  拒填
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_flowStatus;
                    bool m_flowStatusHasBeenSet;

                    /**
                     * 流程创建的时间戳
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_createdOn;
                    bool m_createdOnHasBeenSet;

                    /**
                     * 拒签或者取消的原因描述
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_flowMessage;
                    bool m_flowMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FLOWBRIEF_H_
