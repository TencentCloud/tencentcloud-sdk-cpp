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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_FENCEEVENTITEM_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_FENCEEVENTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/FenceAlarmPoint.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * 围栏事件详情
                */
                class FenceEventItem : public AbstractModel
                {
                public:
                    FenceEventItem();
                    ~FenceEventItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取围栏事件的产品Id
                     * @return ProductId 围栏事件的产品Id
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置围栏事件的产品Id
                     * @param _productId 围栏事件的产品Id
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
                     * 获取围栏事件的设备名称
                     * @return DeviceName 围栏事件的设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置围栏事件的设备名称
                     * @param _deviceName 围栏事件的设备名称
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
                     * 获取围栏事件的告警类型（In，进围栏报警；Out，出围栏报警；InOrOut，进围栏或者出围栏均报警）
                     * @return AlertType 围栏事件的告警类型（In，进围栏报警；Out，出围栏报警；InOrOut，进围栏或者出围栏均报警）
                     * 
                     */
                    std::string GetAlertType() const;

                    /**
                     * 设置围栏事件的告警类型（In，进围栏报警；Out，出围栏报警；InOrOut，进围栏或者出围栏均报警）
                     * @param _alertType 围栏事件的告警类型（In，进围栏报警；Out，出围栏报警；InOrOut，进围栏或者出围栏均报警）
                     * 
                     */
                    void SetAlertType(const std::string& _alertType);

                    /**
                     * 判断参数 AlertType 是否已赋值
                     * @return AlertType 是否已赋值
                     * 
                     */
                    bool AlertTypeHasBeenSet() const;

                    /**
                     * 获取围栏事件的设备位置信息
                     * @return Data 围栏事件的设备位置信息
                     * 
                     */
                    FenceAlarmPoint GetData() const;

                    /**
                     * 设置围栏事件的设备位置信息
                     * @param _data 围栏事件的设备位置信息
                     * 
                     */
                    void SetData(const FenceAlarmPoint& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 围栏事件的产品Id
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 围栏事件的设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 围栏Id
                     */
                    int64_t m_fenceId;
                    bool m_fenceIdHasBeenSet;

                    /**
                     * 围栏事件的告警类型（In，进围栏报警；Out，出围栏报警；InOrOut，进围栏或者出围栏均报警）
                     */
                    std::string m_alertType;
                    bool m_alertTypeHasBeenSet;

                    /**
                     * 围栏事件的设备位置信息
                     */
                    FenceAlarmPoint m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_FENCEEVENTITEM_H_
