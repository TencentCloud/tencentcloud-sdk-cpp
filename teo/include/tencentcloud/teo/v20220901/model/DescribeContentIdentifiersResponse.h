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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECONTENTIDENTIFIERSRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECONTENTIDENTIFIERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/ContentIdentifier.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * DescribeContentIdentifiers返回参数结构体
                */
                class DescribeContentIdentifiersResponse : public AbstractModel
                {
                public:
                    DescribeContentIdentifiersResponse();
                    ~DescribeContentIdentifiersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合过滤条件的内容标识符总数。	
                     * @return TotalCount 符合过滤条件的内容标识符总数。	
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取内容标识符详细内容列表。
                     * @return ContentIdentifiers 内容标识符详细内容列表。
                     * 
                     */
                    std::vector<ContentIdentifier> GetContentIdentifiers() const;

                    /**
                     * 判断参数 ContentIdentifiers 是否已赋值
                     * @return ContentIdentifiers 是否已赋值
                     * 
                     */
                    bool ContentIdentifiersHasBeenSet() const;

                private:

                    /**
                     * 符合过滤条件的内容标识符总数。	
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 内容标识符详细内容列表。
                     */
                    std::vector<ContentIdentifier> m_contentIdentifiers;
                    bool m_contentIdentifiersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DESCRIBECONTENTIDENTIFIERSRESPONSE_H_
