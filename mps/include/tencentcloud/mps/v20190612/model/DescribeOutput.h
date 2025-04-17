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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEOUTPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEOUTPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/OutputAddress.h>
#include <tencentcloud/mps/v20190612/model/DescribeOutputSRTSettings.h>
#include <tencentcloud/mps/v20190612/model/DescribeOutputRTPSettings.h>
#include <tencentcloud/mps/v20190612/model/DescribeOutputRTMPSettings.h>
#include <tencentcloud/mps/v20190612/model/DescribeOutputRTMPPullSettings.h>
#include <tencentcloud/mps/v20190612/model/DescribeOutputRTSPPullSettings.h>
#include <tencentcloud/mps/v20190612/model/DescribeOutputHLSPullSettings.h>
#include <tencentcloud/mps/v20190612/model/DescribeOutputRISTSettings.h>
#include <tencentcloud/mps/v20190612/model/PidSelector.h>
#include <tencentcloud/mps/v20190612/model/StreamUrlDetail.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * 查询输出的配置信息。
                */
                class DescribeOutput : public AbstractModel
                {
                public:
                    DescribeOutput();
                    ~DescribeOutput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取输出Id。
                     * @return OutputId 输出Id。
                     * 
                     */
                    std::string GetOutputId() const;

                    /**
                     * 设置输出Id。
                     * @param _outputId 输出Id。
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
                     * 获取输出名称。
                     * @return OutputName 输出名称。
                     * 
                     */
                    std::string GetOutputName() const;

                    /**
                     * 设置输出名称。
                     * @param _outputName 输出名称。
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
                     * 获取输出类型。
                     * @return OutputType 输出类型。
                     * 
                     */
                    std::string GetOutputType() const;

                    /**
                     * 设置输出类型。
                     * @param _outputType 输出类型。
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
                     * 获取输出描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 输出描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置输出描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description 输出描述。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取输出协议。
                     * @return Protocol 输出协议。
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置输出协议。
                     * @param _protocol 输出协议。
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
                     * 获取输出的出口地址信息列表。
                     * @return OutputAddressList 输出的出口地址信息列表。
                     * 
                     */
                    std::vector<OutputAddress> GetOutputAddressList() const;

                    /**
                     * 设置输出的出口地址信息列表。
                     * @param _outputAddressList 输出的出口地址信息列表。
                     * 
                     */
                    void SetOutputAddressList(const std::vector<OutputAddress>& _outputAddressList);

                    /**
                     * 判断参数 OutputAddressList 是否已赋值
                     * @return OutputAddressList 是否已赋值
                     * 
                     */
                    bool OutputAddressListHasBeenSet() const;

                    /**
                     * 获取输出的地区。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputRegion 输出的地区。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutputRegion() const;

                    /**
                     * 设置输出的地区。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputRegion 输出的地区。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutputRegion(const std::string& _outputRegion);

                    /**
                     * 判断参数 OutputRegion 是否已赋值
                     * @return OutputRegion 是否已赋值
                     * 
                     */
                    bool OutputRegionHasBeenSet() const;

                    /**
                     * 获取输出的SRT配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SRTSettings 输出的SRT配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribeOutputSRTSettings GetSRTSettings() const;

                    /**
                     * 设置输出的SRT配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sRTSettings 输出的SRT配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSRTSettings(const DescribeOutputSRTSettings& _sRTSettings);

                    /**
                     * 判断参数 SRTSettings 是否已赋值
                     * @return SRTSettings 是否已赋值
                     * 
                     */
                    bool SRTSettingsHasBeenSet() const;

                    /**
                     * 获取输出的RTP配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RTPSettings 输出的RTP配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribeOutputRTPSettings GetRTPSettings() const;

                    /**
                     * 设置输出的RTP配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rTPSettings 输出的RTP配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRTPSettings(const DescribeOutputRTPSettings& _rTPSettings);

                    /**
                     * 判断参数 RTPSettings 是否已赋值
                     * @return RTPSettings 是否已赋值
                     * 
                     */
                    bool RTPSettingsHasBeenSet() const;

                    /**
                     * 获取输出的RTMP配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RTMPSettings 输出的RTMP配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribeOutputRTMPSettings GetRTMPSettings() const;

                    /**
                     * 设置输出的RTMP配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rTMPSettings 输出的RTMP配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRTMPSettings(const DescribeOutputRTMPSettings& _rTMPSettings);

                    /**
                     * 判断参数 RTMPSettings 是否已赋值
                     * @return RTMPSettings 是否已赋值
                     * 
                     */
                    bool RTMPSettingsHasBeenSet() const;

                    /**
                     * 获取输出的RTMP拉流配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RTMPPullSettings 输出的RTMP拉流配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribeOutputRTMPPullSettings GetRTMPPullSettings() const;

                    /**
                     * 设置输出的RTMP拉流配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rTMPPullSettings 输出的RTMP拉流配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRTMPPullSettings(const DescribeOutputRTMPPullSettings& _rTMPPullSettings);

                    /**
                     * 判断参数 RTMPPullSettings 是否已赋值
                     * @return RTMPPullSettings 是否已赋值
                     * 
                     */
                    bool RTMPPullSettingsHasBeenSet() const;

                    /**
                     * 获取CIDR白名单列表。
当Protocol为RTMP_PULL有效，为空代表不限制客户端IP。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AllowIpList CIDR白名单列表。
当Protocol为RTMP_PULL有效，为空代表不限制客户端IP。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetAllowIpList() const;

                    /**
                     * 设置CIDR白名单列表。
当Protocol为RTMP_PULL有效，为空代表不限制客户端IP。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _allowIpList CIDR白名单列表。
当Protocol为RTMP_PULL有效，为空代表不限制客户端IP。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取输出的RTSP拉流配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RTSPPullSettings 输出的RTSP拉流配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribeOutputRTSPPullSettings GetRTSPPullSettings() const;

                    /**
                     * 设置输出的RTSP拉流配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rTSPPullSettings 输出的RTSP拉流配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRTSPPullSettings(const DescribeOutputRTSPPullSettings& _rTSPPullSettings);

                    /**
                     * 判断参数 RTSPPullSettings 是否已赋值
                     * @return RTSPPullSettings 是否已赋值
                     * 
                     */
                    bool RTSPPullSettingsHasBeenSet() const;

                    /**
                     * 获取输出的HLS拉流配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HLSPullSettings 输出的HLS拉流配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribeOutputHLSPullSettings GetHLSPullSettings() const;

                    /**
                     * 设置输出的HLS拉流配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hLSPullSettings 输出的HLS拉流配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHLSPullSettings(const DescribeOutputHLSPullSettings& _hLSPullSettings);

                    /**
                     * 判断参数 HLSPullSettings 是否已赋值
                     * @return HLSPullSettings 是否已赋值
                     * 
                     */
                    bool HLSPullSettingsHasBeenSet() const;

                    /**
                     * 获取最大拉流并发数，最大为4，默认4。
                     * @return MaxConcurrent 最大拉流并发数，最大为4，默认4。
                     * 
                     */
                    uint64_t GetMaxConcurrent() const;

                    /**
                     * 设置最大拉流并发数，最大为4，默认4。
                     * @param _maxConcurrent 最大拉流并发数，最大为4，默认4。
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
                     * 获取绑定的安全组 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecurityGroupIds 绑定的安全组 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置绑定的安全组 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _securityGroupIds 绑定的安全组 ID。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取可用区，output目前最多只支持一个。	
                     * @return Zones 可用区，output目前最多只支持一个。	
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置可用区，output目前最多只支持一个。	
                     * @param _zones 可用区，output目前最多只支持一个。	
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
                     * 获取输出的RIST配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RISTSettings 输出的RIST配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribeOutputRISTSettings GetRISTSettings() const;

                    /**
                     * 设置输出的RIST配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rISTSettings 输出的RIST配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRISTSettings(const DescribeOutputRISTSettings& _rISTSettings);

                    /**
                     * 判断参数 RISTSettings 是否已赋值
                     * @return RISTSettings 是否已赋值
                     * 
                     */
                    bool RISTSettingsHasBeenSet() const;

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

                    /**
                     * 获取输出模块配置，相关的URL，包括提供的拉流地址，或者配置的输出到第三方的转推地址
                     * @return StreamUrls 输出模块配置，相关的URL，包括提供的拉流地址，或者配置的输出到第三方的转推地址
                     * 
                     */
                    std::vector<StreamUrlDetail> GetStreamUrls() const;

                    /**
                     * 设置输出模块配置，相关的URL，包括提供的拉流地址，或者配置的输出到第三方的转推地址
                     * @param _streamUrls 输出模块配置，相关的URL，包括提供的拉流地址，或者配置的输出到第三方的转推地址
                     * 
                     */
                    void SetStreamUrls(const std::vector<StreamUrlDetail>& _streamUrls);

                    /**
                     * 判断参数 StreamUrls 是否已赋值
                     * @return StreamUrls 是否已赋值
                     * 
                     */
                    bool StreamUrlsHasBeenSet() const;

                private:

                    /**
                     * 输出Id。
                     */
                    std::string m_outputId;
                    bool m_outputIdHasBeenSet;

                    /**
                     * 输出名称。
                     */
                    std::string m_outputName;
                    bool m_outputNameHasBeenSet;

                    /**
                     * 输出类型。
                     */
                    std::string m_outputType;
                    bool m_outputTypeHasBeenSet;

                    /**
                     * 输出模块类型，包括Pinpoint（单点输出，最多支持四路并发输出）；MultiMesh（多路输出，支持大于四路的并发输出，目前可以达到200路）。默认类型为 Pinpoint 输出。对于单个 Flow 一个区域最多只能有一个 MultiMesh 输出。
                     */
                    std::string m_outputKind;
                    bool m_outputKindHasBeenSet;

                    /**
                     * 输出描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 输出协议。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 输出的出口地址信息列表。
                     */
                    std::vector<OutputAddress> m_outputAddressList;
                    bool m_outputAddressListHasBeenSet;

                    /**
                     * 输出的地区。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outputRegion;
                    bool m_outputRegionHasBeenSet;

                    /**
                     * 输出的SRT配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeOutputSRTSettings m_sRTSettings;
                    bool m_sRTSettingsHasBeenSet;

                    /**
                     * 输出的RTP配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeOutputRTPSettings m_rTPSettings;
                    bool m_rTPSettingsHasBeenSet;

                    /**
                     * 输出的RTMP配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeOutputRTMPSettings m_rTMPSettings;
                    bool m_rTMPSettingsHasBeenSet;

                    /**
                     * 输出的RTMP拉流配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeOutputRTMPPullSettings m_rTMPPullSettings;
                    bool m_rTMPPullSettingsHasBeenSet;

                    /**
                     * CIDR白名单列表。
当Protocol为RTMP_PULL有效，为空代表不限制客户端IP。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_allowIpList;
                    bool m_allowIpListHasBeenSet;

                    /**
                     * 输出的RTSP拉流配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeOutputRTSPPullSettings m_rTSPPullSettings;
                    bool m_rTSPPullSettingsHasBeenSet;

                    /**
                     * 输出的HLS拉流配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeOutputHLSPullSettings m_hLSPullSettings;
                    bool m_hLSPullSettingsHasBeenSet;

                    /**
                     * 最大拉流并发数，最大为4，默认4。
                     */
                    uint64_t m_maxConcurrent;
                    bool m_maxConcurrentHasBeenSet;

                    /**
                     * 绑定的安全组 ID。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * 可用区，output目前最多只支持一个。	
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * 输出的RIST配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeOutputRISTSettings m_rISTSettings;
                    bool m_rISTSettingsHasBeenSet;

                    /**
                     * 对于含有多个音/视频轨的流，可以指定需要使用的轨道
                     */
                    PidSelector m_pidSelector;
                    bool m_pidSelectorHasBeenSet;

                    /**
                     * 输出模块配置，相关的URL，包括提供的拉流地址，或者配置的输出到第三方的转推地址
                     */
                    std::vector<StreamUrlDetail> m_streamUrls;
                    bool m_streamUrlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEOUTPUT_H_
