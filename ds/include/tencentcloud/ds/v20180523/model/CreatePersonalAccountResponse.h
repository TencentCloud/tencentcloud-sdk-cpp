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

#ifndef TENCENTCLOUD_DS_V20180523_MODEL_CREATEPERSONALACCOUNTRESPONSE_H_
#define TENCENTCLOUD_DS_V20180523_MODEL_CREATEPERSONALACCOUNTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ds
    {
        namespace V20180523
        {
            namespace Model
            {
                /**
                * CreatePersonalAccount返回参数结构体
                */
                class CreatePersonalAccountResponse : public AbstractModel
                {
                public:
                    CreatePersonalAccountResponse();
                    ~CreatePersonalAccountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取账号ID
                     * @return AccountResId 账号ID
                     * 
                     */
                    std::string GetAccountResId() const;

                    /**
                     * 判断参数 AccountResId 是否已赋值
                     * @return AccountResId 是否已赋值
                     * 
                     */
                    bool AccountResIdHasBeenSet() const;

                private:

                    /**
                     * 账号ID
                     */
                    std::string m_accountResId;
                    bool m_accountResIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DS_V20180523_MODEL_CREATEPERSONALACCOUNTRESPONSE_H_
