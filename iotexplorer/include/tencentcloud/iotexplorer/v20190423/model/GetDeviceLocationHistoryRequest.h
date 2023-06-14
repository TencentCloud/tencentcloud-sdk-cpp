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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETDEVICELOCATIONHISTORYREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETDEVICELOCATIONHISTORYREQUEST_H_

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
                * GetDeviceLocationHistory请求参数结构体
                */
                class GetDeviceLocationHistoryRequest : public AbstractModel
                {
                public:
                    GetDeviceLocationHistoryRequest();
                    ~GetDeviceLocationHistoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品Id
                     * @return ProductId 产品Id
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品Id
                     * @param _productId 产品Id
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
                     * 获取设备名
                     * @return DeviceName 设备名
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置设备名
                     * @param _deviceName 设备名
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
                     * 获取查询起始时间，Unix时间，单位为毫秒
                     * @return StartTime 查询起始时间，Unix时间，单位为毫秒
                     * 
                     */
                    int64_t GetStartTime() const;

                    /**
                     * 设置查询起始时间，Unix时间，单位为毫秒
                     * @param _startTime 查询起始时间，Unix时间，单位为毫秒
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
                     * 获取查询结束时间，Unix时间，单位为毫秒
                     * @return EndTime 查询结束时间，Unix时间，单位为毫秒
                     * 
                     */
                    int64_t GetEndTime() const;

                    /**
                     * 设置查询结束时间，Unix时间，单位为毫秒
                     * @param _endTime 查询结束时间，Unix时间，单位为毫秒
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
                     * 获取坐标类型
                     * @return CoordinateType 坐标类型
                     * 
                     */
                    int64_t GetCoordinateType() const;

                    /**
                     * 设置坐标类型
                     * @param _coordinateType 坐标类型
                     * 
                     */
                    void SetCoordinateType(const int64_t& _coordinateType);

                    /**
                     * 判断参数 CoordinateType 是否已赋值
                     * @return CoordinateType 是否已赋值
                     * 
                     */
                    bool CoordinateTypeHasBeenSet() const;

                private:

                    /**
                     * 产品Id
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 查询起始时间，Unix时间，单位为毫秒
                     */
                    int64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 查询结束时间，Unix时间，单位为毫秒
                     */
                    int64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 坐标类型
                     */
                    int64_t m_coordinateType;
                    bool m_coordinateTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETDEVICELOCATIONHISTORYREQUEST_H_
