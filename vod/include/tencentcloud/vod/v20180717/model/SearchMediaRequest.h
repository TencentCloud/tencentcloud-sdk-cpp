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
#include <tencentcloud/vod/v20180717/model/TimeRange.h>
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
                     * 获取文件 ID 集合，匹配集合中的任意元素。
<li>数组长度限制：10。</li>
<li>单个 ID 长度限制：40个字符。</li>
                     * @return FileIds 文件 ID 集合，匹配集合中的任意元素。
<li>数组长度限制：10。</li>
<li>单个 ID 长度限制：40个字符。</li>
                     * 
                     */
                    std::vector<std::string> GetFileIds() const;

                    /**
                     * 设置文件 ID 集合，匹配集合中的任意元素。
<li>数组长度限制：10。</li>
<li>单个 ID 长度限制：40个字符。</li>
                     * @param _fileIds 文件 ID 集合，匹配集合中的任意元素。
<li>数组长度限制：10。</li>
<li>单个 ID 长度限制：40个字符。</li>
                     * 
                     */
                    void SetFileIds(const std::vector<std::string>& _fileIds);

                    /**
                     * 判断参数 FileIds 是否已赋值
                     * @return FileIds 是否已赋值
                     * 
                     */
                    bool FileIdsHasBeenSet() const;

                    /**
                     * 获取文件名集合，模糊匹配媒体文件的文件名，匹配度越高，排序越优先。
<li>单个文件名长度限制：100个字符。</li>
<li>数组长度限制：10。</li>
                     * @return Names 文件名集合，模糊匹配媒体文件的文件名，匹配度越高，排序越优先。
<li>单个文件名长度限制：100个字符。</li>
<li>数组长度限制：10。</li>
                     * 
                     */
                    std::vector<std::string> GetNames() const;

                    /**
                     * 设置文件名集合，模糊匹配媒体文件的文件名，匹配度越高，排序越优先。
<li>单个文件名长度限制：100个字符。</li>
<li>数组长度限制：10。</li>
                     * @param _names 文件名集合，模糊匹配媒体文件的文件名，匹配度越高，排序越优先。
<li>单个文件名长度限制：100个字符。</li>
<li>数组长度限制：10。</li>
                     * 
                     */
                    void SetNames(const std::vector<std::string>& _names);

                    /**
                     * 判断参数 Names 是否已赋值
                     * @return Names 是否已赋值
                     * 
                     */
                    bool NamesHasBeenSet() const;

                    /**
                     * 获取文件名前缀，前缀匹配媒体文件的文件名。
<li>单个文件名前缀长度限制：100个字符。</li>
<li>数组长度限制：10。</li>
                     * @return NamePrefixes 文件名前缀，前缀匹配媒体文件的文件名。
<li>单个文件名前缀长度限制：100个字符。</li>
<li>数组长度限制：10。</li>
                     * 
                     */
                    std::vector<std::string> GetNamePrefixes() const;

                    /**
                     * 设置文件名前缀，前缀匹配媒体文件的文件名。
<li>单个文件名前缀长度限制：100个字符。</li>
<li>数组长度限制：10。</li>
                     * @param _namePrefixes 文件名前缀，前缀匹配媒体文件的文件名。
<li>单个文件名前缀长度限制：100个字符。</li>
<li>数组长度限制：10。</li>
                     * 
                     */
                    void SetNamePrefixes(const std::vector<std::string>& _namePrefixes);

                    /**
                     * 判断参数 NamePrefixes 是否已赋值
                     * @return NamePrefixes 是否已赋值
                     * 
                     */
                    bool NamePrefixesHasBeenSet() const;

                    /**
                     * 获取文件描述集合，模糊匹配媒体文件的描述，匹配度越高，排序越优先。
<li>单个描述长度限制：100个字符。</li>
<li>数组长度限制：10。</li>
                     * @return Descriptions 文件描述集合，模糊匹配媒体文件的描述，匹配度越高，排序越优先。
<li>单个描述长度限制：100个字符。</li>
<li>数组长度限制：10。</li>
                     * 
                     */
                    std::vector<std::string> GetDescriptions() const;

                    /**
                     * 设置文件描述集合，模糊匹配媒体文件的描述，匹配度越高，排序越优先。
<li>单个描述长度限制：100个字符。</li>
<li>数组长度限制：10。</li>
                     * @param _descriptions 文件描述集合，模糊匹配媒体文件的描述，匹配度越高，排序越优先。
<li>单个描述长度限制：100个字符。</li>
<li>数组长度限制：10。</li>
                     * 
                     */
                    void SetDescriptions(const std::vector<std::string>& _descriptions);

                    /**
                     * 判断参数 Descriptions 是否已赋值
                     * @return Descriptions 是否已赋值
                     * 
                     */
                    bool DescriptionsHasBeenSet() const;

                    /**
                     * 获取分类 ID 集合，匹配集合指定 ID 的分类及其所有子类。
<li>数组长度限制：10。</li>
                     * @return ClassIds 分类 ID 集合，匹配集合指定 ID 的分类及其所有子类。
<li>数组长度限制：10。</li>
                     * 
                     */
                    std::vector<int64_t> GetClassIds() const;

                    /**
                     * 设置分类 ID 集合，匹配集合指定 ID 的分类及其所有子类。
<li>数组长度限制：10。</li>
                     * @param _classIds 分类 ID 集合，匹配集合指定 ID 的分类及其所有子类。
<li>数组长度限制：10。</li>
                     * 
                     */
                    void SetClassIds(const std::vector<int64_t>& _classIds);

                    /**
                     * 判断参数 ClassIds 是否已赋值
                     * @return ClassIds 是否已赋值
                     * 
                     */
                    bool ClassIdsHasBeenSet() const;

                    /**
                     * 获取标签集合，匹配集合中任意元素。
<li>单个标签长度限制：32个字符。</li>
<li>数组长度限制：16。</li>
                     * @return Tags 标签集合，匹配集合中任意元素。
<li>单个标签长度限制：32个字符。</li>
<li>数组长度限制：16。</li>
                     * 
                     */
                    std::vector<std::string> GetTags() const;

                    /**
                     * 设置标签集合，匹配集合中任意元素。
<li>单个标签长度限制：32个字符。</li>
<li>数组长度限制：16。</li>
                     * @param _tags 标签集合，匹配集合中任意元素。
<li>单个标签长度限制：32个字符。</li>
<li>数组长度限制：16。</li>
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
                     * 获取文件类型。匹配集合中的任意元素：
<li>Video: 视频文件</li>
<li>Audio: 音频文件</li>
<li>Image: 图片文件</li>
                     * @return Categories 文件类型。匹配集合中的任意元素：
<li>Video: 视频文件</li>
<li>Audio: 音频文件</li>
<li>Image: 图片文件</li>
                     * 
                     */
                    std::vector<std::string> GetCategories() const;

                    /**
                     * 设置文件类型。匹配集合中的任意元素：
<li>Video: 视频文件</li>
<li>Audio: 音频文件</li>
<li>Image: 图片文件</li>
                     * @param _categories 文件类型。匹配集合中的任意元素：
<li>Video: 视频文件</li>
<li>Audio: 音频文件</li>
<li>Image: 图片文件</li>
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
                     * 获取媒体文件来源集合，来源取值参见 [SourceType](https://cloud.tencent.com/document/product/266/31773#MediaSourceData)。
<li>数组长度限制：10。</li>
                     * @return SourceTypes 媒体文件来源集合，来源取值参见 [SourceType](https://cloud.tencent.com/document/product/266/31773#MediaSourceData)。
<li>数组长度限制：10。</li>
                     * 
                     */
                    std::vector<std::string> GetSourceTypes() const;

                    /**
                     * 设置媒体文件来源集合，来源取值参见 [SourceType](https://cloud.tencent.com/document/product/266/31773#MediaSourceData)。
<li>数组长度限制：10。</li>
                     * @param _sourceTypes 媒体文件来源集合，来源取值参见 [SourceType](https://cloud.tencent.com/document/product/266/31773#MediaSourceData)。
<li>数组长度限制：10。</li>
                     * 
                     */
                    void SetSourceTypes(const std::vector<std::string>& _sourceTypes);

                    /**
                     * 判断参数 SourceTypes 是否已赋值
                     * @return SourceTypes 是否已赋值
                     * 
                     */
                    bool SourceTypesHasBeenSet() const;

                    /**
                     * 获取推流直播码集合。匹配集合中的任意元素。
<li>数组长度限制：10。</li>
                     * @return StreamIds 推流直播码集合。匹配集合中的任意元素。
<li>数组长度限制：10。</li>
                     * 
                     */
                    std::vector<std::string> GetStreamIds() const;

                    /**
                     * 设置推流直播码集合。匹配集合中的任意元素。
<li>数组长度限制：10。</li>
                     * @param _streamIds 推流直播码集合。匹配集合中的任意元素。
<li>数组长度限制：10。</li>
                     * 
                     */
                    void SetStreamIds(const std::vector<std::string>& _streamIds);

                    /**
                     * 判断参数 StreamIds 是否已赋值
                     * @return StreamIds 是否已赋值
                     * 
                     */
                    bool StreamIdsHasBeenSet() const;

                    /**
                     * 获取匹配创建时间在此时间段内的文件。
<li>包含所指定的头尾时间点。</li>
                     * @return CreateTime 匹配创建时间在此时间段内的文件。
<li>包含所指定的头尾时间点。</li>
                     * 
                     */
                    TimeRange GetCreateTime() const;

                    /**
                     * 设置匹配创建时间在此时间段内的文件。
<li>包含所指定的头尾时间点。</li>
                     * @param _createTime 匹配创建时间在此时间段内的文件。
<li>包含所指定的头尾时间点。</li>
                     * 
                     */
                    void SetCreateTime(const TimeRange& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取匹配过期时间在此时间段内的文件，无法检索到已过期文件。
<li>包含所指定的头尾时间点。</li>
                     * @return ExpireTime 匹配过期时间在此时间段内的文件，无法检索到已过期文件。
<li>包含所指定的头尾时间点。</li>
                     * 
                     */
                    TimeRange GetExpireTime() const;

                    /**
                     * 设置匹配过期时间在此时间段内的文件，无法检索到已过期文件。
<li>包含所指定的头尾时间点。</li>
                     * @param _expireTime 匹配过期时间在此时间段内的文件，无法检索到已过期文件。
<li>包含所指定的头尾时间点。</li>
                     * 
                     */
                    void SetExpireTime(const TimeRange& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取媒体文件存储地区，如 ap-chongqing，参见[地域列表](https://cloud.tencent.com/document/product/266/9760#.E5.B7.B2.E6.94.AF.E6.8C.81.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8)。
<li>单个存储地区长度限制：20个字符。</li>
<li>数组长度限制：20。</li>
                     * @return StorageRegions 媒体文件存储地区，如 ap-chongqing，参见[地域列表](https://cloud.tencent.com/document/product/266/9760#.E5.B7.B2.E6.94.AF.E6.8C.81.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8)。
<li>单个存储地区长度限制：20个字符。</li>
<li>数组长度限制：20。</li>
                     * 
                     */
                    std::vector<std::string> GetStorageRegions() const;

                    /**
                     * 设置媒体文件存储地区，如 ap-chongqing，参见[地域列表](https://cloud.tencent.com/document/product/266/9760#.E5.B7.B2.E6.94.AF.E6.8C.81.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8)。
<li>单个存储地区长度限制：20个字符。</li>
<li>数组长度限制：20。</li>
                     * @param _storageRegions 媒体文件存储地区，如 ap-chongqing，参见[地域列表](https://cloud.tencent.com/document/product/266/9760#.E5.B7.B2.E6.94.AF.E6.8C.81.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8)。
<li>单个存储地区长度限制：20个字符。</li>
<li>数组长度限制：20。</li>
                     * 
                     */
                    void SetStorageRegions(const std::vector<std::string>& _storageRegions);

                    /**
                     * 判断参数 StorageRegions 是否已赋值
                     * @return StorageRegions 是否已赋值
                     * 
                     */
                    bool StorageRegionsHasBeenSet() const;

                    /**
                     * 获取存储类型数组。可选值有：
<li> STANDARD：标准存储。</li>
<li> STANDARD_IA：低频存储。</li>
<li> ARCHIVE：归档存储。</li>
<li> DEEP_ARCHIVE：深度归档存储。</li>
                     * @return StorageClasses 存储类型数组。可选值有：
<li> STANDARD：标准存储。</li>
<li> STANDARD_IA：低频存储。</li>
<li> ARCHIVE：归档存储。</li>
<li> DEEP_ARCHIVE：深度归档存储。</li>
                     * 
                     */
                    std::vector<std::string> GetStorageClasses() const;

                    /**
                     * 设置存储类型数组。可选值有：
<li> STANDARD：标准存储。</li>
<li> STANDARD_IA：低频存储。</li>
<li> ARCHIVE：归档存储。</li>
<li> DEEP_ARCHIVE：深度归档存储。</li>
                     * @param _storageClasses 存储类型数组。可选值有：
<li> STANDARD：标准存储。</li>
<li> STANDARD_IA：低频存储。</li>
<li> ARCHIVE：归档存储。</li>
<li> DEEP_ARCHIVE：深度归档存储。</li>
                     * 
                     */
                    void SetStorageClasses(const std::vector<std::string>& _storageClasses);

                    /**
                     * 判断参数 StorageClasses 是否已赋值
                     * @return StorageClasses 是否已赋值
                     * 
                     */
                    bool StorageClassesHasBeenSet() const;

                    /**
                     * 获取媒体文件封装格式集合，匹配集合中任意元素。
<li>数组长度限制：10。</li>
                     * @return MediaTypes 媒体文件封装格式集合，匹配集合中任意元素。
<li>数组长度限制：10。</li>
                     * 
                     */
                    std::vector<std::string> GetMediaTypes() const;

                    /**
                     * 设置媒体文件封装格式集合，匹配集合中任意元素。
<li>数组长度限制：10。</li>
                     * @param _mediaTypes 媒体文件封装格式集合，匹配集合中任意元素。
<li>数组长度限制：10。</li>
                     * 
                     */
                    void SetMediaTypes(const std::vector<std::string>& _mediaTypes);

                    /**
                     * 判断参数 MediaTypes 是否已赋值
                     * @return MediaTypes 是否已赋值
                     * 
                     */
                    bool MediaTypesHasBeenSet() const;

                    /**
                     * 获取媒体文件状态，匹配集合中任意元素。
<li> Normal：正常；</li>
<li> SystemForbidden：平台封禁；</li>
<li> Forbidden：主动封禁。</li>
                     * @return Status 媒体文件状态，匹配集合中任意元素。
<li> Normal：正常；</li>
<li> SystemForbidden：平台封禁；</li>
<li> Forbidden：主动封禁。</li>
                     * 
                     */
                    std::vector<std::string> GetStatus() const;

                    /**
                     * 设置媒体文件状态，匹配集合中任意元素。
<li> Normal：正常；</li>
<li> SystemForbidden：平台封禁；</li>
<li> Forbidden：主动封禁。</li>
                     * @param _status 媒体文件状态，匹配集合中任意元素。
<li> Normal：正常；</li>
<li> SystemForbidden：平台封禁；</li>
<li> Forbidden：主动封禁。</li>
                     * 
                     */
                    void SetStatus(const std::vector<std::string>& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取媒体文件审核结果，匹配集合中任意元素。
<li> pass：审核通过；</li>
<li> review：疑似违规，建议复审；</li>
<li> block：确认违规，建议封禁；</li>
<li> notModerated：未审核。</li>
                     * @return ReviewResults 媒体文件审核结果，匹配集合中任意元素。
<li> pass：审核通过；</li>
<li> review：疑似违规，建议复审；</li>
<li> block：确认违规，建议封禁；</li>
<li> notModerated：未审核。</li>
                     * 
                     */
                    std::vector<std::string> GetReviewResults() const;

                    /**
                     * 设置媒体文件审核结果，匹配集合中任意元素。
<li> pass：审核通过；</li>
<li> review：疑似违规，建议复审；</li>
<li> block：确认违规，建议封禁；</li>
<li> notModerated：未审核。</li>
                     * @param _reviewResults 媒体文件审核结果，匹配集合中任意元素。
<li> pass：审核通过；</li>
<li> review：疑似违规，建议复审；</li>
<li> block：确认违规，建议封禁；</li>
<li> notModerated：未审核。</li>
                     * 
                     */
                    void SetReviewResults(const std::vector<std::string>& _reviewResults);

                    /**
                     * 判断参数 ReviewResults 是否已赋值
                     * @return ReviewResults 是否已赋值
                     * 
                     */
                    bool ReviewResultsHasBeenSet() const;

                    /**
                     * 获取TRTC 应用 ID 集合。匹配集合中的任意元素。
<li>数组长度限制：10。</li>
                     * @return TrtcSdkAppIds TRTC 应用 ID 集合。匹配集合中的任意元素。
<li>数组长度限制：10。</li>
                     * 
                     */
                    std::vector<uint64_t> GetTrtcSdkAppIds() const;

                    /**
                     * 设置TRTC 应用 ID 集合。匹配集合中的任意元素。
<li>数组长度限制：10。</li>
                     * @param _trtcSdkAppIds TRTC 应用 ID 集合。匹配集合中的任意元素。
<li>数组长度限制：10。</li>
                     * 
                     */
                    void SetTrtcSdkAppIds(const std::vector<uint64_t>& _trtcSdkAppIds);

                    /**
                     * 判断参数 TrtcSdkAppIds 是否已赋值
                     * @return TrtcSdkAppIds 是否已赋值
                     * 
                     */
                    bool TrtcSdkAppIdsHasBeenSet() const;

                    /**
                     * 获取TRTC 房间 ID 集合。匹配集合中的任意元素。
<li>单个房间 ID 长度限制：64个字符；</li>
<li>数组长度限制：10。</li>
                     * @return TrtcRoomIds TRTC 房间 ID 集合。匹配集合中的任意元素。
<li>单个房间 ID 长度限制：64个字符；</li>
<li>数组长度限制：10。</li>
                     * 
                     */
                    std::vector<std::string> GetTrtcRoomIds() const;

                    /**
                     * 设置TRTC 房间 ID 集合。匹配集合中的任意元素。
<li>单个房间 ID 长度限制：64个字符；</li>
<li>数组长度限制：10。</li>
                     * @param _trtcRoomIds TRTC 房间 ID 集合。匹配集合中的任意元素。
<li>单个房间 ID 长度限制：64个字符；</li>
<li>数组长度限制：10。</li>
                     * 
                     */
                    void SetTrtcRoomIds(const std::vector<std::string>& _trtcRoomIds);

                    /**
                     * 判断参数 TrtcRoomIds 是否已赋值
                     * @return TrtcRoomIds 是否已赋值
                     * 
                     */
                    bool TrtcRoomIdsHasBeenSet() const;

                    /**
                     * 获取指定所有媒体文件需要返回的信息，可同时指定多个信息，N 从 0 开始递增。如果未填写该字段，默认返回所有信息。选项有：
<li>basicInfo（视频基础信息）。</li>
<li>metaData（视频元信息）。</li>
<li>transcodeInfo（视频转码结果信息）。</li>
<li>animatedGraphicsInfo（视频转动图结果信息）。</li>
<li>imageSpriteInfo（视频雪碧图信息）。</li>
<li>snapshotByTimeOffsetInfo（视频指定时间点截图信息）。</li>
<li>sampleSnapshotInfo（采样截图信息）。</li>
<li>keyFrameDescInfo（打点信息）。</li>
<li>adaptiveDynamicStreamingInfo（转自适应码流信息）。</li>
<li>miniProgramReviewInfo（小程序审核信息）。</li>
                     * @return Filters 指定所有媒体文件需要返回的信息，可同时指定多个信息，N 从 0 开始递增。如果未填写该字段，默认返回所有信息。选项有：
<li>basicInfo（视频基础信息）。</li>
<li>metaData（视频元信息）。</li>
<li>transcodeInfo（视频转码结果信息）。</li>
<li>animatedGraphicsInfo（视频转动图结果信息）。</li>
<li>imageSpriteInfo（视频雪碧图信息）。</li>
<li>snapshotByTimeOffsetInfo（视频指定时间点截图信息）。</li>
<li>sampleSnapshotInfo（采样截图信息）。</li>
<li>keyFrameDescInfo（打点信息）。</li>
<li>adaptiveDynamicStreamingInfo（转自适应码流信息）。</li>
<li>miniProgramReviewInfo（小程序审核信息）。</li>
                     * 
                     */
                    std::vector<std::string> GetFilters() const;

                    /**
                     * 设置指定所有媒体文件需要返回的信息，可同时指定多个信息，N 从 0 开始递增。如果未填写该字段，默认返回所有信息。选项有：
<li>basicInfo（视频基础信息）。</li>
<li>metaData（视频元信息）。</li>
<li>transcodeInfo（视频转码结果信息）。</li>
<li>animatedGraphicsInfo（视频转动图结果信息）。</li>
<li>imageSpriteInfo（视频雪碧图信息）。</li>
<li>snapshotByTimeOffsetInfo（视频指定时间点截图信息）。</li>
<li>sampleSnapshotInfo（采样截图信息）。</li>
<li>keyFrameDescInfo（打点信息）。</li>
<li>adaptiveDynamicStreamingInfo（转自适应码流信息）。</li>
<li>miniProgramReviewInfo（小程序审核信息）。</li>
                     * @param _filters 指定所有媒体文件需要返回的信息，可同时指定多个信息，N 从 0 开始递增。如果未填写该字段，默认返回所有信息。选项有：
<li>basicInfo（视频基础信息）。</li>
<li>metaData（视频元信息）。</li>
<li>transcodeInfo（视频转码结果信息）。</li>
<li>animatedGraphicsInfo（视频转动图结果信息）。</li>
<li>imageSpriteInfo（视频雪碧图信息）。</li>
<li>snapshotByTimeOffsetInfo（视频指定时间点截图信息）。</li>
<li>sampleSnapshotInfo（采样截图信息）。</li>
<li>keyFrameDescInfo（打点信息）。</li>
<li>adaptiveDynamicStreamingInfo（转自适应码流信息）。</li>
<li>miniProgramReviewInfo（小程序审核信息）。</li>
                     * 
                     */
                    void SetFilters(const std::vector<std::string>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                    /**
                     * 获取排序方式。
<li>Sort.Field 可选 CreateTime 。</li>
<li>当 Text、 Names 或 Descriptions 不为空时，Sort.Field 字段无效， 搜索结果将以匹配度排序。</li>
                     * @return Sort 排序方式。
<li>Sort.Field 可选 CreateTime 。</li>
<li>当 Text、 Names 或 Descriptions 不为空时，Sort.Field 字段无效， 搜索结果将以匹配度排序。</li>
                     * 
                     */
                    SortBy GetSort() const;

                    /**
                     * 设置排序方式。
<li>Sort.Field 可选 CreateTime 。</li>
<li>当 Text、 Names 或 Descriptions 不为空时，Sort.Field 字段无效， 搜索结果将以匹配度排序。</li>
                     * @param _sort 排序方式。
<li>Sort.Field 可选 CreateTime 。</li>
<li>当 Text、 Names 或 Descriptions 不为空时，Sort.Field 字段无效， 搜索结果将以匹配度排序。</li>
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
                     * 获取<div id="p_offset">分页返回的起始偏移量，默认值：0。将返回第 Offset 到第 Offset+Limit-1 条。
<li>取值范围：Offset + Limit 不超过5000。（参见：<a href="#maxResultsDesc">接口返回结果数限制</a>）</li></div>
                     * @return Offset <div id="p_offset">分页返回的起始偏移量，默认值：0。将返回第 Offset 到第 Offset+Limit-1 条。
<li>取值范围：Offset + Limit 不超过5000。（参见：<a href="#maxResultsDesc">接口返回结果数限制</a>）</li></div>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<div id="p_offset">分页返回的起始偏移量，默认值：0。将返回第 Offset 到第 Offset+Limit-1 条。
<li>取值范围：Offset + Limit 不超过5000。（参见：<a href="#maxResultsDesc">接口返回结果数限制</a>）</li></div>
                     * @param _offset <div id="p_offset">分页返回的起始偏移量，默认值：0。将返回第 Offset 到第 Offset+Limit-1 条。
<li>取值范围：Offset + Limit 不超过5000。（参见：<a href="#maxResultsDesc">接口返回结果数限制</a>）</li></div>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<div id="p_limit">分页返回的记录条数，默认值：10。将返回第 Offset 到第 Offset+Limit-1 条。
<li>取值范围：Offset + Limit 不超过5000。（参见：<a href="#maxResultsDesc">接口返回结果数限制</a>）</li></div>
                     * @return Limit <div id="p_limit">分页返回的记录条数，默认值：10。将返回第 Offset 到第 Offset+Limit-1 条。
<li>取值范围：Offset + Limit 不超过5000。（参见：<a href="#maxResultsDesc">接口返回结果数限制</a>）</li></div>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<div id="p_limit">分页返回的记录条数，默认值：10。将返回第 Offset 到第 Offset+Limit-1 条。
<li>取值范围：Offset + Limit 不超过5000。（参见：<a href="#maxResultsDesc">接口返回结果数限制</a>）</li></div>
                     * @param _limit <div id="p_limit">分页返回的记录条数，默认值：10。将返回第 Offset 到第 Offset+Limit-1 条。
<li>取值范围：Offset + Limit 不超过5000。（参见：<a href="#maxResultsDesc">接口返回结果数限制</a>）</li></div>
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
                     * 获取（不推荐：应使用 Names、NamePrefixes 或 Descriptions 替代）
搜索文本，模糊匹配媒体文件名称或描述信息，匹配项越多，匹配度越高，排序越优先。长度限制：64个字符。
                     * @return Text （不推荐：应使用 Names、NamePrefixes 或 Descriptions 替代）
搜索文本，模糊匹配媒体文件名称或描述信息，匹配项越多，匹配度越高，排序越优先。长度限制：64个字符。
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置（不推荐：应使用 Names、NamePrefixes 或 Descriptions 替代）
搜索文本，模糊匹配媒体文件名称或描述信息，匹配项越多，匹配度越高，排序越优先。长度限制：64个字符。
                     * @param _text （不推荐：应使用 Names、NamePrefixes 或 Descriptions 替代）
搜索文本，模糊匹配媒体文件名称或描述信息，匹配项越多，匹配度越高，排序越优先。长度限制：64个字符。
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
                     * 获取（不推荐：应使用 SourceTypes 替代）
媒体文件来源，来源取值参见 [SourceType](https://cloud.tencent.com/document/product/266/31773#MediaSourceData)。
                     * @return SourceType （不推荐：应使用 SourceTypes 替代）
媒体文件来源，来源取值参见 [SourceType](https://cloud.tencent.com/document/product/266/31773#MediaSourceData)。
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置（不推荐：应使用 SourceTypes 替代）
媒体文件来源，来源取值参见 [SourceType](https://cloud.tencent.com/document/product/266/31773#MediaSourceData)。
                     * @param _sourceType （不推荐：应使用 SourceTypes 替代）
媒体文件来源，来源取值参见 [SourceType](https://cloud.tencent.com/document/product/266/31773#MediaSourceData)。
                     * 
                     */
                    void SetSourceType(const std::string& _sourceType);

                    /**
                     * 判断参数 SourceType 是否已赋值
                     * @return SourceType 是否已赋值
                     * 
                     */
                    bool SourceTypeHasBeenSet() const;

                    /**
                     * 获取（不推荐：应使用 StreamIds 替代）
推流直播码。
                     * @return StreamId （不推荐：应使用 StreamIds 替代）
推流直播码。
                     * 
                     */
                    std::string GetStreamId() const;

                    /**
                     * 设置（不推荐：应使用 StreamIds 替代）
推流直播码。
                     * @param _streamId （不推荐：应使用 StreamIds 替代）
推流直播码。
                     * 
                     */
                    void SetStreamId(const std::string& _streamId);

                    /**
                     * 判断参数 StreamId 是否已赋值
                     * @return StreamId 是否已赋值
                     * 
                     */
                    bool StreamIdHasBeenSet() const;

                    /**
                     * 获取（不推荐：应使用 CreateTime 替代）
创建时间的开始时间。
<li>大于等于开始时间。</li>
<li>当 CreateTime.After 也存在时，将优先使用 CreateTime.After。</li>
<li>格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。</li>
                     * @return StartTime （不推荐：应使用 CreateTime 替代）
创建时间的开始时间。
<li>大于等于开始时间。</li>
<li>当 CreateTime.After 也存在时，将优先使用 CreateTime.After。</li>
<li>格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。</li>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置（不推荐：应使用 CreateTime 替代）
创建时间的开始时间。
<li>大于等于开始时间。</li>
<li>当 CreateTime.After 也存在时，将优先使用 CreateTime.After。</li>
<li>格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。</li>
                     * @param _startTime （不推荐：应使用 CreateTime 替代）
创建时间的开始时间。
<li>大于等于开始时间。</li>
<li>当 CreateTime.After 也存在时，将优先使用 CreateTime.After。</li>
<li>格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。</li>
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
                     * 获取（不推荐：应使用 CreateTime 替代）
创建时间的结束时间。
<li>小于结束时间。</li>
<li>当 CreateTime.Before 也存在时，将优先使用 CreateTime.Before。</li>
<li>格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。</li>
                     * @return EndTime （不推荐：应使用 CreateTime 替代）
创建时间的结束时间。
<li>小于结束时间。</li>
<li>当 CreateTime.Before 也存在时，将优先使用 CreateTime.Before。</li>
<li>格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。</li>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置（不推荐：应使用 CreateTime 替代）
创建时间的结束时间。
<li>小于结束时间。</li>
<li>当 CreateTime.Before 也存在时，将优先使用 CreateTime.Before。</li>
<li>格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。</li>
                     * @param _endTime （不推荐：应使用 CreateTime 替代）
创建时间的结束时间。
<li>小于结束时间。</li>
<li>当 CreateTime.Before 也存在时，将优先使用 CreateTime.Before。</li>
<li>格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。</li>
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
                     * 获取该字段已无效。
                     * @return Vids 该字段已无效。
                     * 
                     */
                    std::vector<std::string> GetVids() const;

                    /**
                     * 设置该字段已无效。
                     * @param _vids 该字段已无效。
                     * 
                     */
                    void SetVids(const std::vector<std::string>& _vids);

                    /**
                     * 判断参数 Vids 是否已赋值
                     * @return Vids 是否已赋值
                     * 
                     */
                    bool VidsHasBeenSet() const;

                    /**
                     * 获取该字段已无效。
                     * @return Vid 该字段已无效。
                     * 
                     */
                    std::string GetVid() const;

                    /**
                     * 设置该字段已无效。
                     * @param _vid 该字段已无效。
                     * 
                     */
                    void SetVid(const std::string& _vid);

                    /**
                     * 判断参数 Vid 是否已赋值
                     * @return Vid 是否已赋值
                     * 
                     */
                    bool VidHasBeenSet() const;

                private:

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 文件 ID 集合，匹配集合中的任意元素。
<li>数组长度限制：10。</li>
<li>单个 ID 长度限制：40个字符。</li>
                     */
                    std::vector<std::string> m_fileIds;
                    bool m_fileIdsHasBeenSet;

                    /**
                     * 文件名集合，模糊匹配媒体文件的文件名，匹配度越高，排序越优先。
<li>单个文件名长度限制：100个字符。</li>
<li>数组长度限制：10。</li>
                     */
                    std::vector<std::string> m_names;
                    bool m_namesHasBeenSet;

                    /**
                     * 文件名前缀，前缀匹配媒体文件的文件名。
<li>单个文件名前缀长度限制：100个字符。</li>
<li>数组长度限制：10。</li>
                     */
                    std::vector<std::string> m_namePrefixes;
                    bool m_namePrefixesHasBeenSet;

                    /**
                     * 文件描述集合，模糊匹配媒体文件的描述，匹配度越高，排序越优先。
<li>单个描述长度限制：100个字符。</li>
<li>数组长度限制：10。</li>
                     */
                    std::vector<std::string> m_descriptions;
                    bool m_descriptionsHasBeenSet;

                    /**
                     * 分类 ID 集合，匹配集合指定 ID 的分类及其所有子类。
<li>数组长度限制：10。</li>
                     */
                    std::vector<int64_t> m_classIds;
                    bool m_classIdsHasBeenSet;

                    /**
                     * 标签集合，匹配集合中任意元素。
<li>单个标签长度限制：32个字符。</li>
<li>数组长度限制：16。</li>
                     */
                    std::vector<std::string> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 文件类型。匹配集合中的任意元素：
<li>Video: 视频文件</li>
<li>Audio: 音频文件</li>
<li>Image: 图片文件</li>
                     */
                    std::vector<std::string> m_categories;
                    bool m_categoriesHasBeenSet;

                    /**
                     * 媒体文件来源集合，来源取值参见 [SourceType](https://cloud.tencent.com/document/product/266/31773#MediaSourceData)。
<li>数组长度限制：10。</li>
                     */
                    std::vector<std::string> m_sourceTypes;
                    bool m_sourceTypesHasBeenSet;

                    /**
                     * 推流直播码集合。匹配集合中的任意元素。
<li>数组长度限制：10。</li>
                     */
                    std::vector<std::string> m_streamIds;
                    bool m_streamIdsHasBeenSet;

                    /**
                     * 匹配创建时间在此时间段内的文件。
<li>包含所指定的头尾时间点。</li>
                     */
                    TimeRange m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 匹配过期时间在此时间段内的文件，无法检索到已过期文件。
<li>包含所指定的头尾时间点。</li>
                     */
                    TimeRange m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 媒体文件存储地区，如 ap-chongqing，参见[地域列表](https://cloud.tencent.com/document/product/266/9760#.E5.B7.B2.E6.94.AF.E6.8C.81.E5.9C.B0.E5.9F.9F.E5.88.97.E8.A1.A8)。
<li>单个存储地区长度限制：20个字符。</li>
<li>数组长度限制：20。</li>
                     */
                    std::vector<std::string> m_storageRegions;
                    bool m_storageRegionsHasBeenSet;

                    /**
                     * 存储类型数组。可选值有：
<li> STANDARD：标准存储。</li>
<li> STANDARD_IA：低频存储。</li>
<li> ARCHIVE：归档存储。</li>
<li> DEEP_ARCHIVE：深度归档存储。</li>
                     */
                    std::vector<std::string> m_storageClasses;
                    bool m_storageClassesHasBeenSet;

                    /**
                     * 媒体文件封装格式集合，匹配集合中任意元素。
<li>数组长度限制：10。</li>
                     */
                    std::vector<std::string> m_mediaTypes;
                    bool m_mediaTypesHasBeenSet;

                    /**
                     * 媒体文件状态，匹配集合中任意元素。
<li> Normal：正常；</li>
<li> SystemForbidden：平台封禁；</li>
<li> Forbidden：主动封禁。</li>
                     */
                    std::vector<std::string> m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 媒体文件审核结果，匹配集合中任意元素。
<li> pass：审核通过；</li>
<li> review：疑似违规，建议复审；</li>
<li> block：确认违规，建议封禁；</li>
<li> notModerated：未审核。</li>
                     */
                    std::vector<std::string> m_reviewResults;
                    bool m_reviewResultsHasBeenSet;

                    /**
                     * TRTC 应用 ID 集合。匹配集合中的任意元素。
<li>数组长度限制：10。</li>
                     */
                    std::vector<uint64_t> m_trtcSdkAppIds;
                    bool m_trtcSdkAppIdsHasBeenSet;

                    /**
                     * TRTC 房间 ID 集合。匹配集合中的任意元素。
<li>单个房间 ID 长度限制：64个字符；</li>
<li>数组长度限制：10。</li>
                     */
                    std::vector<std::string> m_trtcRoomIds;
                    bool m_trtcRoomIdsHasBeenSet;

                    /**
                     * 指定所有媒体文件需要返回的信息，可同时指定多个信息，N 从 0 开始递增。如果未填写该字段，默认返回所有信息。选项有：
<li>basicInfo（视频基础信息）。</li>
<li>metaData（视频元信息）。</li>
<li>transcodeInfo（视频转码结果信息）。</li>
<li>animatedGraphicsInfo（视频转动图结果信息）。</li>
<li>imageSpriteInfo（视频雪碧图信息）。</li>
<li>snapshotByTimeOffsetInfo（视频指定时间点截图信息）。</li>
<li>sampleSnapshotInfo（采样截图信息）。</li>
<li>keyFrameDescInfo（打点信息）。</li>
<li>adaptiveDynamicStreamingInfo（转自适应码流信息）。</li>
<li>miniProgramReviewInfo（小程序审核信息）。</li>
                     */
                    std::vector<std::string> m_filters;
                    bool m_filtersHasBeenSet;

                    /**
                     * 排序方式。
<li>Sort.Field 可选 CreateTime 。</li>
<li>当 Text、 Names 或 Descriptions 不为空时，Sort.Field 字段无效， 搜索结果将以匹配度排序。</li>
                     */
                    SortBy m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * <div id="p_offset">分页返回的起始偏移量，默认值：0。将返回第 Offset 到第 Offset+Limit-1 条。
<li>取值范围：Offset + Limit 不超过5000。（参见：<a href="#maxResultsDesc">接口返回结果数限制</a>）</li></div>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <div id="p_limit">分页返回的记录条数，默认值：10。将返回第 Offset 到第 Offset+Limit-1 条。
<li>取值范围：Offset + Limit 不超过5000。（参见：<a href="#maxResultsDesc">接口返回结果数限制</a>）</li></div>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * （不推荐：应使用 Names、NamePrefixes 或 Descriptions 替代）
搜索文本，模糊匹配媒体文件名称或描述信息，匹配项越多，匹配度越高，排序越优先。长度限制：64个字符。
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * （不推荐：应使用 SourceTypes 替代）
媒体文件来源，来源取值参见 [SourceType](https://cloud.tencent.com/document/product/266/31773#MediaSourceData)。
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * （不推荐：应使用 StreamIds 替代）
推流直播码。
                     */
                    std::string m_streamId;
                    bool m_streamIdHasBeenSet;

                    /**
                     * （不推荐：应使用 CreateTime 替代）
创建时间的开始时间。
<li>大于等于开始时间。</li>
<li>当 CreateTime.After 也存在时，将优先使用 CreateTime.After。</li>
<li>格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。</li>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * （不推荐：应使用 CreateTime 替代）
创建时间的结束时间。
<li>小于结束时间。</li>
<li>当 CreateTime.Before 也存在时，将优先使用 CreateTime.Before。</li>
<li>格式按照 ISO 8601标准表示，详见 [ISO 日期格式说明](https://cloud.tencent.com/document/product/266/11732#I)。</li>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 该字段已无效。
                     */
                    std::vector<std::string> m_vids;
                    bool m_vidsHasBeenSet;

                    /**
                     * 该字段已无效。
                     */
                    std::string m_vid;
                    bool m_vidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_SEARCHMEDIAREQUEST_H_
