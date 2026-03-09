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
                     * 获取<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @return SubAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * 
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置<p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     * @param _subAppId <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
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
                     * 获取<p>需要进行搜索的内容</p>
                     * @return Text <p>需要进行搜索的内容</p>
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置<p>需要进行搜索的内容</p>
                     * @param _text <p>需要进行搜索的内容</p>
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
                     * 获取<p>返回的记录条数，默认值：20。</p><p>取值范围：[1, 100]</p>
                     * @return Limit <p>返回的记录条数，默认值：20。</p><p>取值范围：[1, 100]</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>返回的记录条数，默认值：20。</p><p>取值范围：[1, 100]</p>
                     * @param _limit <p>返回的记录条数，默认值：20。</p><p>取值范围：[1, 100]</p>
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
                     * 获取<p>文件类型。匹配集合中的任意元素： <li>Video: 视频文件</li> <li>Audio: 音频文件</li> <li>Image: 图片文件</li></p>
                     * @return Categories <p>文件类型。匹配集合中的任意元素： <li>Video: 视频文件</li> <li>Audio: 音频文件</li> <li>Image: 图片文件</li></p>
                     * 
                     */
                    std::vector<std::string> GetCategories() const;

                    /**
                     * 设置<p>文件类型。匹配集合中的任意元素： <li>Video: 视频文件</li> <li>Audio: 音频文件</li> <li>Image: 图片文件</li></p>
                     * @param _categories <p>文件类型。匹配集合中的任意元素： <li>Video: 视频文件</li> <li>Audio: 音频文件</li> <li>Image: 图片文件</li></p>
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
                     * 获取<p>标签集合，匹配集合中任意元素。</p><p>入参限制：单个标签长度限制：32个字符。数组长度限制：16。</p>
                     * @return Tags <p>标签集合，匹配集合中任意元素。</p><p>入参限制：单个标签长度限制：32个字符。数组长度限制：16。</p>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置<p>标签集合，匹配集合中任意元素。</p><p>入参限制：单个标签长度限制：32个字符。数组长度限制：16。</p>
                     * @param _tags <p>标签集合，匹配集合中任意元素。</p><p>入参限制：单个标签长度限制：32个字符。数组长度限制：16。</p>
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
                     * 获取<p>人物集合，匹配出现了所有传入人物的片段</p><p>入参限制：数组长度限制：16</p>
                     * @return Persons <p>人物集合，匹配出现了所有传入人物的片段</p><p>入参限制：数组长度限制：16</p>
                     * 
                     */
                    std::vector<std::string> GetPersons() const;

                    /**
                     * 设置<p>人物集合，匹配出现了所有传入人物的片段</p><p>入参限制：数组长度限制：16</p>
                     * @param _persons <p>人物集合，匹配出现了所有传入人物的片段</p><p>入参限制：数组长度限制：16</p>
                     * 
                     */
                    void SetPersons(const std::vector<std::string>& _persons);

                    /**
                     * 判断参数 Persons 是否已赋值
                     * @return Persons 是否已赋值
                     * 
                     */
                    bool PersonsHasBeenSet() const;

                    /**
                     * 获取<p>搜索的任务类型，可选值有： </p><ul><li>AiAnalysis.DescriptionTask </li><li>SmartSubtitle.AsrFullTextTask</li></ul>
                     * @return TaskTypes <p>搜索的任务类型，可选值有： </p><ul><li>AiAnalysis.DescriptionTask </li><li>SmartSubtitle.AsrFullTextTask</li></ul>
                     * 
                     */
                    std::vector<std::string> GetTaskTypes() const;

                    /**
                     * 设置<p>搜索的任务类型，可选值有： </p><ul><li>AiAnalysis.DescriptionTask </li><li>SmartSubtitle.AsrFullTextTask</li></ul>
                     * @param _taskTypes <p>搜索的任务类型，可选值有： </p><ul><li>AiAnalysis.DescriptionTask </li><li>SmartSubtitle.AsrFullTextTask</li></ul>
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
                     * <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>需要进行搜索的内容</p>
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * <p>返回的记录条数，默认值：20。</p><p>取值范围：[1, 100]</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>文件类型。匹配集合中的任意元素： <li>Video: 视频文件</li> <li>Audio: 音频文件</li> <li>Image: 图片文件</li></p>
                     */
                    std::vector<std::string> m_categories;
                    bool m_categoriesHasBeenSet;

                    /**
                     * <p>标签集合，匹配集合中任意元素。</p><p>入参限制：单个标签长度限制：32个字符。数组长度限制：16。</p>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>人物集合，匹配出现了所有传入人物的片段</p><p>入参限制：数组长度限制：16</p>
                     */
                    std::vector<std::string> m_persons;
                    bool m_personsHasBeenSet;

                    /**
                     * <p>搜索的任务类型，可选值有： </p><ul><li>AiAnalysis.DescriptionTask </li><li>SmartSubtitle.AsrFullTextTask</li></ul>
                     */
                    std::vector<std::string> m_taskTypes;
                    bool m_taskTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SEARCHMEDIABYSEMANTICSREQUEST_H_
