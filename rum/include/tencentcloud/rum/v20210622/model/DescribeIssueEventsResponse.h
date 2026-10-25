/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUEEVENTSRESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUEEVENTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeIssueEvents返回参数结构体
                */
                class DescribeIssueEventsResponse : public AbstractModel
                {
                public:
                    DescribeIssueEventsResponse();
                    ~DescribeIssueEventsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取业务结果 JSON 字符串；前端会再做一次 JSON 解析。Result 内业务 JSON 为 Data，内容是 total + items
                     * @return Result 业务结果 JSON 字符串；前端会再做一次 JSON 解析。Result 内业务 JSON 为 Data，内容是 total + items
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取错误信息；正常返回时为空
                     * @return ErrorMsg 错误信息；正常返回时为空
                     * 
                     */
                    std::string GetErrorMsg() const;

                    /**
                     * 判断参数 ErrorMsg 是否已赋值
                     * @return ErrorMsg 是否已赋值
                     * 
                     */
                    bool ErrorMsgHasBeenSet() const;

                private:

                    /**
                     * 业务结果 JSON 字符串；前端会再做一次 JSON 解析。Result 内业务 JSON 为 Data，内容是 total + items
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 错误信息；正常返回时为空
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUEEVENTSRESPONSE_H_
