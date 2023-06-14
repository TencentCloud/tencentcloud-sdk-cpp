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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_LISTLOGPAYLOADRESPONSE_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_LISTLOGPAYLOADRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotcloud/v20180614/model/PayloadLogItem.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * ListLogPayload返回参数结构体
                */
                class ListLogPayloadResponse : public AbstractModel
                {
                public:
                    ListLogPayloadResponse();
                    ~ListLogPayloadResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取日志上下文
                     * @return Context 日志上下文
                     * 
                     */
                    std::string GetContext() const;

                    /**
                     * 判断参数 Context 是否已赋值
                     * @return Context 是否已赋值
                     * 
                     */
                    bool ContextHasBeenSet() const;

                    /**
                     * 获取是否还有日志，如有仍有日志，下次查询的请求带上当前请求返回的Context
                     * @return Listover 是否还有日志，如有仍有日志，下次查询的请求带上当前请求返回的Context
                     * 
                     */
                    bool GetListover() const;

                    /**
                     * 判断参数 Listover 是否已赋值
                     * @return Listover 是否已赋值
                     * 
                     */
                    bool ListoverHasBeenSet() const;

                    /**
                     * 获取日志列表
                     * @return Results 日志列表
                     * 
                     */
                    std::vector<PayloadLogItem> GetResults() const;

                    /**
                     * 判断参数 Results 是否已赋值
                     * @return Results 是否已赋值
                     * 
                     */
                    bool ResultsHasBeenSet() const;

                private:

                    /**
                     * 日志上下文
                     */
                    std::string m_context;
                    bool m_contextHasBeenSet;

                    /**
                     * 是否还有日志，如有仍有日志，下次查询的请求带上当前请求返回的Context
                     */
                    bool m_listover;
                    bool m_listoverHasBeenSet;

                    /**
                     * 日志列表
                     */
                    std::vector<PayloadLogItem> m_results;
                    bool m_resultsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_LISTLOGPAYLOADRESPONSE_H_
