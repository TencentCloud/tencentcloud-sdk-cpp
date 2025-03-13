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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESUBSCRIBERETURNABLERESPONSE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESUBSCRIBERETURNABLERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * DescribeSubscribeReturnable返回参数结构体
                */
                class DescribeSubscribeReturnableResponse : public AbstractModel
                {
                public:
                    DescribeSubscribeReturnableResponse();
                    ~DescribeSubscribeReturnableResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取实例是否支持退还/退货
                     * @return IsReturnable 实例是否支持退还/退货
                     * 
                     */
                    bool GetIsReturnable() const;

                    /**
                     * 判断参数 IsReturnable 是否已赋值
                     * @return IsReturnable 是否已赋值
                     * 
                     */
                    bool IsReturnableHasBeenSet() const;

                    /**
                     * 获取不支持退还的原因
                     * @return ReturnFailMessage 不支持退还的原因
                     * 
                     */
                    std::string GetReturnFailMessage() const;

                    /**
                     * 判断参数 ReturnFailMessage 是否已赋值
                     * @return ReturnFailMessage 是否已赋值
                     * 
                     */
                    bool ReturnFailMessageHasBeenSet() const;

                private:

                    /**
                     * 实例是否支持退还/退货
                     */
                    bool m_isReturnable;
                    bool m_isReturnableHasBeenSet;

                    /**
                     * 不支持退还的原因
                     */
                    std::string m_returnFailMessage;
                    bool m_returnFailMessageHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_DESCRIBESUBSCRIBERETURNABLERESPONSE_H_
