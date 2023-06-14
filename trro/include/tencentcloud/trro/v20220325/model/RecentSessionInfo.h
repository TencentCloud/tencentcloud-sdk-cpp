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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_RECENTSESSIONINFO_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_RECENTSESSIONINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * 最新会话信息
                */
                class RecentSessionInfo : public AbstractModel
                {
                public:
                    RecentSessionInfo();
                    ~RecentSessionInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取会话ID
                     * @return SessionId 会话ID
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置会话ID
                     * @param _sessionId 会话ID
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
                     * 获取远端设备ID
                     * @return RemoteDeviceId 远端设备ID
                     * 
                     */
                    std::string GetRemoteDeviceId() const;

                    /**
                     * 设置远端设备ID
                     * @param _remoteDeviceId 远端设备ID
                     * 
                     */
                    void SetRemoteDeviceId(const std::string& _remoteDeviceId);

                    /**
                     * 判断参数 RemoteDeviceId 是否已赋值
                     * @return RemoteDeviceId 是否已赋值
                     * 
                     */
                    bool RemoteDeviceIdHasBeenSet() const;

                    /**
                     * 获取现场设备ID
                     * @return FieldDeviceId 现场设备ID
                     * 
                     */
                    std::string GetFieldDeviceId() const;

                    /**
                     * 设置现场设备ID
                     * @param _fieldDeviceId 现场设备ID
                     * 
                     */
                    void SetFieldDeviceId(const std::string& _fieldDeviceId);

                    /**
                     * 判断参数 FieldDeviceId 是否已赋值
                     * @return FieldDeviceId 是否已赋值
                     * 
                     */
                    bool FieldDeviceIdHasBeenSet() const;

                    /**
                     * 获取分辨率
                     * @return Resolution 分辨率
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置分辨率
                     * @param _resolution 分辨率
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取会话开始时间
                     * @return StartTime 会话开始时间
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置会话开始时间
                     * @param _startTime 会话开始时间
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取最后更新时间
                     * @return LatestUpdateTime 最后更新时间
                     * 
                     */
                    uint64_t GetLatestUpdateTime() const;

                    /**
                     * 设置最后更新时间
                     * @param _latestUpdateTime 最后更新时间
                     * 
                     */
                    void SetLatestUpdateTime(const uint64_t& _latestUpdateTime);

                    /**
                     * 判断参数 LatestUpdateTime 是否已赋值
                     * @return LatestUpdateTime 是否已赋值
                     * 
                     */
                    bool LatestUpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 会话ID
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * 远端设备ID
                     */
                    std::string m_remoteDeviceId;
                    bool m_remoteDeviceIdHasBeenSet;

                    /**
                     * 现场设备ID
                     */
                    std::string m_fieldDeviceId;
                    bool m_fieldDeviceIdHasBeenSet;

                    /**
                     * 分辨率
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * 会话开始时间
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 最后更新时间
                     */
                    uint64_t m_latestUpdateTime;
                    bool m_latestUpdateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_RECENTSESSIONINFO_H_
