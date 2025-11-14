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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_IMPORTEXTERNALDEVICEREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_IMPORTEXTERNALDEVICEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bh/v20230418/model/ExternalDevice.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * ImportExternalDevice请求参数结构体
                */
                class ImportExternalDeviceRequest : public AbstractModel
                {
                public:
                    ImportExternalDeviceRequest();
                    ~ImportExternalDeviceRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取资产参数列表
                     * @return DeviceSet 资产参数列表
                     * 
                     */
                    std::vector<ExternalDevice> GetDeviceSet() const;

                    /**
                     * 设置资产参数列表
                     * @param _deviceSet 资产参数列表
                     * 
                     */
                    void SetDeviceSet(const std::vector<ExternalDevice>& _deviceSet);

                    /**
                     * 判断参数 DeviceSet 是否已赋值
                     * @return DeviceSet 是否已赋值
                     * 
                     */
                    bool DeviceSetHasBeenSet() const;

                    /**
                     * 获取 资产所属云账号id
                     * @return AccountId  资产所属云账号id
                     * 
                     */
                    uint64_t GetAccountId() const;

                    /**
                     * 设置 资产所属云账号id
                     * @param _accountId  资产所属云账号id
                     * 
                     */
                    void SetAccountId(const uint64_t& _accountId);

                    /**
                     * 判断参数 AccountId 是否已赋值
                     * @return AccountId 是否已赋值
                     * 
                     */
                    bool AccountIdHasBeenSet() const;

                private:

                    /**
                     * 资产参数列表
                     */
                    std::vector<ExternalDevice> m_deviceSet;
                    bool m_deviceSetHasBeenSet;

                    /**
                     *  资产所属云账号id
                     */
                    uint64_t m_accountId;
                    bool m_accountIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_IMPORTEXTERNALDEVICEREQUEST_H_
