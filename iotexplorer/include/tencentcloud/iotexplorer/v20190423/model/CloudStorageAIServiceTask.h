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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CLOUDSTORAGEAISERVICETASK_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CLOUDSTORAGEAISERVICETASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/CloudStorageAIServiceTaskFileInfo.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 云存 AI 服务任务信息
                */
                class CloudStorageAIServiceTask : public AbstractModel
                {
                public:
                    CloudStorageAIServiceTask();
                    ~CloudStorageAIServiceTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云存 AI 服务任务 ID
                     * @return TaskId 云存 AI 服务任务 ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置云存 AI 服务任务 ID
                     * @param _taskId 云存 AI 服务任务 ID
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

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
                     * 获取云存 AI 服务类型。可能取值：

- `RealtimeObjectDetect`：目标检测
- `Highlight`：视频浓缩
- `VideoToText`：视频语义理解
                     * @return ServiceType 云存 AI 服务类型。可能取值：

- `RealtimeObjectDetect`：目标检测
- `Highlight`：视频浓缩
- `VideoToText`：视频语义理解
                     * 
                     */
                    std::string GetServiceType() const;

                    /**
                     * 设置云存 AI 服务类型。可能取值：

- `RealtimeObjectDetect`：目标检测
- `Highlight`：视频浓缩
- `VideoToText`：视频语义理解
                     * @param _serviceType 云存 AI 服务类型。可能取值：

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
                     * 获取对应云存视频的起始时间（秒级 UNIX 时间戳）
                     * @return StartTime 对应云存视频的起始时间（秒级 UNIX 时间戳）
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置对应云存视频的起始时间（秒级 UNIX 时间戳）
                     * @param _startTime 对应云存视频的起始时间（秒级 UNIX 时间戳）
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
                     * 获取对应云存视频的起始时间（毫秒级 UNIX 时间戳）
                     * @return StartTimeMs 对应云存视频的起始时间（毫秒级 UNIX 时间戳）
                     * 
                     */
                    int64_t GetStartTimeMs() const;

                    /**
                     * 设置对应云存视频的起始时间（毫秒级 UNIX 时间戳）
                     * @param _startTimeMs 对应云存视频的起始时间（毫秒级 UNIX 时间戳）
                     * 
                     */
                    void SetStartTimeMs(const int64_t& _startTimeMs);

                    /**
                     * 判断参数 StartTimeMs 是否已赋值
                     * @return StartTimeMs 是否已赋值
                     * 
                     */
                    bool StartTimeMsHasBeenSet() const;

                    /**
                     * 获取对应云存视频的结束时间（秒级 UNIX 时间戳）
                     * @return EndTime 对应云存视频的结束时间（秒级 UNIX 时间戳）
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置对应云存视频的结束时间（秒级 UNIX 时间戳）
                     * @param _endTime 对应云存视频的结束时间（秒级 UNIX 时间戳）
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
                     * 获取对应云存视频的结束时间（毫秒级 UNIX 时间戳）
                     * @return EndTimeMs 对应云存视频的结束时间（毫秒级 UNIX 时间戳）
                     * 
                     */
                    int64_t GetEndTimeMs() const;

                    /**
                     * 设置对应云存视频的结束时间（毫秒级 UNIX 时间戳）
                     * @param _endTimeMs 对应云存视频的结束时间（毫秒级 UNIX 时间戳）
                     * 
                     */
                    void SetEndTimeMs(const int64_t& _endTimeMs);

                    /**
                     * 判断参数 EndTimeMs 是否已赋值
                     * @return EndTimeMs 是否已赋值
                     * 
                     */
                    bool EndTimeMsHasBeenSet() const;

                    /**
                     * 获取任务状态（1：失败；2：成功但结果为空；3：成功且结果非空；4：执行中）
                     * @return Status 任务状态（1：失败；2：成功但结果为空；3：成功且结果非空；4：执行中）
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置任务状态（1：失败；2：成功但结果为空；3：成功且结果非空；4：执行中）
                     * @param _status 任务状态（1：失败；2：成功但结果为空；3：成功且结果非空；4：执行中）
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
                     * 获取任务结果
                     * @return Result 任务结果
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置任务结果
                     * @param _result 任务结果
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取任务输出文件列表
                     * @return Files 任务输出文件列表
                     * 
                     */
                    std::vector<std::string> GetFiles() const;

                    /**
                     * 设置任务输出文件列表
                     * @param _files 任务输出文件列表
                     * 
                     */
                    void SetFiles(const std::vector<std::string>& _files);

                    /**
                     * 判断参数 Files 是否已赋值
                     * @return Files 是否已赋值
                     * 
                     */
                    bool FilesHasBeenSet() const;

                    /**
                     * 获取任务输出文件信息列表
                     * @return FilesInfo 任务输出文件信息列表
                     * 
                     */
                    std::vector<CloudStorageAIServiceTaskFileInfo> GetFilesInfo() const;

                    /**
                     * 设置任务输出文件信息列表
                     * @param _filesInfo 任务输出文件信息列表
                     * 
                     */
                    void SetFilesInfo(const std::vector<CloudStorageAIServiceTaskFileInfo>& _filesInfo);

                    /**
                     * 判断参数 FilesInfo 是否已赋值
                     * @return FilesInfo 是否已赋值
                     * 
                     */
                    bool FilesInfoHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    int64_t GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const int64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取最后更新时间
                     * @return UpdateTime 最后更新时间
                     * 
                     */
                    int64_t GetUpdateTime() const;

                    /**
                     * 设置最后更新时间
                     * @param _updateTime 最后更新时间
                     * 
                     */
                    void SetUpdateTime(const int64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取自定义任务 ID
                     * @return CustomId 自定义任务 ID
                     * 
                     */
                    std::string GetCustomId() const;

                    /**
                     * 设置自定义任务 ID
                     * @param _customId 自定义任务 ID
                     * 
                     */
                    void SetCustomId(const std::string& _customId);

                    /**
                     * 判断参数 CustomId 是否已赋值
                     * @return CustomId 是否已赋值
                     * 
                     */
                    bool CustomIdHasBeenSet() const;

                private:

                    /**
                     * 云存 AI 服务任务 ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

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
                     * 通道 ID
                     */
                    uint64_t m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 云存 AI 服务类型。可能取值：

- `RealtimeObjectDetect`：目标检测
- `Highlight`：视频浓缩
- `VideoToText`：视频语义理解
                     */
                    std::string m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 对应云存视频的起始时间（秒级 UNIX 时间戳）
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 对应云存视频的起始时间（毫秒级 UNIX 时间戳）
                     */
                    int64_t m_startTimeMs;
                    bool m_startTimeMsHasBeenSet;

                    /**
                     * 对应云存视频的结束时间（秒级 UNIX 时间戳）
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 对应云存视频的结束时间（毫秒级 UNIX 时间戳）
                     */
                    int64_t m_endTimeMs;
                    bool m_endTimeMsHasBeenSet;

                    /**
                     * 任务状态（1：失败；2：成功但结果为空；3：成功且结果非空；4：执行中）
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务结果
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 任务输出文件列表
                     */
                    std::vector<std::string> m_files;
                    bool m_filesHasBeenSet;

                    /**
                     * 任务输出文件信息列表
                     */
                    std::vector<CloudStorageAIServiceTaskFileInfo> m_filesInfo;
                    bool m_filesInfoHasBeenSet;

                    /**
                     * 创建时间
                     */
                    int64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 最后更新时间
                     */
                    int64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 自定义任务 ID
                     */
                    std::string m_customId;
                    bool m_customIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CLOUDSTORAGEAISERVICETASK_H_
