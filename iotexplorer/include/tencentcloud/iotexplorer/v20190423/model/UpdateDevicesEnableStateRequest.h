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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_UPDATEDEVICESENABLESTATEREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_UPDATEDEVICESENABLESTATEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/DevicesItem.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * UpdateDevicesEnableState请求参数结构体
                */
                class UpdateDevicesEnableStateRequest : public AbstractModel
                {
                public:
                    UpdateDevicesEnableStateRequest();
                    ~UpdateDevicesEnableStateRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取多个设备标识
                     * @return DevicesItems 多个设备标识
                     * 
                     */
                    std::vector<DevicesItem> GetDevicesItems() const;

                    /**
                     * 设置多个设备标识
                     * @param _devicesItems 多个设备标识
                     * 
                     */
                    void SetDevicesItems(const std::vector<DevicesItem>& _devicesItems);

                    /**
                     * 判断参数 DevicesItems 是否已赋值
                     * @return DevicesItems 是否已赋值
                     * 
                     */
                    bool DevicesItemsHasBeenSet() const;

                    /**
                     * 获取1：启用；0：禁用
                     * @return Status 1：启用；0：禁用
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置1：启用；0：禁用
                     * @param _status 1：启用；0：禁用
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 多个设备标识
                     */
                    std::vector<DevicesItem> m_devicesItems;
                    bool m_devicesItemsHasBeenSet;

                    /**
                     * 1：启用；0：禁用
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_UPDATEDEVICESENABLESTATEREQUEST_H_
