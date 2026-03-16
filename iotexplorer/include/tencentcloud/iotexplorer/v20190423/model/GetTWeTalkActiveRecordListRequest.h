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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETTWETALKACTIVERECORDLISTREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETTWETALKACTIVERECORDLISTREQUEST_H_

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
                * GetTWeTalkActiveRecordList请求参数结构体
                */
                class GetTWeTalkActiveRecordListRequest : public AbstractModel
                {
                public:
                    GetTWeTalkActiveRecordListRequest();
                    ~GetTWeTalkActiveRecordListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取最早的时间。
                     * @return StartTime 最早的时间。
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置最早的时间。
                     * @param _startTime 最早的时间。
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
                     * 获取查询的最晚时间。
跟StartTime形成时间段，用于查询时间段中的记录。
                     * @return EndTime 查询的最晚时间。
跟StartTime形成时间段，用于查询时间段中的记录。
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置查询的最晚时间。
跟StartTime形成时间段，用于查询时间段中的记录。
                     * @param _endTime 查询的最晚时间。
跟StartTime形成时间段，用于查询时间段中的记录。
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
                     * 获取偏移量，默认为0。
                     * @return Offset 偏移量，默认为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。
                     * @param _offset 偏移量，默认为0。
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
                     * 获取分页的大小。
默认为10，最大不超过500。
                     * @return Limit 分页的大小。
默认为10，最大不超过500。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页的大小。
默认为10，最大不超过500。
                     * @param _limit 分页的大小。
默认为10，最大不超过500。
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
                     * 获取产品ID
                     * @return ProductId 产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品ID
                     * @param _productId 产品ID
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
                     * 获取TWeTalk类型：1-基础版；2-高级版；3-多模态；
                     * @return ServiceType TWeTalk类型：1-基础版；2-高级版；3-多模态；
                     * 
                     */
                    std::vector<int64_t> GetServiceType() const;

                    /**
                     * 设置TWeTalk类型：1-基础版；2-高级版；3-多模态；
                     * @param _serviceType TWeTalk类型：1-基础版；2-高级版；3-多模态；
                     * 
                     */
                    void SetServiceType(const std::vector<int64_t>& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                private:

                    /**
                     * 最早的时间。
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询的最晚时间。
跟StartTime形成时间段，用于查询时间段中的记录。
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 偏移量，默认为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页的大小。
默认为10，最大不超过500。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * TWeTalk类型：1-基础版；2-高级版；3-多模态；
                     */
                    std::vector<int64_t> m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETTWETALKACTIVERECORDLISTREQUEST_H_
