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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_TIMERSTATUS_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_TIMERSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * TimerStatus
                */
                class TimerStatus : public AbstractModel
                {
                public:
                    TimerStatus();
                    ~TimerStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取失败次数
                     * @return FailedCount 失败次数
                     * 
                     */
                    std::string GetFailedCount() const;

                    /**
                     * 设置失败次数
                     * @param _failedCount 失败次数
                     * 
                     */
                    void SetFailedCount(const std::string& _failedCount);

                    /**
                     * 判断参数 FailedCount 是否已赋值
                     * @return FailedCount 是否已赋值
                     * 
                     */
                    bool FailedCountHasBeenSet() const;

                    /**
                     * 获取上次触发时间
                     * @return LastFireTime 上次触发时间
                     * 
                     */
                    std::string GetLastFireTime() const;

                    /**
                     * 设置上次触发时间
                     * @param _lastFireTime 上次触发时间
                     * 
                     */
                    void SetLastFireTime(const std::string& _lastFireTime);

                    /**
                     * 判断参数 LastFireTime 是否已赋值
                     * @return LastFireTime 是否已赋值
                     * 
                     */
                    bool LastFireTimeHasBeenSet() const;

                    /**
                     * 获取最近一次会话ID
                     * @return LastSessionId 最近一次会话ID
                     * 
                     */
                    std::string GetLastSessionId() const;

                    /**
                     * 设置最近一次会话ID
                     * @param _lastSessionId 最近一次会话ID
                     * 
                     */
                    void SetLastSessionId(const std::string& _lastSessionId);

                    /**
                     * 判断参数 LastSessionId 是否已赋值
                     * @return LastSessionId 是否已赋值
                     * 
                     */
                    bool LastSessionIdHasBeenSet() const;

                    /**
                     * 获取下次触发时间
                     * @return NextFireTime 下次触发时间
                     * 
                     */
                    std::string GetNextFireTime() const;

                    /**
                     * 设置下次触发时间
                     * @param _nextFireTime 下次触发时间
                     * 
                     */
                    void SetNextFireTime(const std::string& _nextFireTime);

                    /**
                     * 判断参数 NextFireTime 是否已赋值
                     * @return NextFireTime 是否已赋值
                     * 
                     */
                    bool NextFireTimeHasBeenSet() const;

                    /**
                     * 获取
枚举值:
| uint | 描述 |
| --- | --- |
| 0 |  |
| 1 | 启用 |
| 2 | 暂停 |
| 3 | 一次性任务已完成 |
                     * @return Status 
枚举值:
| uint | 描述 |
| --- | --- |
| 0 |  |
| 1 | 启用 |
| 2 | 暂停 |
| 3 | 一次性任务已完成 |
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置
枚举值:
| uint | 描述 |
| --- | --- |
| 0 |  |
| 1 | 启用 |
| 2 | 暂停 |
| 3 | 一次性任务已完成 |
                     * @param _status 
枚举值:
| uint | 描述 |
| --- | --- |
| 0 |  |
| 1 | 启用 |
| 2 | 暂停 |
| 3 | 一次性任务已完成 |
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取成功次数
                     * @return SuccessCount 成功次数
                     * 
                     */
                    std::string GetSuccessCount() const;

                    /**
                     * 设置成功次数
                     * @param _successCount 成功次数
                     * 
                     */
                    void SetSuccessCount(const std::string& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取未读数量
                     * @return UnreadRunLogCount 未读数量
                     * 
                     */
                    std::string GetUnreadRunLogCount() const;

                    /**
                     * 设置未读数量
                     * @param _unreadRunLogCount 未读数量
                     * 
                     */
                    void SetUnreadRunLogCount(const std::string& _unreadRunLogCount);

                    /**
                     * 判断参数 UnreadRunLogCount 是否已赋值
                     * @return UnreadRunLogCount 是否已赋值
                     * 
                     */
                    bool UnreadRunLogCountHasBeenSet() const;

                private:

                    /**
                     * 失败次数
                     */
                    std::string m_failedCount;
                    bool m_failedCountHasBeenSet;

                    /**
                     * 上次触发时间
                     */
                    std::string m_lastFireTime;
                    bool m_lastFireTimeHasBeenSet;

                    /**
                     * 最近一次会话ID
                     */
                    std::string m_lastSessionId;
                    bool m_lastSessionIdHasBeenSet;

                    /**
                     * 下次触发时间
                     */
                    std::string m_nextFireTime;
                    bool m_nextFireTimeHasBeenSet;

                    /**
                     * 
枚举值:
| uint | 描述 |
| --- | --- |
| 0 |  |
| 1 | 启用 |
| 2 | 暂停 |
| 3 | 一次性任务已完成 |
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 成功次数
                     */
                    std::string m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * 未读数量
                     */
                    std::string m_unreadRunLogCount;
                    bool m_unreadRunLogCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_TIMERSTATUS_H_
