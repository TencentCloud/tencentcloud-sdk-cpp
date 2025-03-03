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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_UPDATESTREAMINGESTREQUEST_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_UPDATESTREAMINGESTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * UpdateStreamIngest请求参数结构体
                */
                class UpdateStreamIngestRequest : public AbstractModel
                {
                public:
                    UpdateStreamIngestRequest();
                    ~UpdateStreamIngestRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TRTC的SDKAppId，和任务的房间所对应的SDKAppId相同
                     * @return SdkAppId TRTC的SDKAppId，和任务的房间所对应的SDKAppId相同
                     * 
                     */
                    uint64_t GetSdkAppId() const;

                    /**
                     * 设置TRTC的SDKAppId，和任务的房间所对应的SDKAppId相同
                     * @param _sdkAppId TRTC的SDKAppId，和任务的房间所对应的SDKAppId相同
                     * 
                     */
                    void SetSdkAppId(const uint64_t& _sdkAppId);

                    /**
                     * 判断参数 SdkAppId 是否已赋值
                     * @return SdkAppId 是否已赋值
                     * 
                     */
                    bool SdkAppIdHasBeenSet() const;

                    /**
                     * 获取任务的唯一Id，在启动任务成功后会返回。
                     * @return TaskId 任务的唯一Id，在启动任务成功后会返回。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务的唯一Id，在启动任务成功后会返回。
                     * @param _taskId 任务的唯一Id，在启动任务成功后会返回。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取源流URL。
                     * @return StreamUrl 源流URL。
                     * 
                     */
                    std::string GetStreamUrl() const;

                    /**
                     * 设置源流URL。
                     * @param _streamUrl 源流URL。
                     * 
                     */
                    void SetStreamUrl(const std::string& _streamUrl);

                    /**
                     * 判断参数 StreamUrl 是否已赋值
                     * @return StreamUrl 是否已赋值
                     * 
                     */
                    bool StreamUrlHasBeenSet() const;

                    /**
                     * 获取音量，取值范围[0, 100]，默认100，表示原音量。
                     * @return Volume 音量，取值范围[0, 100]，默认100，表示原音量。
                     * 
                     */
                    uint64_t GetVolume() const;

                    /**
                     * 设置音量，取值范围[0, 100]，默认100，表示原音量。
                     * @param _volume 音量，取值范围[0, 100]，默认100，表示原音量。
                     * 
                     */
                    void SetVolume(const uint64_t& _volume);

                    /**
                     * 判断参数 Volume 是否已赋值
                     * @return Volume 是否已赋值
                     * 
                     */
                    bool VolumeHasBeenSet() const;

                    /**
                     * 获取是否暂停，默认false表示不暂停。暂停期间任务仍在进行中仍会计费，如果要销毁任务请调用停止接口。
                     * @return IsPause 是否暂停，默认false表示不暂停。暂停期间任务仍在进行中仍会计费，如果要销毁任务请调用停止接口。
                     * 
                     */
                    bool GetIsPause() const;

                    /**
                     * 设置是否暂停，默认false表示不暂停。暂停期间任务仍在进行中仍会计费，如果要销毁任务请调用停止接口。
                     * @param _isPause 是否暂停，默认false表示不暂停。暂停期间任务仍在进行中仍会计费，如果要销毁任务请调用停止接口。
                     * 
                     */
                    void SetIsPause(const bool& _isPause);

                    /**
                     * 判断参数 IsPause 是否已赋值
                     * @return IsPause 是否已赋值
                     * 
                     */
                    bool IsPauseHasBeenSet() const;

                private:

                    /**
                     * TRTC的SDKAppId，和任务的房间所对应的SDKAppId相同
                     */
                    uint64_t m_sdkAppId;
                    bool m_sdkAppIdHasBeenSet;

                    /**
                     * 任务的唯一Id，在启动任务成功后会返回。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 源流URL。
                     */
                    std::string m_streamUrl;
                    bool m_streamUrlHasBeenSet;

                    /**
                     * 音量，取值范围[0, 100]，默认100，表示原音量。
                     */
                    uint64_t m_volume;
                    bool m_volumeHasBeenSet;

                    /**
                     * 是否暂停，默认false表示不暂停。暂停期间任务仍在进行中仍会计费，如果要销毁任务请调用停止接口。
                     */
                    bool m_isPause;
                    bool m_isPauseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_UPDATESTREAMINGESTREQUEST_H_
