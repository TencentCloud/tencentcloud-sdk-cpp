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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_SEARCHMATERIALREQUEST_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_SEARCHMATERIALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/SearchScope.h>
#include <tencentcloud/cme/v20191029/model/IntegerRange.h>
#include <tencentcloud/cme/v20191029/model/TimeRange.h>
#include <tencentcloud/cme/v20191029/model/SortBy.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * SearchMaterial请求参数结构体
                */
                class SearchMaterialRequest : public AbstractModel
                {
                public:
                    SearchMaterialRequest();
                    ~SearchMaterialRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @return Platform 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * @param _platform 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     * 
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     * 
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取指定搜索空间，数组长度不得超过5。
                     * @return SearchScopes 指定搜索空间，数组长度不得超过5。
                     * 
                     */
                    std::vector<SearchScope> GetSearchScopes() const;

                    /**
                     * 设置指定搜索空间，数组长度不得超过5。
                     * @param _searchScopes 指定搜索空间，数组长度不得超过5。
                     * 
                     */
                    void SetSearchScopes(const std::vector<SearchScope>& _searchScopes);

                    /**
                     * 判断参数 SearchScopes 是否已赋值
                     * @return SearchScopes 是否已赋值
                     * 
                     */
                    bool SearchScopesHasBeenSet() const;

                    /**
                     * 获取媒体类型，可取值有：
<li>AUDIO：音频；</li>
<li>VIDEO：视频 ；</li>
<li>IMAGE：图片；</li>
<li>VIDEO_EDIT_TEMPLATE：剪辑模板。</li>
                     * @return MaterialTypes 媒体类型，可取值有：
<li>AUDIO：音频；</li>
<li>VIDEO：视频 ；</li>
<li>IMAGE：图片；</li>
<li>VIDEO_EDIT_TEMPLATE：剪辑模板。</li>
                     * 
                     */
                    std::vector<std::string> GetMaterialTypes() const;

                    /**
                     * 设置媒体类型，可取值有：
<li>AUDIO：音频；</li>
<li>VIDEO：视频 ；</li>
<li>IMAGE：图片；</li>
<li>VIDEO_EDIT_TEMPLATE：剪辑模板。</li>
                     * @param _materialTypes 媒体类型，可取值有：
<li>AUDIO：音频；</li>
<li>VIDEO：视频 ；</li>
<li>IMAGE：图片；</li>
<li>VIDEO_EDIT_TEMPLATE：剪辑模板。</li>
                     * 
                     */
                    void SetMaterialTypes(const std::vector<std::string>& _materialTypes);

                    /**
                     * 判断参数 MaterialTypes 是否已赋值
                     * @return MaterialTypes 是否已赋值
                     * 
                     */
                    bool MaterialTypesHasBeenSet() const;

                    /**
                     * 获取搜索文本，模糊匹配媒体名称或描述信息，匹配项越多，匹配度越高，排序越优先。长度限制：15个字符。
                     * @return Text 搜索文本，模糊匹配媒体名称或描述信息，匹配项越多，匹配度越高，排序越优先。长度限制：15个字符。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置搜索文本，模糊匹配媒体名称或描述信息，匹配项越多，匹配度越高，排序越优先。长度限制：15个字符。
                     * @param _text 搜索文本，模糊匹配媒体名称或描述信息，匹配项越多，匹配度越高，排序越优先。长度限制：15个字符。
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
                     * 获取按画质检索，取值为：LD/SD/HD/FHD/2K/4K。
                     * @return Resolution 按画质检索，取值为：LD/SD/HD/FHD/2K/4K。
                     * 
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置按画质检索，取值为：LD/SD/HD/FHD/2K/4K。
                     * @param _resolution 按画质检索，取值为：LD/SD/HD/FHD/2K/4K。
                     * 
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     * 
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取按媒体时长检索，单位s。
                     * @return DurationRange 按媒体时长检索，单位s。
                     * 
                     */
                    IntegerRange GetDurationRange() const;

                    /**
                     * 设置按媒体时长检索，单位s。
                     * @param _durationRange 按媒体时长检索，单位s。
                     * 
                     */
                    void SetDurationRange(const IntegerRange& _durationRange);

                    /**
                     * 判断参数 DurationRange 是否已赋值
                     * @return DurationRange 是否已赋值
                     * 
                     */
                    bool DurationRangeHasBeenSet() const;

                    /**
                     * 获取按照媒体创建时间检索。
                     * @return CreateTimeRange 按照媒体创建时间检索。
                     * 
                     */
                    TimeRange GetCreateTimeRange() const;

                    /**
                     * 设置按照媒体创建时间检索。
                     * @param _createTimeRange 按照媒体创建时间检索。
                     * 
                     */
                    void SetCreateTimeRange(const TimeRange& _createTimeRange);

                    /**
                     * 判断参数 CreateTimeRange 是否已赋值
                     * @return CreateTimeRange 是否已赋值
                     * 
                     */
                    bool CreateTimeRangeHasBeenSet() const;

                    /**
                     * 获取按标签检索，填入检索的标签名。
                     * @return Tags 按标签检索，填入检索的标签名。
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置按标签检索，填入检索的标签名。
                     * @param _tags 按标签检索，填入检索的标签名。
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
                     * 获取排序方式。Sort.Field 可选值：CreateTime。指定 Text 搜索时，将根据匹配度排序，该字段无效。
                     * @return Sort 排序方式。Sort.Field 可选值：CreateTime。指定 Text 搜索时，将根据匹配度排序，该字段无效。
                     * 
                     */
                    SortBy GetSort() const;

                    /**
                     * 设置排序方式。Sort.Field 可选值：CreateTime。指定 Text 搜索时，将根据匹配度排序，该字段无效。
                     * @param _sort 排序方式。Sort.Field 可选值：CreateTime。指定 Text 搜索时，将根据匹配度排序，该字段无效。
                     * 
                     */
                    void SetSort(const SortBy& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取偏移量。默认值：0。
                     * @return Offset 偏移量。默认值：0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量。默认值：0。
                     * @param _offset 偏移量。默认值：0。
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
                     * 获取返回记录条数，默认值：50。
                     * @return Limit 返回记录条数，默认值：50。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回记录条数，默认值：50。
                     * @param _limit 返回记录条数，默认值：50。
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
                     * 获取操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以搜索任意媒体的信息。如果指定操作者，则操作者必须对媒体有读权限。
                     * @return Operator 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以搜索任意媒体的信息。如果指定操作者，则操作者必须对媒体有读权限。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以搜索任意媒体的信息。如果指定操作者，则操作者必须对媒体有读权限。
                     * @param _operator 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以搜索任意媒体的信息。如果指定操作者，则操作者必须对媒体有读权限。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 平台 Id，指定访问的平台。关于平台概念，请参见文档 [平台](https://cloud.tencent.com/document/product/1156/43767)。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 指定搜索空间，数组长度不得超过5。
                     */
                    std::vector<SearchScope> m_searchScopes;
                    bool m_searchScopesHasBeenSet;

                    /**
                     * 媒体类型，可取值有：
<li>AUDIO：音频；</li>
<li>VIDEO：视频 ；</li>
<li>IMAGE：图片；</li>
<li>VIDEO_EDIT_TEMPLATE：剪辑模板。</li>
                     */
                    std::vector<std::string> m_materialTypes;
                    bool m_materialTypesHasBeenSet;

                    /**
                     * 搜索文本，模糊匹配媒体名称或描述信息，匹配项越多，匹配度越高，排序越优先。长度限制：15个字符。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 按画质检索，取值为：LD/SD/HD/FHD/2K/4K。
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * 按媒体时长检索，单位s。
                     */
                    IntegerRange m_durationRange;
                    bool m_durationRangeHasBeenSet;

                    /**
                     * 按照媒体创建时间检索。
                     */
                    TimeRange m_createTimeRange;
                    bool m_createTimeRangeHasBeenSet;

                    /**
                     * 按标签检索，填入检索的标签名。
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 排序方式。Sort.Field 可选值：CreateTime。指定 Text 搜索时，将根据匹配度排序，该字段无效。
                     */
                    SortBy m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 偏移量。默认值：0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回记录条数，默认值：50。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 操作者。如不填，默认为 `cmeid_system`，表示平台管理员操作，可以搜索任意媒体的信息。如果指定操作者，则操作者必须对媒体有读权限。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_SEARCHMATERIALREQUEST_H_
