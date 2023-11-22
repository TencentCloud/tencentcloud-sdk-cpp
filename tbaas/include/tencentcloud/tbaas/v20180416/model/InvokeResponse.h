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

#ifndef TENCENTCLOUD_TBAAS_V20180416_MODEL_INVOKERESPONSE_H_
#define TENCENTCLOUD_TBAAS_V20180416_MODEL_INVOKERESPONSE_H_

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
                * Invoke返回参数结构体
                */
                class InvokeResponse : public AbstractModel
                {
                public:
                    InvokeResponse();
                    ~InvokeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取交易ID
                     * @return Txid 交易ID
                     * @deprecated
                     */
                    std::string GetTxid() const;

                    /**
                     * 判断参数 Txid 是否已赋值
                     * @return Txid 是否已赋值
                     * @deprecated
                     */
                    bool TxidHasBeenSet() const;

                    /**
                     * 获取交易执行结果
                     * @return Events 交易执行结果
                     * 
                     */
                    std::string GetEvents() const;

                    /**
                     * 判断参数 Events 是否已赋值
                     * @return Events 是否已赋值
                     * 
                     */
                    bool EventsHasBeenSet() const;

                    /**
                     * 获取交易ID
                     * @return TxId 交易ID
                     * 
                     */
                    std::string GetTxId() const;

                    /**
                     * 判断参数 TxId 是否已赋值
                     * @return TxId 是否已赋值
                     * 
                     */
                    bool TxIdHasBeenSet() const;

                private:

                    /**
                     * 交易ID
                     */
                    std::string m_txid;
                    bool m_txidHasBeenSet;

                    /**
                     * 交易执行结果
                     */
                    std::string m_events;
                    bool m_eventsHasBeenSet;

                    /**
                     * 交易ID
                     */
                    std::string m_txId;
                    bool m_txIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBAAS_V20180416_MODEL_INVOKERESPONSE_H_
