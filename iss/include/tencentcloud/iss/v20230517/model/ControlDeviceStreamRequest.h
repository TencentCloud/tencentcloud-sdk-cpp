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
                     * 获取<p>通道 ID（从通道查询接口DescribeDeviceChannel中获取）</p>
                     * @return ChannelId <p>通道 ID（从通道查询接口DescribeDeviceChannel中获取）</p>
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置<p>通道 ID（从通道查询接口DescribeDeviceChannel中获取）</p>
                     * @param _channelId <p>通道 ID（从通道查询接口DescribeDeviceChannel中获取）</p>
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
                     * 获取<p>流类型（1:主码流；<br>2:子码流（不可以和 Resolution 同时下发））</p>
                     * @return StreamType <p>流类型（1:主码流；<br>2:子码流（不可以和 Resolution 同时下发））</p>
                     * 
                     */
                    std::string GetStreamType() const;

                    /**
                     * 设置<p>流类型（1:主码流；<br>2:子码流（不可以和 Resolution 同时下发））</p>
                     * @param _streamType <p>流类型（1:主码流；<br>2:子码流（不可以和 Resolution 同时下发））</p>
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
                     * 获取<p>分辨率（1:QCIF；<br>2:CIF；<br>3:4CIF；<br>4:D1；<br>5:720P；<br>6:1080P/I；<br>自定义的19201080等等（需设备支持）（不可以和 StreamType 同时下发））</p>
                     * @return Resolution <p>分辨率（1:QCIF；<br>2:CIF；<br>3:4CIF；<br>4:D1；<br>5:720P；<br>6:1080P/I；<br>自定义的19201080等等（需设备支持）（不可以和 StreamType 同时下发））</p>
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置<p>分辨率（1:QCIF；<br>2:CIF；<br>3:4CIF；<br>4:D1；<br>5:720P；<br>6:1080P/I；<br>自定义的19201080等等（需设备支持）（不可以和 StreamType 同时下发））</p>
                     * @param _resolution <p>分辨率（1:QCIF；<br>2:CIF；<br>3:4CIF；<br>4:D1；<br>5:720P；<br>6:1080P/I；<br>自定义的19201080等等（需设备支持）（不可以和 StreamType 同时下发））</p>
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
                     * 获取<p>是否内网</p>
                     * @return IsInternal <p>是否内网</p>
                     * 
                     */
                    bool GetIsInternal() const;

                    /**
                     * 设置<p>是否内网</p>
                     * @param _isInternal <p>是否内网</p>
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
                     * <p>通道 ID（从通道查询接口DescribeDeviceChannel中获取）</p>
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * <p>流类型（1:主码流；<br>2:子码流（不可以和 Resolution 同时下发））</p>
                     */
                    std::string m_streamType;
                    bool m_streamTypeHasBeenSet;

                    /**
                     * <p>分辨率（1:QCIF；<br>2:CIF；<br>3:4CIF；<br>4:D1；<br>5:720P；<br>6:1080P/I；<br>自定义的19201080等等（需设备支持）（不可以和 StreamType 同时下发））</p>
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * <p>是否内网</p>
                     */
                    bool m_isInternal;
                    bool m_isInternalHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLDEVICESTREAMREQUEST_H_
