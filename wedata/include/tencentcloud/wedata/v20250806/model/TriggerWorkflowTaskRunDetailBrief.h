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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERWORKFLOWTASKRUNDETAILBRIEF_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERWORKFLOWTASKRUNDETAILBRIEF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20250806/model/TriggerWorkflowRunBrief.h>
#include <tencentcloud/wedata/v20250806/model/TriggerTaskRunBrief.h>
#include <tencentcloud/wedata/v20250806/model/BizStateEnumInfoBrief.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 工作流任务运行详情
                */
                class TriggerWorkflowTaskRunDetailBrief : public AbstractModel
                {
                public:
                    TriggerWorkflowTaskRunDetailBrief();
                    ~TriggerWorkflowTaskRunDetailBrief() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取工作流运行信息
                     * @return TriggerWorkflowRun 工作流运行信息
                     * 
                     */
                    TriggerWorkflowRunBrief GetTriggerWorkflowRun() const;

                    /**
                     * 设置工作流运行信息
                     * @param _triggerWorkflowRun 工作流运行信息
                     * 
                     */
                    void SetTriggerWorkflowRun(const TriggerWorkflowRunBrief& _triggerWorkflowRun);

                    /**
                     * 判断参数 TriggerWorkflowRun 是否已赋值
                     * @return TriggerWorkflowRun 是否已赋值
                     * 
                     */
                    bool TriggerWorkflowRunHasBeenSet() const;

                    /**
                     * 获取任务运行信息
                     * @return TriggerTaskRuns 任务运行信息
                     * 
                     */
                    std::vector<TriggerTaskRunBrief> GetTriggerTaskRuns() const;

                    /**
                     * 设置任务运行信息
                     * @param _triggerTaskRuns 任务运行信息
                     * 
                     */
                    void SetTriggerTaskRuns(const std::vector<TriggerTaskRunBrief>& _triggerTaskRuns);

                    /**
                     * 判断参数 TriggerTaskRuns 是否已赋值
                     * @return TriggerTaskRuns 是否已赋值
                     * 
                     */
                    bool TriggerTaskRunsHasBeenSet() const;

                    /**
                     * 获取业务状态枚举信息
                     * @return BizStateEnumInfos 业务状态枚举信息
                     * 
                     */
                    std::vector<BizStateEnumInfoBrief> GetBizStateEnumInfos() const;

                    /**
                     * 设置业务状态枚举信息
                     * @param _bizStateEnumInfos 业务状态枚举信息
                     * 
                     */
                    void SetBizStateEnumInfos(const std::vector<BizStateEnumInfoBrief>& _bizStateEnumInfos);

                    /**
                     * 判断参数 BizStateEnumInfos 是否已赋值
                     * @return BizStateEnumInfos 是否已赋值
                     * 
                     */
                    bool BizStateEnumInfosHasBeenSet() const;

                private:

                    /**
                     * 工作流运行信息
                     */
                    TriggerWorkflowRunBrief m_triggerWorkflowRun;
                    bool m_triggerWorkflowRunHasBeenSet;

                    /**
                     * 任务运行信息
                     */
                    std::vector<TriggerTaskRunBrief> m_triggerTaskRuns;
                    bool m_triggerTaskRunsHasBeenSet;

                    /**
                     * 业务状态枚举信息
                     */
                    std::vector<BizStateEnumInfoBrief> m_bizStateEnumInfos;
                    bool m_bizStateEnumInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_TRIGGERWORKFLOWTASKRUNDETAILBRIEF_H_
