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

#ifndef TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_CONTROLDEVICEDATAREQUEST_H_
#define TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_CONTROLDEVICEDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideo
    {
        namespace V20201215
        {
            namespace Model
            {
                /**
                * ControlDeviceData请求参数结构体
                */
                class ControlDeviceDataRequest : public AbstractModel
                {
                public:
                    ControlDeviceDataRequest();
                    ~ControlDeviceDataRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取属性数据, JSON格式字符串, 注意字段需要在物模型属性里定义
                     * @return Data 属性数据, JSON格式字符串, 注意字段需要在物模型属性里定义
                     * 
                     */
                    std::string GetData() const;

                    /**
                     * 设置属性数据, JSON格式字符串, 注意字段需要在物模型属性里定义
                     * @param _data 属性数据, JSON格式字符串, 注意字段需要在物模型属性里定义
                     * 
                     */
                    void SetData(const std::string& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取请求类型 , 不填该参数或者 desired 表示下发属性给设备,  reported 表示模拟设备上报属性
                     * @return Method 请求类型 , 不填该参数或者 desired 表示下发属性给设备,  reported 表示模拟设备上报属性
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置请求类型 , 不填该参数或者 desired 表示下发属性给设备,  reported 表示模拟设备上报属性
                     * @param _method 请求类型 , 不填该参数或者 desired 表示下发属性给设备,  reported 表示模拟设备上报属性
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取上报数据UNIX时间戳(毫秒), 仅对Method:reported有效
                     * @return DataTimestamp 上报数据UNIX时间戳(毫秒), 仅对Method:reported有效
                     * 
                     */
                    int64_t GetDataTimestamp() const;

                    /**
                     * 设置上报数据UNIX时间戳(毫秒), 仅对Method:reported有效
                     * @param _dataTimestamp 上报数据UNIX时间戳(毫秒), 仅对Method:reported有效
                     * 
                     */
                    void SetDataTimestamp(const int64_t& _dataTimestamp);

                    /**
                     * 判断参数 DataTimestamp 是否已赋值
                     * @return DataTimestamp 是否已赋值
                     * 
                     */
                    bool DataTimestampHasBeenSet() const;

                private:

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
                     * 属性数据, JSON格式字符串, 注意字段需要在物模型属性里定义
                     */
                    std::string m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 请求类型 , 不填该参数或者 desired 表示下发属性给设备,  reported 表示模拟设备上报属性
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 上报数据UNIX时间戳(毫秒), 仅对Method:reported有效
                     */
                    int64_t m_dataTimestamp;
                    bool m_dataTimestampHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEO_V20201215_MODEL_CONTROLDEVICEDATAREQUEST_H_
