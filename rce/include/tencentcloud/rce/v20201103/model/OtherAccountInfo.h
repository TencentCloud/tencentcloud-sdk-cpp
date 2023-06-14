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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_OTHERACCOUNTINFO_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_OTHERACCOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * 其它账号信息。
                */
                class OtherAccountInfo : public AbstractModel
                {
                public:
                    OtherAccountInfo();
                    ~OtherAccountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取id
                     * @return AccountId id
                     * 
                     */
                    std::string GetAccountId() const;

                    /**
                     * 设置id
                     * @param _accountId id
                     * 
                     */
                    void SetAccountId(const std::string& _accountId);

                    /**
                     * 判断参数 AccountId 是否已赋值
                     * @return AccountId 是否已赋值
                     * 
                     */
                    bool AccountIdHasBeenSet() const;

                    /**
                     * 获取手机号
                     * @return MobilePhone 手机号
                     * 
                     */
                    std::string GetMobilePhone() const;

                    /**
                     * 设置手机号
                     * @param _mobilePhone 手机号
                     * 
                     */
                    void SetMobilePhone(const std::string& _mobilePhone);

                    /**
                     * 判断参数 MobilePhone 是否已赋值
                     * @return MobilePhone 是否已赋值
                     * 
                     */
                    bool MobilePhoneHasBeenSet() const;

                    /**
                     * 获取id
                     * @return DeviceId id
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置id
                     * @param _deviceId id
                     * 
                     */
                    void SetDeviceId(const std::string& _deviceId);

                    /**
                     * 判断参数 DeviceId 是否已赋值
                     * @return DeviceId 是否已赋值
                     * 
                     */
                    bool DeviceIdHasBeenSet() const;

                private:

                    /**
                     * id
                     */
                    std::string m_accountId;
                    bool m_accountIdHasBeenSet;

                    /**
                     * 手机号
                     */
                    std::string m_mobilePhone;
                    bool m_mobilePhoneHasBeenSet;

                    /**
                     * id
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_OTHERACCOUNTINFO_H_
