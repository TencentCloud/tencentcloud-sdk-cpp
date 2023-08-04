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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDEVICEPRESETREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDEVICEPRESETREQUEST_H_

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
                * DescribeDevicePreset请求参数结构体
                */
                class DescribeDevicePresetRequest : public AbstractModel
                {
                public:
                    DescribeDevicePresetRequest();
                    ~DescribeDevicePresetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取通道ID（从通道查询接口DescribeDeviceChannel中获取）
                     * @return ChannelId 通道ID（从通道查询接口DescribeDeviceChannel中获取）
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置通道ID（从通道查询接口DescribeDeviceChannel中获取）
                     * @param _channelId 通道ID（从通道查询接口DescribeDeviceChannel中获取）
                     * 
                     */
                    void SetChannelId(const std::string& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                private:

                    /**
                     * 通道ID（从通道查询接口DescribeDeviceChannel中获取）
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_DESCRIBEDEVICEPRESETREQUEST_H_
