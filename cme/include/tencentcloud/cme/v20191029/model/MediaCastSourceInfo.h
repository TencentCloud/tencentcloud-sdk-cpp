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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_MEDIACASTSOURCEINFO_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_MEDIACASTSOURCEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 点播转直播输入源信息。
                */
                class MediaCastSourceInfo : public AbstractModel
                {
                public:
                    MediaCastSourceInfo();
                    ~MediaCastSourceInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输入源 Id，由系统分配。
                     * @return Id 输入源 Id，由系统分配。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置输入源 Id，由系统分配。
                     * @param _id 输入源 Id，由系统分配。
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取输入源的媒体类型，取值有：
<li>CME：多媒体创作引擎的媒体文件；</li>
<li>VOD：云点播的媒资文件。</li>
<li>EXTERNAL：非多媒体创建引擎或者云点播的媒资文件。</li>
                     * @return Type 输入源的媒体类型，取值有：
<li>CME：多媒体创作引擎的媒体文件；</li>
<li>VOD：云点播的媒资文件。</li>
<li>EXTERNAL：非多媒体创建引擎或者云点播的媒资文件。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置输入源的媒体类型，取值有：
<li>CME：多媒体创作引擎的媒体文件；</li>
<li>VOD：云点播的媒资文件。</li>
<li>EXTERNAL：非多媒体创建引擎或者云点播的媒资文件。</li>
                     * @param _type 输入源的媒体类型，取值有：
<li>CME：多媒体创作引擎的媒体文件；</li>
<li>VOD：云点播的媒资文件。</li>
<li>EXTERNAL：非多媒体创建引擎或者云点播的媒资文件。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取云点播媒体文件 ID。当 Type = VOD 时必填。
                     * @return FileId 云点播媒体文件 ID。当 Type = VOD 时必填。
                     * 
                     */
                    std::string GetFileId() const;

                    /**
                     * 设置云点播媒体文件 ID。当 Type = VOD 时必填。
                     * @param _fileId 云点播媒体文件 ID。当 Type = VOD 时必填。
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
                     * 获取多媒体创作引擎的媒体 ID。当 Type = CME  时必填。
                     * @return MaterialId 多媒体创作引擎的媒体 ID。当 Type = CME  时必填。
                     * 
                     */
                    std::string GetMaterialId() const;

                    /**
                     * 设置多媒体创作引擎的媒体 ID。当 Type = CME  时必填。
                     * @param _materialId 多媒体创作引擎的媒体 ID。当 Type = CME  时必填。
                     * 
                     */
                    void SetMaterialId(const std::string& _materialId);

                    /**
                     * 判断参数 MaterialId 是否已赋值
                     * @return MaterialId 是否已赋值
                     * 
                     */
                    bool MaterialIdHasBeenSet() const;

                    /**
                     * 获取文件播放的起始位置，单位：秒。默认为0，从文件头开始播放。当 Type = CME  或者 VOD 时有效。
                     * @return Offset 文件播放的起始位置，单位：秒。默认为0，从文件头开始播放。当 Type = CME  或者 VOD 时有效。
                     * 
                     */
                    double GetOffset() const;

                    /**
                     * 设置文件播放的起始位置，单位：秒。默认为0，从文件头开始播放。当 Type = CME  或者 VOD 时有效。
                     * @param _offset 文件播放的起始位置，单位：秒。默认为0，从文件头开始播放。当 Type = CME  或者 VOD 时有效。
                     * 
                     */
                    void SetOffset(const double& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取播放时长，单位：秒。默认播放整个文件。当 Type = CME  或者 VOD 时有效。
                     * @return Duration 播放时长，单位：秒。默认播放整个文件。当 Type = CME  或者 VOD 时有效。
                     * 
                     */
                    double GetDuration() const;

                    /**
                     * 设置播放时长，单位：秒。默认播放整个文件。当 Type = CME  或者 VOD 时有效。
                     * @param _duration 播放时长，单位：秒。默认播放整个文件。当 Type = CME  或者 VOD 时有效。
                     * 
                     */
                    void SetDuration(const double& _duration);

                    /**
                     * 判断参数 Duration 是否已赋值
                     * @return Duration 是否已赋值
                     * 
                     */
                    bool DurationHasBeenSet() const;

                    /**
                     * 获取外部文件的 Url， Type=EXTERNAL 时必填，可以是点播文件或者直播文件，支持的 Scheme 包括HTTP、HTTPS、RTMP。
                     * @return Url 外部文件的 Url， Type=EXTERNAL 时必填，可以是点播文件或者直播文件，支持的 Scheme 包括HTTP、HTTPS、RTMP。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置外部文件的 Url， Type=EXTERNAL 时必填，可以是点播文件或者直播文件，支持的 Scheme 包括HTTP、HTTPS、RTMP。
                     * @param _url 外部文件的 Url， Type=EXTERNAL 时必填，可以是点播文件或者直播文件，支持的 Scheme 包括HTTP、HTTPS、RTMP。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 输入源 Id，由系统分配。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 输入源的媒体类型，取值有：
<li>CME：多媒体创作引擎的媒体文件；</li>
<li>VOD：云点播的媒资文件。</li>
<li>EXTERNAL：非多媒体创建引擎或者云点播的媒资文件。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 云点播媒体文件 ID。当 Type = VOD 时必填。
                     */
                    std::string m_fileId;
                    bool m_fileIdHasBeenSet;

                    /**
                     * 多媒体创作引擎的媒体 ID。当 Type = CME  时必填。
                     */
                    std::string m_materialId;
                    bool m_materialIdHasBeenSet;

                    /**
                     * 文件播放的起始位置，单位：秒。默认为0，从文件头开始播放。当 Type = CME  或者 VOD 时有效。
                     */
                    double m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 播放时长，单位：秒。默认播放整个文件。当 Type = CME  或者 VOD 时有效。
                     */
                    double m_duration;
                    bool m_durationHasBeenSet;

                    /**
                     * 外部文件的 Url， Type=EXTERNAL 时必填，可以是点播文件或者直播文件，支持的 Scheme 包括HTTP、HTTPS、RTMP。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_MEDIACASTSOURCEINFO_H_
