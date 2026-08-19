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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAIANALYSISHISTORYREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAIANALYSISHISTORYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/Filter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeAIAnalysisHistory请求参数结构体
                */
                class DescribeAIAnalysisHistoryRequest : public AbstractModel
                {
                public:
                    DescribeAIAnalysisHistoryRequest();
                    ~DescribeAIAnalysisHistoryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>过滤器</p>
                     * @return Filter <p>过滤器</p>
                     * 
                     */
                    Filter GetFilter() const;

                    /**
                     * 设置<p>过滤器</p>
                     * @param _filter <p>过滤器</p>
                     * 
                     */
                    void SetFilter(const Filter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                    /**
                     * 获取<p>sessionID，用于游标分页</p>
                     * @return SessionID <p>sessionID，用于游标分页</p>
                     * 
                     */
                    std::string GetSessionID() const;

                    /**
                     * 设置<p>sessionID，用于游标分页</p>
                     * @param _sessionID <p>sessionID，用于游标分页</p>
                     * 
                     */
                    void SetSessionID(const std::string& _sessionID);

                    /**
                     * 判断参数 SessionID 是否已赋值
                     * @return SessionID 是否已赋值
                     * 
                     */
                    bool SessionIDHasBeenSet() const;

                private:

                    /**
                     * <p>过滤器</p>
                     */
                    Filter m_filter;
                    bool m_filterHasBeenSet;

                    /**
                     * <p>sessionID，用于游标分页</p>
                     */
                    std::string m_sessionID;
                    bool m_sessionIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEAIANALYSISHISTORYREQUEST_H_
