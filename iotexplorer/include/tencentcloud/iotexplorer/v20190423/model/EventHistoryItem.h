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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_EVENTHISTORYITEM_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_EVENTHISTORYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 设备事件的搜索结果项
                */
                class EventHistoryItem : public AbstractModel
                {
                public:
                    EventHistoryItem();
                    ~EventHistoryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件的时间戳
                     * @return TimeStamp 事件的时间戳
                     * 
                     */
                    int64_t GetTimeStamp() const;

                    /**
                     * 设置事件的时间戳
                     * @param _timeStamp 事件的时间戳
                     * 
                     */
                    void SetTimeStamp(const int64_t& _timeStamp);

                    /**
                     * 判断参数 TimeStamp 是否已赋值
                     * @return TimeStamp 是否已赋值
                     * 
                     */
                    bool TimeStampHasBeenSet() const;

                    /**
                     * 获取事件的产品ID
                     * @return ProductId 事件的产品ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置事件的产品ID
                     * @param _productId 事件的产品ID
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
                     * 获取事件的设备名称
                     * @return DeviceName 事件的设备名称
                     * 
                     */
                    std::string GetDeviceName() const;

                    /**
                     * 设置事件的设备名称
                     * @param _deviceName 事件的设备名称
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
                     * 获取事件的标识符ID
                     * @return EventId 事件的标识符ID
                     * 
                     */
                    std::string GetEventId() const;

                    /**
                     * 设置事件的标识符ID
                     * @param _eventId 事件的标识符ID
                     * 
                     */
                    void SetEventId(const std::string& _eventId);

                    /**
                     * 判断参数 EventId 是否已赋值
                     * @return EventId 是否已赋值
                     * 
                     */
                    bool EventIdHasBeenSet() const;

                    /**
                     * 获取事件的类型
                     * @return Type 事件的类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置事件的类型
                     * @param _type 事件的类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取事件的数据
                     * @return Data 事件的数据
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置事件的数据
                     * @param _data 事件的数据
                     * 
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                private:

                    /**
                     * 事件的时间戳
                     */
                    int64_t m_timeStamp;
                    bool m_timeStampHasBeenSet;

                    /**
                     * 事件的产品ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 事件的设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 事件的标识符ID
                     */
                    std::string m_eventId;
                    bool m_eventIdHasBeenSet;

                    /**
                     * 事件的类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 事件的数据
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_EVENTHISTORYITEM_H_
