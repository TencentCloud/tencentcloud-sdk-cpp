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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETVODCLOUDSTORAGEVIDEOLISTREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETVODCLOUDSTORAGEVIDEOLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * GetVodCloudStorageVideoList请求参数结构体
                */
                class GetVodCloudStorageVideoListRequest : public AbstractModel
                {
                public:
                    GetVodCloudStorageVideoListRequest();
                    ~GetVodCloudStorageVideoListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>产品id</p>
                     * @return ProductId <p>产品id</p>
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置<p>产品id</p>
                     * @param _productId <p>产品id</p>
                     * 
                     */
                    void SetProductId(const std::string& _productId);

                    /**
                     * 判断参数 ProductId 是否已赋值
                     * @return ProductId 是否已赋值
                     * 
                     */
                    bool ProductIdHasBeenSet() const;

                    /**
                     * 获取<p>设备名称</p>
                     * @return DeviceName <p>设备名称</p>
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置<p>设备名称</p>
                     * @param _deviceName <p>设备名称</p>
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                    /**
                     * 获取<p>日期</p><p>参数格式：格式 yyyy-MM-dd</p>
                     * @return Date <p>日期</p><p>参数格式：格式 yyyy-MM-dd</p>
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置<p>日期</p><p>参数格式：格式 yyyy-MM-dd</p>
                     * @param _date <p>日期</p><p>参数格式：格式 yyyy-MM-dd</p>
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
                     * 获取<p>通道id</p>
                     * @return ChannelId <p>通道id</p>
                     * 
                     */
                    uint64_t GetChannelId() const;

                    /**
                     * 设置<p>通道id</p>
                     * @param _channelId <p>通道id</p>
                     * 
                     */
                    void SetChannelId(const uint64_t& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                    /**
                     * 获取<p>开始时间；与 EndTime 必须同时填或同时省略</p><p>单位：秒</p>
                     * @return StartTime <p>开始时间；与 EndTime 必须同时填或同时省略</p><p>单位：秒</p>
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置<p>开始时间；与 EndTime 必须同时填或同时省略</p><p>单位：秒</p>
                     * @param _startTime <p>开始时间；与 EndTime 必须同时填或同时省略</p><p>单位：秒</p>
                     * 
                     */
                    void SetStartTime(const uint64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间</p><p>单位：秒</p>
                     * @return EndTime <p>结束时间</p><p>单位：秒</p>
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置<p>结束时间</p><p>单位：秒</p>
                     * @param _endTime <p>结束时间</p><p>单位：秒</p>
                     * 
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>用户id</p>
                     * @return UserId <p>用户id</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>用户id</p>
                     * @param _userId <p>用户id</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取<p>时区</p>
                     * @return TimeZone <p>时区</p>
                     * 
                     */
                    std::string GetTimeZone() const;

                    /**
                     * 设置<p>时区</p>
                     * @param _timeZone <p>时区</p>
                     * 
                     */
                    void SetTimeZone(const std::string& _timeZone);

                    /**
                     * 判断参数 TimeZone 是否已赋值
                     * @return TimeZone 是否已赋值
                     * 
                     */
                    bool TimeZoneHasBeenSet() const;

                    /**
                     * 获取<p>非加密文件的防盗链 URL 有效期</p><p>单位：秒</p>
                     * @return ExpireSec <p>非加密文件的防盗链 URL 有效期</p><p>单位：秒</p>
                     * 
                     */
                    uint64_t GetExpireSec() const;

                    /**
                     * 设置<p>非加密文件的防盗链 URL 有效期</p><p>单位：秒</p>
                     * @param _expireSec <p>非加密文件的防盗链 URL 有效期</p><p>单位：秒</p>
                     * 
                     */
                    void SetExpireSec(const uint64_t& _expireSec);

                    /**
                     * 判断参数 ExpireSec 是否已赋值
                     * @return ExpireSec 是否已赋值
                     * 
                     */
                    bool ExpireSecHasBeenSet() const;

                    /**
                     * 获取<p>0 Android，1 小程序，2 iOS，3 鸿蒙</p>
                     * @return Platform <p>0 Android，1 小程序，2 iOS，3 鸿蒙</p>
                     * 
                     */
                    uint64_t GetPlatform() const;

                    /**
                     * 设置<p>0 Android，1 小程序，2 iOS，3 鸿蒙</p>
                     * @param _platform <p>0 Android，1 小程序，2 iOS，3 鸿蒙</p>
                     * 
                     */
                    void SetPlatform(const uint64_t& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取<p>分页游标；首页传空，之后原样回填上一页响应的 Context</p>
                     * @return Context <p>分页游标；首页传空，之后原样回填上一页响应的 Context</p>
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 设置<p>分页游标；首页传空，之后原样回填上一页响应的 Context</p>
                     * @param _context <p>分页游标；首页传空，之后原样回填上一页响应的 Context</p>
                     * 
                     */
                    void SetContext(const std::string& _context);

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取<p>每页视频条数；&lt;=0 或不填默认 10，&gt;100 按 100 计</p>
                     * @return Size <p>每页视频条数；&lt;=0 或不填默认 10，&gt;100 按 100 计</p>
                     * 
                     */
                    uint64_t GetSize() const;

                    /**
                     * 设置<p>每页视频条数；&lt;=0 或不填默认 10，&gt;100 按 100 计</p>
                     * @param _size <p>每页视频条数；&lt;=0 或不填默认 10，&gt;100 按 100 计</p>
                     * 
                     */
                    void SetSize(const uint64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                private:

                    /**
                     * <p>产品id</p>
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>设备名称</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>日期</p><p>参数格式：格式 yyyy-MM-dd</p>
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * <p>通道id</p>
                     */
                    uint64_t m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * <p>开始时间；与 EndTime 必须同时填或同时省略</p><p>单位：秒</p>
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间</p><p>单位：秒</p>
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>用户id</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>时区</p>
                     */
                    std::string m_timeZone;
                    bool m_timeZoneHasBeenSet;

                    /**
                     * <p>非加密文件的防盗链 URL 有效期</p><p>单位：秒</p>
                     */
                    uint64_t m_expireSec;
                    bool m_expireSecHasBeenSet;

                    /**
                     * <p>0 Android，1 小程序，2 iOS，3 鸿蒙</p>
                     */
                    uint64_t m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * <p>分页游标；首页传空，之后原样回填上一页响应的 Context</p>
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * <p>每页视频条数；&lt;=0 或不填默认 10，&gt;100 按 100 计</p>
                     */
                    uint64_t m_size;
                    bool m_sizeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETVODCLOUDSTORAGEVIDEOLISTREQUEST_H_
