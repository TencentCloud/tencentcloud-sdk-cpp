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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_MODIFYBINDRECORDINGPLANREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_MODIFYBINDRECORDINGPLANREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/ChannelItem.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * ModifyBindRecordingPlan请求参数结构体
                */
                class ModifyBindRecordingPlanRequest : public AbstractModel
                {
                public:
                    ModifyBindRecordingPlanRequest();
                    ~ModifyBindRecordingPlanRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取操作类型： 1-绑定设备 ；2-解绑设备
                     * @return Type 操作类型： 1-绑定设备 ；2-解绑设备
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置操作类型： 1-绑定设备 ；2-解绑设备
                     * @param _type 操作类型： 1-绑定设备 ；2-解绑设备
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取录制计划ID
                     * @return PlanId 录制计划ID
                     * 
                     */
                    std::string GetPlanId() const;

                    /**
                     * 设置录制计划ID
                     * @param _planId 录制计划ID
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
                     * 获取录制通道列表
                     * @return Channels 录制通道列表
                     * 
                     */
                    std::vector<ChannelItem> GetChannels() const;

                    /**
                     * 设置录制通道列表
                     * @param _channels 录制通道列表
                     * 
                     */
                    void SetChannels(const std::vector<ChannelItem>& _channels);

                    /**
                     * 判断参数 Channels 是否已赋值
                     * @return Channels 是否已赋值
                     * 
                     */
                    bool ChannelsHasBeenSet() const;

                private:

                    /**
                     * 操作类型： 1-绑定设备 ；2-解绑设备
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 录制计划ID
                     */
                    std::string m_planId;
                    bool m_planIdHasBeenSet;

                    /**
                     * 录制通道列表
                     */
                    std::vector<ChannelItem> m_channels;
                    bool m_channelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_MODIFYBINDRECORDINGPLANREQUEST_H_
