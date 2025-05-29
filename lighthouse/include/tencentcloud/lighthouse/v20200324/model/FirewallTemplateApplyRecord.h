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

#ifndef TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_FIREWALLTEMPLATEAPPLYRECORD_H_
#define TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_FIREWALLTEMPLATEAPPLYRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/lighthouse/v20200324/model/FirewallTemplateRule.h>
#include <tencentcloud/lighthouse/v20200324/model/FirewallTemplateApplyRecordDetail.h>


namespace TencentCloud
{
    namespace Lighthouse
    {
        namespace V20200324
        {
            namespace Model
            {
                /**
                * 防火墙模板应用记录。
                */
                class FirewallTemplateApplyRecord : public AbstractModel
                {
                public:
                    FirewallTemplateApplyRecord();
                    ~FirewallTemplateApplyRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务ID。
                     * @return TaskId 任务ID。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务ID。
                     * @param _taskId 任务ID。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取应用模板的时间。
                     * @return ApplyTime 应用模板的时间。
                     * 
                     */
                    std::string GetApplyTime() const;

                    /**
                     * 设置应用模板的时间。
                     * @param _applyTime 应用模板的时间。
                     * 
                     */
                    void SetApplyTime(const std::string& _applyTime);

                    /**
                     * 判断参数 ApplyTime 是否已赋值
                     * @return ApplyTime 是否已赋值
                     * 
                     */
                    bool ApplyTimeHasBeenSet() const;

                    /**
                     * 获取模板规则列表。
                     * @return TemplateRuleSet 模板规则列表。
                     * 
                     */
                    std::vector<FirewallTemplateRule> GetTemplateRuleSet() const;

                    /**
                     * 设置模板规则列表。
                     * @param _templateRuleSet 模板规则列表。
                     * 
                     */
                    void SetTemplateRuleSet(const std::vector<FirewallTemplateRule>& _templateRuleSet);

                    /**
                     * 判断参数 TemplateRuleSet 是否已赋值
                     * @return TemplateRuleSet 是否已赋值
                     * 
                     */
                    bool TemplateRuleSetHasBeenSet() const;

                    /**
                     * 获取应用模板的执行状态。

- SUCCESS：成功
- RUNNING：运行中
- FAILED：失败
                     * @return ApplyState 应用模板的执行状态。

- SUCCESS：成功
- RUNNING：运行中
- FAILED：失败
                     * 
                     */
                    std::string GetApplyState() const;

                    /**
                     * 设置应用模板的执行状态。

- SUCCESS：成功
- RUNNING：运行中
- FAILED：失败
                     * @param _applyState 应用模板的执行状态。

- SUCCESS：成功
- RUNNING：运行中
- FAILED：失败
                     * 
                     */
                    void SetApplyState(const std::string& _applyState);

                    /**
                     * 判断参数 ApplyState 是否已赋值
                     * @return ApplyState 是否已赋值
                     * 
                     */
                    bool ApplyStateHasBeenSet() const;

                    /**
                     * 获取应用成功的实例数量。
                     * @return SuccessCount 应用成功的实例数量。
                     * 
                     */
                    int64_t GetSuccessCount() const;

                    /**
                     * 设置应用成功的实例数量。
                     * @param _successCount 应用成功的实例数量。
                     * 
                     */
                    void SetSuccessCount(const int64_t& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取应用失败的实例数量。
                     * @return FailedCount 应用失败的实例数量。
                     * 
                     */
                    int64_t GetFailedCount() const;

                    /**
                     * 设置应用失败的实例数量。
                     * @param _failedCount 应用失败的实例数量。
                     * 
                     */
                    void SetFailedCount(const int64_t& _failedCount);

                    /**
                     * 判断参数 FailedCount 是否已赋值
                     * @return FailedCount 是否已赋值
                     * 
                     */
                    bool FailedCountHasBeenSet() const;

                    /**
                     * 获取正在应用中的实例数量。
                     * @return RunningCount 正在应用中的实例数量。
                     * 
                     */
                    int64_t GetRunningCount() const;

                    /**
                     * 设置正在应用中的实例数量。
                     * @param _runningCount 正在应用中的实例数量。
                     * 
                     */
                    void SetRunningCount(const int64_t& _runningCount);

                    /**
                     * 判断参数 RunningCount 是否已赋值
                     * @return RunningCount 是否已赋值
                     * 
                     */
                    bool RunningCountHasBeenSet() const;

                    /**
                     * 获取应用模板的执行细节。
                     * @return ApplyDetailSet 应用模板的执行细节。
                     * 
                     */
                    std::vector<FirewallTemplateApplyRecordDetail> GetApplyDetailSet() const;

                    /**
                     * 设置应用模板的执行细节。
                     * @param _applyDetailSet 应用模板的执行细节。
                     * 
                     */
                    void SetApplyDetailSet(const std::vector<FirewallTemplateApplyRecordDetail>& _applyDetailSet);

                    /**
                     * 判断参数 ApplyDetailSet 是否已赋值
                     * @return ApplyDetailSet 是否已赋值
                     * 
                     */
                    bool ApplyDetailSetHasBeenSet() const;

                private:

                    /**
                     * 任务ID。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 应用模板的时间。
                     */
                    std::string m_applyTime;
                    bool m_applyTimeHasBeenSet;

                    /**
                     * 模板规则列表。
                     */
                    std::vector<FirewallTemplateRule> m_templateRuleSet;
                    bool m_templateRuleSetHasBeenSet;

                    /**
                     * 应用模板的执行状态。

- SUCCESS：成功
- RUNNING：运行中
- FAILED：失败
                     */
                    std::string m_applyState;
                    bool m_applyStateHasBeenSet;

                    /**
                     * 应用成功的实例数量。
                     */
                    int64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * 应用失败的实例数量。
                     */
                    int64_t m_failedCount;
                    bool m_failedCountHasBeenSet;

                    /**
                     * 正在应用中的实例数量。
                     */
                    int64_t m_runningCount;
                    bool m_runningCountHasBeenSet;

                    /**
                     * 应用模板的执行细节。
                     */
                    std::vector<FirewallTemplateApplyRecordDetail> m_applyDetailSet;
                    bool m_applyDetailSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIGHTHOUSE_V20200324_MODEL_FIREWALLTEMPLATEAPPLYRECORD_H_
