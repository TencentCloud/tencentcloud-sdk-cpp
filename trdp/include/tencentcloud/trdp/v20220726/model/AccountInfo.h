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

#ifndef TENCENTCLOUD_TRDP_V20220726_MODEL_ACCOUNTINFO_H_
#define TENCENTCLOUD_TRDP_V20220726_MODEL_ACCOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trdp/v20220726/model/UniversalAccountInfo.h>


namespace TencentCloud
{
    namespace Trdp
    {
        namespace V20220726
        {
            namespace Model
            {
                /**
                * 账号信息
                */
                class AccountInfo : public AbstractModel
                {
                public:
                    AccountInfo();
                    ~AccountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户账号类型：
1-手机号；
2-IMEI；
3-IDFA；
100-SSID类型
                     * @return AccountType 用户账号类型：
1-手机号；
2-IMEI；
3-IDFA；
100-SSID类型
                     * 
                     */
                    int64_t GetAccountType() const;

                    /**
                     * 设置用户账号类型：
1-手机号；
2-IMEI；
3-IDFA；
100-SSID类型
                     * @param _accountType 用户账号类型：
1-手机号；
2-IMEI；
3-IDFA；
100-SSID类型
                     * 
                     */
                    void SetAccountType(const int64_t& _accountType);

                    /**
                     * 判断参数 AccountType 是否已赋值
                     * @return AccountType 是否已赋值
                     * 
                     */
                    bool AccountTypeHasBeenSet() const;

                    /**
                     * 获取通用账号信息，当AccountType为1、2、3、100时必填
                     * @return UniversalAccount 通用账号信息，当AccountType为1、2、3、100时必填
                     * 
                     */
                    UniversalAccountInfo GetUniversalAccount() const;

                    /**
                     * 设置通用账号信息，当AccountType为1、2、3、100时必填
                     * @param _universalAccount 通用账号信息，当AccountType为1、2、3、100时必填
                     * 
                     */
                    void SetUniversalAccount(const UniversalAccountInfo& _universalAccount);

                    /**
                     * 判断参数 UniversalAccount 是否已赋值
                     * @return UniversalAccount 是否已赋值
                     * 
                     */
                    bool UniversalAccountHasBeenSet() const;

                private:

                    /**
                     * 用户账号类型：
1-手机号；
2-IMEI；
3-IDFA；
100-SSID类型
                     */
                    int64_t m_accountType;
                    bool m_accountTypeHasBeenSet;

                    /**
                     * 通用账号信息，当AccountType为1、2、3、100时必填
                     */
                    UniversalAccountInfo m_universalAccount;
                    bool m_universalAccountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRDP_V20220726_MODEL_ACCOUNTINFO_H_
