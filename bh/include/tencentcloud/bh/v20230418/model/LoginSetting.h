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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_LOGINSETTING_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_LOGINSETTING_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 登录安全设置
                */
                class LoginSetting : public AbstractModel
                {
                public:
                    LoginSetting();
                    ~LoginSetting() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取登录会话超时，10分钟，20分钟，30分钟，默认20分钟
                     * @return TimeOut 登录会话超时，10分钟，20分钟，30分钟，默认20分钟
                     * 
                     */
                    uint64_t GetTimeOut() const;

                    /**
                     * 设置登录会话超时，10分钟，20分钟，30分钟，默认20分钟
                     * @param _timeOut 登录会话超时，10分钟，20分钟，30分钟，默认20分钟
                     * 
                     */
                    void SetTimeOut(const uint64_t& _timeOut);

                    /**
                     * 判断参数 TimeOut 是否已赋值
                     * @return TimeOut 是否已赋值
                     * 
                     */
                    bool TimeOutHasBeenSet() const;

                    /**
                     * 获取连续密码错误次数，超过锁定账号，3-5
                     * @return LockThreshold 连续密码错误次数，超过锁定账号，3-5
                     * 
                     */
                    uint64_t GetLockThreshold() const;

                    /**
                     * 设置连续密码错误次数，超过锁定账号，3-5
                     * @param _lockThreshold 连续密码错误次数，超过锁定账号，3-5
                     * 
                     */
                    void SetLockThreshold(const uint64_t& _lockThreshold);

                    /**
                     * 判断参数 LockThreshold 是否已赋值
                     * @return LockThreshold 是否已赋值
                     * 
                     */
                    bool LockThresholdHasBeenSet() const;

                    /**
                     * 获取账号锁定时长，10分钟，20分钟，30分钟
                     * @return LockTime 账号锁定时长，10分钟，20分钟，30分钟
                     * 
                     */
                    uint64_t GetLockTime() const;

                    /**
                     * 设置账号锁定时长，10分钟，20分钟，30分钟
                     * @param _lockTime 账号锁定时长，10分钟，20分钟，30分钟
                     * 
                     */
                    void SetLockTime(const uint64_t& _lockTime);

                    /**
                     * 判断参数 LockTime 是否已赋值
                     * @return LockTime 是否已赋值
                     * 
                     */
                    bool LockTimeHasBeenSet() const;

                    /**
                     * 获取用户多少天不活跃，账号自动锁定
                     * @return InactiveUserLock 用户多少天不活跃，账号自动锁定
                     * 
                     */
                    uint64_t GetInactiveUserLock() const;

                    /**
                     * 设置用户多少天不活跃，账号自动锁定
                     * @param _inactiveUserLock 用户多少天不活跃，账号自动锁定
                     * 
                     */
                    void SetInactiveUserLock(const uint64_t& _inactiveUserLock);

                    /**
                     * 判断参数 InactiveUserLock 是否已赋值
                     * @return InactiveUserLock 是否已赋值
                     * 
                     */
                    bool InactiveUserLockHasBeenSet() const;

                private:

                    /**
                     * 登录会话超时，10分钟，20分钟，30分钟，默认20分钟
                     */
                    uint64_t m_timeOut;
                    bool m_timeOutHasBeenSet;

                    /**
                     * 连续密码错误次数，超过锁定账号，3-5
                     */
                    uint64_t m_lockThreshold;
                    bool m_lockThresholdHasBeenSet;

                    /**
                     * 账号锁定时长，10分钟，20分钟，30分钟
                     */
                    uint64_t m_lockTime;
                    bool m_lockTimeHasBeenSet;

                    /**
                     * 用户多少天不活跃，账号自动锁定
                     */
                    uint64_t m_inactiveUserLock;
                    bool m_inactiveUserLockHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_LOGINSETTING_H_
