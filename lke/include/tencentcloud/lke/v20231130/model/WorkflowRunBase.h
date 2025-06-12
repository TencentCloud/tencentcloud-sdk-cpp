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

#ifndef TENCENTCLOUD_LKE_V20231130_MODEL_WORKFLOWRUNBASE_H_
#define TENCENTCLOUD_LKE_V20231130_MODEL_WORKFLOWRUNBASE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lke
    {
        namespace V20231130
        {
            namespace Model
            {
                /**
                * 工作流运行实例的基本信息
                */
                class WorkflowRunBase : public AbstractModel
                {
                public:
                    WorkflowRunBase();
                    ~WorkflowRunBase() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取运行环境。0: 测试环境； 1: 正式环境
                     * @return RunEnv 运行环境。0: 测试环境； 1: 正式环境
                     * 
                     */
                    uint64_t GetRunEnv() const;

                    /**
                     * 设置运行环境。0: 测试环境； 1: 正式环境
                     * @param _runEnv 运行环境。0: 测试环境； 1: 正式环境
                     * 
                     */
                    void SetRunEnv(const uint64_t& _runEnv);

                    /**
                     * 判断参数 RunEnv 是否已赋值
                     * @return RunEnv 是否已赋值
                     * 
                     */
                    bool RunEnvHasBeenSet() const;

                    /**
                     * 获取应用ID
                     * @return AppBizId 应用ID
                     * 
                     */
                    std::string GetAppBizId() const;

                    /**
                     * 设置应用ID
                     * @param _appBizId 应用ID
                     * 
                     */
                    void SetAppBizId(const std::string& _appBizId);

                    /**
                     * 判断参数 AppBizId 是否已赋值
                     * @return AppBizId 是否已赋值
                     * 
                     */
                    bool AppBizIdHasBeenSet() const;

                    /**
                     * 获取工作流运行实例的ID
                     * @return WorkflowRunId 工作流运行实例的ID
                     * 
                     */
                    std::string GetWorkflowRunId() const;

                    /**
                     * 设置工作流运行实例的ID
                     * @param _workflowRunId 工作流运行实例的ID
                     * 
                     */
                    void SetWorkflowRunId(const std::string& _workflowRunId);

                    /**
                     * 判断参数 WorkflowRunId 是否已赋值
                     * @return WorkflowRunId 是否已赋值
                     * 
                     */
                    bool WorkflowRunIdHasBeenSet() const;

                    /**
                     * 获取所属工作流ID
                     * @return WorkflowId 所属工作流ID
                     * 
                     */
                    std::string GetWorkflowId() const;

                    /**
                     * 设置所属工作流ID
                     * @param _workflowId 所属工作流ID
                     * 
                     */
                    void SetWorkflowId(const std::string& _workflowId);

                    /**
                     * 判断参数 WorkflowId 是否已赋值
                     * @return WorkflowId 是否已赋值
                     * 
                     */
                    bool WorkflowIdHasBeenSet() const;

                    /**
                     * 获取名称
                     * @return Name 名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置名称
                     * @param _name 名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取运行状态。0: 排队中；1: 运行中；2: 运行成功；3: 运行失败； 4: 已取消
                     * @return State 运行状态。0: 排队中；1: 运行中；2: 运行成功；3: 运行失败； 4: 已取消
                     * 
                     */
                    uint64_t GetState() const;

                    /**
                     * 设置运行状态。0: 排队中；1: 运行中；2: 运行成功；3: 运行失败； 4: 已取消
                     * @param _state 运行状态。0: 排队中；1: 运行中；2: 运行成功；3: 运行失败； 4: 已取消
                     * 
                     */
                    void SetState(const uint64_t& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取错误信息
                     * @return FailMessage 错误信息
                     * 
                     */
                    std::string GetFailMessage() const;

                    /**
                     * 设置错误信息
                     * @param _failMessage 错误信息
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
                     * 获取消耗的token总数
                     * @return TotalTokens 消耗的token总数
                     * 
                     */
                    uint64_t GetTotalTokens() const;

                    /**
                     * 设置消耗的token总数
                     * @param _totalTokens 消耗的token总数
                     * 
                     */
                    void SetTotalTokens(const uint64_t& _totalTokens);

                    /**
                     * 判断参数 TotalTokens 是否已赋值
                     * @return TotalTokens 是否已赋值
                     * 
                     */
                    bool TotalTokensHasBeenSet() const;

                    /**
                     * 获取创建时间（毫秒时间戳）
                     * @return CreateTime 创建时间（毫秒时间戳）
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间（毫秒时间戳）
                     * @param _createTime 创建时间（毫秒时间戳）
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取开始时间（毫秒时间戳）
                     * @return StartTime 开始时间（毫秒时间戳）
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间（毫秒时间戳）
                     * @param _startTime 开始时间（毫秒时间戳）
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间（毫秒时间戳）
                     * @return EndTime 结束时间（毫秒时间戳）
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间（毫秒时间戳）
                     * @param _endTime 结束时间（毫秒时间戳）
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 运行环境。0: 测试环境； 1: 正式环境
                     */
                    uint64_t m_runEnv;
                    bool m_runEnvHasBeenSet;

                    /**
                     * 应用ID
                     */
                    std::string m_appBizId;
                    bool m_appBizIdHasBeenSet;

                    /**
                     * 工作流运行实例的ID
                     */
                    std::string m_workflowRunId;
                    bool m_workflowRunIdHasBeenSet;

                    /**
                     * 所属工作流ID
                     */
                    std::string m_workflowId;
                    bool m_workflowIdHasBeenSet;

                    /**
                     * 名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 运行状态。0: 排队中；1: 运行中；2: 运行成功；3: 运行失败； 4: 已取消
                     */
                    uint64_t m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 错误信息
                     */
                    std::string m_failMessage;
                    bool m_failMessageHasBeenSet;

                    /**
                     * 消耗的token总数
                     */
                    uint64_t m_totalTokens;
                    bool m_totalTokensHasBeenSet;

                    /**
                     * 创建时间（毫秒时间戳）
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 开始时间（毫秒时间戳）
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间（毫秒时间戳）
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LKE_V20231130_MODEL_WORKFLOWRUNBASE_H_
