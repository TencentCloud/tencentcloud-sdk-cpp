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
                     * 获取<p>操作唯一id</p>
                     * @return Id <p>操作唯一id</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>操作唯一id</p>
                     * @param _id <p>操作唯一id</p>
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
                     * 获取<p>操作开始时间</p>
                     * @return StartTime <p>操作开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>操作开始时间</p>
                     * @param _startTime <p>操作开始时间</p>
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
                     * 获取<p>操作类型</p>
                     * @return Type <p>操作类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>操作类型</p>
                     * @param _type <p>操作类型</p>
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
                     * 获取<p>操作详情</p>
                     * @return Detail <p>操作详情</p>
                     * 
                     */
                    OperationDetail GetDetail() const;

                    /**
                     * 设置<p>操作详情</p>
                     * @param _detail <p>操作详情</p>
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
                     * 获取<p>操作结果</p>
                     * @return Result <p>操作结果</p>
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置<p>操作结果</p>
                     * @param _result <p>操作结果</p>
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
                     * 获取<p>流程任务信息</p>
                     * @return Tasks <p>流程任务信息</p>
                     * 
                     */
                    std::vector<TaskDetail> GetTasks() const;

                    /**
                     * 设置<p>流程任务信息</p>
                     * @param _tasks <p>流程任务信息</p>
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
                     * 获取<p>操作进度</p>
                     * @return Progress <p>操作进度</p>
                     * 
                     */
                    double GetProgress() const;

                    /**
                     * 设置<p>操作进度</p>
                     * @param _progress <p>操作进度</p>
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
                     * 获取<p>回滚标记， 0未回滚 ，1回滚中，2已回滚</p>
                     * @return RollbackTag <p>回滚标记， 0未回滚 ，1回滚中，2已回滚</p>
                     * 
                     */
                    int64_t GetRollbackTag() const;

                    /**
                     * 设置<p>回滚标记， 0未回滚 ，1回滚中，2已回滚</p>
                     * @param _rollbackTag <p>回滚标记， 0未回滚 ，1回滚中，2已回滚</p>
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
                     * 获取<p>操作者Uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SubAccountUin <p>操作者Uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetSubAccountUin() const;

                    /**
                     * 设置<p>操作者Uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _subAccountUin <p>操作者Uin</p>
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

                    /**
                     * 获取<p>自动扩容标识：0-非自动，1-自动</p>
                     * @return AutoScaleTag <p>自动扩容标识：0-非自动，1-自动</p>
                     * 
                     */
                    uint64_t GetAutoScaleTag() const;

                    /**
                     * 设置<p>自动扩容标识：0-非自动，1-自动</p>
                     * @param _autoScaleTag <p>自动扩容标识：0-非自动，1-自动</p>
                     * 
                     */
                    void SetAutoScaleTag(const uint64_t& _autoScaleTag);

                    /**
                     * 判断参数 AutoScaleTag 是否已赋值
                     * @return AutoScaleTag 是否已赋值
                     * 
                     */
                    bool AutoScaleTagHasBeenSet() const;

                    /**
                     * 获取<p>流程异常原因</p>
                     * @return SuspendedReason <p>流程异常原因</p>
                     * 
                     */
                    std::string GetSuspendedReason() const;

                    /**
                     * 设置<p>流程异常原因</p>
                     * @param _suspendedReason <p>流程异常原因</p>
                     * 
                     */
                    void SetSuspendedReason(const std::string& _suspendedReason);

                    /**
                     * 判断参数 SuspendedReason 是否已赋值
                     * @return SuspendedReason 是否已赋值
                     * 
                     */
                    bool SuspendedReasonHasBeenSet() const;

                private:

                    /**
                     * <p>操作唯一id</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>操作开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>操作类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>操作详情</p>
                     */
                    OperationDetail m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * <p>操作结果</p>
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>流程任务信息</p>
                     */
                    std::vector<TaskDetail> m_tasks;
                    bool m_tasksHasBeenSet;

                    /**
                     * <p>操作进度</p>
                     */
                    double m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * <p>回滚标记， 0未回滚 ，1回滚中，2已回滚</p>
                     */
                    int64_t m_rollbackTag;
                    bool m_rollbackTagHasBeenSet;

                    /**
                     * <p>操作者Uin</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_subAccountUin;
                    bool m_subAccountUinHasBeenSet;

                    /**
                     * <p>自动扩容标识：0-非自动，1-自动</p>
                     */
                    uint64_t m_autoScaleTag;
                    bool m_autoScaleTagHasBeenSet;

                    /**
                     * <p>流程异常原因</p>
                     */
                    std::string m_suspendedReason;
                    bool m_suspendedReasonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_OPERATION_H_
