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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CALLDEVICEACTIONASYNCREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CALLDEVICEACTIONASYNCREQUEST_H_

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
                * CallDeviceActionAsync请求参数结构体
                */
                class CallDeviceActionAsyncRequest : public AbstractModel
                {
                public:
                    CallDeviceActionAsyncRequest();
                    ~CallDeviceActionAsyncRequest() = default;
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
                     * 获取产品数据模板中行为功能的标识符，由开发者自行根据设备的应用场景定义
                     * @return ActionId 产品数据模板中行为功能的标识符，由开发者自行根据设备的应用场景定义
                     * 
                     */
                    std::string GetActionId() const;

                    /**
                     * 设置产品数据模板中行为功能的标识符，由开发者自行根据设备的应用场景定义
                     * @param _actionId 产品数据模板中行为功能的标识符，由开发者自行根据设备的应用场景定义
                     * 
                     */
                    void SetActionId(const std::string& _actionId);

                    /**
                     * 判断参数 ActionId 是否已赋值
                     * @return ActionId 是否已赋值
                     * 
                     */
                    bool ActionIdHasBeenSet() const;

                    /**
                     * 获取输入参数
                     * @return InputParams 输入参数
                     * 
                     */
                    std::string GetInputParams() const;

                    /**
                     * 设置输入参数
                     * @param _inputParams 输入参数
                     * 
                     */
                    void SetInputParams(const std::string& _inputParams);

                    /**
                     * 判断参数 InputParams 是否已赋值
                     * @return InputParams 是否已赋值
                     * 
                     */
                    bool InputParamsHasBeenSet() const;

                private:

                    /**
                     * 产品Id
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 设备名称
                     */
                    std::string m_deviceName;
                    bool m_deviceNameHasBeenSet;

                    /**
                     * 产品数据模板中行为功能的标识符，由开发者自行根据设备的应用场景定义
                     */
                    std::string m_actionId;
                    bool m_actionIdHasBeenSet;

                    /**
                     * 输入参数
                     */
                    std::string m_inputParams;
                    bool m_inputParamsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_CALLDEVICEACTIONASYNCREQUEST_H_
