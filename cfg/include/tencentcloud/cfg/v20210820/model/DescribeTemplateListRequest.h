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

#ifndef TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBETEMPLATELISTREQUEST_H_
#define TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBETEMPLATELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfg/v20210820/model/TagWithDescribe.h>
#include <tencentcloud/cfg/v20210820/model/ActionFilter.h>


namespace TencentCloud
{
    namespace Cfg
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTemplateList请求参数结构体
                */
                class DescribeTemplateListRequest : public AbstractModel
                {
                public:
                    DescribeTemplateListRequest();
                    ~DescribeTemplateListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分页Limit, 最大值100
                     * @return Limit 分页Limit, 最大值100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页Limit, 最大值100
                     * @param _limit 分页Limit, 最大值100
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
                     * 获取分页Offset
                     * @return Offset 分页Offset
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页Offset
                     * @param _offset 分页Offset
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
                     * 获取演练名称
                     * @return Title 演练名称
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置演练名称
                     * @param _title 演练名称
                     * 
                     */
                    void SetTitle(const std::string& _title);

                    /**
                     * 判断参数 Title 是否已赋值
                     * @return Title 是否已赋值
                     * 
                     */
                    bool TitleHasBeenSet() const;

                    /**
                     * 获取标签键
                     * @return Tag 标签键
                     * 
                     */
                    std::vector<std::string> GetTag() const;

                    /**
                     * 设置标签键
                     * @param _tag 标签键
                     * 
                     */
                    void SetTag(const std::vector<std::string>& _tag);

                    /**
                     * 判断参数 Tag 是否已赋值
                     * @return Tag 是否已赋值
                     * 
                     */
                    bool TagHasBeenSet() const;

                    /**
                     * 获取状态，1---使用中， 2---停用
                     * @return IsUsed 状态，1---使用中， 2---停用
                     * 
                     */
                    int64_t GetIsUsed() const;

                    /**
                     * 设置状态，1---使用中， 2---停用
                     * @param _isUsed 状态，1---使用中， 2---停用
                     * 
                     */
                    void SetIsUsed(const int64_t& _isUsed);

                    /**
                     * 判断参数 IsUsed 是否已赋值
                     * @return IsUsed 是否已赋值
                     * 
                     */
                    bool IsUsedHasBeenSet() const;

                    /**
                     * 获取标签对
                     * @return Tags 标签对
                     * 
                     */
                    std::vector<TagWithDescribe> GetTags() const;

                    /**
                     * 设置标签对
                     * @param _tags 标签对
                     * 
                     */
                    void SetTags(const std::vector<TagWithDescribe>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取经验来源 0-自建 1-专家推荐
                     * @return TemplateSource 经验来源 0-自建 1-专家推荐
                     * 
                     */
                    int64_t GetTemplateSource() const;

                    /**
                     * 设置经验来源 0-自建 1-专家推荐
                     * @param _templateSource 经验来源 0-自建 1-专家推荐
                     * 
                     */
                    void SetTemplateSource(const int64_t& _templateSource);

                    /**
                     * 判断参数 TemplateSource 是否已赋值
                     * @return TemplateSource 是否已赋值
                     * 
                     */
                    bool TemplateSourceHasBeenSet() const;

                    /**
                     * 获取经验ID
                     * @return TemplateIdList 经验ID
                     * 
                     */
                    std::vector<int64_t> GetTemplateIdList() const;

                    /**
                     * 设置经验ID
                     * @param _templateIdList 经验ID
                     * 
                     */
                    void SetTemplateIdList(const std::vector<int64_t>& _templateIdList);

                    /**
                     * 判断参数 TemplateIdList 是否已赋值
                     * @return TemplateIdList 是否已赋值
                     * 
                     */
                    bool TemplateIdListHasBeenSet() const;

                    /**
                     * 获取过滤参数
                     * @return Filters 过滤参数
                     * 
                     */
                    std::vector<ActionFilter> GetFilters() const;

                    /**
                     * 设置过滤参数
                     * @param _filters 过滤参数
                     * 
                     */
                    void SetFilters(const std::vector<ActionFilter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 分页Limit, 最大值100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页Offset
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 演练名称
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * 标签键
                     */
                    std::vector<std::string> m_tag;
                    bool m_tagHasBeenSet;

                    /**
                     * 状态，1---使用中， 2---停用
                     */
                    int64_t m_isUsed;
                    bool m_isUsedHasBeenSet;

                    /**
                     * 标签对
                     */
                    std::vector<TagWithDescribe> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 经验来源 0-自建 1-专家推荐
                     */
                    int64_t m_templateSource;
                    bool m_templateSourceHasBeenSet;

                    /**
                     * 经验ID
                     */
                    std::vector<int64_t> m_templateIdList;
                    bool m_templateIdListHasBeenSet;

                    /**
                     * 过滤参数
                     */
                    std::vector<ActionFilter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFG_V20210820_MODEL_DESCRIBETEMPLATELISTREQUEST_H_
