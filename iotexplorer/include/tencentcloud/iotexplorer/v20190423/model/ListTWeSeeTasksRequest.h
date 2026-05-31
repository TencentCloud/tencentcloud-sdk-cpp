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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LISTTWESEETASKSREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LISTTWESEETASKSREQUEST_H_

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
                * ListTWeSeeTasks请求参数结构体
                */
                class ListTWeSeeTasksRequest : public AbstractModel
                {
                public:
                    ListTWeSeeTasksRequest();
                    ~ListTWeSeeTasksRequest() = default;
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
                     * 获取算法类目。可选值：
- `COMPREHENSION`：视觉理解
- `HIGHLIGHT`：视频浓缩
                     * @return ServiceCategory 算法类目。可选值：
- `COMPREHENSION`：视觉理解
- `HIGHLIGHT`：视频浓缩
                     * 
                     */
                    std::string GetServiceCategory() const;

                    /**
                     * 设置算法类目。可选值：
- `COMPREHENSION`：视觉理解
- `HIGHLIGHT`：视频浓缩
                     * @param _serviceCategory 算法类目。可选值：
- `COMPREHENSION`：视觉理解
- `HIGHLIGHT`：视频浓缩
                     * 
                     */
                    void SetServiceCategory(const std::string& _serviceCategory);

                    /**
                     * 判断参数 ServiceCategory 是否已赋值
                     * @return ServiceCategory 是否已赋值
                     * 
                     */
                    bool ServiceCategoryHasBeenSet() const;

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
                     * 获取算法类型。

当 ServiceCategory 为 `COMPREHENSION` 时，可选值包括：
- `VID_COMP`：视频理解
- `IMG_COMP`：图片理解
- `CONT_PERSON_MOTIONLESS`：静姿检测

当 ServiceCategory 为 `HIGHLIGHT` 时，可选值包括：
- `COMP_HIGHLIGHT`：视频浓缩
                     * @return ServiceTypes 算法类型。

当 ServiceCategory 为 `COMPREHENSION` 时，可选值包括：
- `VID_COMP`：视频理解
- `IMG_COMP`：图片理解
- `CONT_PERSON_MOTIONLESS`：静姿检测

当 ServiceCategory 为 `HIGHLIGHT` 时，可选值包括：
- `COMP_HIGHLIGHT`：视频浓缩
                     * 
                     */
                    std::vector<std::string> GetServiceTypes() const;

                    /**
                     * 设置算法类型。

当 ServiceCategory 为 `COMPREHENSION` 时，可选值包括：
- `VID_COMP`：视频理解
- `IMG_COMP`：图片理解
- `CONT_PERSON_MOTIONLESS`：静姿检测

当 ServiceCategory 为 `HIGHLIGHT` 时，可选值包括：
- `COMP_HIGHLIGHT`：视频浓缩
                     * @param _serviceTypes 算法类型。

当 ServiceCategory 为 `COMPREHENSION` 时，可选值包括：
- `VID_COMP`：视频理解
- `IMG_COMP`：图片理解
- `CONT_PERSON_MOTIONLESS`：静姿检测

当 ServiceCategory 为 `HIGHLIGHT` 时，可选值包括：
- `COMP_HIGHLIGHT`：视频浓缩
                     * 
                     */
                    void SetServiceTypes(const std::vector<std::string>& _serviceTypes);

                    /**
                     * 判断参数 ServiceTypes 是否已赋值
                     * @return ServiceTypes 是否已赋值
                     * 
                     */
                    bool ServiceTypesHasBeenSet() const;

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
                     * 获取查询任务时间范围的起始时间（毫秒级 UNIX 时间戳）。不传则不生效时间范围条件。
                     * @return StartTimeMs 查询任务时间范围的起始时间（毫秒级 UNIX 时间戳）。不传则不生效时间范围条件。
                     * 
                     */
                    int64_t GetStartTimeMs() const;

                    /**
                     * 设置查询任务时间范围的起始时间（毫秒级 UNIX 时间戳）。不传则不生效时间范围条件。
                     * @param _startTimeMs 查询任务时间范围的起始时间（毫秒级 UNIX 时间戳）。不传则不生效时间范围条件。
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
                     * 获取查询任务时间范围的结束时间（毫秒级 UNIX 时间戳）。不传则不生效时间范围条件。
                     * @return EndTimeMs 查询任务时间范围的结束时间（毫秒级 UNIX 时间戳）。不传则不生效时间范围条件。
                     * 
                     */
                    int64_t GetEndTimeMs() const;

                    /**
                     * 设置查询任务时间范围的结束时间（毫秒级 UNIX 时间戳）。不传则不生效时间范围条件。
                     * @param _endTimeMs 查询任务时间范围的结束时间（毫秒级 UNIX 时间戳）。不传则不生效时间范围条件。
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
                     * 获取要查询的任务的状态条件。不传则不按照状态过滤，可选值：

- `1`：失败
- `2`：空结果
- `3`：有效结果
                     * @return Status 要查询的任务的状态条件。不传则不按照状态过滤，可选值：

- `1`：失败
- `2`：空结果
- `3`：有效结果
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置要查询的任务的状态条件。不传则不按照状态过滤，可选值：

- `1`：失败
- `2`：空结果
- `3`：有效结果
                     * @param _status 要查询的任务的状态条件。不传则不按照状态过滤，可选值：

- `1`：失败
- `2`：空结果
- `3`：有效结果
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取下载 URL 的过期时间（秒级 UNIX 时间戳）。若传入该参数，则响应中将包含所有文件的下载 URL
                     * @return FileURLExpireTime 下载 URL 的过期时间（秒级 UNIX 时间戳）。若传入该参数，则响应中将包含所有文件的下载 URL
                     * 
                     */
                    int64_t GetFileURLExpireTime() const;

                    /**
                     * 设置下载 URL 的过期时间（秒级 UNIX 时间戳）。若传入该参数，则响应中将包含所有文件的下载 URL
                     * @param _fileURLExpireTime 下载 URL 的过期时间（秒级 UNIX 时间戳）。若传入该参数，则响应中将包含所有文件的下载 URL
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
                     * 算法类目。可选值：
- `COMPREHENSION`：视觉理解
- `HIGHLIGHT`：视频浓缩
                     */
                    std::string m_serviceCategory;
                    bool m_serviceCategoryHasBeenSet;

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
                     * 算法类型。

当 ServiceCategory 为 `COMPREHENSION` 时，可选值包括：
- `VID_COMP`：视频理解
- `IMG_COMP`：图片理解
- `CONT_PERSON_MOTIONLESS`：静姿检测

当 ServiceCategory 为 `HIGHLIGHT` 时，可选值包括：
- `COMP_HIGHLIGHT`：视频浓缩
                     */
                    std::vector<std::string> m_serviceTypes;
                    bool m_serviceTypesHasBeenSet;

                    /**
                     * 通道 ID
                     */
                    uint64_t m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * 查询任务时间范围的起始时间（毫秒级 UNIX 时间戳）。不传则不生效时间范围条件。
                     */
                    int64_t m_startTimeMs;
                    bool m_startTimeMsHasBeenSet;

                    /**
                     * 查询任务时间范围的结束时间（毫秒级 UNIX 时间戳）。不传则不生效时间范围条件。
                     */
                    int64_t m_endTimeMs;
                    bool m_endTimeMsHasBeenSet;

                    /**
                     * 要查询的任务的状态条件。不传则不按照状态过滤，可选值：

- `1`：失败
- `2`：空结果
- `3`：有效结果
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 下载 URL 的过期时间（秒级 UNIX 时间戳）。若传入该参数，则响应中将包含所有文件的下载 URL
                     */
                    int64_t m_fileURLExpireTime;
                    bool m_fileURLExpireTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LISTTWESEETASKSREQUEST_H_
