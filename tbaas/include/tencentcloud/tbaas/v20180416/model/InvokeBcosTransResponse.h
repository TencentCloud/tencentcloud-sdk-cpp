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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_INVOKEBCOSTRANSRESPONSE_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_INVOKEBCOSTRANSRESPONSE_H_

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
                * InvokeBcosTrans返回参数结构体
                */
                class InvokeBcosTransResponse : public AbstractModel
                {
                public:
                    InvokeBcosTransResponse();
                    ~InvokeBcosTransResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取交易结果json字符串
                     * @return TransactionRsp 交易结果json字符串
                     */
                    std::string GetTransactionRsp() const;

                    /**
                     * 判断参数 TransactionRsp 是否已赋值
                     * @return TransactionRsp 是否已赋值
                     */
                    bool TransactionRspHasBeenSet() const;

                private:

                    /**
                     * 交易结果json字符串
                     */
                    std::string m_transactionRsp;
                    bool m_transactionRspHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_INVOKEBCOSTRANSRESPONSE_H_
