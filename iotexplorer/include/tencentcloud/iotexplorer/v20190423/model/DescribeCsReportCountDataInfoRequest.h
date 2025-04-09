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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBECSREPORTCOUNTDATAINFOREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBECSREPORTCOUNTDATAINFOREQUEST_H_

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
                * DescribeCsReportCountDataInfo请求参数结构体
                */
                class DescribeCsReportCountDataInfoRequest : public AbstractModel
                {
                public:
                    DescribeCsReportCountDataInfoRequest();
                    ~DescribeCsReportCountDataInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品id
                     * @return ProductId 产品id
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品id
                     * @param _productId 产品id
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
                     * 获取统计开始时间戳
                     * @return StartTime 统计开始时间戳
                     * 
                     */
                    uint64_t GetStartTime() const;

                    /**
                     * 设置统计开始时间戳
                     * @param _startTime 统计开始时间戳
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
                     * 获取统计结束时间戳
                     * @return EndTime 统计结束时间戳
                     * 
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置统计结束时间戳
                     * @param _endTime 统计结束时间戳
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
                     * 获取设备通道
                     * @return ChannelId 设备通道
                     * 
                     */
                    uint64_t GetChannelId() const;

                    /**
                     * 设置设备通道
                     * @param _channelId 设备通道
                     * 
                     */
                    void SetChannelId(const uint64_t& _channelId);

                    /**
                     * 判断参数 ChannelId 是否已赋值
                     * @return ChannelId 是否已赋值
                     * 
                     */
                    bool ChannelIdHasBeenSet() const;

                private:

                    /**
                     * 产品id
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 统计开始时间戳
                     */
                    uint64_t m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 统计结束时间戳
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 设备通道
                     */
                    uint64_t m_channelId;
                    bool m_channelIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_DESCRIBECSREPORTCOUNTDATAINFOREQUEST_H_
