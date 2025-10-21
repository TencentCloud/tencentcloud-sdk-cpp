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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_STAFFSTATUS_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_STAFFSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 座席状态
                */
                class StaffStatus : public AbstractModel
                {
                public:
                    StaffStatus();
                    ~StaffStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取查询使用的游标，分页场景使用
                     * @return Cursor 查询使用的游标，分页场景使用
                     * 
                     */
                    std::string GetCursor() const;

                    /**
                     * 设置查询使用的游标，分页场景使用
                     * @param _cursor 查询使用的游标，分页场景使用
                     * 
                     */
                    void SetCursor(const std::string& _cursor);

                    /**
                     * 判断参数 Cursor 是否已赋值
                     * @return Cursor 是否已赋值
                     * 
                     */
                    bool CursorHasBeenSet() const;

                    /**
                     * 获取状态时间戳，Unix 秒级时间戳
                     * @return Timestamp 状态时间戳，Unix 秒级时间戳
                     * 
                     */
                    int64_t GetTimestamp() const;

                    /**
                     * 设置状态时间戳，Unix 秒级时间戳
                     * @param _timestamp 状态时间戳，Unix 秒级时间戳
                     * 
                     */
                    void SetTimestamp(const int64_t& _timestamp);

                    /**
                     * 判断参数 Timestamp 是否已赋值
                     * @return Timestamp 是否已赋值
                     * 
                     */
                    bool TimestampHasBeenSet() const;

                    /**
                     * 获取座席状态 free 示闲 | busy 忙碌 | rest 小休 | notReady 示忙 | afterCallWork 话后调整 | offline 离线
                     * @return Status 座席状态 free 示闲 | busy 忙碌 | rest 小休 | notReady 示忙 | afterCallWork 话后调整 | offline 离线
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置座席状态 free 示闲 | busy 忙碌 | rest 小休 | notReady 示忙 | afterCallWork 话后调整 | offline 离线
                     * @param _status 座席状态 free 示闲 | busy 忙碌 | rest 小休 | notReady 示忙 | afterCallWork 话后调整 | offline 离线
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
                     * 获取状态关联的会话 Id
                     * @return SessionId 状态关联的会话 Id
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置状态关联的会话 Id
                     * @param _sessionId 状态关联的会话 Id
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取小休原因
                     * @return Reason 小休原因
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置小休原因
                     * @param _reason 小休原因
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取座席邮箱
                     * @return StaffEmail 座席邮箱
                     * 
                     */
                    std::string GetStaffEmail() const;

                    /**
                     * 设置座席邮箱
                     * @param _staffEmail 座席邮箱
                     * 
                     */
                    void SetStaffEmail(const std::string& _staffEmail);

                    /**
                     * 判断参数 StaffEmail 是否已赋值
                     * @return StaffEmail 是否已赋值
                     * 
                     */
                    bool StaffEmailHasBeenSet() const;

                    /**
                     * 获取座席工号
                     * @return StaffNo 座席工号
                     * 
                     */
                    std::string GetStaffNo() const;

                    /**
                     * 设置座席工号
                     * @param _staffNo 座席工号
                     * 
                     */
                    void SetStaffNo(const std::string& _staffNo);

                    /**
                     * 判断参数 StaffNo 是否已赋值
                     * @return StaffNo 是否已赋值
                     * 
                     */
                    bool StaffNoHasBeenSet() const;

                private:

                    /**
                     * 查询使用的游标，分页场景使用
                     */
                    std::string m_cursor;
                    bool m_cursorHasBeenSet;

                    /**
                     * 状态时间戳，Unix 秒级时间戳
                     */
                    int64_t m_timestamp;
                    bool m_timestampHasBeenSet;

                    /**
                     * 座席状态 free 示闲 | busy 忙碌 | rest 小休 | notReady 示忙 | afterCallWork 话后调整 | offline 离线
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 状态关联的会话 Id
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 小休原因
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 座席邮箱
                     */
                    std::string m_staffEmail;
                    bool m_staffEmailHasBeenSet;

                    /**
                     * 座席工号
                     */
                    std::string m_staffNo;
                    bool m_staffNoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_STAFFSTATUS_H_
