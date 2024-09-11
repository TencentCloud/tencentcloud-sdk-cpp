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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_CALLISAPIREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_CALLISAPIREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * CallISAPI请求参数结构体
                */
                class CallISAPIRequest : public AbstractModel
                {
                public:
                    CallISAPIRequest();
                    ~CallISAPIRequest() = default;
                    std::string ToJsonString() const;


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
                     * 获取url 资源
                     * @return Url url 资源
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置url 资源
                     * @param _url url 资源
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取输入参数
                     * @return InputData 输入参数
                     * 
                     */
                    std::string GetInputData() const;

                    /**
                     * 设置输入参数
                     * @param _inputData 输入参数
                     * 
                     */
                    void SetInputData(const std::string& _inputData);

                    /**
                     * 判断参数 InputData 是否已赋值
                     * @return InputData 是否已赋值
                     * 
                     */
                    bool InputDataHasBeenSet() const;

                private:

                    /**
                     * 设备ID
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * url 资源
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 输入参数
                     */
                    std::string m_inputData;
                    bool m_inputDataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_CALLISAPIREQUEST_H_
