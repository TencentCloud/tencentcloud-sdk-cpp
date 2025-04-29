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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELIFEDETAILDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELIFEDETAILDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 实例生命周期detail
                */
                class InstanceLifeDetailDto : public AbstractModel
                {
                public:
                    InstanceLifeDetailDto();
                    ~InstanceLifeDetailDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取**实例状态**
- [0] 表示 等待事件
- [12] 表示 等待上游
- [6, 7, 9, 10, 18] 表示 等待运行
- [1, 19, 22] 表示 运行中
- [21] 表示 跳过运行
- [3] 表示 失败重试
- [8, 4, 5, 13] 表示 失败
- [2] 表示 成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @return State **实例状态**
- [0] 表示 等待事件
- [12] 表示 等待上游
- [6, 7, 9, 10, 18] 表示 等待运行
- [1, 19, 22] 表示 运行中
- [21] 表示 跳过运行
- [3] 表示 失败重试
- [8, 4, 5, 13] 表示 失败
- [2] 表示 成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置**实例状态**
- [0] 表示 等待事件
- [12] 表示 等待上游
- [6, 7, 9, 10, 18] 表示 等待运行
- [1, 19, 22] 表示 运行中
- [21] 表示 跳过运行
- [3] 表示 失败重试
- [8, 4, 5, 13] 表示 失败
- [2] 表示 成功
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _state **实例状态**
- [0] 表示 等待事件
- [12] 表示 等待上游
- [6, 7, 9, 10, 18] 表示 等待运行
- [1, 19, 22] 表示 运行中
- [21] 表示 跳过运行
- [3] 表示 失败重试
- [8, 4, 5, 13] 表示 失败
- [2] 表示 成功
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取该状态开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 该状态开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置该状态开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _startTime 该状态开始时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取**实例生命周期阶段状态**

- WAIT_UPSTREAM 表示 等待事件/上游状态
- WAIT_RUN 表示 等待运行状态
- RUNNING 表示 运行中状态
- COMPLETE 表示 终态-完成
- FAILED 表示 终态-失败重试
- EXPIRED 表示 终态-失败
- SKIP_RUNNING 表示 终态-被上游分支节点跳过的分支
- HISTORY 表示 兼容2024-03-30之前的历史实例，之后实例无需关注次枚举类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetailState **实例生命周期阶段状态**

- WAIT_UPSTREAM 表示 等待事件/上游状态
- WAIT_RUN 表示 等待运行状态
- RUNNING 表示 运行中状态
- COMPLETE 表示 终态-完成
- FAILED 表示 终态-失败重试
- EXPIRED 表示 终态-失败
- SKIP_RUNNING 表示 终态-被上游分支节点跳过的分支
- HISTORY 表示 兼容2024-03-30之前的历史实例，之后实例无需关注次枚举类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDetailState() const;

                    /**
                     * 设置**实例生命周期阶段状态**

- WAIT_UPSTREAM 表示 等待事件/上游状态
- WAIT_RUN 表示 等待运行状态
- RUNNING 表示 运行中状态
- COMPLETE 表示 终态-完成
- FAILED 表示 终态-失败重试
- EXPIRED 表示 终态-失败
- SKIP_RUNNING 表示 终态-被上游分支节点跳过的分支
- HISTORY 表示 兼容2024-03-30之前的历史实例，之后实例无需关注次枚举类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _detailState **实例生命周期阶段状态**

- WAIT_UPSTREAM 表示 等待事件/上游状态
- WAIT_RUN 表示 等待运行状态
- RUNNING 表示 运行中状态
- COMPLETE 表示 终态-完成
- FAILED 表示 终态-失败重试
- EXPIRED 表示 终态-失败
- SKIP_RUNNING 表示 终态-被上游分支节点跳过的分支
- HISTORY 表示 兼容2024-03-30之前的历史实例，之后实例无需关注次枚举类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDetailState(const std::string& _detailState);

                    /**
                     * 判断参数 DetailState 是否已赋值
                     * @return DetailState 是否已赋值
                     * 
                     */
                    bool DetailStateHasBeenSet() const;

                    /**
                     * 获取该状态结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 该状态结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置该状态结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _endTime 该状态结束时间
注意：此字段可能返回 null，表示取不到有效值。
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
                     * **实例状态**
- [0] 表示 等待事件
- [12] 表示 等待上游
- [6, 7, 9, 10, 18] 表示 等待运行
- [1, 19, 22] 表示 运行中
- [21] 表示 跳过运行
- [3] 表示 失败重试
- [8, 4, 5, 13] 表示 失败
- [2] 表示 成功
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * 该状态开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * **实例生命周期阶段状态**

- WAIT_UPSTREAM 表示 等待事件/上游状态
- WAIT_RUN 表示 等待运行状态
- RUNNING 表示 运行中状态
- COMPLETE 表示 终态-完成
- FAILED 表示 终态-失败重试
- EXPIRED 表示 终态-失败
- SKIP_RUNNING 表示 终态-被上游分支节点跳过的分支
- HISTORY 表示 兼容2024-03-30之前的历史实例，之后实例无需关注次枚举类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_detailState;
                    bool m_detailStateHasBeenSet;

                    /**
                     * 该状态结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCELIFEDETAILDTO_H_
