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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEVIDEOLIVESTREAMREQUEST_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEVIDEOLIVESTREAMREQUEST_H_

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
                * DescribeVideoLiveStream请求参数结构体
                */
                class DescribeVideoLiveStreamRequest : public AbstractModel
                {
                public:
                    DescribeVideoLiveStreamRequest();
                    ~DescribeVideoLiveStreamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备的唯一标识

                     * @return WID 设备的唯一标识

                     * 
                     */
                    std::string GetWID() const;

                    /**
                     * 设置设备的唯一标识

                     * @param _wID 设备的唯一标识

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
flv
rtmp
hls
webrtc
raw (视频原始帧)
                     * @return Protocol 枚举如下：
flv
rtmp
hls
webrtc
raw (视频原始帧)
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置枚举如下：
flv
rtmp
hls
webrtc
raw (视频原始帧)
                     * @param _protocol 枚举如下：
flv
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
                     * 获取工作空间Id
                     * @return WorkspaceId 工作空间Id
                     * 
                     */
                    int64_t GetWorkspaceId() const;

                    /**
                     * 设置工作空间Id
                     * @param _workspaceId 工作空间Id
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
                     * 获取主码流传0，子码流传1，默认主码流

                     * @return StreamId 主码流传0，子码流传1，默认主码流

                     * 
                     */
                    int64_t GetStreamId() const;

                    /**
                     * 设置主码流传0，子码流传1，默认主码流

                     * @param _streamId 主码流传0，子码流传1，默认主码流

                     * 
                     */
                    void SetStreamId(const int64_t& _streamId);

                    /**
                     * 判断参数 StreamId 是否已赋值
                     * @return StreamId 是否已赋值
                     * 
                     */
                    bool StreamIdHasBeenSet() const;

                    /**
                     * 获取设备所在环境，公有云私有化项目传0或者不传，混合云项目一般传空间id
                     * @return Env 设备所在环境，公有云私有化项目传0或者不传，混合云项目一般传空间id
                     * 
                     */
                    std::string GetEnv() const;

                    /**
                     * 设置设备所在环境，公有云私有化项目传0或者不传，混合云项目一般传空间id
                     * @param _env 设备所在环境，公有云私有化项目传0或者不传，混合云项目一般传空间id
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
                     * 设备的唯一标识

                     */
                    std::string m_wID;
                    bool m_wIDHasBeenSet;

                    /**
                     * 枚举如下：
flv
rtmp
hls
webrtc
raw (视频原始帧)
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 工作空间Id
                     */
                    int64_t m_workspaceId;
                    bool m_workspaceIdHasBeenSet;

                    /**
                     * 应用token
                     */
                    std::string m_applicationToken;
                    bool m_applicationTokenHasBeenSet;

                    /**
                     * 主码流传0，子码流传1，默认主码流

                     */
                    int64_t m_streamId;
                    bool m_streamIdHasBeenSet;

                    /**
                     * 设备所在环境，公有云私有化项目传0或者不传，混合云项目一般传空间id
                     */
                    std::string m_env;
                    bool m_envHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEVIDEOLIVESTREAMREQUEST_H_
