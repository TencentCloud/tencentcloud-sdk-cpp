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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_CREATEINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_CREATEINPUT_H_

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


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 创建输入的配置信息。
                */
                class CreateInput : public AbstractModel
                {
                public:
                    CreateInput();
                    ~CreateInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输入名称，可填大小写、数字和下划线，长度为[1, 32]。
                     * @return InputName 输入名称，可填大小写、数字和下划线，长度为[1, 32]。
                     */
                    std::string GetInputName() const;

                    /**
                     * 设置输入名称，可填大小写、数字和下划线，长度为[1, 32]。
                     * @param InputName 输入名称，可填大小写、数字和下划线，长度为[1, 32]。
                     */
                    void SetInputName(const std::string& _inputName);

                    /**
                     * 判断参数 InputName 是否已赋值
                     * @return InputName 是否已赋值
                     */
                    bool InputNameHasBeenSet() const;

                    /**
                     * 获取输入的协议，可选[SRT|RTP|RTMP|RTMP_PULL]。
                     * @return Protocol 输入的协议，可选[SRT|RTP|RTMP|RTMP_PULL]。
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置输入的协议，可选[SRT|RTP|RTMP|RTMP_PULL]。
                     * @param Protocol 输入的协议，可选[SRT|RTP|RTMP|RTMP_PULL]。
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取输入描述，长度为[0, 255]。
                     * @return Description 输入描述，长度为[0, 255]。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置输入描述，长度为[0, 255]。
                     * @param Description 输入描述，长度为[0, 255]。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取输入的IP白名单，格式为CIDR。
                     * @return AllowIpList 输入的IP白名单，格式为CIDR。
                     */
                    std::vector<std::string> GetAllowIpList() const;

                    /**
                     * 设置输入的IP白名单，格式为CIDR。
                     * @param AllowIpList 输入的IP白名单，格式为CIDR。
                     */
                    void SetAllowIpList(const std::vector<std::string>& _allowIpList);

                    /**
                     * 判断参数 AllowIpList 是否已赋值
                     * @return AllowIpList 是否已赋值
                     */
                    bool AllowIpListHasBeenSet() const;

                    /**
                     * 获取输入的SRT配置信息。
                     * @return SRTSettings 输入的SRT配置信息。
                     */
                    CreateInputSRTSettings GetSRTSettings() const;

                    /**
                     * 设置输入的SRT配置信息。
                     * @param SRTSettings 输入的SRT配置信息。
                     */
                    void SetSRTSettings(const CreateInputSRTSettings& _sRTSettings);

                    /**
                     * 判断参数 SRTSettings 是否已赋值
                     * @return SRTSettings 是否已赋值
                     */
                    bool SRTSettingsHasBeenSet() const;

                    /**
                     * 获取输入的RTP配置信息。
                     * @return RTPSettings 输入的RTP配置信息。
                     */
                    CreateInputRTPSettings GetRTPSettings() const;

                    /**
                     * 设置输入的RTP配置信息。
                     * @param RTPSettings 输入的RTP配置信息。
                     */
                    void SetRTPSettings(const CreateInputRTPSettings& _rTPSettings);

                    /**
                     * 判断参数 RTPSettings 是否已赋值
                     * @return RTPSettings 是否已赋值
                     */
                    bool RTPSettingsHasBeenSet() const;

                    /**
                     * 获取输入的主备开关，可选[OPEN|CLOSE]，默认为CLOSE。
                     * @return FailOver 输入的主备开关，可选[OPEN|CLOSE]，默认为CLOSE。
                     */
                    std::string GetFailOver() const;

                    /**
                     * 设置输入的主备开关，可选[OPEN|CLOSE]，默认为CLOSE。
                     * @param FailOver 输入的主备开关，可选[OPEN|CLOSE]，默认为CLOSE。
                     */
                    void SetFailOver(const std::string& _failOver);

                    /**
                     * 判断参数 FailOver 是否已赋值
                     * @return FailOver 是否已赋值
                     */
                    bool FailOverHasBeenSet() const;

                    /**
                     * 获取输入的RTMP_PULL配置信息。
                     * @return RTMPPullSettings 输入的RTMP_PULL配置信息。
                     */
                    CreateInputRTMPPullSettings GetRTMPPullSettings() const;

                    /**
                     * 设置输入的RTMP_PULL配置信息。
                     * @param RTMPPullSettings 输入的RTMP_PULL配置信息。
                     */
                    void SetRTMPPullSettings(const CreateInputRTMPPullSettings& _rTMPPullSettings);

                    /**
                     * 判断参数 RTMPPullSettings 是否已赋值
                     * @return RTMPPullSettings 是否已赋值
                     */
                    bool RTMPPullSettingsHasBeenSet() const;

                    /**
                     * 获取输入的RTSP_PULL配置信息。
                     * @return RTSPPullSettings 输入的RTSP_PULL配置信息。
                     */
                    CreateInputRTSPPullSettings GetRTSPPullSettings() const;

                    /**
                     * 设置输入的RTSP_PULL配置信息。
                     * @param RTSPPullSettings 输入的RTSP_PULL配置信息。
                     */
                    void SetRTSPPullSettings(const CreateInputRTSPPullSettings& _rTSPPullSettings);

                    /**
                     * 判断参数 RTSPPullSettings 是否已赋值
                     * @return RTSPPullSettings 是否已赋值
                     */
                    bool RTSPPullSettingsHasBeenSet() const;

                    /**
                     * 获取输入的HLS_PULL配置信息。
                     * @return HLSPullSettings 输入的HLS_PULL配置信息。
                     */
                    CreateInputHLSPullSettings GetHLSPullSettings() const;

                    /**
                     * 设置输入的HLS_PULL配置信息。
                     * @param HLSPullSettings 输入的HLS_PULL配置信息。
                     */
                    void SetHLSPullSettings(const CreateInputHLSPullSettings& _hLSPullSettings);

                    /**
                     * 判断参数 HLSPullSettings 是否已赋值
                     * @return HLSPullSettings 是否已赋值
                     */
                    bool HLSPullSettingsHasBeenSet() const;

                private:

                    /**
                     * 输入名称，可填大小写、数字和下划线，长度为[1, 32]。
                     */
                    std::string m_inputName;
                    bool m_inputNameHasBeenSet;

                    /**
                     * 输入的协议，可选[SRT|RTP|RTMP|RTMP_PULL]。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 输入描述，长度为[0, 255]。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 输入的IP白名单，格式为CIDR。
                     */
                    std::vector<std::string> m_allowIpList;
                    bool m_allowIpListHasBeenSet;

                    /**
                     * 输入的SRT配置信息。
                     */
                    CreateInputSRTSettings m_sRTSettings;
                    bool m_sRTSettingsHasBeenSet;

                    /**
                     * 输入的RTP配置信息。
                     */
                    CreateInputRTPSettings m_rTPSettings;
                    bool m_rTPSettingsHasBeenSet;

                    /**
                     * 输入的主备开关，可选[OPEN|CLOSE]，默认为CLOSE。
                     */
                    std::string m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * 输入的RTMP_PULL配置信息。
                     */
                    CreateInputRTMPPullSettings m_rTMPPullSettings;
                    bool m_rTMPPullSettingsHasBeenSet;

                    /**
                     * 输入的RTSP_PULL配置信息。
                     */
                    CreateInputRTSPPullSettings m_rTSPPullSettings;
                    bool m_rTSPPullSettingsHasBeenSet;

                    /**
                     * 输入的HLS_PULL配置信息。
                     */
                    CreateInputHLSPullSettings m_hLSPullSettings;
                    bool m_hLSPullSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_CREATEINPUT_H_
