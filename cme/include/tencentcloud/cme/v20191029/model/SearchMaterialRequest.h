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
                     * 获取平台名称，指定访问的平台。
                     * @return Platform 平台名称，指定访问的平台。
                     */
                    std::string GetPlatform() const;

                    /**
                     * 设置平台名称，指定访问的平台。
                     * @param Platform 平台名称，指定访问的平台。
                     */
                    void SetPlatform(const std::string& _platform);

                    /**
                     * 判断参数 Platform 是否已赋值
                     * @return Platform 是否已赋值
                     */
                    bool PlatformHasBeenSet() const;

                    /**
                     * 获取指定搜索空间，数组长度不得超过5。
                     * @return SearchScopes 指定搜索空间，数组长度不得超过5。
                     */
                    std::vector<SearchScope> GetSearchScopes() const;

                    /**
                     * 设置指定搜索空间，数组长度不得超过5。
                     * @param SearchScopes 指定搜索空间，数组长度不得超过5。
                     */
                    void SetSearchScopes(const std::vector<SearchScope>& _searchScopes);

                    /**
                     * 判断参数 SearchScopes 是否已赋值
                     * @return SearchScopes 是否已赋值
                     */
                    bool SearchScopesHasBeenSet() const;

                    /**
                     * 获取素材类型，取值：
<li>AUDIO：音频；</li>
<li>VIDEO：视频 ；</li>
<li>IMAGE：图片。</li>
                     * @return MaterialTypes 素材类型，取值：
<li>AUDIO：音频；</li>
<li>VIDEO：视频 ；</li>
<li>IMAGE：图片。</li>
                     */
                    std::vector<std::string> GetMaterialTypes() const;

                    /**
                     * 设置素材类型，取值：
<li>AUDIO：音频；</li>
<li>VIDEO：视频 ；</li>
<li>IMAGE：图片。</li>
                     * @param MaterialTypes 素材类型，取值：
<li>AUDIO：音频；</li>
<li>VIDEO：视频 ；</li>
<li>IMAGE：图片。</li>
                     */
                    void SetMaterialTypes(const std::vector<std::string>& _materialTypes);

                    /**
                     * 判断参数 MaterialTypes 是否已赋值
                     * @return MaterialTypes 是否已赋值
                     */
                    bool MaterialTypesHasBeenSet() const;

                    /**
                     * 获取搜索文本，模糊匹配素材名称或描述信息，匹配项越多，匹配度越高，排序越优先。长度限制：15个字符。
                     * @return Text 搜索文本，模糊匹配素材名称或描述信息，匹配项越多，匹配度越高，排序越优先。长度限制：15个字符。
                     */
                    std::string GetText() const;

                    /**
                     * 设置搜索文本，模糊匹配素材名称或描述信息，匹配项越多，匹配度越高，排序越优先。长度限制：15个字符。
                     * @param Text 搜索文本，模糊匹配素材名称或描述信息，匹配项越多，匹配度越高，排序越优先。长度限制：15个字符。
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取按画质检索，取值为：LD/SD/HD/FHD/2K/4K。
                     * @return Resolution 按画质检索，取值为：LD/SD/HD/FHD/2K/4K。
                     */
                    std::string GetResolution() const;

                    /**
                     * 设置按画质检索，取值为：LD/SD/HD/FHD/2K/4K。
                     * @param Resolution 按画质检索，取值为：LD/SD/HD/FHD/2K/4K。
                     */
                    void SetResolution(const std::string& _resolution);

                    /**
                     * 判断参数 Resolution 是否已赋值
                     * @return Resolution 是否已赋值
                     */
                    bool ResolutionHasBeenSet() const;

                    /**
                     * 获取按素材时长检索，单位s。
                     * @return DurationRange 按素材时长检索，单位s。
                     */
                    IntegerRange GetDurationRange() const;

                    /**
                     * 设置按素材时长检索，单位s。
                     * @param DurationRange 按素材时长检索，单位s。
                     */
                    void SetDurationRange(const IntegerRange& _durationRange);

                    /**
                     * 判断参数 DurationRange 是否已赋值
                     * @return DurationRange 是否已赋值
                     */
                    bool DurationRangeHasBeenSet() const;

                    /**
                     * 获取按照素材创建时间检索。
                     * @return CreateTimeRange 按照素材创建时间检索。
                     */
                    TimeRange GetCreateTimeRange() const;

                    /**
                     * 设置按照素材创建时间检索。
                     * @param CreateTimeRange 按照素材创建时间检索。
                     */
                    void SetCreateTimeRange(const TimeRange& _createTimeRange);

                    /**
                     * 判断参数 CreateTimeRange 是否已赋值
                     * @return CreateTimeRange 是否已赋值
                     */
                    bool CreateTimeRangeHasBeenSet() const;

                    /**
                     * 获取排序方式。Sort.Field 可选值：CreateTime。指定 Text 搜索时，将根据匹配度排序，该字段无效。
                     * @return Sort 排序方式。Sort.Field 可选值：CreateTime。指定 Text 搜索时，将根据匹配度排序，该字段无效。
                     */
                    SortBy GetSort() const;

                    /**
                     * 设置排序方式。Sort.Field 可选值：CreateTime。指定 Text 搜索时，将根据匹配度排序，该字段无效。
                     * @param Sort 排序方式。Sort.Field 可选值：CreateTime。指定 Text 搜索时，将根据匹配度排序，该字段无效。
                     */
                    void SetSort(const SortBy& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取偏移量。默认值：0。
                     * @return Offset 偏移量。默认值：0。
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量。默认值：0。
                     * @param Offset 偏移量。默认值：0。
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回记录条数，默认值：50。
                     * @return Limit 返回记录条数，默认值：50。
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回记录条数，默认值：50。
                     * @param Limit 返回记录条数，默认值：50。
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取操作者。填写用户的 Id，用于标识调用者及校验操作权限。
                     * @return Operator 操作者。填写用户的 Id，用于标识调用者及校验操作权限。
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者。填写用户的 Id，用于标识调用者及校验操作权限。
                     * @param Operator 操作者。填写用户的 Id，用于标识调用者及校验操作权限。
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     */
                    bool OperatorHasBeenSet() const;

                private:

                    /**
                     * 平台名称，指定访问的平台。
                     */
                    std::string m_platform;
                    bool m_platformHasBeenSet;

                    /**
                     * 指定搜索空间，数组长度不得超过5。
                     */
                    std::vector<SearchScope> m_searchScopes;
                    bool m_searchScopesHasBeenSet;

                    /**
                     * 素材类型，取值：
<li>AUDIO：音频；</li>
<li>VIDEO：视频 ；</li>
<li>IMAGE：图片。</li>
                     */
                    std::vector<std::string> m_materialTypes;
                    bool m_materialTypesHasBeenSet;

                    /**
                     * 搜索文本，模糊匹配素材名称或描述信息，匹配项越多，匹配度越高，排序越优先。长度限制：15个字符。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 按画质检索，取值为：LD/SD/HD/FHD/2K/4K。
                     */
                    std::string m_resolution;
                    bool m_resolutionHasBeenSet;

                    /**
                     * 按素材时长检索，单位s。
                     */
                    IntegerRange m_durationRange;
                    bool m_durationRangeHasBeenSet;

                    /**
                     * 按照素材创建时间检索。
                     */
                    TimeRange m_createTimeRange;
                    bool m_createTimeRangeHasBeenSet;

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
                     * 操作者。填写用户的 Id，用于标识调用者及校验操作权限。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_SEARCHMATERIALREQUEST_H_
