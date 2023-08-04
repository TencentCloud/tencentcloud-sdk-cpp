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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLDEVICEPTZREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLDEVICEPTZREQUEST_H_

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
                * ControlDevicePTZ请求参数结构体
                */
                class ControlDevicePTZRequest : public AbstractModel
                {
                public:
                    ControlDevicePTZRequest();
                    ~ControlDevicePTZRequest() = default;
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
                     * 获取命令类型（上:up,下:down,左:left,右:right
上左:leftup,上右:rightup,下左:leftdown,下右:rightdown
放大:zoomin,缩小:zoomout
聚焦远:focusfar,聚焦近:focusnear
光圈放大:irisin,光圈缩小:irisout）
                     * @return Type 命令类型（上:up,下:down,左:left,右:right
上左:leftup,上右:rightup,下左:leftdown,下右:rightdown
放大:zoomin,缩小:zoomout
聚焦远:focusfar,聚焦近:focusnear
光圈放大:irisin,光圈缩小:irisout）
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置命令类型（上:up,下:down,左:left,右:right
上左:leftup,上右:rightup,下左:leftdown,下右:rightdown
放大:zoomin,缩小:zoomout
聚焦远:focusfar,聚焦近:focusnear
光圈放大:irisin,光圈缩小:irisout）
                     * @param _type 命令类型（上:up,下:down,左:left,右:right
上左:leftup,上右:rightup,下左:leftdown,下右:rightdown
放大:zoomin,缩小:zoomout
聚焦远:focusfar,聚焦近:focusnear
光圈放大:irisin,光圈缩小:irisout）
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取命令描述（速度值范围1-8）
                     * @return Speed 命令描述（速度值范围1-8）
                     * 
                     */
                    int64_t GetSpeed() const;

                    /**
                     * 设置命令描述（速度值范围1-8）
                     * @param _speed 命令描述（速度值范围1-8）
                     * 
                     */
                    void SetSpeed(const int64_t& _speed);

                    /**
                     * 判断参数 Speed 是否已赋值
                     * @return Speed 是否已赋值
                     * 
                     */
                    bool SpeedHasBeenSet() const;

                private:

                    /**
                     * 通道 ID（从通道查询接口DescribeDeviceChannel中获取）
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 命令类型（上:up,下:down,左:left,右:right
上左:leftup,上右:rightup,下左:leftdown,下右:rightdown
放大:zoomin,缩小:zoomout
聚焦远:focusfar,聚焦近:focusnear
光圈放大:irisin,光圈缩小:irisout）
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 命令描述（速度值范围1-8）
                     */
                    int64_t m_speed;
                    bool m_speedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLDEVICEPTZREQUEST_H_
