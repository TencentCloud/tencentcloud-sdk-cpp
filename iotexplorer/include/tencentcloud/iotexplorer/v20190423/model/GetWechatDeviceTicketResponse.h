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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETWECHATDEVICETICKETRESPONSE_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETWECHATDEVICETICKETRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/WXDeviceInfo.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * GetWechatDeviceTicket返回参数结构体
                */
                class GetWechatDeviceTicketResponse : public AbstractModel
                {
                public:
                    GetWechatDeviceTicketResponse();
                    ~GetWechatDeviceTicketResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取微信设备信息
                     * @return WXDeviceInfo 微信设备信息
                     * 
                     */
                    WXDeviceInfo GetWXDeviceInfo() const;

                    /**
                     * 判断参数 WXDeviceInfo 是否已赋值
                     * @return WXDeviceInfo 是否已赋值
                     * 
                     */
                    bool WXDeviceInfoHasBeenSet() const;

                private:

                    /**
                     * 微信设备信息
                     */
                    WXDeviceInfo m_wXDeviceInfo;
                    bool m_wXDeviceInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETWECHATDEVICETICKETRESPONSE_H_
