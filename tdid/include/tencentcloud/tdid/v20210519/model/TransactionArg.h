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

#ifndef TENCENTCLOUD_TDID_V20210519_MODEL_TRANSACTIONARG_H_
#define TENCENTCLOUD_TDID_V20210519_MODEL_TRANSACTIONARG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdid
    {
        namespace V20210519
        {
            namespace Model
            {
                /**
                * 创建凭证第二个
                */
                class TransactionArg : public AbstractModel
                {
                public:
                    TransactionArg();
                    ~TransactionArg() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取凭证did
                     * @return InvokerTDid 凭证did
                     */
                    std::string GetInvokerTDid() const;

                    /**
                     * 设置凭证did
                     * @param InvokerTDid 凭证did
                     */
                    void SetInvokerTDid(const std::string& _invokerTDid);

                    /**
                     * 判断参数 InvokerTDid 是否已赋值
                     * @return InvokerTDid 是否已赋值
                     */
                    bool InvokerTDidHasBeenSet() const;

                private:

                    /**
                     * 凭证did
                     */
                    std::string m_invokerTDid;
                    bool m_invokerTDidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDID_V20210519_MODEL_TRANSACTIONARG_H_
