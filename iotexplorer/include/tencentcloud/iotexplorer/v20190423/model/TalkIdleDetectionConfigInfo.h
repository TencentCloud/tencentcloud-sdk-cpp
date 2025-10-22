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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKIDLEDETECTIONCONFIGINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKIDLEDETECTIONCONFIGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/IdleResponseInfo.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 空闲检测信息。
                */
                class TalkIdleDetectionConfigInfo : public AbstractModel
                {
                public:
                    TalkIdleDetectionConfigInfo();
                    ~TalkIdleDetectionConfigInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否启用
                     * @return Enabled 是否启用
                     * 
                     */
                    bool GetEnabled() const;

                    /**
                     * 设置是否启用
                     * @param _enabled 是否启用
                     * 
                     */
                    void SetEnabled(const bool& _enabled);

                    /**
                     * 判断参数 Enabled 是否已赋值
                     * @return Enabled 是否已赋值
                     * 
                     */
                    bool EnabledHasBeenSet() const;

                    /**
                     * 获取用户沉默多少秒后触发空闲回调
                     * @return TimeoutSeconds 用户沉默多少秒后触发空闲回调
                     * 
                     */
                    double GetTimeoutSeconds() const;

                    /**
                     * 设置用户沉默多少秒后触发空闲回调
                     * @param _timeoutSeconds 用户沉默多少秒后触发空闲回调
                     * 
                     */
                    void SetTimeoutSeconds(const double& _timeoutSeconds);

                    /**
                     * 判断参数 TimeoutSeconds 是否已赋值
                     * @return TimeoutSeconds 是否已赋值
                     * 
                     */
                    bool TimeoutSecondsHasBeenSet() const;

                    /**
                     * 获取最大重试次数（1-3）
                     * @return MaxRetries 最大重试次数（1-3）
                     * 
                     */
                    int64_t GetMaxRetries() const;

                    /**
                     * 设置最大重试次数（1-3）
                     * @param _maxRetries 最大重试次数（1-3）
                     * 
                     */
                    void SetMaxRetries(const int64_t& _maxRetries);

                    /**
                     * 判断参数 MaxRetries 是否已赋值
                     * @return MaxRetries 是否已赋值
                     * 
                     */
                    bool MaxRetriesHasBeenSet() const;

                    /**
                     * 获取空闲响应
                     * @return IdleResponses 空闲响应
                     * 
                     */
                    std::vector<IdleResponseInfo> GetIdleResponses() const;

                    /**
                     * 设置空闲响应
                     * @param _idleResponses 空闲响应
                     * 
                     */
                    void SetIdleResponses(const std::vector<IdleResponseInfo>& _idleResponses);

                    /**
                     * 判断参数 IdleResponses 是否已赋值
                     * @return IdleResponses 是否已赋值
                     * 
                     */
                    bool IdleResponsesHasBeenSet() const;

                private:

                    /**
                     * 是否启用
                     */
                    bool m_enabled;
                    bool m_enabledHasBeenSet;

                    /**
                     * 用户沉默多少秒后触发空闲回调
                     */
                    double m_timeoutSeconds;
                    bool m_timeoutSecondsHasBeenSet;

                    /**
                     * 最大重试次数（1-3）
                     */
                    int64_t m_maxRetries;
                    bool m_maxRetriesHasBeenSet;

                    /**
                     * 空闲响应
                     */
                    std::vector<IdleResponseInfo> m_idleResponses;
                    bool m_idleResponsesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TALKIDLEDETECTIONCONFIGINFO_H_
