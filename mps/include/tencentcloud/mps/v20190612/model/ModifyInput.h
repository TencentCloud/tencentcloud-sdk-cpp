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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/CreateInputSRTSettings.h>
#include <tencentcloud/mps/v20190612/model/CreateInputRTPSettings.h>
#include <tencentcloud/mps/v20190612/model/CreateInputRTMPPullSettings.h>
#include <tencentcloud/mps/v20190612/model/CreateInputRTSPPullSettings.h>
#include <tencentcloud/mps/v20190612/model/CreateInputHLSPullSettings.h>
#include <tencentcloud/mps/v20190612/model/ResilientStreamConf.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 修改输入信息的参数。
                */
                class ModifyInput : public AbstractModel
                {
                public:
                    ModifyInput();
                    ~ModifyInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输入Id。
                     * @return InputId 输入Id。
                     */
                    std::string GetInputId() const;

                    /**
                     * 设置输入Id。
                     * @param InputId 输入Id。
                     */
                    void SetInputId(const std::string& _inputId);

                    /**
                     * 判断参数 InputId 是否已赋值
                     * @return InputId 是否已赋值
                     */
                    bool InputIdHasBeenSet() const;

                    /**
                     * 获取输入名称。
                     * @return InputName 输入名称。
                     */
                    std::string GetInputName() const;

                    /**
                     * 设置输入名称。
                     * @param InputName 输入名称。
                     */
                    void SetInputName(const std::string& _inputName);

                    /**
                     * 判断参数 InputName 是否已赋值
                     * @return InputName 是否已赋值
                     */
                    bool InputNameHasBeenSet() const;

                    /**
                     * 获取输入描述。
                     * @return Description 输入描述。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置输入描述。
                     * @param Description 输入描述。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取允许的推流的IP，CIDR格式。
                     * @return AllowIpList 允许的推流的IP，CIDR格式。
                     */
                    std::vector<std::string> GetAllowIpList() const;

                    /**
                     * 设置允许的推流的IP，CIDR格式。
                     * @param AllowIpList 允许的推流的IP，CIDR格式。
                     */
                    void SetAllowIpList(const std::vector<std::string>& _allowIpList);

                    /**
                     * 判断参数 AllowIpList 是否已赋值
                     * @return AllowIpList 是否已赋值
                     */
                    bool AllowIpListHasBeenSet() const;

                    /**
                     * 获取SRT的配置信息。
                     * @return SRTSettings SRT的配置信息。
                     */
                    CreateInputSRTSettings GetSRTSettings() const;

                    /**
                     * 设置SRT的配置信息。
                     * @param SRTSettings SRT的配置信息。
                     */
                    void SetSRTSettings(const CreateInputSRTSettings& _sRTSettings);

                    /**
                     * 判断参数 SRTSettings 是否已赋值
                     * @return SRTSettings 是否已赋值
                     */
                    bool SRTSettingsHasBeenSet() const;

                    /**
                     * 获取RTP的配置信息。
                     * @return RTPSettings RTP的配置信息。
                     */
                    CreateInputRTPSettings GetRTPSettings() const;

                    /**
                     * 设置RTP的配置信息。
                     * @param RTPSettings RTP的配置信息。
                     */
                    void SetRTPSettings(const CreateInputRTPSettings& _rTPSettings);

                    /**
                     * 判断参数 RTPSettings 是否已赋值
                     * @return RTPSettings 是否已赋值
                     */
                    bool RTPSettingsHasBeenSet() const;

                    /**
                     * 获取输入的协议，可选[SRT|RTP|RTMP]。
当输出包含RTP时，输入只能是RTP。
当输出包含RTMP时，输入可以是SRT/RTMP。
当输出包含SRT时，输入只能是SRT。
                     * @return Protocol 输入的协议，可选[SRT|RTP|RTMP]。
当输出包含RTP时，输入只能是RTP。
当输出包含RTMP时，输入可以是SRT/RTMP。
当输出包含SRT时，输入只能是SRT。
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置输入的协议，可选[SRT|RTP|RTMP]。
当输出包含RTP时，输入只能是RTP。
当输出包含RTMP时，输入可以是SRT/RTMP。
当输出包含SRT时，输入只能是SRT。
                     * @param Protocol 输入的协议，可选[SRT|RTP|RTMP]。
当输出包含RTP时，输入只能是RTP。
当输出包含RTMP时，输入可以是SRT/RTMP。
当输出包含SRT时，输入只能是SRT。
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取输入的主备开关，可选[OPEN|CLOSE]。
                     * @return FailOver 输入的主备开关，可选[OPEN|CLOSE]。
                     */
                    std::string GetFailOver() const;

                    /**
                     * 设置输入的主备开关，可选[OPEN|CLOSE]。
                     * @param FailOver 输入的主备开关，可选[OPEN|CLOSE]。
                     */
                    void SetFailOver(const std::string& _failOver);

                    /**
                     * 判断参数 FailOver 是否已赋值
                     * @return FailOver 是否已赋值
                     */
                    bool FailOverHasBeenSet() const;

                    /**
                     * 获取RTMP_PULL的配置信息。
                     * @return RTMPPullSettings RTMP_PULL的配置信息。
                     */
                    CreateInputRTMPPullSettings GetRTMPPullSettings() const;

                    /**
                     * 设置RTMP_PULL的配置信息。
                     * @param RTMPPullSettings RTMP_PULL的配置信息。
                     */
                    void SetRTMPPullSettings(const CreateInputRTMPPullSettings& _rTMPPullSettings);

                    /**
                     * 判断参数 RTMPPullSettings 是否已赋值
                     * @return RTMPPullSettings 是否已赋值
                     */
                    bool RTMPPullSettingsHasBeenSet() const;

                    /**
                     * 获取RTSP_PULL的配置信息。
                     * @return RTSPPullSettings RTSP_PULL的配置信息。
                     */
                    CreateInputRTSPPullSettings GetRTSPPullSettings() const;

                    /**
                     * 设置RTSP_PULL的配置信息。
                     * @param RTSPPullSettings RTSP_PULL的配置信息。
                     */
                    void SetRTSPPullSettings(const CreateInputRTSPPullSettings& _rTSPPullSettings);

                    /**
                     * 判断参数 RTSPPullSettings 是否已赋值
                     * @return RTSPPullSettings 是否已赋值
                     */
                    bool RTSPPullSettingsHasBeenSet() const;

                    /**
                     * 获取HLS_PULL的配置信息。
                     * @return HLSPullSettings HLS_PULL的配置信息。
                     */
                    CreateInputHLSPullSettings GetHLSPullSettings() const;

                    /**
                     * 设置HLS_PULL的配置信息。
                     * @param HLSPullSettings HLS_PULL的配置信息。
                     */
                    void SetHLSPullSettings(const CreateInputHLSPullSettings& _hLSPullSettings);

                    /**
                     * 判断参数 HLSPullSettings 是否已赋值
                     * @return HLSPullSettings 是否已赋值
                     */
                    bool HLSPullSettingsHasBeenSet() const;

                    /**
                     * 获取延播平滑吐流配置信息。
                     * @return ResilientStream 延播平滑吐流配置信息。
                     */
                    ResilientStreamConf GetResilientStream() const;

                    /**
                     * 设置延播平滑吐流配置信息。
                     * @param ResilientStream 延播平滑吐流配置信息。
                     */
                    void SetResilientStream(const ResilientStreamConf& _resilientStream);

                    /**
                     * 判断参数 ResilientStream 是否已赋值
                     * @return ResilientStream 是否已赋值
                     */
                    bool ResilientStreamHasBeenSet() const;

                private:

                    /**
                     * 输入Id。
                     */
                    std::string m_inputId;
                    bool m_inputIdHasBeenSet;

                    /**
                     * 输入名称。
                     */
                    std::string m_inputName;
                    bool m_inputNameHasBeenSet;

                    /**
                     * 输入描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 允许的推流的IP，CIDR格式。
                     */
                    std::vector<std::string> m_allowIpList;
                    bool m_allowIpListHasBeenSet;

                    /**
                     * SRT的配置信息。
                     */
                    CreateInputSRTSettings m_sRTSettings;
                    bool m_sRTSettingsHasBeenSet;

                    /**
                     * RTP的配置信息。
                     */
                    CreateInputRTPSettings m_rTPSettings;
                    bool m_rTPSettingsHasBeenSet;

                    /**
                     * 输入的协议，可选[SRT|RTP|RTMP]。
当输出包含RTP时，输入只能是RTP。
当输出包含RTMP时，输入可以是SRT/RTMP。
当输出包含SRT时，输入只能是SRT。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 输入的主备开关，可选[OPEN|CLOSE]。
                     */
                    std::string m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * RTMP_PULL的配置信息。
                     */
                    CreateInputRTMPPullSettings m_rTMPPullSettings;
                    bool m_rTMPPullSettingsHasBeenSet;

                    /**
                     * RTSP_PULL的配置信息。
                     */
                    CreateInputRTSPPullSettings m_rTSPPullSettings;
                    bool m_rTSPPullSettingsHasBeenSet;

                    /**
                     * HLS_PULL的配置信息。
                     */
                    CreateInputHLSPullSettings m_hLSPullSettings;
                    bool m_hLSPullSettingsHasBeenSet;

                    /**
                     * 延播平滑吐流配置信息。
                     */
                    ResilientStreamConf m_resilientStream;
                    bool m_resilientStreamHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYINPUT_H_
