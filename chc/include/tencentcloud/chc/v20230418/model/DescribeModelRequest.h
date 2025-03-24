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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEMODELREQUEST_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEMODELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeModel请求参数结构体
                */
                class DescribeModelRequest : public AbstractModel
                {
                public:
                    DescribeModelRequest();
                    ~DescribeModelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取服务器设备型号
                     * @return DevModel 服务器设备型号
                     * 
                     */
                    std::string GetDevModel() const;

                    /**
                     * 设置服务器设备型号
                     * @param _devModel 服务器设备型号
                     * 
                     */
                    void SetDevModel(const std::string& _devModel);

                    /**
                     * 判断参数 DevModel 是否已赋值
                     * @return DevModel 是否已赋值
                     * 
                     */
                    bool DevModelHasBeenSet() const;

                    /**
                     * 获取园区ID
                     * @return CampusId 园区ID
                     * 
                     */
                    uint64_t GetCampusId() const;

                    /**
                     * 设置园区ID
                     * @param _campusId 园区ID
                     * 
                     */
                    void SetCampusId(const uint64_t& _campusId);

                    /**
                     * 判断参数 CampusId 是否已赋值
                     * @return CampusId 是否已赋值
                     * 
                     */
                    bool CampusIdHasBeenSet() const;

                    /**
                     * 获取设备类型，服务器传入 server，网络设备传入 netDevice
                     * @return DeviceType 设备类型，服务器传入 server，网络设备传入 netDevice
                     * 
                     */
                    std::string GetDeviceType() const;

                    /**
                     * 设置设备类型，服务器传入 server，网络设备传入 netDevice
                     * @param _deviceType 设备类型，服务器传入 server，网络设备传入 netDevice
                     * 
                     */
                    void SetDeviceType(const std::string& _deviceType);

                    /**
                     * 判断参数 DeviceType 是否已赋值
                     * @return DeviceType 是否已赋值
                     * 
                     */
                    bool DeviceTypeHasBeenSet() const;

                    /**
                     * 获取是否只返回已评估的版本
                     * @return Checked 是否只返回已评估的版本
                     * 
                     */
                    bool GetChecked() const;

                    /**
                     * 设置是否只返回已评估的版本
                     * @param _checked 是否只返回已评估的版本
                     * 
                     */
                    void SetChecked(const bool& _checked);

                    /**
                     * 判断参数 Checked 是否已赋值
                     * @return Checked 是否已赋值
                     * 
                     */
                    bool CheckedHasBeenSet() const;

                private:

                    /**
                     * 服务器设备型号
                     */
                    std::string m_devModel;
                    bool m_devModelHasBeenSet;

                    /**
                     * 园区ID
                     */
                    uint64_t m_campusId;
                    bool m_campusIdHasBeenSet;

                    /**
                     * 设备类型，服务器传入 server，网络设备传入 netDevice
                     */
                    std::string m_deviceType;
                    bool m_deviceTypeHasBeenSet;

                    /**
                     * 是否只返回已评估的版本
                     */
                    bool m_checked;
                    bool m_checkedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_DESCRIBEMODELREQUEST_H_
