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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_IMPORTEXTERNALDEVICERESPONSE_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_IMPORTEXTERNALDEVICERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ImportExternalDevice返回参数结构体
                */
                class ImportExternalDeviceResponse : public AbstractModel
                {
                public:
                    ImportExternalDeviceResponse();
                    ~ImportExternalDeviceResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取资产ID列表
                     * @return DeviceIdSet 资产ID列表
                     * 
                     */
                    std::vector<uint64_t> GetDeviceIdSet() const;

                    /**
                     * 判断参数 DeviceIdSet 是否已赋值
                     * @return DeviceIdSet 是否已赋值
                     * 
                     */
                    bool DeviceIdSetHasBeenSet() const;

                private:

                    /**
                     * 资产ID列表
                     */
                    std::vector<uint64_t> m_deviceIdSet;
                    bool m_deviceIdSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_IMPORTEXTERNALDEVICERESPONSE_H_
