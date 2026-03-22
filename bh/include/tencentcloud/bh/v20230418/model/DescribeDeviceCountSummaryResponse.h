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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEDEVICECOUNTSUMMARYRESPONSE_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEDEVICECOUNTSUMMARYRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bh/v20230418/model/DeviceCount.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * DescribeDeviceCountSummary返回参数结构体
                */
                class DescribeDeviceCountSummaryResponse : public AbstractModel
                {
                public:
                    DescribeDeviceCountSummaryResponse();
                    ~DescribeDeviceCountSummaryResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取各种类型的资产总数
                     * @return DeviceCountSet 各种类型的资产总数
                     * 
                     */
                    std::vector<DeviceCount> GetDeviceCountSet() const;

                    /**
                     * 判断参数 DeviceCountSet 是否已赋值
                     * @return DeviceCountSet 是否已赋值
                     * 
                     */
                    bool DeviceCountSetHasBeenSet() const;

                    /**
                     * 获取各种类型应用资产总数
                     * @return AppAssetCountSet 各种类型应用资产总数
                     * 
                     */
                    std::vector<DeviceCount> GetAppAssetCountSet() const;

                    /**
                     * 判断参数 AppAssetCountSet 是否已赋值
                     * @return AppAssetCountSet 是否已赋值
                     * 
                     */
                    bool AppAssetCountSetHasBeenSet() const;

                private:

                    /**
                     * 各种类型的资产总数
                     */
                    std::vector<DeviceCount> m_deviceCountSet;
                    bool m_deviceCountSetHasBeenSet;

                    /**
                     * 各种类型应用资产总数
                     */
                    std::vector<DeviceCount> m_appAssetCountSet;
                    bool m_appAssetCountSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_DESCRIBEDEVICECOUNTSUMMARYRESPONSE_H_
