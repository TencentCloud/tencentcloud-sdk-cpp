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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEAICALLEXTRACTRESULTRESPONSE_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEAICALLEXTRACTRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/AICallExtractResultElement.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * DescribeAICallExtractResult返回参数结构体
                */
                class DescribeAICallExtractResultResponse : public AbstractModel
                {
                public:
                    DescribeAICallExtractResultResponse();
                    ~DescribeAICallExtractResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取结果列表
                     * @return ResultList 结果列表
                     * 
                     */
                    std::vector<AICallExtractResultElement> GetResultList() const;

                    /**
                     * 判断参数 ResultList 是否已赋值
                     * @return ResultList 是否已赋值
                     * 
                     */
                    bool ResultListHasBeenSet() const;

                private:

                    /**
                     * 结果列表
                     */
                    std::vector<AICallExtractResultElement> m_resultList;
                    bool m_resultListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_DESCRIBEAICALLEXTRACTRESULTRESPONSE_H_
