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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SEARCHMEDIABYSEMANTICSREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SEARCHMEDIABYSEMANTICSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * SearchMediaBySemantics请求参数结构体
                */
                class SearchMediaBySemanticsRequest : public AbstractModel
                {
                public:
                    SearchMediaBySemanticsRequest();
                    ~SearchMediaBySemanticsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @return SubAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * @param _subAppId <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     * 
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     * 
                     */
                    bool SubAppIdHasBeenSet() const;

                    /**
                     * 获取需要进行搜索的内容
                     * @return Text 需要进行搜索的内容
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置需要进行搜索的内容
                     * @param _text 需要进行搜索的内容
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取返回的记录条数，默认值：20。
                     * @return Limit 返回的记录条数，默认值：20。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回的记录条数，默认值：20。
                     * @param _limit 返回的记录条数，默认值：20。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取文件类型。匹配集合中的任意元素： <li>Video: 视频文件</li> <li>Audio: 音频文件</li> <li>Image: 图片文件</li>
                     * @return Categories 文件类型。匹配集合中的任意元素： <li>Video: 视频文件</li> <li>Audio: 音频文件</li> <li>Image: 图片文件</li>
                     * 
                     */
                    std::vector<std::string> GetCategories() const;

                    /**
                     * 设置文件类型。匹配集合中的任意元素： <li>Video: 视频文件</li> <li>Audio: 音频文件</li> <li>Image: 图片文件</li>
                     * @param _categories 文件类型。匹配集合中的任意元素： <li>Video: 视频文件</li> <li>Audio: 音频文件</li> <li>Image: 图片文件</li>
                     * 
                     */
                    void SetCategories(const std::vector<std::string>& _categories);

                    /**
                     * 判断参数 Categories 是否已赋值
                     * @return Categories 是否已赋值
                     * 
                     */
                    bool CategoriesHasBeenSet() const;

                    /**
                     * 获取标签集合，匹配集合中任意元素。 <li>单个标签长度限制：32个字符。</li> <li>数组长度限制：16。</li>
                     * @return Tags 标签集合，匹配集合中任意元素。 <li>单个标签长度限制：32个字符。</li> <li>数组长度限制：16。</li>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置标签集合，匹配集合中任意元素。 <li>单个标签长度限制：32个字符。</li> <li>数组长度限制：16。</li>
                     * @param _tags 标签集合，匹配集合中任意元素。 <li>单个标签长度限制：32个字符。</li> <li>数组长度限制：16。</li>
                     * 
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取搜索的任务类型，可选值有： 
- AiAnalysis.DescriptionTask 
- SmartSubtitle.AsrFullTextTask
                     * @return TaskTypes 搜索的任务类型，可选值有： 
- AiAnalysis.DescriptionTask 
- SmartSubtitle.AsrFullTextTask
                     * 
                     */
                    std::vector<std::string> GetTaskTypes() const;

                    /**
                     * 设置搜索的任务类型，可选值有： 
- AiAnalysis.DescriptionTask 
- SmartSubtitle.AsrFullTextTask
                     * @param _taskTypes 搜索的任务类型，可选值有： 
- AiAnalysis.DescriptionTask 
- SmartSubtitle.AsrFullTextTask
                     * 
                     */
                    void SetTaskTypes(const std::vector<std::string>& _taskTypes);

                    /**
                     * 判断参数 TaskTypes 是否已赋值
                     * @return TaskTypes 是否已赋值
                     * 
                     */
                    bool TaskTypesHasBeenSet() const;

                private:

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 需要进行搜索的内容
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 返回的记录条数，默认值：20。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 文件类型。匹配集合中的任意元素： <li>Video: 视频文件</li> <li>Audio: 音频文件</li> <li>Image: 图片文件</li>
                     */
                    std::vector<std::string> m_categories;
                    bool m_categoriesHasBeenSet;

                    /**
                     * 标签集合，匹配集合中任意元素。 <li>单个标签长度限制：32个字符。</li> <li>数组长度限制：16。</li>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 搜索的任务类型，可选值有： 
- AiAnalysis.DescriptionTask 
- SmartSubtitle.AsrFullTextTask
                     */
                    std::vector<std::string> m_taskTypes;
                    bool m_taskTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SEARCHMEDIABYSEMANTICSREQUEST_H_
