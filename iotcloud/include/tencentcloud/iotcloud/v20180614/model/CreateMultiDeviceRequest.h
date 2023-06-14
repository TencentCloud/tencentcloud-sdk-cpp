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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_CREATEMULTIDEVICEREQUEST_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_CREATEMULTIDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * CreateMultiDevice请求参数结构体
                */
                class CreateMultiDeviceRequest : public AbstractModel
                {
                public:
                    CreateMultiDeviceRequest();
                    ~CreateMultiDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取产品 ID。创建产品时腾讯云为用户分配全局唯一的 ID
                     * @return ProductId 产品 ID。创建产品时腾讯云为用户分配全局唯一的 ID
                     * 
                     */
                    std::string GetProductId() const;

                    /**
                     * 设置产品 ID。创建产品时腾讯云为用户分配全局唯一的 ID
                     * @param _productId 产品 ID。创建产品时腾讯云为用户分配全局唯一的 ID
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
                     * 获取批量创建的设备名数组，单次最多创建 100 个设备。命名规则：[a-zA-Z0-9:_-]{1,48}
                     * @return DeviceNames 批量创建的设备名数组，单次最多创建 100 个设备。命名规则：[a-zA-Z0-9:_-]{1,48}
                     * 
                     */
                    std::vector<std::string> GetDeviceNames() const;

                    /**
                     * 设置批量创建的设备名数组，单次最多创建 100 个设备。命名规则：[a-zA-Z0-9:_-]{1,48}
                     * @param _deviceNames 批量创建的设备名数组，单次最多创建 100 个设备。命名规则：[a-zA-Z0-9:_-]{1,48}
                     * 
                     */
                    void SetDeviceNames(const std::vector<std::string>& _deviceNames);

                    /**
                     * 判断参数 DeviceNames 是否已赋值
                     * @return DeviceNames 是否已赋值
                     * 
                     */
                    bool DeviceNamesHasBeenSet() const;

                private:

                    /**
                     * 产品 ID。创建产品时腾讯云为用户分配全局唯一的 ID
                     */
                    std::string m_productId;
                    bool m_productIdHasBeenSet;

                    /**
                     * 批量创建的设备名数组，单次最多创建 100 个设备。命名规则：[a-zA-Z0-9:_-]{1,48}
                     */
                    std::vector<std::string> m_deviceNames;
                    bool m_deviceNamesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_CREATEMULTIDEVICEREQUEST_H_
