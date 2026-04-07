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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LINEARASSEMBLYPROGRAMINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LINEARASSEMBLYPROGRAMINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/PlaybackInfo.h>
#include <tencentcloud/mps/v20190612/model/AdBreakInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 频道线性组装program信息。
                */
                class LinearAssemblyProgramInfo : public AbstractModel
                {
                public:
                    LinearAssemblyProgramInfo();
                    ~LinearAssemblyProgramInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取program名称。
                     * @return Name program名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置program名称。
                     * @param _name program名称。
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
                     * 获取编排的目标source的类型，分直播和点播。
                     * @return SourceType 编排的目标source的类型，分直播和点播。
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置编排的目标source的类型，分直播和点播。
                     * @param _sourceType 编排的目标source的类型，分直播和点播。
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
                     * 获取关联的source location id。
                     * @return SourceLocationId 关联的source location id。
                     * 
                     */
                    std::string GetSourceLocationId() const;

                    /**
                     * 设置关联的source location id。
                     * @param _sourceLocationId 关联的source location id。
                     * 
                     */
                    void SetSourceLocationId(const std::string& _sourceLocationId);

                    /**
                     * 判断参数 SourceLocationId 是否已赋值
                     * @return SourceLocationId 是否已赋值
                     * 
                     */
                    bool SourceLocationIdHasBeenSet() const;

                    /**
                     * 获取SourceId，唯一标识一个source。
                     * @return SourceId SourceId，唯一标识一个source。
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置SourceId，唯一标识一个source。
                     * @param _sourceId SourceId，唯一标识一个source。
                     * 
                     */
                    void SetSourceId(const std::string& _sourceId);

                    /**
                     * 判断参数 SourceId 是否已赋值
                     * @return SourceId 是否已赋值
                     * 
                     */
                    bool SourceIdHasBeenSet() const;

                    /**
                     * 获取关联的直播or点播，source名称，location下全局唯一。
                     * @return SourceName 关联的直播or点播，source名称，location下全局唯一。
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置关联的直播or点播，source名称，location下全局唯一。
                     * @param _sourceName 关联的直播or点播，source名称，location下全局唯一。
                     * 
                     */
                    void SetSourceName(const std::string& _sourceName);

                    /**
                     * 判断参数 SourceName 是否已赋值
                     * @return SourceName 是否已赋值
                     * 
                     */
                    bool SourceNameHasBeenSet() const;

                    /**
                     * 获取绑定的channel。
                     * @return AttachedChannel 绑定的channel。
                     * 
                     */
                    std::string GetAttachedChannel() const;

                    /**
                     * 设置绑定的channel。
                     * @param _attachedChannel 绑定的channel。
                     * 
                     */
                    void SetAttachedChannel(const std::string& _attachedChannel);

                    /**
                     * 判断参数 AttachedChannel 是否已赋值
                     * @return AttachedChannel 是否已赋值
                     * 
                     */
                    bool AttachedChannelHasBeenSet() const;

                    /**
                     * 获取播放配置。
                     * @return PlaybackConf 播放配置。
                     * 
                     */
                    PlaybackInfo GetPlaybackConf() const;

                    /**
                     * 设置播放配置。
                     * @param _playbackConf 播放配置。
                     * 
                     */
                    void SetPlaybackConf(const PlaybackInfo& _playbackConf);

                    /**
                     * 判断参数 PlaybackConf 是否已赋值
                     * @return PlaybackConf 是否已赋值
                     * 
                     */
                    bool PlaybackConfHasBeenSet() const;

                    /**
                     * 获取AdBreaks。
                     * @return AdBreaks AdBreaks。
                     * 
                     */
                    std::vector<AdBreakInfo> GetAdBreaks() const;

                    /**
                     * 设置AdBreaks。
                     * @param _adBreaks AdBreaks。
                     * 
                     */
                    void SetAdBreaks(const std::vector<AdBreakInfo>& _adBreaks);

                    /**
                     * 判断参数 AdBreaks 是否已赋值
                     * @return AdBreaks 是否已赋值
                     * 
                     */
                    bool AdBreaksHasBeenSet() const;

                    /**
                     * 获取Id。
                     * @return Id Id。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Id。
                     * @param _id Id。
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
                     * 获取Region。
                     * @return Region Region。
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置Region。
                     * @param _region Region。
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取SourceLocation名称。
                     * @return SourceLocationName SourceLocation名称。
                     * 
                     */
                    std::string GetSourceLocationName() const;

                    /**
                     * 设置SourceLocation名称。
                     * @param _sourceLocationName SourceLocation名称。
                     * 
                     */
                    void SetSourceLocationName(const std::string& _sourceLocationName);

                    /**
                     * 判断参数 SourceLocationName 是否已赋值
                     * @return SourceLocationName 是否已赋值
                     * 
                     */
                    bool SourceLocationNameHasBeenSet() const;

                private:

                    /**
                     * program名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 编排的目标source的类型，分直播和点播。
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 关联的source location id。
                     */
                    std::string m_sourceLocationId;
                    bool m_sourceLocationIdHasBeenSet;

                    /**
                     * SourceId，唯一标识一个source。
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * 关联的直播or点播，source名称，location下全局唯一。
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * 绑定的channel。
                     */
                    std::string m_attachedChannel;
                    bool m_attachedChannelHasBeenSet;

                    /**
                     * 播放配置。
                     */
                    PlaybackInfo m_playbackConf;
                    bool m_playbackConfHasBeenSet;

                    /**
                     * AdBreaks。
                     */
                    std::vector<AdBreakInfo> m_adBreaks;
                    bool m_adBreaksHasBeenSet;

                    /**
                     * Id。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * Region。
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * SourceLocation名称。
                     */
                    std::string m_sourceLocationName;
                    bool m_sourceLocationNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LINEARASSEMBLYPROGRAMINFO_H_
