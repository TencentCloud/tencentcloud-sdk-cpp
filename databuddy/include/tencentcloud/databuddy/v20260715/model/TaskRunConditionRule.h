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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TASKRUNCONDITIONRULE_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TASKRUNCONDITIONRULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 任务运行条件规则
                */
                class TaskRunConditionRule : public AbstractModel
                {
                public:
                    TaskRunConditionRule();
                    ~TaskRunConditionRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>上游任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpstreamTaskId <p>上游任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpstreamTaskId() const;

                    /**
                     * 设置<p>上游任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upstreamTaskId <p>上游任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpstreamTaskId(const std::string& _upstreamTaskId);

                    /**
                     * 判断参数 UpstreamTaskId 是否已赋值
                     * @return UpstreamTaskId 是否已赋值
                     * 
                     */
                    bool UpstreamTaskIdHasBeenSet() const;

                    /**
                     * 获取<p>上游任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpstreamTaskName <p>上游任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUpstreamTaskName() const;

                    /**
                     * 设置<p>上游任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upstreamTaskName <p>上游任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpstreamTaskName(const std::string& _upstreamTaskName);

                    /**
                     * 判断参数 UpstreamTaskName 是否已赋值
                     * @return UpstreamTaskName 是否已赋值
                     * 
                     */
                    bool UpstreamTaskNameHasBeenSet() const;

                    /**
                     * 获取<p>任务可运行条件<br>支持的状态值： - SUCCESS: 成功 - FAILED: 失败 - UPSTREAM_FAILED: 上游失败 - EXCLUDED: 排除运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllowedStates <p>任务可运行条件<br>支持的状态值： - SUCCESS: 成功 - FAILED: 失败 - UPSTREAM_FAILED: 上游失败 - EXCLUDED: 排除运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAllowedStates() const;

                    /**
                     * 设置<p>任务可运行条件<br>支持的状态值： - SUCCESS: 成功 - FAILED: 失败 - UPSTREAM_FAILED: 上游失败 - EXCLUDED: 排除运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allowedStates <p>任务可运行条件<br>支持的状态值： - SUCCESS: 成功 - FAILED: 失败 - UPSTREAM_FAILED: 上游失败 - EXCLUDED: 排除运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAllowedStates(const std::vector<std::string>& _allowedStates);

                    /**
                     * 判断参数 AllowedStates 是否已赋值
                     * @return AllowedStates 是否已赋值
                     * 
                     */
                    bool AllowedStatesHasBeenSet() const;

                private:

                    /**
                     * <p>上游任务ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_upstreamTaskId;
                    bool m_upstreamTaskIdHasBeenSet;

                    /**
                     * <p>上游任务名称</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_upstreamTaskName;
                    bool m_upstreamTaskNameHasBeenSet;

                    /**
                     * <p>任务可运行条件<br>支持的状态值： - SUCCESS: 成功 - FAILED: 失败 - UPSTREAM_FAILED: 上游失败 - EXCLUDED: 排除运行</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_allowedStates;
                    bool m_allowedStatesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_TASKRUNCONDITIONRULE_H_
