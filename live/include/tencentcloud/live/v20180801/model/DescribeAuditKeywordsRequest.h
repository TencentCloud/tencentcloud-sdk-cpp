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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEAUDITKEYWORDSREQUEST_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEAUDITKEYWORDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeAuditKeywords请求参数结构体
                */
                class DescribeAuditKeywordsRequest : public AbstractModel
                {
                public:
                    DescribeAuditKeywordsRequest();
                    ~DescribeAuditKeywordsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取获取偏移量。
                     * @return Offset 获取偏移量。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置获取偏移量。
                     * @param _offset 获取偏移量。
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
                     * 获取单页条数，最大为100条，超过则按100条返回。
                     * @return Limit 单页条数，最大为100条，超过则按100条返回。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置单页条数，最大为100条，超过则按100条返回。
                     * @param _limit 单页条数，最大为100条，超过则按100条返回。
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取关键词库 Id。
                     * @return LibId 关键词库 Id。
                     * 
                     */
                    std::string GetLibId() const;

                    /**
                     * 设置关键词库 Id。
                     * @param _libId 关键词库 Id。
                     * 
                     */
                    void SetLibId(const std::string& _libId);

                    /**
                     * 判断参数 LibId 是否已赋值
                     * @return LibId 是否已赋值
                     * 
                     */
                    bool LibIdHasBeenSet() const;

                    /**
                     * 获取关键词搜索字段。
为空字符串时忽略。
                     * @return Content 关键词搜索字段。
为空字符串时忽略。
                     * 
                     */
                    std::string GetContent() const;

                    /**
                     * 设置关键词搜索字段。
为空字符串时忽略。
                     * @param _content 关键词搜索字段。
为空字符串时忽略。
                     * 
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取标签类别搜索。
                     * @return Labels 标签类别搜索。
                     * 
                     */
                    std::vector<int64_t> GetLabels() const;

                    /**
                     * 设置标签类别搜索。
                     * @param _labels 标签类别搜索。
                     * 
                     */
                    void SetLabels(const std::vector<int64_t>& _labels);

                    /**
                     * 判断参数 Labels 是否已赋值
                     * @return Labels 是否已赋值
                     * 
                     */
                    bool LabelsHasBeenSet() const;

                private:

                    /**
                     * 获取偏移量。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 单页条数，最大为100条，超过则按100条返回。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 关键词库 Id。
                     */
                    std::string m_libId;
                    bool m_libIdHasBeenSet;

                    /**
                     * 关键词搜索字段。
为空字符串时忽略。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 标签类别搜索。
                     */
                    std::vector<int64_t> m_labels;
                    bool m_labelsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEAUDITKEYWORDSREQUEST_H_
