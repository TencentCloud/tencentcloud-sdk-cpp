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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBEDEVICECLIENTKEYRESPONSE_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBEDEVICECLIENTKEYRESPONSE_H_

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
                * DescribeDeviceClientKey返回参数结构体
                */
                class DescribeDeviceClientKeyResponse : public AbstractModel
                {
                public:
                    DescribeDeviceClientKeyResponse();
                    ~DescribeDeviceClientKeyResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取设备的私钥
                     * @return ClientKey 设备的私钥
                     * 
                     */
                    std::string GetClientKey() const;

                    /**
                     * 判断参数 ClientKey 是否已赋值
                     * @return ClientKey 是否已赋值
                     * 
                     */
                    bool ClientKeyHasBeenSet() const;

                private:

                    /**
                     * 设备的私钥
                     */
                    std::string m_clientKey;
                    bool m_clientKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_DESCRIBEDEVICECLIENTKEYRESPONSE_H_
