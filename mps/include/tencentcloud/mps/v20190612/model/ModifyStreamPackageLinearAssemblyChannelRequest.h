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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSTREAMPACKAGELINEARASSEMBLYCHANNELREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSTREAMPACKAGELINEARASSEMBLYCHANNELREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/TimeShiftInfo.h>
#include <tencentcloud/mps/v20190612/model/SlateInfo.h>
#include <tencentcloud/mps/v20190612/model/OutputInfo.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * ModifyStreamPackageLinearAssemblyChannel请求参数结构体
                */
                class ModifyStreamPackageLinearAssemblyChannelRequest : public AbstractModel
                {
                public:
                    ModifyStreamPackageLinearAssemblyChannelRequest();
                    ~ModifyStreamPackageLinearAssemblyChannelRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取Channel Id。
                     * @return Id Channel Id。
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置Channel Id。
                     * @param _id Channel Id。
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
                     * 获取定义channel的特性，Standard支持直播和点播源，Basic只支持点播源编排。
                     * @return Tier 定义channel的特性，Standard支持直播和点播源，Basic只支持点播源编排。
                     * 
                     */
                    std::string GetTier() const;

                    /**
                     * 设置定义channel的特性，Standard支持直播和点播源，Basic只支持点播源编排。
                     * @param _tier 定义channel的特性，Standard支持直播和点播源，Basic只支持点播源编排。
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
                     * 获取频道中的source切换的模式，分Linear线性和Loop循环，直播只支持Linear。
                     * @return PlaybackMode 频道中的source切换的模式，分Linear线性和Loop循环，直播只支持Linear。
                     * 
                     */
                    std::string GetPlaybackMode() const;

                    /**
                     * 设置频道中的source切换的模式，分Linear线性和Loop循环，直播只支持Linear。
                     * @param _playbackMode 频道中的source切换的模式，分Linear线性和Loop循环，直播只支持Linear。
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
                     * 获取时移开启开关。
                     * @return TimeShiftEnable 时移开启开关。
                     * 
                     */
                    bool GetTimeShiftEnable() const;

                    /**
                     * 设置时移开启开关。
                     * @param _timeShiftEnable 时移开启开关。
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
                     * 获取时移配置。	
                     * @return TimeShiftConf 时移配置。	
                     * 
                     */
                    TimeShiftInfo GetTimeShiftConf() const;

                    /**
                     * 设置时移配置。	
                     * @param _timeShiftConf 时移配置。	
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
                     * 获取垫片配置。	
                     * @return SlateConf 垫片配置。	
                     * 
                     */
                    SlateInfo GetSlateConf() const;

                    /**
                     * 设置垫片配置。	
                     * @param _slateConf 垫片配置。	
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
                     * 获取输出配置。	
                     * @return Outputs 输出配置。	
                     * 
                     */
                    std::vector<OutputInfo> GetOutputs() const;

                    /**
                     * 设置输出配置。	
                     * @param _outputs 输出配置。	
                     * 
                     */
                    void SetOutputs(const std::vector<OutputInfo>& _outputs);

                    /**
                     * 判断参数 Outputs 是否已赋值
                     * @return Outputs 是否已赋值
                     * 
                     */
                    bool OutputsHasBeenSet() const;

                private:

                    /**
                     * Channel Id。
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 修改后的名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 定义channel的特性，Standard支持直播和点播源，Basic只支持点播源编排。
                     */
                    std::string m_tier;
                    bool m_tierHasBeenSet;

                    /**
                     * 频道中的source切换的模式，分Linear线性和Loop循环，直播只支持Linear。
                     */
                    std::string m_playbackMode;
                    bool m_playbackModeHasBeenSet;

                    /**
                     * 时移开启开关。
                     */
                    bool m_timeShiftEnable;
                    bool m_timeShiftEnableHasBeenSet;

                    /**
                     * 时移配置。	
                     */
                    TimeShiftInfo m_timeShiftConf;
                    bool m_timeShiftConfHasBeenSet;

                    /**
                     * 垫片配置。	
                     */
                    SlateInfo m_slateConf;
                    bool m_slateConfHasBeenSet;

                    /**
                     * 输出配置。	
                     */
                    std::vector<OutputInfo> m_outputs;
                    bool m_outputsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYSTREAMPACKAGELINEARASSEMBLYCHANNELREQUEST_H_
