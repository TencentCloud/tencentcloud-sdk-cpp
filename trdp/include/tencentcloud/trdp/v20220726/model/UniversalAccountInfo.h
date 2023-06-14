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

#ifndef TENCENTCLOUD_TRDP_V20220726_MODEL_UNIVERSALACCOUNTINFO_H_
#define TENCENTCLOUD_TRDP_V20220726_MODEL_UNIVERSALACCOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trdp
    {
        namespace V20220726
        {
            namespace Model
            {
                /**
                * 通用账号信息
                */
                class UniversalAccountInfo : public AbstractModel
                {
                public:
                    UniversalAccountInfo();
                    ~UniversalAccountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取账号值：
当账户类型为1时，填入手机号，如135****3695；
当账户类型为2、3或100时，填入对应的值。
                     * @return AccountId 账号值：
当账户类型为1时，填入手机号，如135****3695；
当账户类型为2、3或100时，填入对应的值。
                     * 
                     */
                    std::string GetAccountId() const;

                    /**
                     * 设置账号值：
当账户类型为1时，填入手机号，如135****3695；
当账户类型为2、3或100时，填入对应的值。
                     * @param _accountId 账号值：
当账户类型为1时，填入手机号，如135****3695；
当账户类型为2、3或100时，填入对应的值。
                     * 
                     */
                    void SetAccountId(const std::string& _accountId);

                    /**
                     * 判断参数 AccountId 是否已赋值
                     * @return AccountId 是否已赋值
                     * 
                     */
                    bool AccountIdHasBeenSet() const;

                private:

                    /**
                     * 账号值：
当账户类型为1时，填入手机号，如135****3695；
当账户类型为2、3或100时，填入对应的值。
                     */
                    std::string m_accountId;
                    bool m_accountIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRDP_V20220726_MODEL_UNIVERSALACCOUNTINFO_H_
