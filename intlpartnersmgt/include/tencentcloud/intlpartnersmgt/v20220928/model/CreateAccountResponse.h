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

#ifndef TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_CREATEACCOUNTRESPONSE_H_
#define TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_CREATEACCOUNTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Intlpartnersmgt
    {
        namespace V20220928
        {
            namespace Model
            {
                /**
                * CreateAccount返回参数结构体
                */
                class CreateAccountResponse : public AbstractModel
                {
                public:
                    CreateAccountResponse();
                    ~CreateAccountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取账号的uin
                     * @return Uin 账号的uin
                     */
                    std::string GetUin() const;

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     */
                    bool UinHasBeenSet() const;

                private:

                    /**
                     * 账号的uin
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_INTLPARTNERSMGT_V20220928_MODEL_CREATEACCOUNTRESPONSE_H_
