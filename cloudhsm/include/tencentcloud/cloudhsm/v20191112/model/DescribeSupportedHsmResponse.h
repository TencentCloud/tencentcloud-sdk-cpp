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

#ifndef TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBESUPPORTEDHSMRESPONSE_H_
#define TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBESUPPORTEDHSMRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cloudhsm/v20191112/model/DeviceInfo.h>


namespace TencentCloud
{
    namespace Cloudhsm
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * DescribeSupportedHsm返回参数结构体
                */
                class DescribeSupportedHsmResponse : public AbstractModel
                {
                public:
                    DescribeSupportedHsmResponse();
                    ~DescribeSupportedHsmResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取当前地域所支持的设备列表
                     * @return DeviceTypes 当前地域所支持的设备列表
                     * 
                     */
                    std::vector<DeviceInfo> GetDeviceTypes() const;

                    /**
                     * 判断参数 DeviceTypes 是否已赋值
                     * @return DeviceTypes 是否已赋值
                     * 
                     */
                    bool DeviceTypesHasBeenSet() const;

                private:

                    /**
                     * 当前地域所支持的设备列表
                     */
                    std::vector<DeviceInfo> m_deviceTypes;
                    bool m_deviceTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLOUDHSM_V20191112_MODEL_DESCRIBESUPPORTEDHSMRESPONSE_H_
