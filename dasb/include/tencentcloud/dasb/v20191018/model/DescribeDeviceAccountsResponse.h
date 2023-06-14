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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBEDEVICEACCOUNTSRESPONSE_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBEDEVICEACCOUNTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dasb/v20191018/model/DeviceAccount.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * DescribeDeviceAccounts返回参数结构体
                */
                class DescribeDeviceAccountsResponse : public AbstractModel
                {
                public:
                    DescribeDeviceAccountsResponse();
                    ~DescribeDeviceAccountsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取记录总数
                     * @return TotalCount 记录总数
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取账号信息列表
                     * @return DeviceAccountSet 账号信息列表
                     * 
                     */
                    std::vector<DeviceAccount> GetDeviceAccountSet() const;

                    /**
                     * 判断参数 DeviceAccountSet 是否已赋值
                     * @return DeviceAccountSet 是否已赋值
                     * 
                     */
                    bool DeviceAccountSetHasBeenSet() const;

                private:

                    /**
                     * 记录总数
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 账号信息列表
                     */
                    std::vector<DeviceAccount> m_deviceAccountSet;
                    bool m_deviceAccountSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_DESCRIBEDEVICEACCOUNTSRESPONSE_H_
