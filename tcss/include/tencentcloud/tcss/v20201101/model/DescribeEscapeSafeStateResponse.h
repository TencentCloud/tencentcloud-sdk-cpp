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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEESCAPESAFESTATERESPONSE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEESCAPESAFESTATERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * DescribeEscapeSafeState返回参数结构体
                */
                class DescribeEscapeSafeStateResponse : public AbstractModel
                {
                public:
                    DescribeEscapeSafeStateResponse();
                    ~DescribeEscapeSafeStateResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Unsafe：存在风险，Safe：暂无风险,UnKnown:未知风险
                     * @return IsSafe Unsafe：存在风险，Safe：暂无风险,UnKnown:未知风险
                     * 
                     */
                    std::string GetIsSafe() const;

                    /**
                     * 判断参数 IsSafe 是否已赋值
                     * @return IsSafe 是否已赋值
                     * 
                     */
                    bool IsSafeHasBeenSet() const;

                private:

                    /**
                     * Unsafe：存在风险，Safe：暂无风险,UnKnown:未知风险
                     */
                    std::string m_isSafe;
                    bool m_isSafeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBEESCAPESAFESTATERESPONSE_H_
