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

#ifndef TENCENTCLOUD_IECP_V20210914_MODEL_DELETEIOTDEVICEBATCHREQUEST_H_
#define TENCENTCLOUD_IECP_V20210914_MODEL_DELETEIOTDEVICEBATCHREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iecp
    {
        namespace V20210914
        {
            namespace Model
            {
                /**
                * DeleteIotDeviceBatch请求参数结构体
                */
                class DeleteIotDeviceBatchRequest : public AbstractModel
                {
                public:
                    DeleteIotDeviceBatchRequest();
                    ~DeleteIotDeviceBatchRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取无
                     * @return DeviceIDList 无
                     */
                    std::vector<uint64_t> GetDeviceIDList() const;

                    /**
                     * 设置无
                     * @param DeviceIDList 无
                     */
                    void SetDeviceIDList(const std::vector<uint64_t>& _deviceIDList);

                    /**
                     * 判断参数 DeviceIDList 是否已赋值
                     * @return DeviceIDList 是否已赋值
                     */
                    bool DeviceIDListHasBeenSet() const;

                private:

                    /**
                     * 无
                     */
                    std::vector<uint64_t> m_deviceIDList;
                    bool m_deviceIDListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IECP_V20210914_MODEL_DELETEIOTDEVICEBATCHREQUEST_H_
