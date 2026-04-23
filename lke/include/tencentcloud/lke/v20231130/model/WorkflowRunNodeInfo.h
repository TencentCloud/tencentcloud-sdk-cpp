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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_WORKFLOWRUNNODEINFO_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_WORKFLOWRUNNODEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lke/v20231130/model/StatisticInfo.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 工作流运行节点信息
                */
                class WorkflowRunNodeInfo : public AbstractModel
                {
                public:
                    WorkflowRunNodeInfo();
                    ~WorkflowRunNodeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>节点ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeId <p>节点ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeId() const;

                    /**
                     * 设置<p>节点ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeId <p>节点ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeId(const std::string& _nodeId);

                    /**
                     * 判断参数 NodeId 是否已赋值
                     * @return NodeId 是否已赋值
                     * 
                     */
                    bool NodeIdHasBeenSet() const;

                    /**
                     * 获取<p>节点类型</p><p>枚举值：</p><ul><li>0： 未指定</li><li>1： 开始节点</li><li>2： 参数提取节点</li><li>3： 大模型节点</li><li>4： 知识问答节点</li><li>5： 知识检索节点</li><li>6： 标签提取节点</li><li>7： 代码执行节点</li><li>8： 工具节点</li><li>9： 逻辑判断节点</li><li>10： 消息节点</li><li>11： 选项卡节点</li><li>12： 循环节点</li><li>13： 意图识别节点</li><li>14： 工作流节点</li><li>15： 插件节点</li><li>16： 结束节点</li><li>17： 变量聚合节点</li><li>18： 批处理节点</li><li>19： 消息队列节点</li><li>20： 数据库节点</li><li>21： 变量赋值节点</li><li>22： 变量转换节点</li><li>23： Agent节点</li><li>24： 注释节点</li><li>25： 文件收集节点</li><li>26： 文本收集节点</li><li>27： Widget 节点</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeType <p>节点类型</p><p>枚举值：</p><ul><li>0： 未指定</li><li>1： 开始节点</li><li>2： 参数提取节点</li><li>3： 大模型节点</li><li>4： 知识问答节点</li><li>5： 知识检索节点</li><li>6： 标签提取节点</li><li>7： 代码执行节点</li><li>8： 工具节点</li><li>9： 逻辑判断节点</li><li>10： 消息节点</li><li>11： 选项卡节点</li><li>12： 循环节点</li><li>13： 意图识别节点</li><li>14： 工作流节点</li><li>15： 插件节点</li><li>16： 结束节点</li><li>17： 变量聚合节点</li><li>18： 批处理节点</li><li>19： 消息队列节点</li><li>20： 数据库节点</li><li>21： 变量赋值节点</li><li>22： 变量转换节点</li><li>23： Agent节点</li><li>24： 注释节点</li><li>25： 文件收集节点</li><li>26： 文本收集节点</li><li>27： Widget 节点</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetNodeType() const;

                    /**
                     * 设置<p>节点类型</p><p>枚举值：</p><ul><li>0： 未指定</li><li>1： 开始节点</li><li>2： 参数提取节点</li><li>3： 大模型节点</li><li>4： 知识问答节点</li><li>5： 知识检索节点</li><li>6： 标签提取节点</li><li>7： 代码执行节点</li><li>8： 工具节点</li><li>9： 逻辑判断节点</li><li>10： 消息节点</li><li>11： 选项卡节点</li><li>12： 循环节点</li><li>13： 意图识别节点</li><li>14： 工作流节点</li><li>15： 插件节点</li><li>16： 结束节点</li><li>17： 变量聚合节点</li><li>18： 批处理节点</li><li>19： 消息队列节点</li><li>20： 数据库节点</li><li>21： 变量赋值节点</li><li>22： 变量转换节点</li><li>23： Agent节点</li><li>24： 注释节点</li><li>25： 文件收集节点</li><li>26： 文本收集节点</li><li>27： Widget 节点</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeType <p>节点类型</p><p>枚举值：</p><ul><li>0： 未指定</li><li>1： 开始节点</li><li>2： 参数提取节点</li><li>3： 大模型节点</li><li>4： 知识问答节点</li><li>5： 知识检索节点</li><li>6： 标签提取节点</li><li>7： 代码执行节点</li><li>8： 工具节点</li><li>9： 逻辑判断节点</li><li>10： 消息节点</li><li>11： 选项卡节点</li><li>12： 循环节点</li><li>13： 意图识别节点</li><li>14： 工作流节点</li><li>15： 插件节点</li><li>16： 结束节点</li><li>17： 变量聚合节点</li><li>18： 批处理节点</li><li>19： 消息队列节点</li><li>20： 数据库节点</li><li>21： 变量赋值节点</li><li>22： 变量转换节点</li><li>23： Agent节点</li><li>24： 注释节点</li><li>25： 文件收集节点</li><li>26： 文本收集节点</li><li>27： Widget 节点</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeType(const uint64_t& _nodeType);

                    /**
                     * 判断参数 NodeType 是否已赋值
                     * @return NodeType 是否已赋值
                     * 
                     */
                    bool NodeTypeHasBeenSet() const;

                    /**
                     * 获取<p>节点名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NodeName <p>节点名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetNodeName() const;

                    /**
                     * 设置<p>节点名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nodeName <p>节点名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNodeName(const std::string& _nodeName);

                    /**
                     * 判断参数 NodeName 是否已赋值
                     * @return NodeName 是否已赋值
                     * 
                     */
                    bool NodeNameHasBeenSet() const;

                    /**
                     * 获取<p>状态</p><p>枚举值：</p><ul><li>0： 初始状态</li><li>1： 运行中</li><li>2： 运行成功</li><li>3： 运行失败</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status <p>状态</p><p>枚举值：</p><ul><li>0： 初始状态</li><li>1： 运行中</li><li>2： 运行成功</li><li>3： 运行失败</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置<p>状态</p><p>枚举值：</p><ul><li>0： 初始状态</li><li>1： 运行中</li><li>2： 运行成功</li><li>3： 运行失败</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status <p>状态</p><p>枚举值：</p><ul><li>0： 初始状态</li><li>1： 运行中</li><li>2： 运行成功</li><li>3： 运行失败</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>输入</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Input <p>输入</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInput() const;

                    /**
                     * 设置<p>输入</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _input <p>输入</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInput(const std::string& _input);

                    /**
                     * 判断参数 Input 是否已赋值
                     * @return Input 是否已赋值
                     * 
                     */
                    bool InputHasBeenSet() const;

                    /**
                     * 获取<p>输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Output <p>输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutput() const;

                    /**
                     * 设置<p>输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _output <p>输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutput(const std::string& _output);

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                    /**
                     * 获取<p>任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskOutput <p>任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskOutput() const;

                    /**
                     * 设置<p>任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskOutput <p>任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTaskOutput(const std::string& _taskOutput);

                    /**
                     * 判断参数 TaskOutput 是否已赋值
                     * @return TaskOutput 是否已赋值
                     * 
                     */
                    bool TaskOutputHasBeenSet() const;

                    /**
                     * 获取<p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailMessage <p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFailMessage() const;

                    /**
                     * 设置<p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failMessage <p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailMessage(const std::string& _failMessage);

                    /**
                     * 判断参数 FailMessage 是否已赋值
                     * @return FailMessage 是否已赋值
                     * 
                     */
                    bool FailMessageHasBeenSet() const;

                    /**
                     * 获取<p>花费时长，单位为毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CostMilliSeconds <p>花费时长，单位为毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetCostMilliSeconds() const;

                    /**
                     * 设置<p>花费时长，单位为毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _costMilliSeconds <p>花费时长，单位为毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCostMilliSeconds(const uint64_t& _costMilliSeconds);

                    /**
                     * 判断参数 CostMilliSeconds 是否已赋值
                     * @return CostMilliSeconds 是否已赋值
                     * 
                     */
                    bool CostMilliSecondsHasBeenSet() const;

                    /**
                     * 获取<p>大模型输出信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatisticInfos <p>大模型输出信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<StatisticInfo> GetStatisticInfos() const;

                    /**
                     * 设置<p>大模型输出信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statisticInfos <p>大模型输出信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatisticInfos(const std::vector<StatisticInfo>& _statisticInfos);

                    /**
                     * 判断参数 StatisticInfos 是否已赋值
                     * @return StatisticInfos 是否已赋值
                     * 
                     */
                    bool StatisticInfosHasBeenSet() const;

                    /**
                     * 获取<p>错误代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailCode <p>错误代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFailCode() const;

                    /**
                     * 设置<p>错误代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failCode <p>错误代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailCode(const std::string& _failCode);

                    /**
                     * 判断参数 FailCode 是否已赋值
                     * @return FailCode 是否已赋值
                     * 
                     */
                    bool FailCodeHasBeenSet() const;

                private:

                    /**
                     * <p>节点ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeId;
                    bool m_nodeIdHasBeenSet;

                    /**
                     * <p>节点类型</p><p>枚举值：</p><ul><li>0： 未指定</li><li>1： 开始节点</li><li>2： 参数提取节点</li><li>3： 大模型节点</li><li>4： 知识问答节点</li><li>5： 知识检索节点</li><li>6： 标签提取节点</li><li>7： 代码执行节点</li><li>8： 工具节点</li><li>9： 逻辑判断节点</li><li>10： 消息节点</li><li>11： 选项卡节点</li><li>12： 循环节点</li><li>13： 意图识别节点</li><li>14： 工作流节点</li><li>15： 插件节点</li><li>16： 结束节点</li><li>17： 变量聚合节点</li><li>18： 批处理节点</li><li>19： 消息队列节点</li><li>20： 数据库节点</li><li>21： 变量赋值节点</li><li>22： 变量转换节点</li><li>23： Agent节点</li><li>24： 注释节点</li><li>25： 文件收集节点</li><li>26： 文本收集节点</li><li>27： Widget 节点</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_nodeType;
                    bool m_nodeTypeHasBeenSet;

                    /**
                     * <p>节点名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_nodeName;
                    bool m_nodeNameHasBeenSet;

                    /**
                     * <p>状态</p><p>枚举值：</p><ul><li>0： 初始状态</li><li>1： 运行中</li><li>2： 运行成功</li><li>3： 运行失败</li></ul>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>输入</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_input;
                    bool m_inputHasBeenSet;

                    /**
                     * <p>输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                    /**
                     * <p>任务输出</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskOutput;
                    bool m_taskOutputHasBeenSet;

                    /**
                     * <p>错误信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failMessage;
                    bool m_failMessageHasBeenSet;

                    /**
                     * <p>花费时长，单位为毫秒</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_costMilliSeconds;
                    bool m_costMilliSecondsHasBeenSet;

                    /**
                     * <p>大模型输出信息</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<StatisticInfo> m_statisticInfos;
                    bool m_statisticInfosHasBeenSet;

                    /**
                     * <p>错误代码</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failCode;
                    bool m_failCodeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_WORKFLOWRUNNODEINFO_H_
