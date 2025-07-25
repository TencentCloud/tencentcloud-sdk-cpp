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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEBLOCKSTATICLISTREQUEST_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEBLOCKSTATICLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * DescribeBlockStaticList请求参数结构体
                */
                class DescribeBlockStaticListRequest : public AbstractModel
                {
                public:
                    DescribeBlockStaticListRequest();
                    ~DescribeBlockStaticListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param _endTime 结束时间
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取列表类型，只能是下面三种之一：port、address、ip
                     * @return QueryType 列表类型，只能是下面三种之一：port、address、ip
                     * 
                     */
                    std::string GetQueryType() const;

                    /**
                     * 设置列表类型，只能是下面三种之一：port、address、ip
                     * @param _queryType 列表类型，只能是下面三种之一：port、address、ip
                     * 
                     */
                    void SetQueryType(const std::string& _queryType);

                    /**
                     * 判断参数 QueryType 是否已赋值
                     * @return QueryType 是否已赋值
                     * 
                     */
                    bool QueryTypeHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param _startTime 开始时间
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取top数
                     * @return Top top数
                     * 
                     */
                    int64_t GetTop() const;

                    /**
                     * 设置top数
                     * @param _top top数
                     * 
                     */
                    void SetTop(const int64_t& _top);

                    /**
                     * 判断参数 Top 是否已赋值
                     * @return Top 是否已赋值
                     * 
                     */
                    bool TopHasBeenSet() const;

                    /**
                     * 获取查询条件
                     * @return SearchValue 查询条件
                     * 
                     */
                    std::string GetSearchValue() const;

                    /**
                     * 设置查询条件
                     * @param _searchValue 查询条件
                     * 
                     */
                    void SetSearchValue(const std::string& _searchValue);

                    /**
                     * 判断参数 SearchValue 是否已赋值
                     * @return SearchValue 是否已赋值
                     * 
                     */
                    bool SearchValueHasBeenSet() const;

                private:

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 列表类型，只能是下面三种之一：port、address、ip
                     */
                    std::string m_queryType;
                    bool m_queryTypeHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * top数
                     */
                    int64_t m_top;
                    bool m_topHasBeenSet;

                    /**
                     * 查询条件
                     */
                    std::string m_searchValue;
                    bool m_searchValueHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_DESCRIBEBLOCKSTATICLISTREQUEST_H_
