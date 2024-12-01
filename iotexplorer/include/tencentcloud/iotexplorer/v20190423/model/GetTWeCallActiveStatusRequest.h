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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETTWECALLACTIVESTATUSREQUEST_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETTWECALLACTIVESTATUSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotexplorer/v20190423/model/TWeCallInfo.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * GetTWeCallActiveStatus请求参数结构体
                */
                class GetTWeCallActiveStatusRequest : public AbstractModel
                {
                public:
                    GetTWeCallActiveStatusRequest();
                    ~GetTWeCallActiveStatusRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取参数已弃用，不用传参
                     * @return MiniProgramAppId 参数已弃用，不用传参
                     * @deprecated
                     */
                    std::string GetMiniProgramAppId() const;

                    /**
                     * 设置参数已弃用，不用传参
                     * @param _miniProgramAppId 参数已弃用，不用传参
                     * @deprecated
                     */
                    void SetMiniProgramAppId(const std::string& _miniProgramAppId);

                    /**
                     * 判断参数 MiniProgramAppId 是否已赋值
                     * @return MiniProgramAppId 是否已赋值
                     * @deprecated
                     */
                    bool MiniProgramAppIdHasBeenSet() const;

                    /**
                     * 获取设备列表
                     * @return DeviceList 设备列表
                     * 
                     */
                    std::vector<TWeCallInfo> GetDeviceList() const;

                    /**
                     * 设置设备列表
                     * @param _deviceList 设备列表
                     * 
                     */
                    void SetDeviceList(const std::vector<TWeCallInfo>& _deviceList);

                    /**
                     * 判断参数 DeviceList 是否已赋值
                     * @return DeviceList 是否已赋值
                     * 
                     */
                    bool DeviceListHasBeenSet() const;

                private:

                    /**
                     * 参数已弃用，不用传参
                     */
                    std::string m_miniProgramAppId;
                    bool m_miniProgramAppIdHasBeenSet;

                    /**
                     * 设备列表
                     */
                    std::vector<TWeCallInfo> m_deviceList;
                    bool m_deviceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_GETTWECALLACTIVESTATUSREQUEST_H_
