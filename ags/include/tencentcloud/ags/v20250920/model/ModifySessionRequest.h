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

#ifndef TENCENTCLOUD_AGS_V20250920_MODEL_MODIFYSESSIONREQUEST_H_
#define TENCENTCLOUD_AGS_V20250920_MODEL_MODIFYSESSIONREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ags/v20250920/model/MetadataVar.h>


namespace TencentCloud
{
    namespace Ags
    {
        namespace V20250920
        {
            namespace Model
            {
                /**
                * ModifySession请求参数结构体
                */
                class ModifySessionRequest : public AbstractModel
                {
                public:
                    ModifySessionRequest();
                    ~ModifySessionRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>会话所属的 SessionSpace ID。</p>
                     * @return SpaceId <p>会话所属的 SessionSpace ID。</p>
                     * 
                     */
                    std::string GetSpaceId() const;

                    /**
                     * 设置<p>会话所属的 SessionSpace ID。</p>
                     * @param _spaceId <p>会话所属的 SessionSpace ID。</p>
                     * 
                     */
                    void SetSpaceId(const std::string& _spaceId);

                    /**
                     * 判断参数 SpaceId 是否已赋值
                     * @return SpaceId 是否已赋值
                     * 
                     */
                    bool SpaceIdHasBeenSet() const;

                    /**
                     * 获取<p>会话所属的用户 ID。</p>
                     * @return UserId <p>会话所属的用户 ID。</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>会话所属的用户 ID。</p>
                     * @param _userId <p>会话所属的用户 ID。</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取<p>待修改的会话 ID。</p>
                     * @return SessionId <p>待修改的会话 ID。</p>
                     * 
                     */
                    std::string GetSessionId() const;

                    /**
                     * 设置<p>待修改的会话 ID。</p>
                     * @param _sessionId <p>待修改的会话 ID。</p>
                     * 
                     */
                    void SetSessionId(const std::string& _sessionId);

                    /**
                     * 判断参数 SessionId 是否已赋值
                     * @return SessionId 是否已赋值
                     * 
                     */
                    bool SessionIdHasBeenSet() const;

                    /**
                     * 获取<p>修改后的会话标题。</p><p>入参限制：本参数可选，最大长度为 255 个字符。</p><p>不传表示保持原会话标题不变，传空字符串表示清空会话标题。Title 与 Metadata 至少传入一项。</p>
                     * @return Title <p>修改后的会话标题。</p><p>入参限制：本参数可选，最大长度为 255 个字符。</p><p>不传表示保持原会话标题不变，传空字符串表示清空会话标题。Title 与 Metadata 至少传入一项。</p>
                     * 
                     */
                    std::string GetTitle() const;

                    /**
                     * 设置<p>修改后的会话标题。</p><p>入参限制：本参数可选，最大长度为 255 个字符。</p><p>不传表示保持原会话标题不变，传空字符串表示清空会话标题。Title 与 Metadata 至少传入一项。</p>
                     * @param _title <p>修改后的会话标题。</p><p>入参限制：本参数可选，最大长度为 255 个字符。</p><p>不传表示保持原会话标题不变，传空字符串表示清空会话标题。Title 与 Metadata 至少传入一项。</p>
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
                     * 获取<p>修改后的完整会话元数据，以键值对数组形式表示。</p><p>入参限制：本参数可选，最多支持 64 项。Name 不能为空或重复，最大长度为 253 字节；Value 最大长度为 1024 字节，允许为空字符串。Metadata 序列化后的总大小不能超过 64 KiB。</p><p>不传表示保持原 Metadata 不变；传空数组表示清空全部 Metadata；传非空数组表示使用传入内容全量覆盖原 Metadata。Metadata 与 Title 至少传入一项。</p>
                     * @return Metadata <p>修改后的完整会话元数据，以键值对数组形式表示。</p><p>入参限制：本参数可选，最多支持 64 项。Name 不能为空或重复，最大长度为 253 字节；Value 最大长度为 1024 字节，允许为空字符串。Metadata 序列化后的总大小不能超过 64 KiB。</p><p>不传表示保持原 Metadata 不变；传空数组表示清空全部 Metadata；传非空数组表示使用传入内容全量覆盖原 Metadata。Metadata 与 Title 至少传入一项。</p>
                     * 
                     */
                    std::vector<MetadataVar> GetMetadata() const;

                    /**
                     * 设置<p>修改后的完整会话元数据，以键值对数组形式表示。</p><p>入参限制：本参数可选，最多支持 64 项。Name 不能为空或重复，最大长度为 253 字节；Value 最大长度为 1024 字节，允许为空字符串。Metadata 序列化后的总大小不能超过 64 KiB。</p><p>不传表示保持原 Metadata 不变；传空数组表示清空全部 Metadata；传非空数组表示使用传入内容全量覆盖原 Metadata。Metadata 与 Title 至少传入一项。</p>
                     * @param _metadata <p>修改后的完整会话元数据，以键值对数组形式表示。</p><p>入参限制：本参数可选，最多支持 64 项。Name 不能为空或重复，最大长度为 253 字节；Value 最大长度为 1024 字节，允许为空字符串。Metadata 序列化后的总大小不能超过 64 KiB。</p><p>不传表示保持原 Metadata 不变；传空数组表示清空全部 Metadata；传非空数组表示使用传入内容全量覆盖原 Metadata。Metadata 与 Title 至少传入一项。</p>
                     * 
                     */
                    void SetMetadata(const std::vector<MetadataVar>& _metadata);

                    /**
                     * 判断参数 Metadata 是否已赋值
                     * @return Metadata 是否已赋值
                     * 
                     */
                    bool MetadataHasBeenSet() const;

                private:

                    /**
                     * <p>会话所属的 SessionSpace ID。</p>
                     */
                    std::string m_spaceId;
                    bool m_spaceIdHasBeenSet;

                    /**
                     * <p>会话所属的用户 ID。</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * <p>待修改的会话 ID。</p>
                     */
                    std::string m_sessionId;
                    bool m_sessionIdHasBeenSet;

                    /**
                     * <p>修改后的会话标题。</p><p>入参限制：本参数可选，最大长度为 255 个字符。</p><p>不传表示保持原会话标题不变，传空字符串表示清空会话标题。Title 与 Metadata 至少传入一项。</p>
                     */
                    std::string m_title;
                    bool m_titleHasBeenSet;

                    /**
                     * <p>修改后的完整会话元数据，以键值对数组形式表示。</p><p>入参限制：本参数可选，最多支持 64 项。Name 不能为空或重复，最大长度为 253 字节；Value 最大长度为 1024 字节，允许为空字符串。Metadata 序列化后的总大小不能超过 64 KiB。</p><p>不传表示保持原 Metadata 不变；传空数组表示清空全部 Metadata；传非空数组表示使用传入内容全量覆盖原 Metadata。Metadata 与 Title 至少传入一项。</p>
                     */
                    std::vector<MetadataVar> m_metadata;
                    bool m_metadataHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_AGS_V20250920_MODEL_MODIFYSESSIONREQUEST_H_
