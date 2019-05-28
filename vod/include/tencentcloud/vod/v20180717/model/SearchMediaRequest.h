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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_SEARCHMEDIAREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_SEARCHMEDIAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/SortBy.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * SearchMedia请求参数结构体
                */
                class SearchMediaRequest : public AbstractModel
                {
                public:
                    SearchMediaRequest();
                    ~SearchMediaRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取搜索文本，模糊匹配媒体文件名称或描述信息，匹配项越多，匹配度越高，排序越优先。长度限制：64 个字符。
                     * @return Text 搜索文本，模糊匹配媒体文件名称或描述信息，匹配项越多，匹配度越高，排序越优先。长度限制：64 个字符。
                     */
                    std::string GetText() const;

                    /**
                     * 设置搜索文本，模糊匹配媒体文件名称或描述信息，匹配项越多，匹配度越高，排序越优先。长度限制：64 个字符。
                     * @param Text 搜索文本，模糊匹配媒体文件名称或描述信息，匹配项越多，匹配度越高，排序越优先。长度限制：64 个字符。
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取标签集合，匹配集合中任意元素。
<li>单个标签长度限制：8 个字符。</li>
<li>数组长度限制：10。</li>
                     * @return Tags 标签集合，匹配集合中任意元素。
<li>单个标签长度限制：8 个字符。</li>
<li>数组长度限制：10。</li>
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置标签集合，匹配集合中任意元素。
<li>单个标签长度限制：8 个字符。</li>
<li>数组长度限制：10。</li>
                     * @param Tags 标签集合，匹配集合中任意元素。
<li>单个标签长度限制：8 个字符。</li>
<li>数组长度限制：10。</li>
                     */
                    void SetTags(const std::vector<std::string>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取分类 ID 集合，匹配集合指定 ID 的分类及其所有子类。数组长度限制：10。
                     * @return ClassIds 分类 ID 集合，匹配集合指定 ID 的分类及其所有子类。数组长度限制：10。
                     */
                    std::vector<int64_t> GetClassIds() const;

                    /**
                     * 设置分类 ID 集合，匹配集合指定 ID 的分类及其所有子类。数组长度限制：10。
                     * @param ClassIds 分类 ID 集合，匹配集合指定 ID 的分类及其所有子类。数组长度限制：10。
                     */
                    void SetClassIds(const std::vector<int64_t>& _classIds);

                    /**
                     * 判断参数 ClassIds 是否已赋值
                     * @return ClassIds 是否已赋值
                     */
                    bool ClassIdsHasBeenSet() const;

                    /**
                     * 获取创建时间的开始时间。
<li>大于等于开始时间。</li>
<li>格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。</li>
                     * @return StartTime 创建时间的开始时间。
<li>大于等于开始时间。</li>
<li>格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。</li>
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置创建时间的开始时间。
<li>大于等于开始时间。</li>
<li>格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。</li>
                     * @param StartTime 创建时间的开始时间。
<li>大于等于开始时间。</li>
<li>格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。</li>
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取创建时间的结束时间。
<li>小于结束时间。</li>
<li>格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。</li>
                     * @return EndTime 创建时间的结束时间。
<li>小于结束时间。</li>
<li>格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。</li>
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置创建时间的结束时间。
<li>小于结束时间。</li>
<li>格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。</li>
                     * @param EndTime 创建时间的结束时间。
<li>小于结束时间。</li>
<li>格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。</li>
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取媒体文件来源，来源取值参见 [SourceType](https://cloud.tencent.com/document/product/266/31773#MediaSourceData)。
                     * @return SourceType 媒体文件来源，来源取值参见 [SourceType](https://cloud.tencent.com/document/product/266/31773#MediaSourceData)。
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置媒体文件来源，来源取值参见 [SourceType](https://cloud.tencent.com/document/product/266/31773#MediaSourceData)。
                     * @param SourceType 媒体文件来源，来源取值参见 [SourceType](https://cloud.tencent.com/document/product/266/31773#MediaSourceData)。
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取推流[直播码](https://cloud.tencent.com/document/product/267/5959)。
                     * @return StreamId 推流[直播码](https://cloud.tencent.com/document/product/267/5959)。
                     */
                    std::string GetStreamId() const;

                    /**
                     * 设置推流[直播码](https://cloud.tencent.com/document/product/267/5959)。
                     * @param StreamId 推流[直播码](https://cloud.tencent.com/document/product/267/5959)。
                     */
                    void SetStreamId(const std::string& _streamId);

                    /**
                     * 判断参数 StreamId 是否已赋值
                     * @return StreamId 是否已赋值
                     */
                    bool StreamIdHasBeenSet() const;

                    /**
                     * 获取直播录制文件的唯一标识。
                     * @return Vid 直播录制文件的唯一标识。
                     */
                    std::string GetVid() const;

                    /**
                     * 设置直播录制文件的唯一标识。
                     * @param Vid 直播录制文件的唯一标识。
                     */
                    void SetVid(const std::string& _vid);

                    /**
                     * 判断参数 Vid 是否已赋值
                     * @return Vid 是否已赋值
                     */
                    bool VidHasBeenSet() const;

                    /**
                     * 获取排序方式。
<li>Sort.Field 可选值：CreateTime</li>
<li>指定 Text 搜索时，将根据匹配度排序，该字段无效</li>
                     * @return Sort 排序方式。
<li>Sort.Field 可选值：CreateTime</li>
<li>指定 Text 搜索时，将根据匹配度排序，该字段无效</li>
                     */
                    SortBy GetSort() const;

                    /**
                     * 设置排序方式。
<li>Sort.Field 可选值：CreateTime</li>
<li>指定 Text 搜索时，将根据匹配度排序，该字段无效</li>
                     * @param Sort 排序方式。
<li>Sort.Field 可选值：CreateTime</li>
<li>指定 Text 搜索时，将根据匹配度排序，该字段无效</li>
                     */
                    void SetSort(const SortBy& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取偏移量。
<li>默认值：0。</li>
<li>取值范围：Offset + Limit 不超过 5000。</li>
                     * @return Offset 偏移量。
<li>默认值：0。</li>
<li>取值范围：Offset + Limit 不超过 5000。</li>
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置偏移量。
<li>默认值：0。</li>
<li>取值范围：Offset + Limit 不超过 5000。</li>
                     * @param Offset 偏移量。
<li>默认值：0。</li>
<li>取值范围：Offset + Limit 不超过 5000。</li>
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取返回记录条数，默认值：10。
                     * @return Limit 返回记录条数，默认值：10。
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置返回记录条数，默认值：10。
                     * @param Limit 返回记录条数，默认值：10。
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     * @return SubAppId 点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     */
                    uint64_t GetSubAppId() const;

                    /**
                     * 设置点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     * @param SubAppId 点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     */
                    void SetSubAppId(const uint64_t& _subAppId);

                    /**
                     * 判断参数 SubAppId 是否已赋值
                     * @return SubAppId 是否已赋值
                     */
                    bool SubAppIdHasBeenSet() const;

                private:

                    /**
                     * 搜索文本，模糊匹配媒体文件名称或描述信息，匹配项越多，匹配度越高，排序越优先。长度限制：64 个字符。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 标签集合，匹配集合中任意元素。
<li>单个标签长度限制：8 个字符。</li>
<li>数组长度限制：10。</li>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 分类 ID 集合，匹配集合指定 ID 的分类及其所有子类。数组长度限制：10。
                     */
                    std::vector<int64_t> m_classIds;
                    bool m_classIdsHasBeenSet;

                    /**
                     * 创建时间的开始时间。
<li>大于等于开始时间。</li>
<li>格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。</li>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 创建时间的结束时间。
<li>小于结束时间。</li>
<li>格式按照 ISO 8601 标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#iso-.E6.97.A5.E6.9C.9F.E6.A0.BC.E5.BC.8F)。</li>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 媒体文件来源，来源取值参见 [SourceType](https://cloud.tencent.com/document/product/266/31773#MediaSourceData)。
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 推流[直播码](https://cloud.tencent.com/document/product/267/5959)。
                     */
                    std::string m_streamId;
                    bool m_streamIdHasBeenSet;

                    /**
                     * 直播录制文件的唯一标识。
                     */
                    std::string m_vid;
                    bool m_vidHasBeenSet;

                    /**
                     * 排序方式。
<li>Sort.Field 可选值：CreateTime</li>
<li>指定 Text 搜索时，将根据匹配度排序，该字段无效</li>
                     */
                    SortBy m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 偏移量。
<li>默认值：0。</li>
<li>取值范围：Offset + Limit 不超过 5000。</li>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回记录条数，默认值：10。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 点播[子应用](/document/product/266/14574) ID。如果要访问子应用中的资源，则将该字段填写为子应用 ID；否则无需填写该字段。
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SEARCHMEDIAREQUEST_H_
