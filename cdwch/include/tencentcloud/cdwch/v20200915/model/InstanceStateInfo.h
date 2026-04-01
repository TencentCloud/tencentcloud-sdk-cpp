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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_INSTANCESTATEINFO_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_INSTANCESTATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * 集群状态抽象后的结构体
                */
                class InstanceStateInfo : public AbstractModel
                {
                public:
                    InstanceStateInfo();
                    ~InstanceStateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>集群状态，例如：Serving</p>
                     * @return InstanceState <p>集群状态，例如：Serving</p>
                     * 
                     */
                    std::string GetInstanceState() const;

                    /**
                     * 设置<p>集群状态，例如：Serving</p>
                     * @param _instanceState <p>集群状态，例如：Serving</p>
                     * 
                     */
                    void SetInstanceState(const std::string& _instanceState);

                    /**
                     * 判断参数 InstanceState 是否已赋值
                     * @return InstanceState 是否已赋值
                     * 
                     */
                    bool InstanceStateHasBeenSet() const;

                    /**
                     * 获取<p>集群操作创建时间</p>
                     * @return FlowCreateTime <p>集群操作创建时间</p>
                     * 
                     */
                    std::string GetFlowCreateTime() const;

                    /**
                     * 设置<p>集群操作创建时间</p>
                     * @param _flowCreateTime <p>集群操作创建时间</p>
                     * 
                     */
                    void SetFlowCreateTime(const std::string& _flowCreateTime);

                    /**
                     * 判断参数 FlowCreateTime 是否已赋值
                     * @return FlowCreateTime 是否已赋值
                     * 
                     */
                    bool FlowCreateTimeHasBeenSet() const;

                    /**
                     * 获取<p>集群操作名称</p>
                     * @return FlowName <p>集群操作名称</p>
                     * 
                     */
                    std::string GetFlowName() const;

                    /**
                     * 设置<p>集群操作名称</p>
                     * @param _flowName <p>集群操作名称</p>
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
                     * 获取<p>集群操作进度</p>
                     * @return FlowProgress <p>集群操作进度</p>
                     * 
                     */
                    int64_t GetFlowProgress() const;

                    /**
                     * 设置<p>集群操作进度</p>
                     * @param _flowProgress <p>集群操作进度</p>
                     * 
                     */
                    void SetFlowProgress(const int64_t& _flowProgress);

                    /**
                     * 判断参数 FlowProgress 是否已赋值
                     * @return FlowProgress 是否已赋值
                     * 
                     */
                    bool FlowProgressHasBeenSet() const;

                    /**
                     * 获取<p>集群状态描述，例如：运行中</p>
                     * @return InstanceStateDesc <p>集群状态描述，例如：运行中</p>
                     * 
                     */
                    std::string GetInstanceStateDesc() const;

                    /**
                     * 设置<p>集群状态描述，例如：运行中</p>
                     * @param _instanceStateDesc <p>集群状态描述，例如：运行中</p>
                     * 
                     */
                    void SetInstanceStateDesc(const std::string& _instanceStateDesc);

                    /**
                     * 判断参数 InstanceStateDesc 是否已赋值
                     * @return InstanceStateDesc 是否已赋值
                     * 
                     */
                    bool InstanceStateDescHasBeenSet() const;

                    /**
                     * 获取<p>集群流程错误信息，例如：“创建失败，资源不足”</p>
                     * @return FlowMsg <p>集群流程错误信息，例如：“创建失败，资源不足”</p>
                     * 
                     */
                    std::string GetFlowMsg() const;

                    /**
                     * 设置<p>集群流程错误信息，例如：“创建失败，资源不足”</p>
                     * @param _flowMsg <p>集群流程错误信息，例如：“创建失败，资源不足”</p>
                     * 
                     */
                    void SetFlowMsg(const std::string& _flowMsg);

                    /**
                     * 判断参数 FlowMsg 是否已赋值
                     * @return FlowMsg 是否已赋值
                     * 
                     */
                    bool FlowMsgHasBeenSet() const;

                    /**
                     * 获取<p>当前步骤的名称，例如：”购买资源中“</p>
                     * @return ProcessName <p>当前步骤的名称，例如：”购买资源中“</p>
                     * 
                     */
                    std::string GetProcessName() const;

                    /**
                     * 设置<p>当前步骤的名称，例如：”购买资源中“</p>
                     * @param _processName <p>当前步骤的名称，例如：”购买资源中“</p>
                     * 
                     */
                    void SetProcessName(const std::string& _processName);

                    /**
                     * 判断参数 ProcessName 是否已赋值
                     * @return ProcessName 是否已赋值
                     * 
                     */
                    bool ProcessNameHasBeenSet() const;

                    /**
                     * 获取<p>请求id</p>
                     * @return RequestId <p>请求id</p>
                     * 
                     */
                    std::string GetRequestId() const;

                    /**
                     * 设置<p>请求id</p>
                     * @param _requestId <p>请求id</p>
                     * 
                     */
                    void SetRequestId(const std::string& _requestId);

                    /**
                     * 判断参数 RequestId 是否已赋值
                     * @return RequestId 是否已赋值
                     * 
                     */
                    bool RequestIdHasBeenSet() const;

                    /**
                     * 获取<p>流程的二级名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessSubName <p>流程的二级名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetProcessSubName() const;

                    /**
                     * 设置<p>流程的二级名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processSubName <p>流程的二级名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessSubName(const std::string& _processSubName);

                    /**
                     * 判断参数 ProcessSubName 是否已赋值
                     * @return ProcessSubName 是否已赋值
                     * 
                     */
                    bool ProcessSubNameHasBeenSet() const;

                    /**
                     * 获取<p>请求ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RequestID <p>请求ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRequestID() const;

                    /**
                     * 设置<p>请求ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requestID <p>请求ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequestID(const std::string& _requestID);

                    /**
                     * 判断参数 RequestID 是否已赋值
                     * @return RequestID 是否已赋值
                     * 
                     */
                    bool RequestIDHasBeenSet() const;

                private:

                    /**
                     * <p>集群状态，例如：Serving</p>
                     */
                    std::string m_instanceState;
                    bool m_instanceStateHasBeenSet;

                    /**
                     * <p>集群操作创建时间</p>
                     */
                    std::string m_flowCreateTime;
                    bool m_flowCreateTimeHasBeenSet;

                    /**
                     * <p>集群操作名称</p>
                     */
                    std::string m_flowName;
                    bool m_flowNameHasBeenSet;

                    /**
                     * <p>集群操作进度</p>
                     */
                    int64_t m_flowProgress;
                    bool m_flowProgressHasBeenSet;

                    /**
                     * <p>集群状态描述，例如：运行中</p>
                     */
                    std::string m_instanceStateDesc;
                    bool m_instanceStateDescHasBeenSet;

                    /**
                     * <p>集群流程错误信息，例如：“创建失败，资源不足”</p>
                     */
                    std::string m_flowMsg;
                    bool m_flowMsgHasBeenSet;

                    /**
                     * <p>当前步骤的名称，例如：”购买资源中“</p>
                     */
                    std::string m_processName;
                    bool m_processNameHasBeenSet;

                    /**
                     * <p>请求id</p>
                     */
                    std::string m_requestId;
                    bool m_requestIdHasBeenSet;

                    /**
                     * <p>流程的二级名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_processSubName;
                    bool m_processSubNameHasBeenSet;

                    /**
                     * <p>请求ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_requestID;
                    bool m_requestIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_INSTANCESTATEINFO_H_
