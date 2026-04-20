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
                     * 获取<p>program名称。</p>
                     * @return Name <p>program名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>program名称。</p>
                     * @param _name <p>program名称。</p>
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
                     * 获取<p>编排的目标source的类型，分直播和点播。</p>
                     * @return SourceType <p>编排的目标source的类型，分直播和点播。</p>
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置<p>编排的目标source的类型，分直播和点播。</p>
                     * @param _sourceType <p>编排的目标source的类型，分直播和点播。</p>
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
                     * 获取<p>关联的source location id。</p>
                     * @return SourceLocationId <p>关联的source location id。</p>
                     * 
                     */
                    std::string GetSourceLocationId() const;

                    /**
                     * 设置<p>关联的source location id。</p>
                     * @param _sourceLocationId <p>关联的source location id。</p>
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
                     * 获取<p>SourceId，唯一标识一个source。</p>
                     * @return SourceId <p>SourceId，唯一标识一个source。</p>
                     * 
                     */
                    std::string GetSourceId() const;

                    /**
                     * 设置<p>SourceId，唯一标识一个source。</p>
                     * @param _sourceId <p>SourceId，唯一标识一个source。</p>
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
                     * 获取<p>关联的直播or点播，source名称，location下全局唯一。</p>
                     * @return SourceName <p>关联的直播or点播，source名称，location下全局唯一。</p>
                     * 
                     */
                    std::string GetSourceName() const;

                    /**
                     * 设置<p>关联的直播or点播，source名称，location下全局唯一。</p>
                     * @param _sourceName <p>关联的直播or点播，source名称，location下全局唯一。</p>
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
                     * 获取<p>绑定的channel。</p>
                     * @return AttachedChannel <p>绑定的channel。</p>
                     * 
                     */
                    std::string GetAttachedChannel() const;

                    /**
                     * 设置<p>绑定的channel。</p>
                     * @param _attachedChannel <p>绑定的channel。</p>
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
                     * 获取<p>播放配置。</p>
                     * @return PlaybackConf <p>播放配置。</p>
                     * 
                     */
                    PlaybackInfo GetPlaybackConf() const;

                    /**
                     * 设置<p>播放配置。</p>
                     * @param _playbackConf <p>播放配置。</p>
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
                     * 获取<p>AdBreaks。</p>
                     * @return AdBreaks <p>AdBreaks。</p>
                     * 
                     */
                    std::vector<AdBreakInfo> GetAdBreaks() const;

                    /**
                     * 设置<p>AdBreaks。</p>
                     * @param _adBreaks <p>AdBreaks。</p>
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
                     * 获取<p>Id。</p>
                     * @return Id <p>Id。</p>
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置<p>Id。</p>
                     * @param _id <p>Id。</p>
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
                     * 获取<p>Region。</p>
                     * @return Region <p>Region。</p>
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置<p>Region。</p>
                     * @param _region <p>Region。</p>
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
                     * 获取<p>SourceLocation名称。</p>
                     * @return SourceLocationName <p>SourceLocation名称。</p>
                     * 
                     */
                    std::string GetSourceLocationName() const;

                    /**
                     * 设置<p>SourceLocation名称。</p>
                     * @param _sourceLocationName <p>SourceLocation名称。</p>
                     * 
                     */
                    void SetSourceLocationName(const std::string& _sourceLocationName);

                    /**
                     * 判断参数 SourceLocationName 是否已赋值
                     * @return SourceLocationName 是否已赋值
                     * 
                     */
                    bool SourceLocationNameHasBeenSet() const;

                    /**
                     * 获取<p>VOD获取方式，支持PreCaching和DynamicUpdating，默认PreCaching，仅Linear频道支持</p>
                     * @return VodAcquisitionMethod <p>VOD获取方式，支持PreCaching和DynamicUpdating，默认PreCaching，仅Linear频道支持</p>
                     * 
                     */
                    std::string GetVodAcquisitionMethod() const;

                    /**
                     * 设置<p>VOD获取方式，支持PreCaching和DynamicUpdating，默认PreCaching，仅Linear频道支持</p>
                     * @param _vodAcquisitionMethod <p>VOD获取方式，支持PreCaching和DynamicUpdating，默认PreCaching，仅Linear频道支持</p>
                     * 
                     */
                    void SetVodAcquisitionMethod(const std::string& _vodAcquisitionMethod);

                    /**
                     * 判断参数 VodAcquisitionMethod 是否已赋值
                     * @return VodAcquisitionMethod 是否已赋值
                     * 
                     */
                    bool VodAcquisitionMethodHasBeenSet() const;

                private:

                    /**
                     * <p>program名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>编排的目标source的类型，分直播和点播。</p>
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * <p>关联的source location id。</p>
                     */
                    std::string m_sourceLocationId;
                    bool m_sourceLocationIdHasBeenSet;

                    /**
                     * <p>SourceId，唯一标识一个source。</p>
                     */
                    std::string m_sourceId;
                    bool m_sourceIdHasBeenSet;

                    /**
                     * <p>关联的直播or点播，source名称，location下全局唯一。</p>
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * <p>绑定的channel。</p>
                     */
                    std::string m_attachedChannel;
                    bool m_attachedChannelHasBeenSet;

                    /**
                     * <p>播放配置。</p>
                     */
                    PlaybackInfo m_playbackConf;
                    bool m_playbackConfHasBeenSet;

                    /**
                     * <p>AdBreaks。</p>
                     */
                    std::vector<AdBreakInfo> m_adBreaks;
                    bool m_adBreaksHasBeenSet;

                    /**
                     * <p>Id。</p>
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>Region。</p>
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * <p>SourceLocation名称。</p>
                     */
                    std::string m_sourceLocationName;
                    bool m_sourceLocationNameHasBeenSet;

                    /**
                     * <p>VOD获取方式，支持PreCaching和DynamicUpdating，默认PreCaching，仅Linear频道支持</p>
                     */
                    std::string m_vodAcquisitionMethod;
                    bool m_vodAcquisitionMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LINEARASSEMBLYPROGRAMINFO_H_
