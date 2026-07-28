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
                     * 获取<p>登录会话超时，10分钟，20分钟，30分钟，默认20分钟</p>
                     * @return TimeOut <p>登录会话超时，10分钟，20分钟，30分钟，默认20分钟</p>
                     * 
                     */
                    uint64_t GetTimeOut() const;

                    /**
                     * 设置<p>登录会话超时，10分钟，20分钟，30分钟，默认20分钟</p>
                     * @param _timeOut <p>登录会话超时，10分钟，20分钟，30分钟，默认20分钟</p>
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
                     * 获取<p>连续密码错误次数，超过锁定账号，3-5</p>
                     * @return LockThreshold <p>连续密码错误次数，超过锁定账号，3-5</p>
                     * 
                     */
                    uint64_t GetLockThreshold() const;

                    /**
                     * 设置<p>连续密码错误次数，超过锁定账号，3-5</p>
                     * @param _lockThreshold <p>连续密码错误次数，超过锁定账号，3-5</p>
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
                     * 获取<p>账号锁定时长，10分钟，20分钟，30分钟</p>
                     * @return LockTime <p>账号锁定时长，10分钟，20分钟，30分钟</p>
                     * 
                     */
                    uint64_t GetLockTime() const;

                    /**
                     * 设置<p>账号锁定时长，10分钟，20分钟，30分钟</p>
                     * @param _lockTime <p>账号锁定时长，10分钟，20分钟，30分钟</p>
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
                     * 获取<p>用户多少天不活跃，账号自动锁定</p>
                     * @return InactiveUserLock <p>用户多少天不活跃，账号自动锁定</p>
                     * 
                     */
                    uint64_t GetInactiveUserLock() const;

                    /**
                     * 设置<p>用户多少天不活跃，账号自动锁定</p>
                     * @param _inactiveUserLock <p>用户多少天不活跃，账号自动锁定</p>
                     * 
                     */
                    void SetInactiveUserLock(const uint64_t& _inactiveUserLock);

                    /**
                     * 判断参数 InactiveUserLock 是否已赋值
                     * @return InactiveUserLock 是否已赋值
                     * 
                     */
                    bool InactiveUserLockHasBeenSet() const;

                    /**
                     * 获取<p>运维账号单点登录开关：0-关闭，1-开启</p>
                     * @return EnableSingleLogin <p>运维账号单点登录开关：0-关闭，1-开启</p>
                     * 
                     */
                    uint64_t GetEnableSingleLogin() const;

                    /**
                     * 设置<p>运维账号单点登录开关：0-关闭，1-开启</p>
                     * @param _enableSingleLogin <p>运维账号单点登录开关：0-关闭，1-开启</p>
                     * 
                     */
                    void SetEnableSingleLogin(const uint64_t& _enableSingleLogin);

                    /**
                     * 判断参数 EnableSingleLogin 是否已赋值
                     * @return EnableSingleLogin 是否已赋值
                     * 
                     */
                    bool EnableSingleLoginHasBeenSet() const;

                private:

                    /**
                     * <p>登录会话超时，10分钟，20分钟，30分钟，默认20分钟</p>
                     */
                    uint64_t m_timeOut;
                    bool m_timeOutHasBeenSet;

                    /**
                     * <p>连续密码错误次数，超过锁定账号，3-5</p>
                     */
                    uint64_t m_lockThreshold;
                    bool m_lockThresholdHasBeenSet;

                    /**
                     * <p>账号锁定时长，10分钟，20分钟，30分钟</p>
                     */
                    uint64_t m_lockTime;
                    bool m_lockTimeHasBeenSet;

                    /**
                     * <p>用户多少天不活跃，账号自动锁定</p>
                     */
                    uint64_t m_inactiveUserLock;
                    bool m_inactiveUserLockHasBeenSet;

                    /**
                     * <p>运维账号单点登录开关：0-关闭，1-开启</p>
                     */
                    uint64_t m_enableSingleLogin;
                    bool m_enableSingleLoginHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_LOGINSETTING_H_
