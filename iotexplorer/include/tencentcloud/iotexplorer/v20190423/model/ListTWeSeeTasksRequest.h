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
#include <tencentcloud/iotexplorer/v20190423/model/VisionRecognitionTaskFilter.h>


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
                     * 获取<p>产品 ID</p>
                     * @return ProductId <p>产品 ID</p>
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置<p>产品 ID</p>
                     * @param _productId <p>产品 ID</p>
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
                     * 获取<p>算法类目。可选值：</p><ul><li><code>COMPREHENSION</code>：视觉理解</li><li><code>HIGHLIGHT</code>：视频浓缩</li></ul>
                     * @return ServiceCategory <p>算法类目。可选值：</p><ul><li><code>COMPREHENSION</code>：视觉理解</li><li><code>HIGHLIGHT</code>：视频浓缩</li></ul>
                     * 
                     */
                    std::string GetServiceCategory() const;

                    /**
                     * 设置<p>算法类目。可选值：</p><ul><li><code>COMPREHENSION</code>：视觉理解</li><li><code>HIGHLIGHT</code>：视频浓缩</li></ul>
                     * @param _serviceCategory <p>算法类目。可选值：</p><ul><li><code>COMPREHENSION</code>：视觉理解</li><li><code>HIGHLIGHT</code>：视频浓缩</li></ul>
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
                     * 获取<p>分页拉取数量</p>
                     * @return Limit <p>分页拉取数量</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>分页拉取数量</p>
                     * @param _limit <p>分页拉取数量</p>
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
                     * 获取<p>分页拉取偏移</p>
                     * @return Offset <p>分页拉取偏移</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>分页拉取偏移</p>
                     * @param _offset <p>分页拉取偏移</p>
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
                     * 获取<p>算法类型。</p><p>当 ServiceCategory 为 <code>COMPREHENSION</code> 时，可选值包括：</p><ul><li><code>VID_COMP</code>：视频理解</li><li><code>IMG_COMP</code>：图片理解</li><li><code>CONT_PERSON_MOTIONLESS</code>：静姿检测</li></ul><p>当 ServiceCategory 为 <code>HIGHLIGHT</code> 时，可选值包括：</p><ul><li><code>COMP_HIGHLIGHT</code>：视频浓缩</li></ul>
                     * @return ServiceTypes <p>算法类型。</p><p>当 ServiceCategory 为 <code>COMPREHENSION</code> 时，可选值包括：</p><ul><li><code>VID_COMP</code>：视频理解</li><li><code>IMG_COMP</code>：图片理解</li><li><code>CONT_PERSON_MOTIONLESS</code>：静姿检测</li></ul><p>当 ServiceCategory 为 <code>HIGHLIGHT</code> 时，可选值包括：</p><ul><li><code>COMP_HIGHLIGHT</code>：视频浓缩</li></ul>
                     * 
                     */
                    std::vector<std::string> GetServiceTypes() const;

                    /**
                     * 设置<p>算法类型。</p><p>当 ServiceCategory 为 <code>COMPREHENSION</code> 时，可选值包括：</p><ul><li><code>VID_COMP</code>：视频理解</li><li><code>IMG_COMP</code>：图片理解</li><li><code>CONT_PERSON_MOTIONLESS</code>：静姿检测</li></ul><p>当 ServiceCategory 为 <code>HIGHLIGHT</code> 时，可选值包括：</p><ul><li><code>COMP_HIGHLIGHT</code>：视频浓缩</li></ul>
                     * @param _serviceTypes <p>算法类型。</p><p>当 ServiceCategory 为 <code>COMPREHENSION</code> 时，可选值包括：</p><ul><li><code>VID_COMP</code>：视频理解</li><li><code>IMG_COMP</code>：图片理解</li><li><code>CONT_PERSON_MOTIONLESS</code>：静姿检测</li></ul><p>当 ServiceCategory 为 <code>HIGHLIGHT</code> 时，可选值包括：</p><ul><li><code>COMP_HIGHLIGHT</code>：视频浓缩</li></ul>
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
                     * 获取<p>通道 ID</p>
                     * @return ChannelId <p>通道 ID</p>
                     * 
                     */
                    uint64_t GetChannelId() const;

                    /**
                     * 设置<p>通道 ID</p>
                     * @param _channelId <p>通道 ID</p>
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
                     * 获取<p>查询任务时间范围的起始时间（毫秒级 UNIX 时间戳）。不传则不生效时间范围条件。</p>
                     * @return StartTimeMs <p>查询任务时间范围的起始时间（毫秒级 UNIX 时间戳）。不传则不生效时间范围条件。</p>
                     * 
                     */
                    int64_t GetStartTimeMs() const;

                    /**
                     * 设置<p>查询任务时间范围的起始时间（毫秒级 UNIX 时间戳）。不传则不生效时间范围条件。</p>
                     * @param _startTimeMs <p>查询任务时间范围的起始时间（毫秒级 UNIX 时间戳）。不传则不生效时间范围条件。</p>
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
                     * 获取<p>查询任务时间范围的结束时间（毫秒级 UNIX 时间戳）。不传则不生效时间范围条件。</p>
                     * @return EndTimeMs <p>查询任务时间范围的结束时间（毫秒级 UNIX 时间戳）。不传则不生效时间范围条件。</p>
                     * 
                     */
                    int64_t GetEndTimeMs() const;

                    /**
                     * 设置<p>查询任务时间范围的结束时间（毫秒级 UNIX 时间戳）。不传则不生效时间范围条件。</p>
                     * @param _endTimeMs <p>查询任务时间范围的结束时间（毫秒级 UNIX 时间戳）。不传则不生效时间范围条件。</p>
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
                     * 获取<p>要查询的任务的状态条件。不传则不按照状态过滤，可选值：</p><ul><li><code>1</code>：失败</li><li><code>2</code>：空结果</li><li><code>3</code>：有效结果</li></ul>
                     * @return Status <p>要查询的任务的状态条件。不传则不按照状态过滤，可选值：</p><ul><li><code>1</code>：失败</li><li><code>2</code>：空结果</li><li><code>3</code>：有效结果</li></ul>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>要查询的任务的状态条件。不传则不按照状态过滤，可选值：</p><ul><li><code>1</code>：失败</li><li><code>2</code>：空结果</li><li><code>3</code>：有效结果</li></ul>
                     * @param _status <p>要查询的任务的状态条件。不传则不按照状态过滤，可选值：</p><ul><li><code>1</code>：失败</li><li><code>2</code>：空结果</li><li><code>3</code>：有效结果</li></ul>
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
                     * 获取<p>下载 URL 的过期时间（秒级 UNIX 时间戳）。若传入该参数，则响应中将包含所有文件的下载 URL</p>
                     * @return FileURLExpireTime <p>下载 URL 的过期时间（秒级 UNIX 时间戳）。若传入该参数，则响应中将包含所有文件的下载 URL</p>
                     * 
                     */
                    int64_t GetFileURLExpireTime() const;

                    /**
                     * 设置<p>下载 URL 的过期时间（秒级 UNIX 时间戳）。若传入该参数，则响应中将包含所有文件的下载 URL</p>
                     * @param _fileURLExpireTime <p>下载 URL 的过期时间（秒级 UNIX 时间戳）。若传入该参数，则响应中将包含所有文件的下载 URL</p>
                     * 
                     */
                    void SetFileURLExpireTime(const int64_t& _fileURLExpireTime);

                    /**
                     * 判断参数 FileURLExpireTime 是否已赋值
                     * @return FileURLExpireTime 是否已赋值
                     * 
                     */
                    bool FileURLExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>任务结果过滤条件</p>
                     * @return Filters <p>任务结果过滤条件</p>
                     * 
                     */
                    std::vector<VisionRecognitionTaskFilter> GetFilters() const;

                    /**
                     * 设置<p>任务结果过滤条件</p>
                     * @param _filters <p>任务结果过滤条件</p>
                     * 
                     */
                    void SetFilters(const std::vector<VisionRecognitionTaskFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>产品 ID</p>
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * <p>设备名称</p>
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * <p>算法类目。可选值：</p><ul><li><code>COMPREHENSION</code>：视觉理解</li><li><code>HIGHLIGHT</code>：视频浓缩</li></ul>
                     */
                    std::string m_serviceCategory;
                    bool m_serviceCategoryHasBeenSet;

                    /**
                     * <p>分页拉取数量</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>分页拉取偏移</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>算法类型。</p><p>当 ServiceCategory 为 <code>COMPREHENSION</code> 时，可选值包括：</p><ul><li><code>VID_COMP</code>：视频理解</li><li><code>IMG_COMP</code>：图片理解</li><li><code>CONT_PERSON_MOTIONLESS</code>：静姿检测</li></ul><p>当 ServiceCategory 为 <code>HIGHLIGHT</code> 时，可选值包括：</p><ul><li><code>COMP_HIGHLIGHT</code>：视频浓缩</li></ul>
                     */
                    std::vector<std::string> m_serviceTypes;
                    bool m_serviceTypesHasBeenSet;

                    /**
                     * <p>通道 ID</p>
                     */
                    uint64_t m_channelId;
                    bool m_channelIdHasBeenSet;

                    /**
                     * <p>查询任务时间范围的起始时间（毫秒级 UNIX 时间戳）。不传则不生效时间范围条件。</p>
                     */
                    int64_t m_startTimeMs;
                    bool m_startTimeMsHasBeenSet;

                    /**
                     * <p>查询任务时间范围的结束时间（毫秒级 UNIX 时间戳）。不传则不生效时间范围条件。</p>
                     */
                    int64_t m_endTimeMs;
                    bool m_endTimeMsHasBeenSet;

                    /**
                     * <p>要查询的任务的状态条件。不传则不按照状态过滤，可选值：</p><ul><li><code>1</code>：失败</li><li><code>2</code>：空结果</li><li><code>3</code>：有效结果</li></ul>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>下载 URL 的过期时间（秒级 UNIX 时间戳）。若传入该参数，则响应中将包含所有文件的下载 URL</p>
                     */
                    int64_t m_fileURLExpireTime;
                    bool m_fileURLExpireTimeHasBeenSet;

                    /**
                     * <p>任务结果过滤条件</p>
                     */
                    std::vector<VisionRecognitionTaskFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_LISTTWESEETASKSREQUEST_H_
