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

#ifndef TENCENTCLOUD_THPC_V20220401_MODEL_NODEACTIVITY_H_
#define TENCENTCLOUD_THPC_V20220401_MODEL_NODEACTIVITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Thpc
    {
        namespace V20220401
        {
            namespace Model
            {
                /**
                * 节点活动信息。
                */
                class NodeActivity : public AbstractModel
                {
                public:
                    NodeActivity();
                    ~NodeActivity() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取节点活动所在的实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeInstanceId 节点活动所在的实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeInstanceId() const;

                    /**
                     * 设置节点活动所在的实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeInstanceId 节点活动所在的实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeInstanceId(const std::string& _nodeInstanceId);

                    /**
                     * 判断参数 NodeInstanceId 是否已赋值
                     * @return NodeInstanceId 是否已赋值
                     * 
                     */
                    bool NodeInstanceIdHasBeenSet() const;

                    /**
                     * 获取节点活动状态。取值范围：<br><li>RUNNING：运行中</li><br><li>SUCCESSFUL：活动成功</li><br><li>FAILED：活动失败</li>	
                     * @return NodeActivityStatus 节点活动状态。取值范围：<br><li>RUNNING：运行中</li><br><li>SUCCESSFUL：活动成功</li><br><li>FAILED：活动失败</li>	
                     * 
                     */
                    std::string GetNodeActivityStatus() const;

                    /**
                     * 设置节点活动状态。取值范围：<br><li>RUNNING：运行中</li><br><li>SUCCESSFUL：活动成功</li><br><li>FAILED：活动失败</li>	
                     * @param _nodeActivityStatus 节点活动状态。取值范围：<br><li>RUNNING：运行中</li><br><li>SUCCESSFUL：活动成功</li><br><li>FAILED：活动失败</li>	
                     * 
                     */
                    void SetNodeActivityStatus(const std::string& _nodeActivityStatus);

                    /**
                     * 判断参数 NodeActivityStatus 是否已赋值
                     * @return NodeActivityStatus 是否已赋值
                     * 
                     */
                    bool NodeActivityStatusHasBeenSet() const;

                    /**
                     * 获取节点活动状态码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeActivityStatusCode 节点活动状态码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeActivityStatusCode() const;

                    /**
                     * 设置节点活动状态码。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeActivityStatusCode 节点活动状态码。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeActivityStatusCode(const std::string& _nodeActivityStatusCode);

                    /**
                     * 判断参数 NodeActivityStatusCode 是否已赋值
                     * @return NodeActivityStatusCode 是否已赋值
                     * 
                     */
                    bool NodeActivityStatusCodeHasBeenSet() const;

                    /**
                     * 获取节点活动状态原因。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeActivityStatusReason 节点活动状态原因。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeActivityStatusReason() const;

                    /**
                     * 设置节点活动状态原因。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeActivityStatusReason 节点活动状态原因。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeActivityStatusReason(const std::string& _nodeActivityStatusReason);

                    /**
                     * 判断参数 NodeActivityStatusReason 是否已赋值
                     * @return NodeActivityStatusReason 是否已赋值
                     * 
                     */
                    bool NodeActivityStatusReasonHasBeenSet() const;

                private:

                    /**
                     * 节点活动所在的实例ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeInstanceId;
                    bool m_nodeInstanceIdHasBeenSet;

                    /**
                     * 节点活动状态。取值范围：<br><li>RUNNING：运行中</li><br><li>SUCCESSFUL：活动成功</li><br><li>FAILED：活动失败</li>	
                     */
                    std::string m_nodeActivityStatus;
                    bool m_nodeActivityStatusHasBeenSet;

                    /**
                     * 节点活动状态码。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeActivityStatusCode;
                    bool m_nodeActivityStatusCodeHasBeenSet;

                    /**
                     * 节点活动状态原因。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeActivityStatusReason;
                    bool m_nodeActivityStatusReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_THPC_V20220401_MODEL_NODEACTIVITY_H_
