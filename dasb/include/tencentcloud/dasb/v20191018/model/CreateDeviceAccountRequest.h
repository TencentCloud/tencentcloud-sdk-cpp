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

#ifndef TENCENTCLOUD_DASB_V20191018_MODEL_CREATEDEVICEACCOUNTREQUEST_H_
#define TENCENTCLOUD_DASB_V20191018_MODEL_CREATEDEVICEACCOUNTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dasb
    {
        namespace V20191018
        {
            namespace Model
            {
                /**
                * CreateDeviceAccount请求参数结构体
                */
                class CreateDeviceAccountRequest : public AbstractModel
                {
                public:
                    CreateDeviceAccountRequest();
                    ~CreateDeviceAccountRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主机记录ID
                     * @return DeviceId 主机记录ID
                     * 
                     */
                    uint64_t GetDeviceId() const;

                    /**
                     * 设置主机记录ID
                     * @param _deviceId 主机记录ID
                     * 
                     */
                    void SetDeviceId(const uint64_t& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                    /**
                     * 获取账号名
                     * @return Account 账号名
                     * 
                     */
                    std::string GetAccount() const;

                    /**
                     * 设置账号名
                     * @param _account 账号名
                     * 
                     */
                    void SetAccount(const std::string& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                private:

                    /**
                     * 主机记录ID
                     */
                    uint64_t m_deviceId;
                    bool m_deviceIdHasBeenSet;

                    /**
                     * 账号名
                     */
                    std::string m_account;
                    bool m_accountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DASB_V20191018_MODEL_CREATEDEVICEACCOUNTREQUEST_H_
