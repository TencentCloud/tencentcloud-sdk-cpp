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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEVIDEORECORDSTREAMREQUEST_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEVIDEORECORDSTREAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * DescribeVideoRecordStream请求参数结构体
                */
                class DescribeVideoRecordStreamRequest : public AbstractModel
                {
                public:
                    DescribeVideoRecordStreamRequest();
                    ~DescribeVideoRecordStreamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备唯一标识
                     * @return WID 设备唯一标识
                     * 
                     */
                    std::string GetWID() const;

                    /**
                     * 设置设备唯一标识
                     * @param _wID 设备唯一标识
                     * 
                     */
                    void SetWID(const std::string& _wID);

                    /**
                     * 判断参数 WID 是否已赋值
                     * @return WID 是否已赋值
                     * 
                     */
                    bool WIDHasBeenSet() const;

                    /**
                     * 获取枚举如下：
flvsh
rtmp
hls
webrtc
raw (视频原始帧)
                     * @return Protocol 枚举如下：
flvsh
rtmp
hls
webrtc
raw (视频原始帧)
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置枚举如下：
flvsh
rtmp
hls
webrtc
raw (视频原始帧)
                     * @param _protocol 枚举如下：
flvsh
rtmp
hls
webrtc
raw (视频原始帧)
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取开始时间（精确到毫秒）
                     * @return StartTime 开始时间（精确到毫秒）
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置开始时间（精确到毫秒）
                     * @param _startTime 开始时间（精确到毫秒）
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间（精确到毫秒）
                     * @return EndTime 结束时间（精确到毫秒）
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置结束时间（精确到毫秒）
                     * @param _endTime 结束时间（精确到毫秒）
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取倍速 0.5、1、2、4
                     * @return PlayBackRate 倍速 0.5、1、2、4
                     * 
                     */
                    double GetPlayBackRate() const;

                    /**
                     * 设置倍速 0.5、1、2、4
                     * @param _playBackRate 倍速 0.5、1、2、4
                     * 
                     */
                    void SetPlayBackRate(const double& _playBackRate);

                    /**
                     * 判断参数 PlayBackRate 是否已赋值
                     * @return PlayBackRate 是否已赋值
                     * 
                     */
                    bool PlayBackRateHasBeenSet() const;

                    /**
                     * 获取工作空间id
                     * @return WorkspaceId 工作空间id
                     * 
                     */
                    int64_t GetWorkspaceId() const;

                    /**
                     * 设置工作空间id
                     * @param _workspaceId 工作空间id
                     * 
                     */
                    void SetWorkspaceId(const int64_t& _workspaceId);

                    /**
                     * 判断参数 WorkspaceId 是否已赋值
                     * @return WorkspaceId 是否已赋值
                     * 
                     */
                    bool WorkspaceIdHasBeenSet() const;

                    /**
                     * 获取应用token
                     * @return ApplicationToken 应用token
                     * 
                     */
                    std::string GetApplicationToken() const;

                    /**
                     * 设置应用token
                     * @param _applicationToken 应用token
                     * 
                     */
                    void SetApplicationToken(const std::string& _applicationToken);

                    /**
                     * 判断参数 ApplicationToken 是否已赋值
                     * @return ApplicationToken 是否已赋值
                     * 
                     */
                    bool ApplicationTokenHasBeenSet() const;

                    /**
                     * 获取流的唯一标识，播放链接尾缀
                     * @return Stream 流的唯一标识，播放链接尾缀
                     * 
                     */
                    std::string GetStream() const;

                    /**
                     * 设置流的唯一标识，播放链接尾缀
                     * @param _stream 流的唯一标识，播放链接尾缀
                     * 
                     */
                    void SetStream(const std::string& _stream);

                    /**
                     * 判断参数 Stream 是否已赋值
                     * @return Stream 是否已赋值
                     * 
                     */
                    bool StreamHasBeenSet() const;

                    /**
                     * 获取公有云私有化项目传0或者不传；混合云项目一般传空间id
                     * @return Env 公有云私有化项目传0或者不传；混合云项目一般传空间id
                     * 
                     */
                    std::string GetEnv() const;

                    /**
                     * 设置公有云私有化项目传0或者不传；混合云项目一般传空间id
                     * @param _env 公有云私有化项目传0或者不传；混合云项目一般传空间id
                     * 
                     */
                    void SetEnv(const std::string& _env);

                    /**
                     * 判断参数 Env 是否已赋值
                     * @return Env 是否已赋值
                     * 
                     */
                    bool EnvHasBeenSet() const;

                private:

                    /**
                     * 设备唯一标识
                     */
                    std::string m_wID;
                    bool m_wIDHasBeenSet;

                    /**
                     * 枚举如下：
flvsh
rtmp
hls
webrtc
raw (视频原始帧)
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 开始时间（精确到毫秒）
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间（精确到毫秒）
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 倍速 0.5、1、2、4
                     */
                    double m_playBackRate;
                    bool m_playBackRateHasBeenSet;

                    /**
                     * 工作空间id
                     */
                    int64_t m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 应用token
                     */
                    std::string m_applicationToken;
                    bool m_applicationTokenHasBeenSet;

                    /**
                     * 流的唯一标识，播放链接尾缀
                     */
                    std::string m_stream;
                    bool m_streamHasBeenSet;

                    /**
                     * 公有云私有化项目传0或者不传；混合云项目一般传空间id
                     */
                    std::string m_env;
                    bool m_envHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEVIDEORECORDSTREAMREQUEST_H_
