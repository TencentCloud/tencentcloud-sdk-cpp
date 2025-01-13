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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_ALERTRECORDSTATUS_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_ALERTRECORDSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * 告警历史项的状态
                */
                class AlertRecordStatus : public AbstractModel
                {
                public:
                    AlertRecordStatus();
                    ~AlertRecordStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取停止压测任务成功与否
                     * @return AbortJob 停止压测任务成功与否
                     * 
                     */
                    uint64_t GetAbortJob() const;

                    /**
                     * 设置停止压测任务成功与否
                     * @param _abortJob 停止压测任务成功与否
                     * 
                     */
                    void SetAbortJob(const uint64_t& _abortJob);

                    /**
                     * 判断参数 AbortJob 是否已赋值
                     * @return AbortJob 是否已赋值
                     * 
                     */
                    bool AbortJobHasBeenSet() const;

                    /**
                     * 获取发送告警通知成功与否
                     * @return SendNotice 发送告警通知成功与否
                     * 
                     */
                    uint64_t GetSendNotice() const;

                    /**
                     * 设置发送告警通知成功与否
                     * @param _sendNotice 发送告警通知成功与否
                     * 
                     */
                    void SetSendNotice(const uint64_t& _sendNotice);

                    /**
                     * 判断参数 SendNotice 是否已赋值
                     * @return SendNotice 是否已赋值
                     * 
                     */
                    bool SendNoticeHasBeenSet() const;

                private:

                    /**
                     * 停止压测任务成功与否
                     */
                    uint64_t m_abortJob;
                    bool m_abortJobHasBeenSet;

                    /**
                     * 发送告警通知成功与否
                     */
                    uint64_t m_sendNotice;
                    bool m_sendNoticeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_ALERTRECORDSTATUS_H_
