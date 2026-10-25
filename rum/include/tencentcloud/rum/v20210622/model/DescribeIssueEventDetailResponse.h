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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUEEVENTDETAILRESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUEEVENTDETAILRESPONSE_H_

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
                * DescribeIssueEventDetail返回参数结构体
                */
                class DescribeIssueEventDetailResponse : public AbstractModel
                {
                public:
                    DescribeIssueEventDetailResponse();
                    ~DescribeIssueEventDetailResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>业务结果 JSON 字符串；前端会再做一次 JSON 解析。Result 内业务 JSON 为 Data，内容是单个事件详情</p>
                     * @return Result <p>业务结果 JSON 字符串；前端会再做一次 JSON 解析。Result 内业务 JSON 为 Data，内容是单个事件详情</p>
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
                     * 获取<p>错误信息；正常返回时为空</p>
                     * @return ErrorMsg <p>错误信息；正常返回时为空</p>
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
                     * <p>业务结果 JSON 字符串；前端会再做一次 JSON 解析。Result 内业务 JSON 为 Data，内容是单个事件详情</p>
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * <p>错误信息；正常返回时为空</p>
                     */
                    std::string m_errorMsg;
                    bool m_errorMsgHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEISSUEEVENTDETAILRESPONSE_H_
