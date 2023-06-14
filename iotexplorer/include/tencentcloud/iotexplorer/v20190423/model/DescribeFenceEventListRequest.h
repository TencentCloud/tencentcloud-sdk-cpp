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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEFENCEEVENTLISTREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEFENCEEVENTLISTREQUEST_H_

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
                * DescribeFenceEventList请求参数结构体
                */
                class DescribeFenceEventListRequest : public AbstractModel
                {
                public:
                    DescribeFenceEventListRequest();
                    ~DescribeFenceEventListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取围栏告警信息的查询起始时间，Unix时间，单位为毫秒
                     * @return StartTime 围栏告警信息的查询起始时间，Unix时间，单位为毫秒
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置围栏告警信息的查询起始时间，Unix时间，单位为毫秒
                     * @param _startTime 围栏告警信息的查询起始时间，Unix时间，单位为毫秒
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
                     * 获取围栏告警信息的查询结束时间，Unix时间，单位为毫秒
                     * @return EndTime 围栏告警信息的查询结束时间，Unix时间，单位为毫秒
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置围栏告警信息的查询结束时间，Unix时间，单位为毫秒
                     * @param _endTime 围栏告警信息的查询结束时间，Unix时间，单位为毫秒
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
                     * 获取围栏Id
                     * @return FenceId 围栏Id
                     * 
                     */
                    int64_t GetFenceId() const;

                    /**
                     * 设置围栏Id
                     * @param _fenceId 围栏Id
                     * 
                     */
                    void SetFenceId(const int64_t& _fenceId);

                    /**
                     * 判断参数 FenceId 是否已赋值
                     * @return FenceId 是否已赋值
                     * 
                     */
                    bool FenceIdHasBeenSet() const;

                    /**
                     * 获取翻页偏移量，0起始
                     * @return Offset 翻页偏移量，0起始
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置翻页偏移量，0起始
                     * @param _offset 翻页偏移量，0起始
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
                     * 获取最大返回结果数
                     * @return Limit 最大返回结果数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置最大返回结果数
                     * @param _limit 最大返回结果数
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
                     * 获取告警对应的产品Id
                     * @return ProductId 告警对应的产品Id
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置告警对应的产品Id
                     * @param _productId 告警对应的产品Id
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
                     * 获取告警对应的设备名称
                     * @return DeviceName 告警对应的设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置告警对应的设备名称
                     * @param _deviceName 告警对应的设备名称
                     * 
                     */
                    void SetDeviceName(const std::string& _deviceName);

                    /**
                     * 判断参数 DeviceName 是否已赋值
                     * @return DeviceName 是否已赋值
                     * 
                     */
                    bool DeviceNameHasBeenSet() const;

                private:

                    /**
                     * 围栏告警信息的查询起始时间，Unix时间，单位为毫秒
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 围栏告警信息的查询结束时间，Unix时间，单位为毫秒
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 围栏Id
                     */
                    int64_t m_fenceId;
                    bool m_fenceIdHasBeenSet;

                    /**
                     * 翻页偏移量，0起始
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 最大返回结果数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 告警对应的产品Id
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 告警对应的设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBEFENCEEVENTLISTREQUEST_H_
