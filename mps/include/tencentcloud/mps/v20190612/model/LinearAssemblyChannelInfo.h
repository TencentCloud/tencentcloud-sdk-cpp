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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_LINEARASSEMBLYCHANNELINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_LINEARASSEMBLYCHANNELINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TimeShiftInfo.h>
#include <tencentcloud/mps/v20190612/model/SlateInfo.h>
#include <tencentcloud/mps/v20190612/model/OutputInfo.h>
#include <tencentcloud/mps/v20190612/model/ProgramScheduleInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 线性组装频道信息。
                */
                class LinearAssemblyChannelInfo : public AbstractModel
                {
                public:
                    LinearAssemblyChannelInfo();
                    ~LinearAssemblyChannelInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>线性组装频道名称。</p>
                     * @return Name <p>线性组装频道名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>线性组装频道名称。</p>
                     * @param _name <p>线性组装频道名称。</p>
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
                     * 获取<p>定义channel的特性，Standard支持直播和点播源，Basic只支持点播源编排。</p>
                     * @return Tier <p>定义channel的特性，Standard支持直播和点播源，Basic只支持点播源编排。</p>
                     * 
                     */
                    std::string GetTier() const;

                    /**
                     * 设置<p>定义channel的特性，Standard支持直播和点播源，Basic只支持点播源编排。</p>
                     * @param _tier <p>定义channel的特性，Standard支持直播和点播源，Basic只支持点播源编排。</p>
                     * 
                     */
                    void SetTier(const std::string& _tier);

                    /**
                     * 判断参数 Tier 是否已赋值
                     * @return Tier 是否已赋值
                     * 
                     */
                    bool TierHasBeenSet() const;

                    /**
                     * 获取<p>频道中的source切换的模式，分Linear线性和Loop循环，直播只支持Linear。</p>
                     * @return PlaybackMode <p>频道中的source切换的模式，分Linear线性和Loop循环，直播只支持Linear。</p>
                     * 
                     */
                    std::string GetPlaybackMode() const;

                    /**
                     * 设置<p>频道中的source切换的模式，分Linear线性和Loop循环，直播只支持Linear。</p>
                     * @param _playbackMode <p>频道中的source切换的模式，分Linear线性和Loop循环，直播只支持Linear。</p>
                     * 
                     */
                    void SetPlaybackMode(const std::string& _playbackMode);

                    /**
                     * 判断参数 PlaybackMode 是否已赋值
                     * @return PlaybackMode 是否已赋值
                     * 
                     */
                    bool PlaybackModeHasBeenSet() const;

                    /**
                     * 获取<p>时移配置，vod有效。</p>
                     * @return TimeShiftConf <p>时移配置，vod有效。</p>
                     * 
                     */
                    TimeShiftInfo GetTimeShiftConf() const;

                    /**
                     * 设置<p>时移配置，vod有效。</p>
                     * @param _timeShiftConf <p>时移配置，vod有效。</p>
                     * 
                     */
                    void SetTimeShiftConf(const TimeShiftInfo& _timeShiftConf);

                    /**
                     * 判断参数 TimeShiftConf 是否已赋值
                     * @return TimeShiftConf 是否已赋值
                     * 
                     */
                    bool TimeShiftConfHasBeenSet() const;

                    /**
                     * 获取<p>垫片配置。</p>
                     * @return SlateConf <p>垫片配置。</p>
                     * 
                     */
                    SlateInfo GetSlateConf() const;

                    /**
                     * 设置<p>垫片配置。</p>
                     * @param _slateConf <p>垫片配置。</p>
                     * 
                     */
                    void SetSlateConf(const SlateInfo& _slateConf);

                    /**
                     * 判断参数 SlateConf 是否已赋值
                     * @return SlateConf 是否已赋值
                     * 
                     */
                    bool SlateConfHasBeenSet() const;

                    /**
                     * 获取<p>output信息。</p>
                     * @return Outputs <p>output信息。</p>
                     * 
                     */
                    std::vector<OutputInfo> GetOutputs() const;

                    /**
                     * 设置<p>output信息。</p>
                     * @param _outputs <p>output信息。</p>
                     * 
                     */
                    void SetOutputs(const std::vector<OutputInfo>& _outputs);

                    /**
                     * 判断参数 Outputs 是否已赋值
                     * @return Outputs 是否已赋值
                     * 
                     */
                    bool OutputsHasBeenSet() const;

                    /**
                     * 获取<p>该channel绑定的program列表。</p>
                     * @return AttachedPrograms <p>该channel绑定的program列表。</p>
                     * 
                     */
                    std::vector<std::string> GetAttachedPrograms() const;

                    /**
                     * 设置<p>该channel绑定的program列表。</p>
                     * @param _attachedPrograms <p>该channel绑定的program列表。</p>
                     * 
                     */
                    void SetAttachedPrograms(const std::vector<std::string>& _attachedPrograms);

                    /**
                     * 判断参数 AttachedPrograms 是否已赋值
                     * @return AttachedPrograms 是否已赋值
                     * 
                     */
                    bool AttachedProgramsHasBeenSet() const;

                    /**
                     * 获取<p>program信息。</p>
                     * @return ProgramSchedules <p>program信息。</p>
                     * 
                     */
                    std::vector<ProgramScheduleInfo> GetProgramSchedules() const;

                    /**
                     * 设置<p>program信息。</p>
                     * @param _programSchedules <p>program信息。</p>
                     * 
                     */
                    void SetProgramSchedules(const std::vector<ProgramScheduleInfo>& _programSchedules);

                    /**
                     * 判断参数 ProgramSchedules 是否已赋值
                     * @return ProgramSchedules 是否已赋值
                     * 
                     */
                    bool ProgramSchedulesHasBeenSet() const;

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
                     * 获取<p>State。</p>
                     * @return State <p>State。</p>
                     * 
                     */
                    std::string GetState() const;

                    /**
                     * 设置<p>State。</p>
                     * @param _state <p>State。</p>
                     * 
                     */
                    void SetState(const std::string& _state);

                    /**
                     * 判断参数 State 是否已赋值
                     * @return State 是否已赋值
                     * 
                     */
                    bool StateHasBeenSet() const;

                    /**
                     * 获取<p>时移开启开关。</p>
                     * @return TimeShiftEnable <p>时移开启开关。</p>
                     * 
                     */
                    bool GetTimeShiftEnable() const;

                    /**
                     * 设置<p>时移开启开关。</p>
                     * @param _timeShiftEnable <p>时移开启开关。</p>
                     * 
                     */
                    void SetTimeShiftEnable(const bool& _timeShiftEnable);

                    /**
                     * 判断参数 TimeShiftEnable 是否已赋值
                     * @return TimeShiftEnable 是否已赋值
                     * 
                     */
                    bool TimeShiftEnableHasBeenSet() const;

                    /**
                     * 获取<p>channel创建时间，unix秒时间戳。</p>
                     * @return CreateTime <p>channel创建时间，unix秒时间戳。</p>
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置<p>channel创建时间，unix秒时间戳。</p>
                     * @param _createTime <p>channel创建时间，unix秒时间戳。</p>
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * <p>线性组装频道名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>定义channel的特性，Standard支持直播和点播源，Basic只支持点播源编排。</p>
                     */
                    std::string m_tier;
                    bool m_tierHasBeenSet;

                    /**
                     * <p>频道中的source切换的模式，分Linear线性和Loop循环，直播只支持Linear。</p>
                     */
                    std::string m_playbackMode;
                    bool m_playbackModeHasBeenSet;

                    /**
                     * <p>时移配置，vod有效。</p>
                     */
                    TimeShiftInfo m_timeShiftConf;
                    bool m_timeShiftConfHasBeenSet;

                    /**
                     * <p>垫片配置。</p>
                     */
                    SlateInfo m_slateConf;
                    bool m_slateConfHasBeenSet;

                    /**
                     * <p>output信息。</p>
                     */
                    std::vector<OutputInfo> m_outputs;
                    bool m_outputsHasBeenSet;

                    /**
                     * <p>该channel绑定的program列表。</p>
                     */
                    std::vector<std::string> m_attachedPrograms;
                    bool m_attachedProgramsHasBeenSet;

                    /**
                     * <p>program信息。</p>
                     */
                    std::vector<ProgramScheduleInfo> m_programSchedules;
                    bool m_programSchedulesHasBeenSet;

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
                     * <p>State。</p>
                     */
                    std::string m_state;
                    bool m_stateHasBeenSet;

                    /**
                     * <p>时移开启开关。</p>
                     */
                    bool m_timeShiftEnable;
                    bool m_timeShiftEnableHasBeenSet;

                    /**
                     * <p>channel创建时间，unix秒时间戳。</p>
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_LINEARASSEMBLYCHANNELINFO_H_
