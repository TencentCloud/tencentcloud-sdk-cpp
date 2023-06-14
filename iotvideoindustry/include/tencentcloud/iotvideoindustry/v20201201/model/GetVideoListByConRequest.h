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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_GETVIDEOLISTBYCONREQUEST_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_GETVIDEOLISTBYCONREQUEST_H_

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
                * GetVideoListByCon请求参数结构体
                */
                class GetVideoListByConRequest : public AbstractModel
                {
                public:
                    GetVideoListByConRequest();
                    ~GetVideoListByConRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取设备唯一标识
                     * @return DeviceId 设备唯一标识
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备唯一标识
                     * @param _deviceId 设备唯一标识
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
                     * 获取偏移量
                     * @return Offset 偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量
                     * @param _offset 偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取限制量
                     * @return Limit 限制量
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置限制量
                     * @param _limit 限制量
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取通道唯一标识，对于NVR设备，多通道IPC设备，设备编码与通道编码不一致的IPC设备，此字段为必填
                     * @return ChannelId 通道唯一标识，对于NVR设备，多通道IPC设备，设备编码与通道编码不一致的IPC设备，此字段为必填
                     * 
                     */
                    std::string GetChannelId() const;

                    /**
                     * 设置通道唯一标识，对于NVR设备，多通道IPC设备，设备编码与通道编码不一致的IPC设备，此字段为必填
                     * @param _channelId 通道唯一标识，对于NVR设备，多通道IPC设备，设备编码与通道编码不一致的IPC设备，此字段为必填
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
                     * 获取0：查询指定日期的录像；1：查询最近一天的录像；默认0
                     * @return LatestDay 0：查询指定日期的录像；1：查询最近一天的录像；默认0
                     * 
                     */
                    int64_t GetLatestDay() const;

                    /**
                     * 设置0：查询指定日期的录像；1：查询最近一天的录像；默认0
                     * @param _latestDay 0：查询指定日期的录像；1：查询最近一天的录像；默认0
                     * 
                     */
                    void SetLatestDay(const int64_t& _latestDay);

                    /**
                     * 判断参数 LatestDay 是否已赋值
                     * @return LatestDay 是否已赋值
                     * 
                     */
                    bool LatestDayHasBeenSet() const;

                    /**
                     * 获取指定某天。取值【YYYY-MM-DD】
为空时默认查询最近一天的记录
                     * @return Date 指定某天。取值【YYYY-MM-DD】
为空时默认查询最近一天的记录
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置指定某天。取值【YYYY-MM-DD】
为空时默认查询最近一天的记录
                     * @param _date 指定某天。取值【YYYY-MM-DD】
为空时默认查询最近一天的记录
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取1: 云端录制 2: 本地录制
                     * @return Type 1: 云端录制 2: 本地录制
                     * 
                     */
                    int64_t GetType() const;

                    /**
                     * 设置1: 云端录制 2: 本地录制
                     * @param _type 1: 云端录制 2: 本地录制
                     * 
                     */
                    void SetType(const int64_t& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 设备唯一标识
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 通道唯一标识，对于NVR设备，多通道IPC设备，设备编码与通道编码不一致的IPC设备，此字段为必填
                     */
                    std::string m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 0：查询指定日期的录像；1：查询最近一天的录像；默认0
                     */
                    int64_t m_latestDay;
                    bool m_latestDayHasBeenSet;

                    /**
                     * 指定某天。取值【YYYY-MM-DD】
为空时默认查询最近一天的记录
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 1: 云端录制 2: 本地录制
                     */
                    int64_t m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_GETVIDEOLISTBYCONREQUEST_H_
