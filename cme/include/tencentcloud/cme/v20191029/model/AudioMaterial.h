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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_AUDIOMATERIAL_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_AUDIOMATERIAL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/MediaMetaData.h>
#include <tencentcloud/cme/v20191029/model/MaterialStatus.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 音频素材信息
                */
                class AudioMaterial : public AbstractModel
                {
                public:
                    AudioMaterial();
                    ~AudioMaterial() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取素材元信息。
                     * @return MetaData 素材元信息。
                     * 
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置素材元信息。
                     * @param _metaData 素材元信息。
                     * 
                     */
                    void SetMetaData(const MediaMetaData& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     * 
                     */
                    bool MetaDataHasBeenSet() const;

                    /**
                     * 获取素材媒体文件的播放 URL 地址。
                     * @return MaterialUrl 素材媒体文件的播放 URL 地址。
                     * 
                     */
                    std::string GetMaterialUrl() const;

                    /**
                     * 设置素材媒体文件的播放 URL 地址。
                     * @param _materialUrl 素材媒体文件的播放 URL 地址。
                     * 
                     */
                    void SetMaterialUrl(const std::string& _materialUrl);

                    /**
                     * 判断参数 MaterialUrl 是否已赋值
                     * @return MaterialUrl 是否已赋值
                     * 
                     */
                    bool MaterialUrlHasBeenSet() const;

                    /**
                     * 获取素材媒体文件的封面图片地址。
                     * @return CoverUrl 素材媒体文件的封面图片地址。
                     * 
                     */
                    std::string GetCoverUrl() const;

                    /**
                     * 设置素材媒体文件的封面图片地址。
                     * @param _coverUrl 素材媒体文件的封面图片地址。
                     * 
                     */
                    void SetCoverUrl(const std::string& _coverUrl);

                    /**
                     * 判断参数 CoverUrl 是否已赋值
                     * @return CoverUrl 是否已赋值
                     * 
                     */
                    bool CoverUrlHasBeenSet() const;

                    /**
                     * 获取素材状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaterialStatus 素材状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MaterialStatus GetMaterialStatus() const;

                    /**
                     * 设置素材状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _materialStatus 素材状态。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaterialStatus(const MaterialStatus& _materialStatus);

                    /**
                     * 判断参数 MaterialStatus 是否已赋值
                     * @return MaterialStatus 是否已赋值
                     * 
                     */
                    bool MaterialStatusHasBeenSet() const;

                    /**
                     * 获取素材媒体文件的原始 URL 地址。
                     * @return OriginalUrl 素材媒体文件的原始 URL 地址。
                     * 
                     */
                    std::string GetOriginalUrl() const;

                    /**
                     * 设置素材媒体文件的原始 URL 地址。
                     * @param _originalUrl 素材媒体文件的原始 URL 地址。
                     * 
                     */
                    void SetOriginalUrl(const std::string& _originalUrl);

                    /**
                     * 判断参数 OriginalUrl 是否已赋值
                     * @return OriginalUrl 是否已赋值
                     * 
                     */
                    bool OriginalUrlHasBeenSet() const;

                    /**
                     * 获取云点播媒资 FileId。
                     * @return VodFileId 云点播媒资 FileId。
                     * 
                     */
                    std::string GetVodFileId() const;

                    /**
                     * 设置云点播媒资 FileId。
                     * @param _vodFileId 云点播媒资 FileId。
                     * 
                     */
                    void SetVodFileId(const std::string& _vodFileId);

                    /**
                     * 判断参数 VodFileId 是否已赋值
                     * @return VodFileId 是否已赋值
                     * 
                     */
                    bool VodFileIdHasBeenSet() const;

                private:

                    /**
                     * 素材元信息。
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * 素材媒体文件的播放 URL 地址。
                     */
                    std::string m_materialUrl;
                    bool m_materialUrlHasBeenSet;

                    /**
                     * 素材媒体文件的封面图片地址。
                     */
                    std::string m_coverUrl;
                    bool m_coverUrlHasBeenSet;

                    /**
                     * 素材状态。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MaterialStatus m_materialStatus;
                    bool m_materialStatusHasBeenSet;

                    /**
                     * 素材媒体文件的原始 URL 地址。
                     */
                    std::string m_originalUrl;
                    bool m_originalUrlHasBeenSet;

                    /**
                     * 云点播媒资 FileId。
                     */
                    std::string m_vodFileId;
                    bool m_vodFileIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_AUDIOMATERIAL_H_
