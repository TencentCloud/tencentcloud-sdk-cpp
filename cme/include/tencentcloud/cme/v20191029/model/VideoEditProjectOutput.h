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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_VIDEOEDITPROJECTOUTPUT_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_VIDEOEDITPROJECTOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/MediaMetaData.h>
#include <tencentcloud/cme/v20191029/model/MaterialBaseInfo.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 项目导出信息。
                */
                class VideoEditProjectOutput : public AbstractModel
                {
                public:
                    VideoEditProjectOutput();
                    ~VideoEditProjectOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取云点播媒资 FileId。
                     * @return VodFileId 云点播媒资 FileId。
                     */
                    std::string GetVodFileId() const;

                    /**
                     * 设置云点播媒资 FileId。
                     * @param VodFileId 云点播媒资 FileId。
                     */
                    void SetVodFileId(const std::string& _vodFileId);

                    /**
                     * 判断参数 VodFileId 是否已赋值
                     * @return VodFileId 是否已赋值
                     */
                    bool VodFileIdHasBeenSet() const;

                    /**
                     * 获取导出的媒资 URL。
                     * @return URL 导出的媒资 URL。
                     */
                    std::string GetURL() const;

                    /**
                     * 设置导出的媒资 URL。
                     * @param URL 导出的媒资 URL。
                     */
                    void SetURL(const std::string& _uRL);

                    /**
                     * 判断参数 URL 是否已赋值
                     * @return URL 是否已赋值
                     */
                    bool URLHasBeenSet() const;

                    /**
                     * 获取元信息。
                     * @return MetaData 元信息。
                     */
                    MediaMetaData GetMetaData() const;

                    /**
                     * 设置元信息。
                     * @param MetaData 元信息。
                     */
                    void SetMetaData(const MediaMetaData& _metaData);

                    /**
                     * 判断参数 MetaData 是否已赋值
                     * @return MetaData 是否已赋值
                     */
                    bool MetaDataHasBeenSet() const;

                    /**
                     * 获取素材基础信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaterialBaseInfo 素材基础信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MaterialBaseInfo GetMaterialBaseInfo() const;

                    /**
                     * 设置素材基础信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param MaterialBaseInfo 素材基础信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetMaterialBaseInfo(const MaterialBaseInfo& _materialBaseInfo);

                    /**
                     * 判断参数 MaterialBaseInfo 是否已赋值
                     * @return MaterialBaseInfo 是否已赋值
                     */
                    bool MaterialBaseInfoHasBeenSet() const;

                private:

                    /**
                     * 云点播媒资 FileId。
                     */
                    std::string m_vodFileId;
                    bool m_vodFileIdHasBeenSet;

                    /**
                     * 导出的媒资 URL。
                     */
                    std::string m_uRL;
                    bool m_uRLHasBeenSet;

                    /**
                     * 元信息。
                     */
                    MediaMetaData m_metaData;
                    bool m_metaDataHasBeenSet;

                    /**
                     * 素材基础信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MaterialBaseInfo m_materialBaseInfo;
                    bool m_materialBaseInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_VIDEOEDITPROJECTOUTPUT_H_
