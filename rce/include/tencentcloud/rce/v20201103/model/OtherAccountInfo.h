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
                     * 获取其他账号信息；
AccountType是10004时，填入中国大陆标准11位手机号的MD5值
AccountType是10005时，填入中国大陆标准11位手机号的SHA256值
注释：
MD5手机号加密方式，使用中国大陆11位手机号进行MD5加密，加密后取32位小写值。
SHA256手机号加密方式，使用中国大陆11位手机号进行SHA256加密，加密后取64位小写值。
                     * @return AccountId 其他账号信息；
AccountType是10004时，填入中国大陆标准11位手机号的MD5值
AccountType是10005时，填入中国大陆标准11位手机号的SHA256值
注释：
MD5手机号加密方式，使用中国大陆11位手机号进行MD5加密，加密后取32位小写值。
SHA256手机号加密方式，使用中国大陆11位手机号进行SHA256加密，加密后取64位小写值。
                     * 
                     */
                    std::string GetAccountId() const;

                    /**
                     * 设置其他账号信息；
AccountType是10004时，填入中国大陆标准11位手机号的MD5值
AccountType是10005时，填入中国大陆标准11位手机号的SHA256值
注释：
MD5手机号加密方式，使用中国大陆11位手机号进行MD5加密，加密后取32位小写值。
SHA256手机号加密方式，使用中国大陆11位手机号进行SHA256加密，加密后取64位小写值。
                     * @param _accountId 其他账号信息；
AccountType是10004时，填入中国大陆标准11位手机号的MD5值
AccountType是10005时，填入中国大陆标准11位手机号的SHA256值
注释：
MD5手机号加密方式，使用中国大陆11位手机号进行MD5加密，加密后取32位小写值。
SHA256手机号加密方式，使用中国大陆11位手机号进行SHA256加密，加密后取64位小写值。
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
                     * 获取账号绑定的MD5或SHA256加密的手机号（该字段已不推荐使用）。
注释：支持标准中国大陆11位手机号MD5加密后位的32位小写字符串；
     支持标准中国大陆11位手机号SHA256加密后位的64位小写字符串。
                     * @return MobilePhone 账号绑定的MD5或SHA256加密的手机号（该字段已不推荐使用）。
注释：支持标准中国大陆11位手机号MD5加密后位的32位小写字符串；
     支持标准中国大陆11位手机号SHA256加密后位的64位小写字符串。
                     * 
                     */
                    std::string GetMobilePhone() const;

                    /**
                     * 设置账号绑定的MD5或SHA256加密的手机号（该字段已不推荐使用）。
注释：支持标准中国大陆11位手机号MD5加密后位的32位小写字符串；
     支持标准中国大陆11位手机号SHA256加密后位的64位小写字符串。
                     * @param _mobilePhone 账号绑定的MD5或SHA256加密的手机号（该字段已不推荐使用）。
注释：支持标准中国大陆11位手机号MD5加密后位的32位小写字符串；
     支持标准中国大陆11位手机号SHA256加密后位的64位小写字符串。
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
                     * 获取用户设备号（该字段已不推荐使用）。
                     * @return DeviceId 用户设备号（该字段已不推荐使用）。
                     * 
                     */
                    std::string GetDeviceId() const;

                    /**
                     * 设置用户设备号（该字段已不推荐使用）。
                     * @param _deviceId 用户设备号（该字段已不推荐使用）。
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
                     * 其他账号信息；
AccountType是10004时，填入中国大陆标准11位手机号的MD5值
AccountType是10005时，填入中国大陆标准11位手机号的SHA256值
注释：
MD5手机号加密方式，使用中国大陆11位手机号进行MD5加密，加密后取32位小写值。
SHA256手机号加密方式，使用中国大陆11位手机号进行SHA256加密，加密后取64位小写值。
                     */
                    std::string m_accountId;
                    bool m_accountIdHasBeenSet;

                    /**
                     * 账号绑定的MD5或SHA256加密的手机号（该字段已不推荐使用）。
注释：支持标准中国大陆11位手机号MD5加密后位的32位小写字符串；
     支持标准中国大陆11位手机号SHA256加密后位的64位小写字符串。
                     */
                    std::string m_mobilePhone;
                    bool m_mobilePhoneHasBeenSet;

                    /**
                     * 用户设备号（该字段已不推荐使用）。
                     */
                    std::string m_deviceId;
                    bool m_deviceIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_OTHERACCOUNTINFO_H_
