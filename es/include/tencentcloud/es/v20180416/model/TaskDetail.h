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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_TASKDETAIL_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_TASKDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/SubTaskDetail.h>
#include <tencentcloud/es/v20180416/model/ProcessDetail.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 实例操作记录中的流程任务信息
                */
                class TaskDetail : public AbstractModel
                {
                public:
                    TaskDetail();
                    ~TaskDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务名
                     * @return Name 任务名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置任务名
                     * @param _name 任务名
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
                     * 获取任务进度
                     * @return Progress 任务进度
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置任务进度
                     * @param _progress 任务进度
                     * 
                     */
                    void SetProgress(const double& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取任务完成时间
                     * @return FinishTime 任务完成时间
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置任务完成时间
                     * @param _finishTime 任务完成时间
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取子任务
                     * @return SubTasks 子任务
                     * 
                     */
                    std::vector<SubTaskDetail> GetSubTasks() const;

                    /**
                     * 设置子任务
                     * @param _subTasks 子任务
                     * 
                     */
                    void SetSubTasks(const std::vector<SubTaskDetail>& _subTasks);

                    /**
                     * 判断参数 SubTasks 是否已赋值
                     * @return SubTasks 是否已赋值
                     * 
                     */
                    bool SubTasksHasBeenSet() const;

                    /**
                     * 获取任务花费时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ElapsedTime 任务花费时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetElapsedTime() const;

                    /**
                     * 设置任务花费时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _elapsedTime 任务花费时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetElapsedTime(const int64_t& _elapsedTime);

                    /**
                     * 判断参数 ElapsedTime 是否已赋值
                     * @return ElapsedTime 是否已赋值
                     * 
                     */
                    bool ElapsedTimeHasBeenSet() const;

                    /**
                     * 获取任务进度详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProcessInfo 任务进度详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ProcessDetail GetProcessInfo() const;

                    /**
                     * 设置任务进度详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _processInfo 任务进度详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProcessInfo(const ProcessDetail& _processInfo);

                    /**
                     * 判断参数 ProcessInfo 是否已赋值
                     * @return ProcessInfo 是否已赋值
                     * 
                     */
                    bool ProcessInfoHasBeenSet() const;

                private:

                    /**
                     * 任务名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 任务进度
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 任务完成时间
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * 子任务
                     */
                    std::vector<SubTaskDetail> m_subTasks;
                    bool m_subTasksHasBeenSet;

                    /**
                     * 任务花费时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_elapsedTime;
                    bool m_elapsedTimeHasBeenSet;

                    /**
                     * 任务进度详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ProcessDetail m_processInfo;
                    bool m_processInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_TASKDETAIL_H_
