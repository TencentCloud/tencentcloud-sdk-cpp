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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LIVESCHEDULETASK_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LIVESCHEDULETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/LiveActivityResult.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 直播编排任务信息
                */
                class LiveScheduleTask : public AbstractModel
                {
                public:
                    LiveScheduleTask();
                    ~LiveScheduleTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取直播编排任务 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TaskId 直播编排任务 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置直播编排任务 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _taskId 直播编排任务 ID。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取任务流状态，取值：
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 任务流状态，取值：
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置任务流状态，取值：
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 任务流状态，取值：
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取源异常时返回非0错误码，返回0 时请使用各个具体任务的 ErrCode。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ErrCode 源异常时返回非0错误码，返回0 时请使用各个具体任务的 ErrCode。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetErrCode() const;

                    /**
                     * 设置源异常时返回非0错误码，返回0 时请使用各个具体任务的 ErrCode。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errCode 源异常时返回非0错误码，返回0 时请使用各个具体任务的 ErrCode。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrCode(const int64_t& _errCode);

                    /**
                     * 判断参数 ErrCode 是否已赋值
                     * @return ErrCode 是否已赋值
                     * 
                     */
                    bool ErrCodeHasBeenSet() const;

                    /**
                     * 获取源异常时返回对应异常Message，否则请使用各个具体任务的 Message。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Message 源异常时返回对应异常Message，否则请使用各个具体任务的 Message。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetMessage() const;

                    /**
                     * 设置源异常时返回对应异常Message，否则请使用各个具体任务的 Message。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _message 源异常时返回对应异常Message，否则请使用各个具体任务的 Message。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMessage(const std::string& _message);

                    /**
                     * 判断参数 Message 是否已赋值
                     * @return Message 是否已赋值
                     * 
                     */
                    bool MessageHasBeenSet() const;

                    /**
                     * 获取直播流 URL。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Url 直播流 URL。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置直播流 URL。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _url 直播流 URL。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取直播编排任务输出。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LiveActivityResultSet 直播编排任务输出。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LiveActivityResult> GetLiveActivityResultSet() const;

                    /**
                     * 设置直播编排任务输出。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _liveActivityResultSet 直播编排任务输出。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLiveActivityResultSet(const std::vector<LiveActivityResult>& _liveActivityResultSet);

                    /**
                     * 判断参数 LiveActivityResultSet 是否已赋值
                     * @return LiveActivityResultSet 是否已赋值
                     * 
                     */
                    bool LiveActivityResultSetHasBeenSet() const;

                private:

                    /**
                     * 直播编排任务 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 任务流状态，取值：
<li>PROCESSING：处理中；</li>
<li>FINISH：已完成。</li>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 源异常时返回非0错误码，返回0 时请使用各个具体任务的 ErrCode。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_errCode;
                    bool m_errCodeHasBeenSet;

                    /**
                     * 源异常时返回对应异常Message，否则请使用各个具体任务的 Message。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_message;
                    bool m_messageHasBeenSet;

                    /**
                     * 直播流 URL。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 直播编排任务输出。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LiveActivityResult> m_liveActivityResultSet;
                    bool m_liveActivityResultSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LIVESCHEDULETASK_H_
