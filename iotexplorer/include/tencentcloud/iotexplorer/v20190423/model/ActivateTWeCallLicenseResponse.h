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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_ACTIVATETWECALLLICENSERESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_ACTIVATETWECALLLICENSERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeviceActiveResult.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * ActivateTWeCallLicense返回参数结构体
                */
                class ActivateTWeCallLicenseResponse : public AbstractModel
                {
                public:
                    ActivateTWeCallLicenseResponse();
                    ~ActivateTWeCallLicenseResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取设备激活返回数据
                     * @return DeviceList 设备激活返回数据
                     * @deprecated
                     */
                    std::vector<DeviceActiveResult> GetDeviceList() const;

                    /**
                     * 判断参数 DeviceList 是否已赋值
                     * @return DeviceList 是否已赋值
                     * @deprecated
                     */
                    bool DeviceListHasBeenSet() const;

                    /**
                     * 获取设备激活失败返回数据
                     * @return FailureList 设备激活失败返回数据
                     * 
                     */
                    std::vector<DeviceActiveResult> GetFailureList() const;

                    /**
                     * 判断参数 FailureList 是否已赋值
                     * @return FailureList 是否已赋值
                     * 
                     */
                    bool FailureListHasBeenSet() const;

                    /**
                     * 获取设备激活成功返回数据
                     * @return SuccessList 设备激活成功返回数据
                     * 
                     */
                    std::vector<DeviceActiveResult> GetSuccessList() const;

                    /**
                     * 判断参数 SuccessList 是否已赋值
                     * @return SuccessList 是否已赋值
                     * 
                     */
                    bool SuccessListHasBeenSet() const;

                private:

                    /**
                     * 设备激活返回数据
                     */
                    std::vector<DeviceActiveResult> m_deviceList;
                    bool m_deviceListHasBeenSet;

                    /**
                     * 设备激活失败返回数据
                     */
                    std::vector<DeviceActiveResult> m_failureList;
                    bool m_failureListHasBeenSet;

                    /**
                     * 设备激活成功返回数据
                     */
                    std::vector<DeviceActiveResult> m_successList;
                    bool m_successListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_ACTIVATETWECALLLICENSERESPONSE_H_
