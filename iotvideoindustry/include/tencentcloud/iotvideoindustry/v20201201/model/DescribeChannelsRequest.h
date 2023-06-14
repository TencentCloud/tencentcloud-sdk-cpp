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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBECHANNELSREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBECHANNELSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * DescribeChannels请求参数结构体
                */
                class DescribeChannelsRequest : public AbstractModel
                {
                public:
                    DescribeChannelsRequest();
                    ~DescribeChannelsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备Id
                     * @return DeviceId 设备Id
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备Id
                     * @param _deviceId 设备Id
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取限制，默认0
                     * @return Limit 限制，默认0
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置限制，默认0
                     * @param _limit 限制，默认0
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取偏移量，默认0
                     * @return Offset 偏移量，默认0
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认0
                     * @param _offset 偏移量，默认0
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取通道类型  0: 未知类型 1: 视频通道 2:  音频通道 3: 告警通道
                     * @return ChannelTypes 通道类型  0: 未知类型 1: 视频通道 2:  音频通道 3: 告警通道
                     * 
                     */
                    std::vector<uint64_t> GetChannelTypes() const;

                    /**
                     * 设置通道类型  0: 未知类型 1: 视频通道 2:  音频通道 3: 告警通道
                     * @param _channelTypes 通道类型  0: 未知类型 1: 视频通道 2:  音频通道 3: 告警通道
                     * 
                     */
                    void SetChannelTypes(const std::vector<uint64_t>& _channelTypes);

                    /**
                     * 判断参数 ChannelTypes 是否已赋值
                     * @return ChannelTypes 是否已赋值
                     * 
                     */
                    bool ChannelTypesHasBeenSet() const;

                    /**
                     * 获取录制计划ID， 当为"null"值时未绑定录制计划
                     * @return PlanId 录制计划ID， 当为"null"值时未绑定录制计划
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置录制计划ID， 当为"null"值时未绑定录制计划
                     * @param _planId 录制计划ID， 当为"null"值时未绑定录制计划
                     * 
                     */
                    void SetPlanId(const std::string& _planId);

                    /**
                     * 判断参数 PlanId 是否已赋值
                     * @return PlanId 是否已赋值
                     * 
                     */
                    bool PlanIdHasBeenSet() const;

                    /**
                     * 获取告警联动场景ID， 当为 -1 值时未绑定场景
                     * @return SceneId 告警联动场景ID， 当为 -1 值时未绑定场景
                     * 
                     */
                    int64_t GetSceneId() const;

                    /**
                     * 设置告警联动场景ID， 当为 -1 值时未绑定场景
                     * @param _sceneId 告警联动场景ID， 当为 -1 值时未绑定场景
                     * 
                     */
                    void SetSceneId(const int64_t& _sceneId);

                    /**
                     * 判断参数 SceneId 是否已赋值
                     * @return SceneId 是否已赋值
                     * 
                     */
                    bool SceneIdHasBeenSet() const;

                private:

                    /**
                     * 设备Id
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 限制，默认0
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 偏移量，默认0
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 通道类型  0: 未知类型 1: 视频通道 2:  音频通道 3: 告警通道
                     */
                    std::vector<uint64_t> m_channelTypes;
                    bool m_channelTypesHasBeenSet;

                    /**
                     * 录制计划ID， 当为"null"值时未绑定录制计划
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 告警联动场景ID， 当为 -1 值时未绑定场景
                     */
                    int64_t m_sceneId;
                    bool m_sceneIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_DESCRIBECHANNELSREQUEST_H_
