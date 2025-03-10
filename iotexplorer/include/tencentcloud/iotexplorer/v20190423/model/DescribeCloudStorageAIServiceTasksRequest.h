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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBECLOUDSTORAGEAISERVICETASKSREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBECLOUDSTORAGEAISERVICETASKSREQUEST_H_

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
                * DescribeCloudStorageAIServiceTasks请求参数结构体
                */
                class DescribeCloudStorageAIServiceTasksRequest : public AbstractModel
                {
                public:
                    DescribeCloudStorageAIServiceTasksRequest();
                    ~DescribeCloudStorageAIServiceTasksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品 ID
                     * @return ProductId 产品 ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品 ID
                     * @param _productId 产品 ID
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
                     * 获取设备名称
                     * @return DeviceName 设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名称
                     * @param _deviceName 设备名称
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
                     * 获取云存 AI 服务类型。可选值：
- `RealtimeObjectDetect`：目标检测
- `Highlight`：视频浓缩
- `VideoToText`：视频语义理解
                     * @return ServiceType 云存 AI 服务类型。可选值：
- `RealtimeObjectDetect`：目标检测
- `Highlight`：视频浓缩
- `VideoToText`：视频语义理解
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置云存 AI 服务类型。可选值：
- `RealtimeObjectDetect`：目标检测
- `Highlight`：视频浓缩
- `VideoToText`：视频语义理解
                     * @param _serviceType 云存 AI 服务类型。可选值：
- `RealtimeObjectDetect`：目标检测
- `Highlight`：视频浓缩
- `VideoToText`：视频语义理解
                     * 
                     */
                    void SetServiceType(const std::string& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取分页拉取数量
                     * @return Limit 分页拉取数量
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页拉取数量
                     * @param _limit 分页拉取数量
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
                     * 获取分页拉取偏移
                     * @return Offset 分页拉取偏移
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页拉取偏移
                     * @param _offset 分页拉取偏移
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
                     * 获取任务状态。可选值：
- （不传）：查询全部状态的任务
- `1`：失败
- `2`：成功但结果为空
- `3`：成功且结果非空
- `4`：执行中
                     * @return Status 任务状态。可选值：
- （不传）：查询全部状态的任务
- `1`：失败
- `2`：成功但结果为空
- `3`：成功且结果非空
- `4`：执行中
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置任务状态。可选值：
- （不传）：查询全部状态的任务
- `1`：失败
- `2`：成功但结果为空
- `3`：成功且结果非空
- `4`：执行中
                     * @param _status 任务状态。可选值：
- （不传）：查询全部状态的任务
- `1`：失败
- `2`：成功但结果为空
- `3`：成功且结果非空
- `4`：执行中
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取用户 ID
                     * @return UserId 用户 ID
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置用户 ID
                     * @param _userId 用户 ID
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
                     * 获取通道 ID
                     * @return ChannelId 通道 ID
                     * 
                     */
                    uint64_t GetChannelId() const;

                    /**
                     * 设置通道 ID
                     * @param _channelId 通道 ID
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
                     * 获取设备名称列表。

当需要同时查询多台设备的任务列表时传入，优先级高于参数 `DeviceName`
                     * @return DeviceNames 设备名称列表。

当需要同时查询多台设备的任务列表时传入，优先级高于参数 `DeviceName`
                     * 
                     */
                    std::vector<std::string> GetDeviceNames() const;

                    /**
                     * 设置设备名称列表。

当需要同时查询多台设备的任务列表时传入，优先级高于参数 `DeviceName`
                     * @param _deviceNames 设备名称列表。

当需要同时查询多台设备的任务列表时传入，优先级高于参数 `DeviceName`
                     * 
                     */
                    void SetDeviceNames(const std::vector<std::string>& _deviceNames);

                    /**
                     * 判断参数 DeviceNames 是否已赋值
                     * @return DeviceNames 是否已赋值
                     * 
                     */
                    bool DeviceNamesHasBeenSet() const;

                    /**
                     * 获取查询任务时间范围的起始时间（秒级 UNIX 时间戳）
                     * @return StartTime 查询任务时间范围的起始时间（秒级 UNIX 时间戳）
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置查询任务时间范围的起始时间（秒级 UNIX 时间戳）
                     * @param _startTime 查询任务时间范围的起始时间（秒级 UNIX 时间戳）
                     * 
                     */
                    void SetStartTime(const int64_t& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取查询任务时间范围的结束时间（秒级 UNIX 时间戳）
                     * @return EndTime 查询任务时间范围的结束时间（秒级 UNIX 时间戳）
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置查询任务时间范围的结束时间（秒级 UNIX 时间戳）
                     * @param _endTime 查询任务时间范围的结束时间（秒级 UNIX 时间戳）
                     * 
                     */
                    void SetEndTime(const int64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取下载 URL 的过期时间。

若传入该参数，则响应中将包含所有文件的下载 URL
                     * @return FileURLExpireTime 下载 URL 的过期时间。

若传入该参数，则响应中将包含所有文件的下载 URL
                     * 
                     */
                    int64_t GetFileURLExpireTime() const;

                    /**
                     * 设置下载 URL 的过期时间。

若传入该参数，则响应中将包含所有文件的下载 URL
                     * @param _fileURLExpireTime 下载 URL 的过期时间。

若传入该参数，则响应中将包含所有文件的下载 URL
                     * 
                     */
                    void SetFileURLExpireTime(const int64_t& _fileURLExpireTime);

                    /**
                     * 判断参数 FileURLExpireTime 是否已赋值
                     * @return FileURLExpireTime 是否已赋值
                     * 
                     */
                    bool FileURLExpireTimeHasBeenSet() const;

                private:

                    /**
                     * 产品 ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 云存 AI 服务类型。可选值：
- `RealtimeObjectDetect`：目标检测
- `Highlight`：视频浓缩
- `VideoToText`：视频语义理解
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 分页拉取数量
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页拉取偏移
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 任务状态。可选值：
- （不传）：查询全部状态的任务
- `1`：失败
- `2`：成功但结果为空
- `3`：成功且结果非空
- `4`：执行中
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 用户 ID
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 通道 ID
                     */
                    uint64_t m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 设备名称列表。

当需要同时查询多台设备的任务列表时传入，优先级高于参数 `DeviceName`
                     */
                    std::vector<std::string> m_deviceNames;
                    bool m_deviceNamesHasBeenSet;

                    /**
                     * 查询任务时间范围的起始时间（秒级 UNIX 时间戳）
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询任务时间范围的结束时间（秒级 UNIX 时间戳）
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 下载 URL 的过期时间。

若传入该参数，则响应中将包含所有文件的下载 URL
                     */
                    int64_t m_fileURLExpireTime;
                    bool m_fileURLExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBECLOUDSTORAGEAISERVICETASKSREQUEST_H_
