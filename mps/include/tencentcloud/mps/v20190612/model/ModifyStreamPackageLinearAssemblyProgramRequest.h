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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSTREAMPACKAGELINEARASSEMBLYPROGRAMREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSTREAMPACKAGELINEARASSEMBLYPROGRAMREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/PlaybackInfoReq.h>
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
                * ModifyStreamPackageLinearAssemblyProgram请求参数结构体
                */
                class ModifyStreamPackageLinearAssemblyProgramRequest : public AbstractModel
                {
                public:
                    ModifyStreamPackageLinearAssemblyProgramRequest();
                    ~ModifyStreamPackageLinearAssemblyProgramRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Program Id。
                     * @return Id Program Id。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Program Id。
                     * @param _id Program Id。
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
                     * 获取修改后的名称。
                     * @return Name 修改后的名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置修改后的名称。
                     * @param _name 修改后的名称。
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
                     * 获取编排的目标source的类型，分直播和点播。Tier为Basic时只支持VOD，Tier为Standard时支持Live和VOD
                     * @return SourceType 编排的目标source的类型，分直播和点播。Tier为Basic时只支持VOD，Tier为Standard时支持Live和VOD
                     * 
                     */
                    std::string GetSourceType() const;

                    /**
                     * 设置编排的目标source的类型，分直播和点播。Tier为Basic时只支持VOD，Tier为Standard时支持Live和VOD
                     * @param _sourceType 编排的目标source的类型，分直播和点播。Tier为Basic时只支持VOD，Tier为Standard时支持Live和VOD
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
                     * 获取关联的source location。	
                     * @return SourceLocationId 关联的source location。	
                     * 
                     */
                    std::string GetSourceLocationId() const;

                    /**
                     * 设置关联的source location。	
                     * @param _sourceLocationId 关联的source location。	
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
                     * 获取PlaybackConf。
                     * @return PlaybackConf PlaybackConf。
                     * 
                     */
                    PlaybackInfoReq GetPlaybackConf() const;

                    /**
                     * 设置PlaybackConf。
                     * @param _playbackConf PlaybackConf。
                     * 
                     */
                    void SetPlaybackConf(const PlaybackInfoReq& _playbackConf);

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

                private:

                    /**
                     * Program Id。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 修改后的名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 编排的目标source的类型，分直播和点播。Tier为Basic时只支持VOD，Tier为Standard时支持Live和VOD
                     */
                    std::string m_sourceType;
                    bool m_sourceTypeHasBeenSet;

                    /**
                     * 关联的source location。	
                     */
                    std::string m_sourceLocationId;
                    bool m_sourceLocationIdHasBeenSet;

                    /**
                     * 关联的直播or点播，source名称，location下全局唯一。
                     */
                    std::string m_sourceName;
                    bool m_sourceNameHasBeenSet;

                    /**
                     * PlaybackConf。
                     */
                    PlaybackInfoReq m_playbackConf;
                    bool m_playbackConfHasBeenSet;

                    /**
                     * AdBreaks。
                     */
                    std::vector<AdBreakInfo> m_adBreaks;
                    bool m_adBreaksHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSTREAMPACKAGELINEARASSEMBLYPROGRAMREQUEST_H_
