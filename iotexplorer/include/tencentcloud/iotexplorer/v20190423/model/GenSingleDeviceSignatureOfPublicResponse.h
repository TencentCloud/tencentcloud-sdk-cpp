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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GENSINGLEDEVICESIGNATUREOFPUBLICRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GENSINGLEDEVICESIGNATUREOFPUBLICRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/DeviceSignatureInfo.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * GenSingleDeviceSignatureOfPublic返回参数结构体
                */
                class GenSingleDeviceSignatureOfPublicResponse : public AbstractModel
                {
                public:
                    GenSingleDeviceSignatureOfPublicResponse();
                    ~GenSingleDeviceSignatureOfPublicResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取设备签名
                     * @return DeviceSignature 设备签名
                     * 
                     */
                    DeviceSignatureInfo GetDeviceSignature() const;

                    /**
                     * 判断参数 DeviceSignature 是否已赋值
                     * @return DeviceSignature 是否已赋值
                     * 
                     */
                    bool DeviceSignatureHasBeenSet() const;

                private:

                    /**
                     * 设备签名
                     */
                    DeviceSignatureInfo m_deviceSignature;
                    bool m_deviceSignatureHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GENSINGLEDEVICESIGNATUREOFPUBLICRESPONSE_H_
