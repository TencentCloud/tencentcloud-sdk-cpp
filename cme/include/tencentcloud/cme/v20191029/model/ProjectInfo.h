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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_PROJECTINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_PROJECTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/Entity.h>
#include <tencentcloud/cme/v20191029/model/StreamConnectProjectInfo.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 项目信息。
                */
                class ProjectInfo : public AbstractModel
                {
                public:
                    ProjectInfo();
                    ~ProjectInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取项目 Id。
                     * @return ProjectId 项目 Id。
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目 Id。
                     * @param ProjectId 项目 Id。
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     */
                    bool ProjectIdHasBeenSet() const;

                    /**
                     * 获取项目名称。
                     * @return Name 项目名称。
                     */
                    std::string GetName() const;

                    /**
                     * 设置项目名称。
                     * @param Name 项目名称。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取画布宽高比。
                     * @return AspectRatio 画布宽高比。
                     */
                    std::string GetAspectRatio() const;

                    /**
                     * 设置画布宽高比。
                     * @param AspectRatio 画布宽高比。
                     */
                    void SetAspectRatio(const std::string& _aspectRatio);

                    /**
                     * 判断参数 AspectRatio 是否已赋值
                     * @return AspectRatio 是否已赋值
                     */
                    bool AspectRatioHasBeenSet() const;

                    /**
                     * 获取项目类别，取值有：
<li>VIDEO_EDIT：视频编辑。</li>
<li>SWITCHER：导播台。</li>
<li>VIDEO_SEGMENTATION：视频拆条。</li>
<li>STREAM_CONNECT：云转推。</li>
<li>RECORD_REPLAY：录制回放。</li>
                     * @return Category 项目类别，取值有：
<li>VIDEO_EDIT：视频编辑。</li>
<li>SWITCHER：导播台。</li>
<li>VIDEO_SEGMENTATION：视频拆条。</li>
<li>STREAM_CONNECT：云转推。</li>
<li>RECORD_REPLAY：录制回放。</li>
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置项目类别，取值有：
<li>VIDEO_EDIT：视频编辑。</li>
<li>SWITCHER：导播台。</li>
<li>VIDEO_SEGMENTATION：视频拆条。</li>
<li>STREAM_CONNECT：云转推。</li>
<li>RECORD_REPLAY：录制回放。</li>
                     * @param Category 项目类别，取值有：
<li>VIDEO_EDIT：视频编辑。</li>
<li>SWITCHER：导播台。</li>
<li>VIDEO_SEGMENTATION：视频拆条。</li>
<li>STREAM_CONNECT：云转推。</li>
<li>RECORD_REPLAY：录制回放。</li>
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取归属者。
                     * @return Owner 归属者。
                     */
                    Entity GetOwner() const;

                    /**
                     * 设置归属者。
                     * @param Owner 归属者。
                     */
                    void SetOwner(const Entity& _owner);

                    /**
                     * 判断参数 Owner 是否已赋值
                     * @return Owner 是否已赋值
                     */
                    bool OwnerHasBeenSet() const;

                    /**
                     * 获取项目封面图片地址。
                     * @return CoverUrl 项目封面图片地址。
                     */
                    std::string GetCoverUrl() const;

                    /**
                     * 设置项目封面图片地址。
                     * @param CoverUrl 项目封面图片地址。
                     */
                    void SetCoverUrl(const std::string& _coverUrl);

                    /**
                     * 判断参数 CoverUrl 是否已赋值
                     * @return CoverUrl 是否已赋值
                     */
                    bool CoverUrlHasBeenSet() const;

                    /**
                     * 获取云转推项目信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StreamConnectProjectInfo 云转推项目信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StreamConnectProjectInfo GetStreamConnectProjectInfo() const;

                    /**
                     * 设置云转推项目信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StreamConnectProjectInfo 云转推项目信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStreamConnectProjectInfo(const StreamConnectProjectInfo& _streamConnectProjectInfo);

                    /**
                     * 判断参数 StreamConnectProjectInfo 是否已赋值
                     * @return StreamConnectProjectInfo 是否已赋值
                     */
                    bool StreamConnectProjectInfoHasBeenSet() const;

                    /**
                     * 获取项目创建时间，格式按照 ISO 8601 标准表示。
                     * @return CreateTime 项目创建时间，格式按照 ISO 8601 标准表示。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置项目创建时间，格式按照 ISO 8601 标准表示。
                     * @param CreateTime 项目创建时间，格式按照 ISO 8601 标准表示。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取项目更新时间，格式按照 ISO 8601 标准表示。
                     * @return UpdateTime 项目更新时间，格式按照 ISO 8601 标准表示。
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置项目更新时间，格式按照 ISO 8601 标准表示。
                     * @param UpdateTime 项目更新时间，格式按照 ISO 8601 标准表示。
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     */
                    bool UpdateTimeHasBeenSet() const;

                private:

                    /**
                     * 项目 Id。
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 项目名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 画布宽高比。
                     */
                    std::string m_aspectRatio;
                    bool m_aspectRatioHasBeenSet;

                    /**
                     * 项目类别，取值有：
<li>VIDEO_EDIT：视频编辑。</li>
<li>SWITCHER：导播台。</li>
<li>VIDEO_SEGMENTATION：视频拆条。</li>
<li>STREAM_CONNECT：云转推。</li>
<li>RECORD_REPLAY：录制回放。</li>
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 归属者。
                     */
                    Entity m_owner;
                    bool m_ownerHasBeenSet;

                    /**
                     * 项目封面图片地址。
                     */
                    std::string m_coverUrl;
                    bool m_coverUrlHasBeenSet;

                    /**
                     * 云转推项目信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    StreamConnectProjectInfo m_streamConnectProjectInfo;
                    bool m_streamConnectProjectInfoHasBeenSet;

                    /**
                     * 项目创建时间，格式按照 ISO 8601 标准表示。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 项目更新时间，格式按照 ISO 8601 标准表示。
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_PROJECTINFO_H_
