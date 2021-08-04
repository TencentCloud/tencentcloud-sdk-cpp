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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYREFUNDRESPONSE_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYREFUNDRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * QueryRefund返回参数结构体
                */
                class QueryRefundResponse : public AbstractModel
                {
                public:
                    QueryRefundResponse();
                    ~QueryRefundResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取退款状态码，退款提交成功后返回  1：退款中；  2：退款成功；  3：退款失败。
                     * @return State 退款状态码，退款提交成功后返回  1：退款中；  2：退款成功；  3：退款失败。
                     */
                    std::string GetState() const;

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     */
                    bool StateHasBeenSet() const;

                private:

                    /**
                     * 退款状态码，退款提交成功后返回  1：退款中；  2：退款成功；  3：退款失败。
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_QUERYREFUNDRESPONSE_H_
