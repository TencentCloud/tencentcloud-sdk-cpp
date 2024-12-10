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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_OPERATION_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_OPERATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/OperationDetail.h>
#include <tencentcloud/es/v20180416/model/TaskDetail.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * ES集群操作详细信息
                */
                class Operation : public AbstractModel
                {
                public:
                    Operation();
                    ~Operation() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作唯一id
                     * @return Id 操作唯一id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置操作唯一id
                     * @param _id 操作唯一id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取操作开始时间
                     * @return StartTime 操作开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置操作开始时间
                     * @param _startTime 操作开始时间
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
                     * 获取操作类型
                     * @return Type 操作类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置操作类型
                     * @param _type 操作类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取操作详情
                     * @return Detail 操作详情
                     * 
                     */
                    OperationDetail GetDetail() const;

                    /**
                     * 设置操作详情
                     * @param _detail 操作详情
                     * 
                     */
                    void SetDetail(const OperationDetail& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     * 
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取操作结果
                     * @return Result 操作结果
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置操作结果
                     * @param _result 操作结果
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取流程任务信息
                     * @return Tasks 流程任务信息
                     * 
                     */
                    std::vector<TaskDetail> GetTasks() const;

                    /**
                     * 设置流程任务信息
                     * @param _tasks 流程任务信息
                     * 
                     */
                    void SetTasks(const std::vector<TaskDetail>& _tasks);

                    /**
                     * 判断参数 Tasks 是否已赋值
                     * @return Tasks 是否已赋值
                     * 
                     */
                    bool TasksHasBeenSet() const;

                    /**
                     * 获取操作进度
                     * @return Progress 操作进度
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置操作进度
                     * @param _progress 操作进度
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
                     * 获取回滚标记， 0未回滚 ，1回滚中，2已回滚
                     * @return RollbackTag 回滚标记， 0未回滚 ，1回滚中，2已回滚
                     * 
                     */
                    int64_t GetRollbackTag() const;

                    /**
                     * 设置回滚标记， 0未回滚 ，1回滚中，2已回滚
                     * @param _rollbackTag 回滚标记， 0未回滚 ，1回滚中，2已回滚
                     * 
                     */
                    void SetRollbackTag(const int64_t& _rollbackTag);

                    /**
                     * 判断参数 RollbackTag 是否已赋值
                     * @return RollbackTag 是否已赋值
                     * 
                     */
                    bool RollbackTagHasBeenSet() const;

                    /**
                     * 获取操作者Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubAccountUin 操作者Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置操作者Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subAccountUin 操作者Uin
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSubAccountUin(const std::string& _subAccountUin);

                    /**
                     * 判断参数 SubAccountUin 是否已赋值
                     * @return SubAccountUin 是否已赋值
                     * 
                     */
                    bool SubAccountUinHasBeenSet() const;

                private:

                    /**
                     * 操作唯一id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 操作开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 操作类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 操作详情
                     */
                    OperationDetail m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * 操作结果
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 流程任务信息
                     */
                    std::vector<TaskDetail> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * 操作进度
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 回滚标记， 0未回滚 ，1回滚中，2已回滚
                     */
                    int64_t m_rollbackTag;
                    bool m_rollbackTagHasBeenSet;

                    /**
                     * 操作者Uin
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_OPERATION_H_
