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

#ifndef TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEECDNDOMAINLOGSRESPONSE_H_
#define TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEECDNDOMAINLOGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ecdn/v20191012/model/DomainLogs.h>


namespace TencentCloud
{
    namespace Ecdn
    {
        namespace V20191012
        {
            namespace Model
            {
                /**
                * DescribeEcdnDomainLogs返回参数结构体
                */
                class DescribeEcdnDomainLogsResponse : public AbstractModel
                {
                public:
                    DescribeEcdnDomainLogsResponse();
                    ~DescribeEcdnDomainLogsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取日志链接列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DomainLogs 日志链接列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DomainLogs> GetDomainLogs() const;

                    /**
                     * 判断参数 DomainLogs 是否已赋值
                     * @return DomainLogs 是否已赋值
                     * 
                     */
                    bool DomainLogsHasBeenSet() const;

                    /**
                     * 获取日志链接总条数。
                     * @return TotalCount 日志链接总条数。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 日志链接列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DomainLogs> m_domainLogs;
                    bool m_domainLogsHasBeenSet;

                    /**
                     * 日志链接总条数。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECDN_V20191012_MODEL_DESCRIBEECDNDOMAINLOGSRESPONSE_H_
