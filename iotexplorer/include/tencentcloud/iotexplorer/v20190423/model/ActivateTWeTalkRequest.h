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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_ACTIVATETWETALKREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_ACTIVATETWETALKREQUEST_H_

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
                * ActivateTWeTalk请求参数结构体
                */
                class ActivateTWeTalkRequest : public AbstractModel
                {
                public:
                    ActivateTWeTalkRequest();
                    ~ActivateTWeTalkRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取TWeTalk类型：1-基础版；2-高级版；3-多模态；
                     * @return ServiceType TWeTalk类型：1-基础版；2-高级版；3-多模态；
                     * 
                     */
                    int64_t GetServiceType() const;

                    /**
                     * 设置TWeTalk类型：1-基础版；2-高级版；3-多模态；
                     * @param _serviceType TWeTalk类型：1-基础版；2-高级版；3-多模态；
                     * 
                     */
                    void SetServiceType(const int64_t& _serviceType);

                    /**
                     * 判断参数 ServiceType 是否已赋值
                     * @return ServiceType 是否已赋值
                     * 
                     */
                    bool ServiceTypeHasBeenSet() const;

                    /**
                     * 获取设备列表, 产品ID_设备名；
                     * @return DeviceIds 设备列表, 产品ID_设备名；
                     * 
                     */
                    std::vector<std::string> GetDeviceIds() const;

                    /**
                     * 设置设备列表, 产品ID_设备名；
                     * @param _deviceIds 设备列表, 产品ID_设备名；
                     * 
                     */
                    void SetDeviceIds(const std::vector<std::string>& _deviceIds);

                    /**
                     * 判断参数 DeviceIds 是否已赋值
                     * @return DeviceIds 是否已赋值
                     * 
                     */
                    bool DeviceIdsHasBeenSet() const;

                private:

                    /**
                     * TWeTalk类型：1-基础版；2-高级版；3-多模态；
                     */
                    int64_t m_serviceType;
                    bool m_serviceTypeHasBeenSet;

                    /**
                     * 设备列表, 产品ID_设备名；
                     */
                    std::vector<std::string> m_deviceIds;
                    bool m_deviceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_ACTIVATETWETALKREQUEST_H_
