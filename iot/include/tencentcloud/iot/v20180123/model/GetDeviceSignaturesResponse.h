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

#ifndef TENCENTCLOUD_IOT_V20180123_MODEL_GETDEVICESIGNATURESRESPONSE_H_
#define TENCENTCLOUD_IOT_V20180123_MODEL_GETDEVICESIGNATURESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iot/v20180123/model/DeviceSignature.h>


namespace TencentCloud
{
    namespace Iot
    {
        namespace V20180123
        {
            namespace Model
            {
                /**
                * GetDeviceSignatures返回参数结构体
                */
                class GetDeviceSignaturesResponse : public AbstractModel
                {
                public:
                    GetDeviceSignaturesResponse();
                    ~GetDeviceSignaturesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取设备绑定签名列表
                     * @return DeviceSignatures 设备绑定签名列表
                     * 
                     */
                    std::vector<DeviceSignature> GetDeviceSignatures() const;

                    /**
                     * 判断参数 DeviceSignatures 是否已赋值
                     * @return DeviceSignatures 是否已赋值
                     * 
                     */
                    bool DeviceSignaturesHasBeenSet() const;

                private:

                    /**
                     * 设备绑定签名列表
                     */
                    std::vector<DeviceSignature> m_deviceSignatures;
                    bool m_deviceSignaturesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOT_V20180123_MODEL_GETDEVICESIGNATURESRESPONSE_H_
