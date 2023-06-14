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

#ifndef TENCENTCLOUD_TBM_V20180129_MODEL_DESCRIBEINDUSTRYNEWSREQUEST_H_
#define TENCENTCLOUD_TBM_V20180129_MODEL_DESCRIBEINDUSTRYNEWSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tbm
    {
        namespace V20180129
        {
            namespace Model
            {
                /**
                * DescribeIndustryNews请求参数结构体
                */
                class DescribeIndustryNewsRequest : public AbstractModel
                {
                public:
                    DescribeIndustryNewsRequest();
                    ~DescribeIndustryNewsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取行业ID
                     * @return IndustryId 行业ID
                     * 
                     */
                    std::string GetIndustryId() const;

                    /**
                     * 设置行业ID
                     * @param _industryId 行业ID
                     * 
                     */
                    void SetIndustryId(const std::string& _industryId);

                    /**
                     * 判断参数 IndustryId 是否已赋值
                     * @return IndustryId 是否已赋值
                     * 
                     */
                    bool IndustryIdHasBeenSet() const;

                    /**
                     * 获取查询开始时间
                     * @return StartDate 查询开始时间
                     * 
                     */
                    std::string GetStartDate() const;

                    /**
                     * 设置查询开始时间
                     * @param _startDate 查询开始时间
                     * 
                     */
                    void SetStartDate(const std::string& _startDate);

                    /**
                     * 判断参数 StartDate 是否已赋值
                     * @return StartDate 是否已赋值
                     * 
                     */
                    bool StartDateHasBeenSet() const;

                    /**
                     * 获取查询结束时间
                     * @return EndDate 查询结束时间
                     * 
                     */
                    std::string GetEndDate() const;

                    /**
                     * 设置查询结束时间
                     * @param _endDate 查询结束时间
                     * 
                     */
                    void SetEndDate(const std::string& _endDate);

                    /**
                     * 判断参数 EndDate 是否已赋值
                     * @return EndDate 是否已赋值
                     * 
                     */
                    bool EndDateHasBeenSet() const;

                    /**
                     * 获取是否显示列表，若为 true，则返回文章列表
                     * @return ShowList 是否显示列表，若为 true，则返回文章列表
                     * 
                     */
                    bool GetShowList() const;

                    /**
                     * 设置是否显示列表，若为 true，则返回文章列表
                     * @param _showList 是否显示列表，若为 true，则返回文章列表
                     * 
                     */
                    void SetShowList(const bool& _showList);

                    /**
                     * 判断参数 ShowList 是否已赋值
                     * @return ShowList 是否已赋值
                     * 
                     */
                    bool ShowListHasBeenSet() const;

                    /**
                     * 获取查询偏移，默认从0开始
                     * @return Offset 查询偏移，默认从0开始
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置查询偏移，默认从0开始
                     * @param _offset 查询偏移，默认从0开始
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取查询条数上限，默认20
                     * @return Limit 查询条数上限，默认20
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置查询条数上限，默认20
                     * @param _limit 查询条数上限，默认20
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 行业ID
                     */
                    std::string m_industryId;
                    bool m_industryIdHasBeenSet;

                    /**
                     * 查询开始时间
                     */
                    std::string m_startDate;
                    bool m_startDateHasBeenSet;

                    /**
                     * 查询结束时间
                     */
                    std::string m_endDate;
                    bool m_endDateHasBeenSet;

                    /**
                     * 是否显示列表，若为 true，则返回文章列表
                     */
                    bool m_showList;
                    bool m_showListHasBeenSet;

                    /**
                     * 查询偏移，默认从0开始
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 查询条数上限，默认20
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TBM_V20180129_MODEL_DESCRIBEINDUSTRYNEWSREQUEST_H_
