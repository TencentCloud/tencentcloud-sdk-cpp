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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBENOTICECONTENTSREQUEST_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBENOTICECONTENTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/Filter.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeNoticeContents请求参数结构体
                */
                class DescribeNoticeContentsRequest : public AbstractModel
                {
                public:
                    DescribeNoticeContentsRequest();
                    ~DescribeNoticeContentsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<li> name
按照【通知内容模板名称】进行过滤。
类型：String
必选：否
</li>
<li> noticeContentId
按照【通知内容模板ID】进行过滤。
类型：String
必选：否
</li>
每次请求的Filters的上限为10，Filter.Values的上限为100。
                     * @return Filters <li> name
按照【通知内容模板名称】进行过滤。
类型：String
必选：否
</li>
<li> noticeContentId
按照【通知内容模板ID】进行过滤。
类型：String
必选：否
</li>
每次请求的Filters的上限为10，Filter.Values的上限为100。
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li> name
按照【通知内容模板名称】进行过滤。
类型：String
必选：否
</li>
<li> noticeContentId
按照【通知内容模板ID】进行过滤。
类型：String
必选：否
</li>
每次请求的Filters的上限为10，Filter.Values的上限为100。
                     * @param _filters <li> name
按照【通知内容模板名称】进行过滤。
类型：String
必选：否
</li>
<li> noticeContentId
按照【通知内容模板ID】进行过滤。
类型：String
必选：否
</li>
每次请求的Filters的上限为10，Filter.Values的上限为100。
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取分页的偏移量，默认值为0。
                     * @return Offset 分页的偏移量，默认值为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页的偏移量，默认值为0。
                     * @param _offset 分页的偏移量，默认值为0。
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
                     * 获取分页单页限制数目，默认值为20，最大值100。
                     * @return Limit 分页单页限制数目，默认值为20，最大值100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页单页限制数目，默认值为20，最大值100。
                     * @param _limit 分页单页限制数目，默认值为20，最大值100。
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
                     * <li> name
按照【通知内容模板名称】进行过滤。
类型：String
必选：否
</li>
<li> noticeContentId
按照【通知内容模板ID】进行过滤。
类型：String
必选：否
</li>
每次请求的Filters的上限为10，Filter.Values的上限为100。
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 分页的偏移量，默认值为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页单页限制数目，默认值为20，最大值100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBENOTICECONTENTSREQUEST_H_
