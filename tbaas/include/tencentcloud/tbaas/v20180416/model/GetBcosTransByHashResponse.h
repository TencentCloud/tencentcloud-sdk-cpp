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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_GETBCOSTRANSBYHASHRESPONSE_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_GETBCOSTRANSBYHASHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbaas
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * GetBcosTransByHash返回参数结构体
                */
                class GetBcosTransByHashResponse : public AbstractModel
                {
                public:
                    GetBcosTransByHashResponse();
                    ~GetBcosTransByHashResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取交易信息json字符串
                     * @return TransactionJson 交易信息json字符串
                     */
                    std::string GetTransactionJson() const;

                    /**
                     * 判断参数 TransactionJson 是否已赋值
                     * @return TransactionJson 是否已赋值
                     */
                    bool TransactionJsonHasBeenSet() const;

                private:

                    /**
                     * 交易信息json字符串
                     */
                    std::string m_transactionJson;
                    bool m_transactionJsonHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_GETBCOSTRANSBYHASHRESPONSE_H_
