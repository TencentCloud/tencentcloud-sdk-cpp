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

#ifndef TENCENTCLOUD_TRRO_V20220325_MODEL_GETDEVICELICENSERESPONSE_H_
#define TENCENTCLOUD_TRRO_V20220325_MODEL_GETDEVICELICENSERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trro
    {
        namespace V20220325
        {
            namespace Model
            {
                /**
                * GetDeviceLicense返回参数结构体
                */
                class GetDeviceLicenseResponse : public AbstractModel
                {
                public:
                    GetDeviceLicenseResponse();
                    ~GetDeviceLicenseResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取指定设备已经绑定的可用license数量
                     * @return AvailableCount 指定设备已经绑定的可用license数量
                     * 
                     */
                    int64_t GetAvailableCount() const;

                    /**
                     * 判断参数 AvailableCount 是否已赋值
                     * @return AvailableCount 是否已赋值
                     * 
                     */
                    bool AvailableCountHasBeenSet() const;

                private:

                    /**
                     * 指定设备已经绑定的可用license数量
                     */
                    int64_t m_availableCount;
                    bool m_availableCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRRO_V20220325_MODEL_GETDEVICELICENSERESPONSE_H_
