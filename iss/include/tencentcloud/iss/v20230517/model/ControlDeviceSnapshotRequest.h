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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLDEVICESNAPSHOTREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLDEVICESNAPSHOTREQUEST_H_

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
                * ControlDeviceSnapshot请求参数结构体
                */
                class ControlDeviceSnapshotRequest : public AbstractModel
                {
                public:
                    ControlDeviceSnapshotRequest();
                    ~ControlDeviceSnapshotRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取通道ID
                     * @return ChannelId 通道ID
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置通道ID
                     * @param _channelId 通道ID
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
                     * 获取连拍张数，可选值范围1～10
                     * @return SnapNum 连拍张数，可选值范围1～10
                     * 
                     */
                    int64_t GetSnapNum() const;

                    /**
                     * 设置连拍张数，可选值范围1～10
                     * @param _snapNum 连拍张数，可选值范围1～10
                     * 
                     */
                    void SetSnapNum(const int64_t& _snapNum);

                    /**
                     * 判断参数 SnapNum 是否已赋值
                     * @return SnapNum 是否已赋值
                     * 
                     */
                    bool SnapNumHasBeenSet() const;

                    /**
                     * 获取抓拍间隔时间，可选值范围1～1800
                     * @return Interval 抓拍间隔时间，可选值范围1～1800
                     * 
                     */
                    int64_t GetInterval() const;

                    /**
                     * 设置抓拍间隔时间，可选值范围1～1800
                     * @param _interval 抓拍间隔时间，可选值范围1～1800
                     * 
                     */
                    void SetInterval(const int64_t& _interval);

                    /**
                     * 判断参数 Interval 是否已赋值
                     * @return Interval 是否已赋值
                     * 
                     */
                    bool IntervalHasBeenSet() const;

                    /**
                     * 获取图片存储时间，默认 7 天，仅支持（7, 15, 30, 60, 90, 180, 365）天
                     * @return Expire 图片存储时间，默认 7 天，仅支持（7, 15, 30, 60, 90, 180, 365）天
                     * 
                     */
                    int64_t GetExpire() const;

                    /**
                     * 设置图片存储时间，默认 7 天，仅支持（7, 15, 30, 60, 90, 180, 365）天
                     * @param _expire 图片存储时间，默认 7 天，仅支持（7, 15, 30, 60, 90, 180, 365）天
                     * 
                     */
                    void SetExpire(const int64_t& _expire);

                    /**
                     * 判断参数 Expire 是否已赋值
                     * @return Expire 是否已赋值
                     * 
                     */
                    bool ExpireHasBeenSet() const;

                private:

                    /**
                     * 通道ID
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 连拍张数，可选值范围1～10
                     */
                    int64_t m_snapNum;
                    bool m_snapNumHasBeenSet;

                    /**
                     * 抓拍间隔时间，可选值范围1～1800
                     */
                    int64_t m_interval;
                    bool m_intervalHasBeenSet;

                    /**
                     * 图片存储时间，默认 7 天，仅支持（7, 15, 30, 60, 90, 180, 365）天
                     */
                    int64_t m_expire;
                    bool m_expireHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_CONTROLDEVICESNAPSHOTREQUEST_H_
