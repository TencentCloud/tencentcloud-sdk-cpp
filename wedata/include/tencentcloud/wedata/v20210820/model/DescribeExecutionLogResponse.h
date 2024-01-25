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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEEXECUTIONLOGRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEEXECUTIONLOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
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
                * DescribeExecutionLog返回参数结构体
                */
                class DescribeExecutionLogResponse : public AbstractModel
                {
                public:
                    DescribeExecutionLogResponse();
                    ~DescribeExecutionLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务实例Id
                     * @return InstanceId 任务实例Id
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取日志内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Logs 日志内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetLogs() const;

                    /**
                     * 判断参数 Logs 是否已赋值
                     * @return Logs 是否已赋值
                     * 
                     */
                    bool LogsHasBeenSet() const;

                    /**
                     * 获取任务执行记录Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetailId 任务执行记录Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetDetailId() const;

                    /**
                     * 判断参数 DetailId 是否已赋值
                     * @return DetailId 是否已赋值
                     * 
                     */
                    bool DetailIdHasBeenSet() const;

                    /**
                     * 获取子任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DetailStatus 子任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDetailStatus() const;

                    /**
                     * 判断参数 DetailStatus 是否已赋值
                     * @return DetailStatus 是否已赋值
                     * 
                     */
                    bool DetailStatusHasBeenSet() const;

                private:

                    /**
                     * 任务实例Id
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 日志内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_logs;
                    bool m_logsHasBeenSet;

                    /**
                     * 任务执行记录Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_detailId;
                    bool m_detailIdHasBeenSet;

                    /**
                     * 子任务状态
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_detailStatus;
                    bool m_detailStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBEEXECUTIONLOGRESPONSE_H_
