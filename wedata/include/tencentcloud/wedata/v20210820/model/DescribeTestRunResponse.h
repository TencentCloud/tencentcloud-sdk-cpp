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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETESTRUNRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETESTRUNRESPONSE_H_

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
                * DescribeTestRun返回参数结构体
                */
                class DescribeTestRunResponse : public AbstractModel
                {
                public:
                    DescribeTestRunResponse();
                    ~DescribeTestRunResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务实例Id
                     * @return InstanceKey 任务实例Id
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 判断参数 InstanceKey 是否已赋值
                     * @return InstanceKey 是否已赋值
                     * 
                     */
                    bool InstanceKeyHasBeenSet() const;

                    /**
                     * 获取当前任务状态
                     * @return Status 当前任务状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务是否结束
                     * @return Finished 任务是否结束
                     * 
                     */
                    bool GetFinished() const;

                    /**
                     * 判断参数 Finished 是否已赋值
                     * @return Finished 是否已赋值
                     * 
                     */
                    bool FinishedHasBeenSet() const;

                    /**
                     * 获取日志内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogContent 日志内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogContent() const;

                    /**
                     * 判断参数 LogContent 是否已赋值
                     * @return LogContent 是否已赋值
                     * 
                     */
                    bool LogContentHasBeenSet() const;

                private:

                    /**
                     * 任务实例Id
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * 当前任务状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务是否结束
                     */
                    bool m_finished;
                    bool m_finishedHasBeenSet;

                    /**
                     * 日志内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logContent;
                    bool m_logContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETESTRUNRESPONSE_H_
