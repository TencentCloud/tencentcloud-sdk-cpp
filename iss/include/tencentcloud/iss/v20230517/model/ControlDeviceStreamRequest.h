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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLDEVICESTREAMREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLDEVICESTREAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * ControlDeviceStream请求参数结构体
                */
                class ControlDeviceStreamRequest : public AbstractModel
                {
                public:
                    ControlDeviceStreamRequest();
                    ~ControlDeviceStreamRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取通道 ID（从通道查询接口DescribeDeviceChannel中获取）
                     * @return ChannelId 通道 ID（从通道查询接口DescribeDeviceChannel中获取）
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置通道 ID（从通道查询接口DescribeDeviceChannel中获取）
                     * @param _channelId 通道 ID（从通道查询接口DescribeDeviceChannel中获取）
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取流类型（1:主码流；
2:子码流（不可以和 Resolution 同时下发））
                     * @return StreamType 流类型（1:主码流；
2:子码流（不可以和 Resolution 同时下发））
                     * 
                     */
                    std::string GetStreamType() const;

                    /**
                     * 设置流类型（1:主码流；
2:子码流（不可以和 Resolution 同时下发））
                     * @param _streamType 流类型（1:主码流；
2:子码流（不可以和 Resolution 同时下发））
                     * 
                     */
                    void SetStreamType(const std::string& _streamType);

                    /**
                     * 判断参数 StreamType 是否已赋值
                     * @return StreamType 是否已赋值
                     * 
                     */
                    bool StreamTypeHasBeenSet() const;

                    /**
                     * 获取分辨率（1:QCIF；
2:CIF；
3:4CIF；
4:D1；
5:720P；
6:1080P/I；
自定义的19201080等等（需设备支持）（不可以和 StreamType 同时下发））
                     * @return Resolution 分辨率（1:QCIF；
2:CIF；
3:4CIF；
4:D1；
5:720P；
6:1080P/I；
自定义的19201080等等（需设备支持）（不可以和 StreamType 同时下发））
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置分辨率（1:QCIF；
2:CIF；
3:4CIF；
4:D1；
5:720P；
6:1080P/I；
自定义的19201080等等（需设备支持）（不可以和 StreamType 同时下发））
                     * @param _resolution 分辨率（1:QCIF；
2:CIF；
3:4CIF；
4:D1；
5:720P；
6:1080P/I；
自定义的19201080等等（需设备支持）（不可以和 StreamType 同时下发））
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
                     * 获取是否内网
                     * @return IsInternal 是否内网
                     * 
                     */
                    bool GetIsInternal() const;

                    /**
                     * 设置是否内网
                     * @param _isInternal 是否内网
                     * 
                     */
                    void SetIsInternal(const bool& _isInternal);

                    /**
                     * 判断参数 IsInternal 是否已赋值
                     * @return IsInternal 是否已赋值
                     * 
                     */
                    bool IsInternalHasBeenSet() const;

                private:

                    /**
                     * 通道 ID（从通道查询接口DescribeDeviceChannel中获取）
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 流类型（1:主码流；
2:子码流（不可以和 Resolution 同时下发））
                     */
                    std::string m_streamType;
                    bool m_streamTypeHasBeenSet;

                    /**
                     * 分辨率（1:QCIF；
2:CIF；
3:4CIF；
4:D1；
5:720P；
6:1080P/I；
自定义的19201080等等（需设备支持）（不可以和 StreamType 同时下发））
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * 是否内网
                     */
                    bool m_isInternal;
                    bool m_isInternalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLDEVICESTREAMREQUEST_H_
