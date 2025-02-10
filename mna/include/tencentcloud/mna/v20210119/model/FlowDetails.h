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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_FLOWDETAILS_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_FLOWDETAILS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mna/v20210119/model/NetDetails.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * 设备流量信息
                */
                class FlowDetails : public AbstractModel
                {
                public:
                    FlowDetails();
                    ~FlowDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取流量数据点
                     * @return NetDetails 流量数据点
                     * 
                     */
                    std::vector<NetDetails> GetNetDetails() const;

                    /**
                     * 设置流量数据点
                     * @param _netDetails 流量数据点
                     * 
                     */
                    void SetNetDetails(const std::vector<NetDetails>& _netDetails);

                    /**
                     * 判断参数 NetDetails 是否已赋值
                     * @return NetDetails 是否已赋值
                     * 
                     */
                    bool NetDetailsHasBeenSet() const;

                    /**
                     * 获取设备ID
                     * @return DeviceId 设备ID
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置设备ID
                     * @param _deviceId 设备ID
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
                     * 获取流量最大值（单位：bytes）
                     * @return MaxValue 流量最大值（单位：bytes）
                     * 
                     */
                    double GetMaxValue() const;

                    /**
                     * 设置流量最大值（单位：bytes）
                     * @param _maxValue 流量最大值（单位：bytes）
                     * 
                     */
                    void SetMaxValue(const double& _maxValue);

                    /**
                     * 判断参数 MaxValue 是否已赋值
                     * @return MaxValue 是否已赋值
                     * 
                     */
                    bool MaxValueHasBeenSet() const;

                    /**
                     * 获取流量平均值（单位：bytes）
                     * @return AvgValue 流量平均值（单位：bytes）
                     * 
                     */
                    double GetAvgValue() const;

                    /**
                     * 设置流量平均值（单位：bytes）
                     * @param _avgValue 流量平均值（单位：bytes）
                     * 
                     */
                    void SetAvgValue(const double& _avgValue);

                    /**
                     * 判断参数 AvgValue 是否已赋值
                     * @return AvgValue 是否已赋值
                     * 
                     */
                    bool AvgValueHasBeenSet() const;

                    /**
                     * 获取流量总值（单位：bytes）
                     * @return TotalValue 流量总值（单位：bytes）
                     * 
                     */
                    double GetTotalValue() const;

                    /**
                     * 设置流量总值（单位：bytes）
                     * @param _totalValue 流量总值（单位：bytes）
                     * 
                     */
                    void SetTotalValue(const double& _totalValue);

                    /**
                     * 判断参数 TotalValue 是否已赋值
                     * @return TotalValue 是否已赋值
                     * 
                     */
                    bool TotalValueHasBeenSet() const;

                private:

                    /**
                     * 流量数据点
                     */
                    std::vector<NetDetails> m_netDetails;
                    bool m_netDetailsHasBeenSet;

                    /**
                     * 设备ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 流量最大值（单位：bytes）
                     */
                    double m_maxValue;
                    bool m_maxValueHasBeenSet;

                    /**
                     * 流量平均值（单位：bytes）
                     */
                    double m_avgValue;
                    bool m_avgValueHasBeenSet;

                    /**
                     * 流量总值（单位：bytes）
                     */
                    double m_totalValue;
                    bool m_totalValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_FLOWDETAILS_H_
