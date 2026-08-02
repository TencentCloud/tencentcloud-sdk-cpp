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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYMEDIAINFOREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYMEDIAINFOREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/MediaKeyFrameDescItem.h>
#include <tencentcloud/vod/v20180717/model/MediaSubtitleInput.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * ModifyMediaInfo请求参数结构体
                */
                class ModifyMediaInfoRequest : public AbstractModel
                {
                public:
                    ModifyMediaInfoRequest();
                    ~ModifyMediaInfoRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>媒体文件唯一标识。</p>
                     * @return FileId <p>媒体文件唯一标识。</p>
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置<p>媒体文件唯一标识。</p>
                     * @param _fileId <p>媒体文件唯一标识。</p>
                     * 
                     */
                    void SetFileId(const std::string& _fileId);

                    /**
                     * 判断参数 FileId 是否已赋值
                     * @return FileId 是否已赋值
                     * 
                     */
                    bool FileIdHasBeenSet() const;

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
                     * 获取<p>媒体文件名称，最长 64 个字符。</p>
                     * @return Name <p>媒体文件名称，最长 64 个字符。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>媒体文件名称，最长 64 个字符。</p>
                     * @param _name <p>媒体文件名称，最长 64 个字符。</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>媒体文件描述，最长 128 个字符。</p>
                     * @return Description <p>媒体文件描述，最长 128 个字符。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>媒体文件描述，最长 128 个字符。</p>
                     * @param _description <p>媒体文件描述，最长 128 个字符。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>媒体文件分类 ID。</p>
                     * @return ClassId <p>媒体文件分类 ID。</p>
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置<p>媒体文件分类 ID。</p>
                     * @param _classId <p>媒体文件分类 ID。</p>
                     * 
                     */
                    void SetClassId(const int64_t& _classId);

                    /**
                     * 判断参数 ClassId 是否已赋值
                     * @return ClassId 是否已赋值
                     * 
                     */
                    bool ClassIdHasBeenSet() const;

                    /**
                     * 获取<p>媒体文件过期时间，采用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。填“9999-12-31T23:59:59Z”表示永不过期。过期后该媒体文件及其相关资源（转码结果、雪碧图等）将被永久删除。</p>
                     * @return ExpireTime <p>媒体文件过期时间，采用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。填“9999-12-31T23:59:59Z”表示永不过期。过期后该媒体文件及其相关资源（转码结果、雪碧图等）将被永久删除。</p>
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置<p>媒体文件过期时间，采用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。填“9999-12-31T23:59:59Z”表示永不过期。过期后该媒体文件及其相关资源（转码结果、雪碧图等）将被永久删除。</p>
                     * @param _expireTime <p>媒体文件过期时间，采用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。填“9999-12-31T23:59:59Z”表示永不过期。过期后该媒体文件及其相关资源（转码结果、雪碧图等）将被永久删除。</p>
                     * 
                     */
                    void SetExpireTime(const std::string& _expireTime);

                    /**
                     * 判断参数 ExpireTime 是否已赋值
                     * @return ExpireTime 是否已赋值
                     * 
                     */
                    bool ExpireTimeHasBeenSet() const;

                    /**
                     * 获取<p>视频封面图片文件（如 jpeg, png 等）进行 <a href="https://tools.ietf.org/html/rfc4648">Base64</a> 编码后的字符串，仅支持 gif、jpeg、png 三种图片格式。</p>
                     * @return CoverData <p>视频封面图片文件（如 jpeg, png 等）进行 <a href="https://tools.ietf.org/html/rfc4648">Base64</a> 编码后的字符串，仅支持 gif、jpeg、png 三种图片格式。</p>
                     * 
                     */
                    std::string GetCoverData() const;

                    /**
                     * 设置<p>视频封面图片文件（如 jpeg, png 等）进行 <a href="https://tools.ietf.org/html/rfc4648">Base64</a> 编码后的字符串，仅支持 gif、jpeg、png 三种图片格式。</p>
                     * @param _coverData <p>视频封面图片文件（如 jpeg, png 等）进行 <a href="https://tools.ietf.org/html/rfc4648">Base64</a> 编码后的字符串，仅支持 gif、jpeg、png 三种图片格式。</p>
                     * 
                     */
                    void SetCoverData(const std::string& _coverData);

                    /**
                     * 判断参数 CoverData 是否已赋值
                     * @return CoverData 是否已赋值
                     * 
                     */
                    bool CoverDataHasBeenSet() const;

                    /**
                     * 获取<p>新增的一组视频打点信息，如果某个偏移时间已存在打点，则会进行覆盖操作，单个媒体文件最多 100 个打点信息。同一个请求里，AddKeyFrameDescs 的时间偏移参数必须与 DeleteKeyFrameDescs 都不同。</p>
                     * @return AddKeyFrameDescs <p>新增的一组视频打点信息，如果某个偏移时间已存在打点，则会进行覆盖操作，单个媒体文件最多 100 个打点信息。同一个请求里，AddKeyFrameDescs 的时间偏移参数必须与 DeleteKeyFrameDescs 都不同。</p>
                     * 
                     */
                    std::vector<MediaKeyFrameDescItem> GetAddKeyFrameDescs() const;

                    /**
                     * 设置<p>新增的一组视频打点信息，如果某个偏移时间已存在打点，则会进行覆盖操作，单个媒体文件最多 100 个打点信息。同一个请求里，AddKeyFrameDescs 的时间偏移参数必须与 DeleteKeyFrameDescs 都不同。</p>
                     * @param _addKeyFrameDescs <p>新增的一组视频打点信息，如果某个偏移时间已存在打点，则会进行覆盖操作，单个媒体文件最多 100 个打点信息。同一个请求里，AddKeyFrameDescs 的时间偏移参数必须与 DeleteKeyFrameDescs 都不同。</p>
                     * 
                     */
                    void SetAddKeyFrameDescs(const std::vector<MediaKeyFrameDescItem>& _addKeyFrameDescs);

                    /**
                     * 判断参数 AddKeyFrameDescs 是否已赋值
                     * @return AddKeyFrameDescs 是否已赋值
                     * 
                     */
                    bool AddKeyFrameDescsHasBeenSet() const;

                    /**
                     * 获取<p>要删除的一组视频打点信息的时间偏移，单位：秒。同一个请求里，AddKeyFrameDescs 的时间偏移参数必须与 DeleteKeyFrameDescs 都不同。</p>
                     * @return DeleteKeyFrameDescs <p>要删除的一组视频打点信息的时间偏移，单位：秒。同一个请求里，AddKeyFrameDescs 的时间偏移参数必须与 DeleteKeyFrameDescs 都不同。</p>
                     * 
                     */
                    std::vector<double> GetDeleteKeyFrameDescs() const;

                    /**
                     * 设置<p>要删除的一组视频打点信息的时间偏移，单位：秒。同一个请求里，AddKeyFrameDescs 的时间偏移参数必须与 DeleteKeyFrameDescs 都不同。</p>
                     * @param _deleteKeyFrameDescs <p>要删除的一组视频打点信息的时间偏移，单位：秒。同一个请求里，AddKeyFrameDescs 的时间偏移参数必须与 DeleteKeyFrameDescs 都不同。</p>
                     * 
                     */
                    void SetDeleteKeyFrameDescs(const std::vector<double>& _deleteKeyFrameDescs);

                    /**
                     * 判断参数 DeleteKeyFrameDescs 是否已赋值
                     * @return DeleteKeyFrameDescs 是否已赋值
                     * 
                     */
                    bool DeleteKeyFrameDescsHasBeenSet() const;

                    /**
                     * 获取<p>取值 1 表示清空视频打点信息，其他值无意义。<br>同一个请求里，ClearKeyFrameDescs 与 AddKeyFrameDescs 不能同时出现。</p>
                     * @return ClearKeyFrameDescs <p>取值 1 表示清空视频打点信息，其他值无意义。<br>同一个请求里，ClearKeyFrameDescs 与 AddKeyFrameDescs 不能同时出现。</p>
                     * 
                     */
                    int64_t GetClearKeyFrameDescs() const;

                    /**
                     * 设置<p>取值 1 表示清空视频打点信息，其他值无意义。<br>同一个请求里，ClearKeyFrameDescs 与 AddKeyFrameDescs 不能同时出现。</p>
                     * @param _clearKeyFrameDescs <p>取值 1 表示清空视频打点信息，其他值无意义。<br>同一个请求里，ClearKeyFrameDescs 与 AddKeyFrameDescs 不能同时出现。</p>
                     * 
                     */
                    void SetClearKeyFrameDescs(const int64_t& _clearKeyFrameDescs);

                    /**
                     * 判断参数 ClearKeyFrameDescs 是否已赋值
                     * @return ClearKeyFrameDescs 是否已赋值
                     * 
                     */
                    bool ClearKeyFrameDescsHasBeenSet() const;

                    /**
                     * 获取<p>新增的一组标签，单个媒体文件最多 16 个标签，单个标签最多 32 个字符。同一个请求里，AddTags 参数必须与 DeleteTags 都不同。</p>
                     * @return AddTags <p>新增的一组标签，单个媒体文件最多 16 个标签，单个标签最多 32 个字符。同一个请求里，AddTags 参数必须与 DeleteTags 都不同。</p>
                     * 
                     */
                    std::vector<std::string> GetAddTags() const;

                    /**
                     * 设置<p>新增的一组标签，单个媒体文件最多 16 个标签，单个标签最多 32 个字符。同一个请求里，AddTags 参数必须与 DeleteTags 都不同。</p>
                     * @param _addTags <p>新增的一组标签，单个媒体文件最多 16 个标签，单个标签最多 32 个字符。同一个请求里，AddTags 参数必须与 DeleteTags 都不同。</p>
                     * 
                     */
                    void SetAddTags(const std::vector<std::string>& _addTags);

                    /**
                     * 判断参数 AddTags 是否已赋值
                     * @return AddTags 是否已赋值
                     * 
                     */
                    bool AddTagsHasBeenSet() const;

                    /**
                     * 获取<p>要删除的一组标签。同一个请求里，AddTags 参数必须与 DeleteTags 都不同。</p>
                     * @return DeleteTags <p>要删除的一组标签。同一个请求里，AddTags 参数必须与 DeleteTags 都不同。</p>
                     * 
                     */
                    std::vector<std::string> GetDeleteTags() const;

                    /**
                     * 设置<p>要删除的一组标签。同一个请求里，AddTags 参数必须与 DeleteTags 都不同。</p>
                     * @param _deleteTags <p>要删除的一组标签。同一个请求里，AddTags 参数必须与 DeleteTags 都不同。</p>
                     * 
                     */
                    void SetDeleteTags(const std::vector<std::string>& _deleteTags);

                    /**
                     * 判断参数 DeleteTags 是否已赋值
                     * @return DeleteTags 是否已赋值
                     * 
                     */
                    bool DeleteTagsHasBeenSet() const;

                    /**
                     * 获取<p>取值 1 表示清空媒体文件所有标签，其他值无意义。<br>同一个请求里，ClearTags 与 AddTags 不能同时出现。</p>
                     * @return ClearTags <p>取值 1 表示清空媒体文件所有标签，其他值无意义。<br>同一个请求里，ClearTags 与 AddTags 不能同时出现。</p>
                     * 
                     */
                    int64_t GetClearTags() const;

                    /**
                     * 设置<p>取值 1 表示清空媒体文件所有标签，其他值无意义。<br>同一个请求里，ClearTags 与 AddTags 不能同时出现。</p>
                     * @param _clearTags <p>取值 1 表示清空媒体文件所有标签，其他值无意义。<br>同一个请求里，ClearTags 与 AddTags 不能同时出现。</p>
                     * 
                     */
                    void SetClearTags(const int64_t& _clearTags);

                    /**
                     * 判断参数 ClearTags 是否已赋值
                     * @return ClearTags 是否已赋值
                     * 
                     */
                    bool ClearTagsHasBeenSet() const;

                    /**
                     * 获取<p>新增一组字幕。单个媒体文件最多 16 个字幕。同一个请求中，AddSubtitles 中指定的字幕 Id 必须与 DeleteSubtitleIds 都不相同。</p>
                     * @return AddSubtitles <p>新增一组字幕。单个媒体文件最多 16 个字幕。同一个请求中，AddSubtitles 中指定的字幕 Id 必须与 DeleteSubtitleIds 都不相同。</p>
                     * 
                     */
                    std::vector<MediaSubtitleInput> GetAddSubtitles() const;

                    /**
                     * 设置<p>新增一组字幕。单个媒体文件最多 16 个字幕。同一个请求中，AddSubtitles 中指定的字幕 Id 必须与 DeleteSubtitleIds 都不相同。</p>
                     * @param _addSubtitles <p>新增一组字幕。单个媒体文件最多 16 个字幕。同一个请求中，AddSubtitles 中指定的字幕 Id 必须与 DeleteSubtitleIds 都不相同。</p>
                     * 
                     */
                    void SetAddSubtitles(const std::vector<MediaSubtitleInput>& _addSubtitles);

                    /**
                     * 判断参数 AddSubtitles 是否已赋值
                     * @return AddSubtitles 是否已赋值
                     * 
                     */
                    bool AddSubtitlesHasBeenSet() const;

                    /**
                     * 获取<p>待删除字幕的唯一标识。同一个请求中，AddSubtitles 中指定的字幕 Id 必须与 DeleteSubtitleIds 都不相同。</p>
                     * @return DeleteSubtitleIds <p>待删除字幕的唯一标识。同一个请求中，AddSubtitles 中指定的字幕 Id 必须与 DeleteSubtitleIds 都不相同。</p>
                     * 
                     */
                    std::vector<std::string> GetDeleteSubtitleIds() const;

                    /**
                     * 设置<p>待删除字幕的唯一标识。同一个请求中，AddSubtitles 中指定的字幕 Id 必须与 DeleteSubtitleIds 都不相同。</p>
                     * @param _deleteSubtitleIds <p>待删除字幕的唯一标识。同一个请求中，AddSubtitles 中指定的字幕 Id 必须与 DeleteSubtitleIds 都不相同。</p>
                     * 
                     */
                    void SetDeleteSubtitleIds(const std::vector<std::string>& _deleteSubtitleIds);

                    /**
                     * 判断参数 DeleteSubtitleIds 是否已赋值
                     * @return DeleteSubtitleIds 是否已赋值
                     * 
                     */
                    bool DeleteSubtitleIdsHasBeenSet() const;

                    /**
                     * 获取<p>取值 1 表示清空媒体文件所有的字幕信息，其他值无意义。<br>同一个请求里，ClearSubtitles 与 AddSubtitles不能同时出现。</p>
                     * @return ClearSubtitles <p>取值 1 表示清空媒体文件所有的字幕信息，其他值无意义。<br>同一个请求里，ClearSubtitles 与 AddSubtitles不能同时出现。</p>
                     * 
                     */
                    int64_t GetClearSubtitles() const;

                    /**
                     * 设置<p>取值 1 表示清空媒体文件所有的字幕信息，其他值无意义。<br>同一个请求里，ClearSubtitles 与 AddSubtitles不能同时出现。</p>
                     * @param _clearSubtitles <p>取值 1 表示清空媒体文件所有的字幕信息，其他值无意义。<br>同一个请求里，ClearSubtitles 与 AddSubtitles不能同时出现。</p>
                     * 
                     */
                    void SetClearSubtitles(const int64_t& _clearSubtitles);

                    /**
                     * 判断参数 ClearSubtitles 是否已赋值
                     * @return ClearSubtitles 是否已赋值
                     * 
                     */
                    bool ClearSubtitlesHasBeenSet() const;

                    /**
                     * 获取<p>待出库的知识库ID。</p>
                     * @return DeleteKnowledgeBases <p>待出库的知识库ID。</p>
                     * 
                     */
                    std::vector<std::string> GetDeleteKnowledgeBases() const;

                    /**
                     * 设置<p>待出库的知识库ID。</p>
                     * @param _deleteKnowledgeBases <p>待出库的知识库ID。</p>
                     * 
                     */
                    void SetDeleteKnowledgeBases(const std::vector<std::string>& _deleteKnowledgeBases);

                    /**
                     * 判断参数 DeleteKnowledgeBases 是否已赋值
                     * @return DeleteKnowledgeBases 是否已赋值
                     * 
                     */
                    bool DeleteKnowledgeBasesHasBeenSet() const;

                    /**
                     * 获取<p>取值 1 表示从所有知识库中移除此媒体文件，其他值无意义。</p><p><br>同一个请求里，ClearKnowledgeBases 与 DeleteKnowledgeBases 不能同时出现。<p></p></p>
                     * @return ClearKnowledgeBases <p>取值 1 表示从所有知识库中移除此媒体文件，其他值无意义。</p><p><br>同一个请求里，ClearKnowledgeBases 与 DeleteKnowledgeBases 不能同时出现。<p></p></p>
                     * 
                     */
                    int64_t GetClearKnowledgeBases() const;

                    /**
                     * 设置<p>取值 1 表示从所有知识库中移除此媒体文件，其他值无意义。</p><p><br>同一个请求里，ClearKnowledgeBases 与 DeleteKnowledgeBases 不能同时出现。<p></p></p>
                     * @param _clearKnowledgeBases <p>取值 1 表示从所有知识库中移除此媒体文件，其他值无意义。</p><p><br>同一个请求里，ClearKnowledgeBases 与 DeleteKnowledgeBases 不能同时出现。<p></p></p>
                     * 
                     */
                    void SetClearKnowledgeBases(const int64_t& _clearKnowledgeBases);

                    /**
                     * 判断参数 ClearKnowledgeBases 是否已赋值
                     * @return ClearKnowledgeBases 是否已赋值
                     * 
                     */
                    bool ClearKnowledgeBasesHasBeenSet() const;

                private:

                    /**
                     * <p>媒体文件唯一标识。</p>
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <p><b>点播<a href="/document/product/266/14574">应用</a> ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b></p>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * <p>媒体文件名称，最长 64 个字符。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>媒体文件描述，最长 128 个字符。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>媒体文件分类 ID。</p>
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * <p>媒体文件过期时间，采用 <a href="https://cloud.tencent.com/document/product/266/11732#I">ISO 日期格式</a>。填“9999-12-31T23:59:59Z”表示永不过期。过期后该媒体文件及其相关资源（转码结果、雪碧图等）将被永久删除。</p>
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * <p>视频封面图片文件（如 jpeg, png 等）进行 <a href="https://tools.ietf.org/html/rfc4648">Base64</a> 编码后的字符串，仅支持 gif、jpeg、png 三种图片格式。</p>
                     */
                    std::string m_coverData;
                    bool m_coverDataHasBeenSet;

                    /**
                     * <p>新增的一组视频打点信息，如果某个偏移时间已存在打点，则会进行覆盖操作，单个媒体文件最多 100 个打点信息。同一个请求里，AddKeyFrameDescs 的时间偏移参数必须与 DeleteKeyFrameDescs 都不同。</p>
                     */
                    std::vector<MediaKeyFrameDescItem> m_addKeyFrameDescs;
                    bool m_addKeyFrameDescsHasBeenSet;

                    /**
                     * <p>要删除的一组视频打点信息的时间偏移，单位：秒。同一个请求里，AddKeyFrameDescs 的时间偏移参数必须与 DeleteKeyFrameDescs 都不同。</p>
                     */
                    std::vector<double> m_deleteKeyFrameDescs;
                    bool m_deleteKeyFrameDescsHasBeenSet;

                    /**
                     * <p>取值 1 表示清空视频打点信息，其他值无意义。<br>同一个请求里，ClearKeyFrameDescs 与 AddKeyFrameDescs 不能同时出现。</p>
                     */
                    int64_t m_clearKeyFrameDescs;
                    bool m_clearKeyFrameDescsHasBeenSet;

                    /**
                     * <p>新增的一组标签，单个媒体文件最多 16 个标签，单个标签最多 32 个字符。同一个请求里，AddTags 参数必须与 DeleteTags 都不同。</p>
                     */
                    std::vector<std::string> m_addTags;
                    bool m_addTagsHasBeenSet;

                    /**
                     * <p>要删除的一组标签。同一个请求里，AddTags 参数必须与 DeleteTags 都不同。</p>
                     */
                    std::vector<std::string> m_deleteTags;
                    bool m_deleteTagsHasBeenSet;

                    /**
                     * <p>取值 1 表示清空媒体文件所有标签，其他值无意义。<br>同一个请求里，ClearTags 与 AddTags 不能同时出现。</p>
                     */
                    int64_t m_clearTags;
                    bool m_clearTagsHasBeenSet;

                    /**
                     * <p>新增一组字幕。单个媒体文件最多 16 个字幕。同一个请求中，AddSubtitles 中指定的字幕 Id 必须与 DeleteSubtitleIds 都不相同。</p>
                     */
                    std::vector<MediaSubtitleInput> m_addSubtitles;
                    bool m_addSubtitlesHasBeenSet;

                    /**
                     * <p>待删除字幕的唯一标识。同一个请求中，AddSubtitles 中指定的字幕 Id 必须与 DeleteSubtitleIds 都不相同。</p>
                     */
                    std::vector<std::string> m_deleteSubtitleIds;
                    bool m_deleteSubtitleIdsHasBeenSet;

                    /**
                     * <p>取值 1 表示清空媒体文件所有的字幕信息，其他值无意义。<br>同一个请求里，ClearSubtitles 与 AddSubtitles不能同时出现。</p>
                     */
                    int64_t m_clearSubtitles;
                    bool m_clearSubtitlesHasBeenSet;

                    /**
                     * <p>待出库的知识库ID。</p>
                     */
                    std::vector<std::string> m_deleteKnowledgeBases;
                    bool m_deleteKnowledgeBasesHasBeenSet;

                    /**
                     * <p>取值 1 表示从所有知识库中移除此媒体文件，其他值无意义。</p><p><br>同一个请求里，ClearKnowledgeBases 与 DeleteKnowledgeBases 不能同时出现。<p></p></p>
                     */
                    int64_t m_clearKnowledgeBases;
                    bool m_clearKnowledgeBasesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYMEDIAINFOREQUEST_H_
