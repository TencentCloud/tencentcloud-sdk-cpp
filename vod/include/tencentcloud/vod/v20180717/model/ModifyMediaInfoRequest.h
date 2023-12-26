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
                     * 获取媒体文件唯一标识。
                     * @return FileId 媒体文件唯一标识。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置媒体文件唯一标识。
                     * @param _fileId 媒体文件唯一标识。
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
                     * 获取媒体文件名称，最长 64 个字符。
                     * @return Name 媒体文件名称，最长 64 个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置媒体文件名称，最长 64 个字符。
                     * @param _name 媒体文件名称，最长 64 个字符。
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
                     * 获取媒体文件描述，最长 128 个字符。
                     * @return Description 媒体文件描述，最长 128 个字符。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置媒体文件描述，最长 128 个字符。
                     * @param _description 媒体文件描述，最长 128 个字符。
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
                     * 获取媒体文件分类 ID。
                     * @return ClassId 媒体文件分类 ID。
                     * 
                     */
                    int64_t GetClassId() const;

                    /**
                     * 设置媒体文件分类 ID。
                     * @param _classId 媒体文件分类 ID。
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
                     * 获取媒体文件过期时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。填“9999-12-31T23:59:59Z”表示永不过期。过期后该媒体文件及其相关资源（转码结果、雪碧图等）将被永久删除。
                     * @return ExpireTime 媒体文件过期时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。填“9999-12-31T23:59:59Z”表示永不过期。过期后该媒体文件及其相关资源（转码结果、雪碧图等）将被永久删除。
                     * 
                     */
                    std::string GetExpireTime() const;

                    /**
                     * 设置媒体文件过期时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。填“9999-12-31T23:59:59Z”表示永不过期。过期后该媒体文件及其相关资源（转码结果、雪碧图等）将被永久删除。
                     * @param _expireTime 媒体文件过期时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。填“9999-12-31T23:59:59Z”表示永不过期。过期后该媒体文件及其相关资源（转码结果、雪碧图等）将被永久删除。
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
                     * 获取视频封面图片文件（如 jpeg, png 等）进行 [Base64](https://tools.ietf.org/html/rfc4648) 编码后的字符串，仅支持 gif、jpeg、png 三种图片格式。
                     * @return CoverData 视频封面图片文件（如 jpeg, png 等）进行 [Base64](https://tools.ietf.org/html/rfc4648) 编码后的字符串，仅支持 gif、jpeg、png 三种图片格式。
                     * 
                     */
                    std::string GetCoverData() const;

                    /**
                     * 设置视频封面图片文件（如 jpeg, png 等）进行 [Base64](https://tools.ietf.org/html/rfc4648) 编码后的字符串，仅支持 gif、jpeg、png 三种图片格式。
                     * @param _coverData 视频封面图片文件（如 jpeg, png 等）进行 [Base64](https://tools.ietf.org/html/rfc4648) 编码后的字符串，仅支持 gif、jpeg、png 三种图片格式。
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
                     * 获取新增的一组视频打点信息，如果某个偏移时间已存在打点，则会进行覆盖操作，单个媒体文件最多 100 个打点信息。同一个请求里，AddKeyFrameDescs 的时间偏移参数必须与 DeleteKeyFrameDescs 都不同。
                     * @return AddKeyFrameDescs 新增的一组视频打点信息，如果某个偏移时间已存在打点，则会进行覆盖操作，单个媒体文件最多 100 个打点信息。同一个请求里，AddKeyFrameDescs 的时间偏移参数必须与 DeleteKeyFrameDescs 都不同。
                     * 
                     */
                    std::vector<MediaKeyFrameDescItem> GetAddKeyFrameDescs() const;

                    /**
                     * 设置新增的一组视频打点信息，如果某个偏移时间已存在打点，则会进行覆盖操作，单个媒体文件最多 100 个打点信息。同一个请求里，AddKeyFrameDescs 的时间偏移参数必须与 DeleteKeyFrameDescs 都不同。
                     * @param _addKeyFrameDescs 新增的一组视频打点信息，如果某个偏移时间已存在打点，则会进行覆盖操作，单个媒体文件最多 100 个打点信息。同一个请求里，AddKeyFrameDescs 的时间偏移参数必须与 DeleteKeyFrameDescs 都不同。
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
                     * 获取要删除的一组视频打点信息的时间偏移，单位：秒。同一个请求里，AddKeyFrameDescs 的时间偏移参数必须与 DeleteKeyFrameDescs 都不同。
                     * @return DeleteKeyFrameDescs 要删除的一组视频打点信息的时间偏移，单位：秒。同一个请求里，AddKeyFrameDescs 的时间偏移参数必须与 DeleteKeyFrameDescs 都不同。
                     * 
                     */
                    std::vector<double> GetDeleteKeyFrameDescs() const;

                    /**
                     * 设置要删除的一组视频打点信息的时间偏移，单位：秒。同一个请求里，AddKeyFrameDescs 的时间偏移参数必须与 DeleteKeyFrameDescs 都不同。
                     * @param _deleteKeyFrameDescs 要删除的一组视频打点信息的时间偏移，单位：秒。同一个请求里，AddKeyFrameDescs 的时间偏移参数必须与 DeleteKeyFrameDescs 都不同。
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
                     * 获取取值 1 表示清空视频打点信息，其他值无意义。
同一个请求里，ClearKeyFrameDescs 与 AddKeyFrameDescs 不能同时出现。
                     * @return ClearKeyFrameDescs 取值 1 表示清空视频打点信息，其他值无意义。
同一个请求里，ClearKeyFrameDescs 与 AddKeyFrameDescs 不能同时出现。
                     * 
                     */
                    int64_t GetClearKeyFrameDescs() const;

                    /**
                     * 设置取值 1 表示清空视频打点信息，其他值无意义。
同一个请求里，ClearKeyFrameDescs 与 AddKeyFrameDescs 不能同时出现。
                     * @param _clearKeyFrameDescs 取值 1 表示清空视频打点信息，其他值无意义。
同一个请求里，ClearKeyFrameDescs 与 AddKeyFrameDescs 不能同时出现。
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
                     * 获取新增的一组标签，单个媒体文件最多 16 个标签，单个标签最多 32 个字符。同一个请求里，AddTags 参数必须与 DeleteTags 都不同。
                     * @return AddTags 新增的一组标签，单个媒体文件最多 16 个标签，单个标签最多 32 个字符。同一个请求里，AddTags 参数必须与 DeleteTags 都不同。
                     * 
                     */
                    std::vector<std::string> GetAddTags() const;

                    /**
                     * 设置新增的一组标签，单个媒体文件最多 16 个标签，单个标签最多 32 个字符。同一个请求里，AddTags 参数必须与 DeleteTags 都不同。
                     * @param _addTags 新增的一组标签，单个媒体文件最多 16 个标签，单个标签最多 32 个字符。同一个请求里，AddTags 参数必须与 DeleteTags 都不同。
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
                     * 获取要删除的一组标签。同一个请求里，AddTags 参数必须与 DeleteTags 都不同。
                     * @return DeleteTags 要删除的一组标签。同一个请求里，AddTags 参数必须与 DeleteTags 都不同。
                     * 
                     */
                    std::vector<std::string> GetDeleteTags() const;

                    /**
                     * 设置要删除的一组标签。同一个请求里，AddTags 参数必须与 DeleteTags 都不同。
                     * @param _deleteTags 要删除的一组标签。同一个请求里，AddTags 参数必须与 DeleteTags 都不同。
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
                     * 获取取值 1 表示清空媒体文件所有标签，其他值无意义。
同一个请求里，ClearTags 与 AddTags 不能同时出现。
                     * @return ClearTags 取值 1 表示清空媒体文件所有标签，其他值无意义。
同一个请求里，ClearTags 与 AddTags 不能同时出现。
                     * 
                     */
                    int64_t GetClearTags() const;

                    /**
                     * 设置取值 1 表示清空媒体文件所有标签，其他值无意义。
同一个请求里，ClearTags 与 AddTags 不能同时出现。
                     * @param _clearTags 取值 1 表示清空媒体文件所有标签，其他值无意义。
同一个请求里，ClearTags 与 AddTags 不能同时出现。
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
                     * 获取新增一组字幕。单个媒体文件最多 16 个字幕。同一个请求中，AddSubtitles 中指定的字幕 Id 必须与 DeleteSubtitleIds 都不相同。
                     * @return AddSubtitles 新增一组字幕。单个媒体文件最多 16 个字幕。同一个请求中，AddSubtitles 中指定的字幕 Id 必须与 DeleteSubtitleIds 都不相同。
                     * 
                     */
                    std::vector<MediaSubtitleInput> GetAddSubtitles() const;

                    /**
                     * 设置新增一组字幕。单个媒体文件最多 16 个字幕。同一个请求中，AddSubtitles 中指定的字幕 Id 必须与 DeleteSubtitleIds 都不相同。
                     * @param _addSubtitles 新增一组字幕。单个媒体文件最多 16 个字幕。同一个请求中，AddSubtitles 中指定的字幕 Id 必须与 DeleteSubtitleIds 都不相同。
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
                     * 获取待删除字幕的唯一标识。同一个请求中，AddSubtitles 中指定的字幕 Id 必须与 DeleteSubtitleIds 都不相同。
                     * @return DeleteSubtitleIds 待删除字幕的唯一标识。同一个请求中，AddSubtitles 中指定的字幕 Id 必须与 DeleteSubtitleIds 都不相同。
                     * 
                     */
                    std::vector<std::string> GetDeleteSubtitleIds() const;

                    /**
                     * 设置待删除字幕的唯一标识。同一个请求中，AddSubtitles 中指定的字幕 Id 必须与 DeleteSubtitleIds 都不相同。
                     * @param _deleteSubtitleIds 待删除字幕的唯一标识。同一个请求中，AddSubtitles 中指定的字幕 Id 必须与 DeleteSubtitleIds 都不相同。
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
                     * 获取取值 1 表示清空媒体文件所有的字幕信息，其他值无意义。
同一个请求里，ClearSubtitles 与 AddSubtitles不能同时出现。
                     * @return ClearSubtitles 取值 1 表示清空媒体文件所有的字幕信息，其他值无意义。
同一个请求里，ClearSubtitles 与 AddSubtitles不能同时出现。
                     * 
                     */
                    int64_t GetClearSubtitles() const;

                    /**
                     * 设置取值 1 表示清空媒体文件所有的字幕信息，其他值无意义。
同一个请求里，ClearSubtitles 与 AddSubtitles不能同时出现。
                     * @param _clearSubtitles 取值 1 表示清空媒体文件所有的字幕信息，其他值无意义。
同一个请求里，ClearSubtitles 与 AddSubtitles不能同时出现。
                     * 
                     */
                    void SetClearSubtitles(const int64_t& _clearSubtitles);

                    /**
                     * 判断参数 ClearSubtitles 是否已赋值
                     * @return ClearSubtitles 是否已赋值
                     * 
                     */
                    bool ClearSubtitlesHasBeenSet() const;

                private:

                    /**
                     * 媒体文件唯一标识。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * <b>点播[应用](/document/product/266/14574) ID。从2023年12月25日起开通点播的客户，如访问点播应用中的资源（无论是默认应用还是新创建的应用），必须将该字段填写为应用 ID。</b>
                     */
                    uint64_t m_subAppId;
                    bool m_subAppIdHasBeenSet;

                    /**
                     * 媒体文件名称，最长 64 个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 媒体文件描述，最长 128 个字符。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 媒体文件分类 ID。
                     */
                    int64_t m_classId;
                    bool m_classIdHasBeenSet;

                    /**
                     * 媒体文件过期时间，采用 [ISO 日期格式](https://cloud.tencent.com/document/product/266/11732#I)。填“9999-12-31T23:59:59Z”表示永不过期。过期后该媒体文件及其相关资源（转码结果、雪碧图等）将被永久删除。
                     */
                    std::string m_expireTime;
                    bool m_expireTimeHasBeenSet;

                    /**
                     * 视频封面图片文件（如 jpeg, png 等）进行 [Base64](https://tools.ietf.org/html/rfc4648) 编码后的字符串，仅支持 gif、jpeg、png 三种图片格式。
                     */
                    std::string m_coverData;
                    bool m_coverDataHasBeenSet;

                    /**
                     * 新增的一组视频打点信息，如果某个偏移时间已存在打点，则会进行覆盖操作，单个媒体文件最多 100 个打点信息。同一个请求里，AddKeyFrameDescs 的时间偏移参数必须与 DeleteKeyFrameDescs 都不同。
                     */
                    std::vector<MediaKeyFrameDescItem> m_addKeyFrameDescs;
                    bool m_addKeyFrameDescsHasBeenSet;

                    /**
                     * 要删除的一组视频打点信息的时间偏移，单位：秒。同一个请求里，AddKeyFrameDescs 的时间偏移参数必须与 DeleteKeyFrameDescs 都不同。
                     */
                    std::vector<double> m_deleteKeyFrameDescs;
                    bool m_deleteKeyFrameDescsHasBeenSet;

                    /**
                     * 取值 1 表示清空视频打点信息，其他值无意义。
同一个请求里，ClearKeyFrameDescs 与 AddKeyFrameDescs 不能同时出现。
                     */
                    int64_t m_clearKeyFrameDescs;
                    bool m_clearKeyFrameDescsHasBeenSet;

                    /**
                     * 新增的一组标签，单个媒体文件最多 16 个标签，单个标签最多 32 个字符。同一个请求里，AddTags 参数必须与 DeleteTags 都不同。
                     */
                    std::vector<std::string> m_addTags;
                    bool m_addTagsHasBeenSet;

                    /**
                     * 要删除的一组标签。同一个请求里，AddTags 参数必须与 DeleteTags 都不同。
                     */
                    std::vector<std::string> m_deleteTags;
                    bool m_deleteTagsHasBeenSet;

                    /**
                     * 取值 1 表示清空媒体文件所有标签，其他值无意义。
同一个请求里，ClearTags 与 AddTags 不能同时出现。
                     */
                    int64_t m_clearTags;
                    bool m_clearTagsHasBeenSet;

                    /**
                     * 新增一组字幕。单个媒体文件最多 16 个字幕。同一个请求中，AddSubtitles 中指定的字幕 Id 必须与 DeleteSubtitleIds 都不相同。
                     */
                    std::vector<MediaSubtitleInput> m_addSubtitles;
                    bool m_addSubtitlesHasBeenSet;

                    /**
                     * 待删除字幕的唯一标识。同一个请求中，AddSubtitles 中指定的字幕 Id 必须与 DeleteSubtitleIds 都不相同。
                     */
                    std::vector<std::string> m_deleteSubtitleIds;
                    bool m_deleteSubtitleIdsHasBeenSet;

                    /**
                     * 取值 1 表示清空媒体文件所有的字幕信息，其他值无意义。
同一个请求里，ClearSubtitles 与 AddSubtitles不能同时出现。
                     */
                    int64_t m_clearSubtitles;
                    bool m_clearSubtitlesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_MODIFYMEDIAINFOREQUEST_H_
