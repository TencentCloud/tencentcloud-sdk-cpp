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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESEARCHEXPORTLISTREQUEST_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESEARCHEXPORTLISTREQUEST_H_

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
                * DescribeSearchExportList请求参数结构体
                */
                class DescribeSearchExportListRequest : public AbstractModel
                {
                public:
                    DescribeSearchExportListRequest();
                    ~DescribeSearchExportListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取ES查询条件JSON
                     * @return Query ES查询条件JSON
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置ES查询条件JSON
                     * @param _query ES查询条件JSON
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取日志类型列表
                     * @return LogTypes 日志类型列表
                     * 
                     */
                    std::vector<std::string> GetLogTypes() const;

                    /**
                     * 设置日志类型列表
                     * @param _logTypes 日志类型列表
                     * 
                     */
                    void SetLogTypes(const std::vector<std::string>& _logTypes);

                    /**
                     * 判断参数 LogTypes 是否已赋值
                     * @return LogTypes 是否已赋值
                     * 
                     */
                    bool LogTypesHasBeenSet() const;

                private:

                    /**
                     * ES查询条件JSON
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * 日志类型列表
                     */
                    std::vector<std::string> m_logTypes;
                    bool m_logTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_DESCRIBESEARCHEXPORTLISTREQUEST_H_
