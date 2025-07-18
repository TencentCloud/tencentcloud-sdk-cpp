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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYOUTPUTINFO_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYOUTPUTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/CreateOutputSRTSettings.h>
#include <tencentcloud/mps/v20190612/model/CreateOutputInfoRTPSettings.h>
#include <tencentcloud/mps/v20190612/model/CreateOutputRTMPSettings.h>
#include <tencentcloud/mps/v20190612/model/CreateOutputRistSettings.h>
#include <tencentcloud/mps/v20190612/model/PidSelector.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 修改Output配置。
                */
                class ModifyOutputInfo : public AbstractModel
                {
                public:
                    ModifyOutputInfo();
                    ~ModifyOutputInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取需要修改的Output的Id。
                     * @return OutputId 需要修改的Output的Id。
                     * 
                     */
                    std::string GetOutputId() const;

                    /**
                     * 设置需要修改的Output的Id。
                     * @param _outputId 需要修改的Output的Id。
                     * 
                     */
                    void SetOutputId(const std::string& _outputId);

                    /**
                     * 判断参数 OutputId 是否已赋值
                     * @return OutputId 是否已赋值
                     * 
                     */
                    bool OutputIdHasBeenSet() const;

                    /**
                     * 获取输出的名称。
                     * @return OutputName 输出的名称。
                     * 
                     */
                    std::string GetOutputName() const;

                    /**
                     * 设置输出的名称。
                     * @param _outputName 输出的名称。
                     * 
                     */
                    void SetOutputName(const std::string& _outputName);

                    /**
                     * 判断参数 OutputName 是否已赋值
                     * @return OutputName 是否已赋值
                     * 
                     */
                    bool OutputNameHasBeenSet() const;

                    /**
                     * 获取输出的描述。
                     * @return Description 输出的描述。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置输出的描述。
                     * @param _description 输出的描述。
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取输出的转推协议，支持SRT|RTP|RTMP|RTMP_PULL|RTSP_PULL|RIST。
                     * @return Protocol 输出的转推协议，支持SRT|RTP|RTMP|RTMP_PULL|RTSP_PULL|RIST。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置输出的转推协议，支持SRT|RTP|RTMP|RTMP_PULL|RTSP_PULL|RIST。
                     * @param _protocol 输出的转推协议，支持SRT|RTP|RTMP|RTMP_PULL|RTSP_PULL|RIST。
                     * 
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     * 
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取输出模块类型，包括Pinpoint（单点输出，最多支持四路并发输出）；MultiMesh（多路输出，支持大于四路的并发输出，目前可以达到200路）。默认类型为 Pinpoint 输出。对于单个 Flow 一个区域最多只能有一个 MultiMesh 输出。
                     * @return OutputKind 输出模块类型，包括Pinpoint（单点输出，最多支持四路并发输出）；MultiMesh（多路输出，支持大于四路的并发输出，目前可以达到200路）。默认类型为 Pinpoint 输出。对于单个 Flow 一个区域最多只能有一个 MultiMesh 输出。
                     * 
                     */
                    std::string GetOutputKind() const;

                    /**
                     * 设置输出模块类型，包括Pinpoint（单点输出，最多支持四路并发输出）；MultiMesh（多路输出，支持大于四路的并发输出，目前可以达到200路）。默认类型为 Pinpoint 输出。对于单个 Flow 一个区域最多只能有一个 MultiMesh 输出。
                     * @param _outputKind 输出模块类型，包括Pinpoint（单点输出，最多支持四路并发输出）；MultiMesh（多路输出，支持大于四路的并发输出，目前可以达到200路）。默认类型为 Pinpoint 输出。对于单个 Flow 一个区域最多只能有一个 MultiMesh 输出。
                     * 
                     */
                    void SetOutputKind(const std::string& _outputKind);

                    /**
                     * 判断参数 OutputKind 是否已赋值
                     * @return OutputKind 是否已赋值
                     * 
                     */
                    bool OutputKindHasBeenSet() const;

                    /**
                     * 获取转推SRT的配置。
                     * @return SRTSettings 转推SRT的配置。
                     * 
                     */
                    CreateOutputSRTSettings GetSRTSettings() const;

                    /**
                     * 设置转推SRT的配置。
                     * @param _sRTSettings 转推SRT的配置。
                     * 
                     */
                    void SetSRTSettings(const CreateOutputSRTSettings& _sRTSettings);

                    /**
                     * 判断参数 SRTSettings 是否已赋值
                     * @return SRTSettings 是否已赋值
                     * 
                     */
                    bool SRTSettingsHasBeenSet() const;

                    /**
                     * 获取转推RTP的配置。
                     * @return RTPSettings 转推RTP的配置。
                     * 
                     */
                    CreateOutputInfoRTPSettings GetRTPSettings() const;

                    /**
                     * 设置转推RTP的配置。
                     * @param _rTPSettings 转推RTP的配置。
                     * 
                     */
                    void SetRTPSettings(const CreateOutputInfoRTPSettings& _rTPSettings);

                    /**
                     * 判断参数 RTPSettings 是否已赋值
                     * @return RTPSettings 是否已赋值
                     * 
                     */
                    bool RTPSettingsHasBeenSet() const;

                    /**
                     * 获取转推RTMP的配置。
                     * @return RTMPSettings 转推RTMP的配置。
                     * 
                     */
                    CreateOutputRTMPSettings GetRTMPSettings() const;

                    /**
                     * 设置转推RTMP的配置。
                     * @param _rTMPSettings 转推RTMP的配置。
                     * 
                     */
                    void SetRTMPSettings(const CreateOutputRTMPSettings& _rTMPSettings);

                    /**
                     * 判断参数 RTMPSettings 是否已赋值
                     * @return RTMPSettings 是否已赋值
                     * 
                     */
                    bool RTMPSettingsHasBeenSet() const;

                    /**
                     * 获取IP白名单列表，格式为CIDR，如0.0.0.0/0。
当Protocol为RTMP_PULL有效，为空代表不限制客户端IP。
                     * @return AllowIpList IP白名单列表，格式为CIDR，如0.0.0.0/0。
当Protocol为RTMP_PULL有效，为空代表不限制客户端IP。
                     * 
                     */
                    std::vector<std::string> GetAllowIpList() const;

                    /**
                     * 设置IP白名单列表，格式为CIDR，如0.0.0.0/0。
当Protocol为RTMP_PULL有效，为空代表不限制客户端IP。
                     * @param _allowIpList IP白名单列表，格式为CIDR，如0.0.0.0/0。
当Protocol为RTMP_PULL有效，为空代表不限制客户端IP。
                     * 
                     */
                    void SetAllowIpList(const std::vector<std::string>& _allowIpList);

                    /**
                     * 判断参数 AllowIpList 是否已赋值
                     * @return AllowIpList 是否已赋值
                     * 
                     */
                    bool AllowIpListHasBeenSet() const;

                    /**
                     * 获取最大拉流并发数，最大4，默认4。
                     * @return MaxConcurrent 最大拉流并发数，最大4，默认4。
                     * 
                     */
                    uint64_t GetMaxConcurrent() const;

                    /**
                     * 设置最大拉流并发数，最大4，默认4。
                     * @param _maxConcurrent 最大拉流并发数，最大4，默认4。
                     * 
                     */
                    void SetMaxConcurrent(const uint64_t& _maxConcurrent);

                    /**
                     * 判断参数 MaxConcurrent 是否已赋值
                     * @return MaxConcurrent 是否已赋值
                     * 
                     */
                    bool MaxConcurrentHasBeenSet() const;

                    /**
                     * 获取绑定的安全组 ID。 仅支持关联一组安全组。	
                     * @return SecurityGroupIds 绑定的安全组 ID。 仅支持关联一组安全组。	
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置绑定的安全组 ID。 仅支持关联一组安全组。	
                     * @param _securityGroupIds 绑定的安全组 ID。 仅支持关联一组安全组。	
                     * 
                     */
                    void SetSecurityGroupIds(const std::vector<std::string>& _securityGroupIds);

                    /**
                     * 判断参数 SecurityGroupIds 是否已赋值
                     * @return SecurityGroupIds 是否已赋值
                     * 
                     */
                    bool SecurityGroupIdsHasBeenSet() const;

                    /**
                     * 获取可用区
                     * @return Zones 可用区
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置可用区
                     * @param _zones 可用区
                     * 
                     */
                    void SetZones(const std::vector<std::string>& _zones);

                    /**
                     * 判断参数 Zones 是否已赋值
                     * @return Zones 是否已赋值
                     * 
                     */
                    bool ZonesHasBeenSet() const;

                    /**
                     * 获取转推RIST的配置。
                     * @return RISTSettings 转推RIST的配置。
                     * 
                     */
                    CreateOutputRistSettings GetRISTSettings() const;

                    /**
                     * 设置转推RIST的配置。
                     * @param _rISTSettings 转推RIST的配置。
                     * 
                     */
                    void SetRISTSettings(const CreateOutputRistSettings& _rISTSettings);

                    /**
                     * 判断参数 RISTSettings 是否已赋值
                     * @return RISTSettings 是否已赋值
                     * 
                     */
                    bool RISTSettingsHasBeenSet() const;

                    /**
                     * 获取输出类型：Internet/TencentCSS/StreamLive
                     * @return OutputType 输出类型：Internet/TencentCSS/StreamLive
                     * 
                     */
                    std::string GetOutputType() const;

                    /**
                     * 设置输出类型：Internet/TencentCSS/StreamLive
                     * @param _outputType 输出类型：Internet/TencentCSS/StreamLive
                     * 
                     */
                    void SetOutputType(const std::string& _outputType);

                    /**
                     * 判断参数 OutputType 是否已赋值
                     * @return OutputType 是否已赋值
                     * 
                     */
                    bool OutputTypeHasBeenSet() const;

                    /**
                     * 获取对于含有多个音/视频轨的流，可以指定需要使用的轨道
                     * @return PidSelector 对于含有多个音/视频轨的流，可以指定需要使用的轨道
                     * 
                     */
                    PidSelector GetPidSelector() const;

                    /**
                     * 设置对于含有多个音/视频轨的流，可以指定需要使用的轨道
                     * @param _pidSelector 对于含有多个音/视频轨的流，可以指定需要使用的轨道
                     * 
                     */
                    void SetPidSelector(const PidSelector& _pidSelector);

                    /**
                     * 判断参数 PidSelector 是否已赋值
                     * @return PidSelector 是否已赋值
                     * 
                     */
                    bool PidSelectorHasBeenSet() const;

                private:

                    /**
                     * 需要修改的Output的Id。
                     */
                    std::string m_outputId;
                    bool m_outputIdHasBeenSet;

                    /**
                     * 输出的名称。
                     */
                    std::string m_outputName;
                    bool m_outputNameHasBeenSet;

                    /**
                     * 输出的描述。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 输出的转推协议，支持SRT|RTP|RTMP|RTMP_PULL|RTSP_PULL|RIST。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 输出模块类型，包括Pinpoint（单点输出，最多支持四路并发输出）；MultiMesh（多路输出，支持大于四路的并发输出，目前可以达到200路）。默认类型为 Pinpoint 输出。对于单个 Flow 一个区域最多只能有一个 MultiMesh 输出。
                     */
                    std::string m_outputKind;
                    bool m_outputKindHasBeenSet;

                    /**
                     * 转推SRT的配置。
                     */
                    CreateOutputSRTSettings m_sRTSettings;
                    bool m_sRTSettingsHasBeenSet;

                    /**
                     * 转推RTP的配置。
                     */
                    CreateOutputInfoRTPSettings m_rTPSettings;
                    bool m_rTPSettingsHasBeenSet;

                    /**
                     * 转推RTMP的配置。
                     */
                    CreateOutputRTMPSettings m_rTMPSettings;
                    bool m_rTMPSettingsHasBeenSet;

                    /**
                     * IP白名单列表，格式为CIDR，如0.0.0.0/0。
当Protocol为RTMP_PULL有效，为空代表不限制客户端IP。
                     */
                    std::vector<std::string> m_allowIpList;
                    bool m_allowIpListHasBeenSet;

                    /**
                     * 最大拉流并发数，最大4，默认4。
                     */
                    uint64_t m_maxConcurrent;
                    bool m_maxConcurrentHasBeenSet;

                    /**
                     * 绑定的安全组 ID。 仅支持关联一组安全组。	
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 可用区
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * 转推RIST的配置。
                     */
                    CreateOutputRistSettings m_rISTSettings;
                    bool m_rISTSettingsHasBeenSet;

                    /**
                     * 输出类型：Internet/TencentCSS/StreamLive
                     */
                    std::string m_outputType;
                    bool m_outputTypeHasBeenSet;

                    /**
                     * 对于含有多个音/视频轨的流，可以指定需要使用的轨道
                     */
                    PidSelector m_pidSelector;
                    bool m_pidSelectorHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_MODIFYOUTPUTINFO_H_
