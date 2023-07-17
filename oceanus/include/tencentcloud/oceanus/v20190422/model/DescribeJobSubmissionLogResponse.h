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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBSUBMISSIONLOGRESPONSE_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBSUBMISSIONLOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/JobInstanceForSubmissionLog.h>
#include <tencentcloud/oceanus/v20190422/model/LogContent.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * DescribeJobSubmissionLog返回参数结构体
                */
                class DescribeJobSubmissionLogResponse : public AbstractModel
                {
                public:
                    DescribeJobSubmissionLogResponse();
                    ~DescribeJobSubmissionLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取日志搜索的游标，需要搜索更多时透传这个值
                     * @return Cursor 日志搜索的游标，需要搜索更多时透传这个值
                     * 
                     */
                    std::string GetCursor() const;

                    /**
                     * 判断参数 Cursor 是否已赋值
                     * @return Cursor 是否已赋值
                     * 
                     */
                    bool CursorHasBeenSet() const;

                    /**
                     * 获取是否返回了所有的日志记录
                     * @return ListOver 是否返回了所有的日志记录
                     * 
                     */
                    bool GetListOver() const;

                    /**
                     * 判断参数 ListOver 是否已赋值
                     * @return ListOver 是否已赋值
                     * 
                     */
                    bool ListOverHasBeenSet() const;

                    /**
                     * 获取作业启动的requestId
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobRequestId 作业启动的requestId
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetJobRequestId() const;

                    /**
                     * 判断参数 JobRequestId 是否已赋值
                     * @return JobRequestId 是否已赋值
                     * 
                     */
                    bool JobRequestIdHasBeenSet() const;

                    /**
                     * 获取该时间段内符合关键字的所有的作业实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobInstanceList 该时间段内符合关键字的所有的作业实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<JobInstanceForSubmissionLog> GetJobInstanceList() const;

                    /**
                     * 判断参数 JobInstanceList 是否已赋值
                     * @return JobInstanceList 是否已赋值
                     * 
                     */
                    bool JobInstanceListHasBeenSet() const;

                    /**
                     * 获取废弃，请使用LogContentList
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogList 废弃，请使用LogContentList
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetLogList() const;

                    /**
                     * 判断参数 LogList 是否已赋值
                     * @return LogList 是否已赋值
                     * 
                     */
                    bool LogListHasBeenSet() const;

                    /**
                     * 获取日志列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogContentList 日志列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<LogContent> GetLogContentList() const;

                    /**
                     * 判断参数 LogContentList 是否已赋值
                     * @return LogContentList 是否已赋值
                     * 
                     */
                    bool LogContentListHasBeenSet() const;

                private:

                    /**
                     * 日志搜索的游标，需要搜索更多时透传这个值
                     */
                    std::string m_cursor;
                    bool m_cursorHasBeenSet;

                    /**
                     * 是否返回了所有的日志记录
                     */
                    bool m_listOver;
                    bool m_listOverHasBeenSet;

                    /**
                     * 作业启动的requestId
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_jobRequestId;
                    bool m_jobRequestIdHasBeenSet;

                    /**
                     * 该时间段内符合关键字的所有的作业实例列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<JobInstanceForSubmissionLog> m_jobInstanceList;
                    bool m_jobInstanceListHasBeenSet;

                    /**
                     * 废弃，请使用LogContentList
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_logList;
                    bool m_logListHasBeenSet;

                    /**
                     * 日志列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<LogContent> m_logContentList;
                    bool m_logContentListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBSUBMISSIONLOGRESPONSE_H_
