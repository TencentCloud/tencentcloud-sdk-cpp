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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEINPUT_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEINPUT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mps/v20190612/model/InputAddress.h>
#include <tencentcloud/mps/v20190612/model/DescribeInputSRTSettings.h>
#include <tencentcloud/mps/v20190612/model/DescribeInputRTPSettings.h>
#include <tencentcloud/mps/v20190612/model/DescribeInputRTMPSettings.h>
#include <tencentcloud/mps/v20190612/model/DescribeInputRTMPPullSettings.h>
#include <tencentcloud/mps/v20190612/model/DescribeInputRTSPPullSettings.h>
#include <tencentcloud/mps/v20190612/model/DescribeInputHLSPullSettings.h>
#include <tencentcloud/mps/v20190612/model/ResilientStreamConf.h>
#include <tencentcloud/mps/v20190612/model/DescribeInputRISTSettings.h>
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
                * 查询输入配置信息。
                */
                class DescribeInput : public AbstractModel
                {
                public:
                    DescribeInput();
                    ~DescribeInput() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>输入Id。</p>
                     * @return InputId <p>输入Id。</p>
                     * 
                     */
                    std::string GetInputId() const;

                    /**
                     * 设置<p>输入Id。</p>
                     * @param _inputId <p>输入Id。</p>
                     * 
                     */
                    void SetInputId(const std::string& _inputId);

                    /**
                     * 判断参数 InputId 是否已赋值
                     * @return InputId 是否已赋值
                     * 
                     */
                    bool InputIdHasBeenSet() const;

                    /**
                     * 获取<p>输入名称。</p>
                     * @return InputName <p>输入名称。</p>
                     * 
                     */
                    std::string GetInputName() const;

                    /**
                     * 设置<p>输入名称。</p>
                     * @param _inputName <p>输入名称。</p>
                     * 
                     */
                    void SetInputName(const std::string& _inputName);

                    /**
                     * 判断参数 InputName 是否已赋值
                     * @return InputName 是否已赋值
                     * 
                     */
                    bool InputNameHasBeenSet() const;

                    /**
                     * 获取<p>输入描述。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description <p>输入描述。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>输入描述。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _description <p>输入描述。</p>
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
                     * 获取<p>输入协议。</p>
                     * @return Protocol <p>输入协议。</p>
                     * 
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置<p>输入协议。</p>
                     * @param _protocol <p>输入协议。</p>
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
                     * 获取<p>输入地址列表。</p>
                     * @return InputAddressList <p>输入地址列表。</p>
                     * 
                     */
                    std::vector<InputAddress> GetInputAddressList() const;

                    /**
                     * 设置<p>输入地址列表。</p>
                     * @param _inputAddressList <p>输入地址列表。</p>
                     * 
                     */
                    void SetInputAddressList(const std::vector<InputAddress>& _inputAddressList);

                    /**
                     * 判断参数 InputAddressList 是否已赋值
                     * @return InputAddressList 是否已赋值
                     * 
                     */
                    bool InputAddressListHasBeenSet() const;

                    /**
                     * 获取<p>输入IP白名单列表。</p>
                     * @return AllowIpList <p>输入IP白名单列表。</p>
                     * 
                     */
                    std::vector<std::string> GetAllowIpList() const;

                    /**
                     * 设置<p>输入IP白名单列表。</p>
                     * @param _allowIpList <p>输入IP白名单列表。</p>
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
                     * 获取<p>输入的SRT配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SRTSettings <p>输入的SRT配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribeInputSRTSettings GetSRTSettings() const;

                    /**
                     * 设置<p>输入的SRT配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _sRTSettings <p>输入的SRT配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSRTSettings(const DescribeInputSRTSettings& _sRTSettings);

                    /**
                     * 判断参数 SRTSettings 是否已赋值
                     * @return SRTSettings 是否已赋值
                     * 
                     */
                    bool SRTSettingsHasBeenSet() const;

                    /**
                     * 获取<p>输入的RTP配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RTPSettings <p>输入的RTP配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribeInputRTPSettings GetRTPSettings() const;

                    /**
                     * 设置<p>输入的RTP配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rTPSettings <p>输入的RTP配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRTPSettings(const DescribeInputRTPSettings& _rTPSettings);

                    /**
                     * 判断参数 RTPSettings 是否已赋值
                     * @return RTPSettings 是否已赋值
                     * 
                     */
                    bool RTPSettingsHasBeenSet() const;

                    /**
                     * 获取<p>输入的地区。</p>
                     * @return InputRegion <p>输入的地区。</p>
                     * 
                     */
                    std::string GetInputRegion() const;

                    /**
                     * 设置<p>输入的地区。</p>
                     * @param _inputRegion <p>输入的地区。</p>
                     * 
                     */
                    void SetInputRegion(const std::string& _inputRegion);

                    /**
                     * 判断参数 InputRegion 是否已赋值
                     * @return InputRegion 是否已赋值
                     * 
                     */
                    bool InputRegionHasBeenSet() const;

                    /**
                     * 获取<p>输入的RTMP配置信息。</p>
                     * @return RTMPSettings <p>输入的RTMP配置信息。</p>
                     * 
                     */
                    DescribeInputRTMPSettings GetRTMPSettings() const;

                    /**
                     * 设置<p>输入的RTMP配置信息。</p>
                     * @param _rTMPSettings <p>输入的RTMP配置信息。</p>
                     * 
                     */
                    void SetRTMPSettings(const DescribeInputRTMPSettings& _rTMPSettings);

                    /**
                     * 判断参数 RTMPSettings 是否已赋值
                     * @return RTMPSettings 是否已赋值
                     * 
                     */
                    bool RTMPSettingsHasBeenSet() const;

                    /**
                     * 获取<p>输入的主备开关。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailOver <p>输入的主备开关。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFailOver() const;

                    /**
                     * 设置<p>输入的主备开关。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _failOver <p>输入的主备开关。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFailOver(const std::string& _failOver);

                    /**
                     * 判断参数 FailOver 是否已赋值
                     * @return FailOver 是否已赋值
                     * 
                     */
                    bool FailOverHasBeenSet() const;

                    /**
                     * 获取<p>输入的RTMP_PULL配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RTMPPullSettings <p>输入的RTMP_PULL配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribeInputRTMPPullSettings GetRTMPPullSettings() const;

                    /**
                     * 设置<p>输入的RTMP_PULL配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rTMPPullSettings <p>输入的RTMP_PULL配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRTMPPullSettings(const DescribeInputRTMPPullSettings& _rTMPPullSettings);

                    /**
                     * 判断参数 RTMPPullSettings 是否已赋值
                     * @return RTMPPullSettings 是否已赋值
                     * 
                     */
                    bool RTMPPullSettingsHasBeenSet() const;

                    /**
                     * 获取<p>输入的RTSP_PULL配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RTSPPullSettings <p>输入的RTSP_PULL配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribeInputRTSPPullSettings GetRTSPPullSettings() const;

                    /**
                     * 设置<p>输入的RTSP_PULL配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rTSPPullSettings <p>输入的RTSP_PULL配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRTSPPullSettings(const DescribeInputRTSPPullSettings& _rTSPPullSettings);

                    /**
                     * 判断参数 RTSPPullSettings 是否已赋值
                     * @return RTSPPullSettings 是否已赋值
                     * 
                     */
                    bool RTSPPullSettingsHasBeenSet() const;

                    /**
                     * 获取<p>输入的HLS_PULL配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HLSPullSettings <p>输入的HLS_PULL配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribeInputHLSPullSettings GetHLSPullSettings() const;

                    /**
                     * 设置<p>输入的HLS_PULL配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hLSPullSettings <p>输入的HLS_PULL配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHLSPullSettings(const DescribeInputHLSPullSettings& _hLSPullSettings);

                    /**
                     * 判断参数 HLSPullSettings 是否已赋值
                     * @return HLSPullSettings 是否已赋值
                     * 
                     */
                    bool HLSPullSettingsHasBeenSet() const;

                    /**
                     * 获取<p>延播平滑吐流配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ResilientStream <p>延播平滑吐流配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ResilientStreamConf GetResilientStream() const;

                    /**
                     * 设置<p>延播平滑吐流配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _resilientStream <p>延播平滑吐流配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetResilientStream(const ResilientStreamConf& _resilientStream);

                    /**
                     * 判断参数 ResilientStream 是否已赋值
                     * @return ResilientStream 是否已赋值
                     * 
                     */
                    bool ResilientStreamHasBeenSet() const;

                    /**
                     * 获取<p>绑定的输入安全组 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SecurityGroupIds <p>绑定的输入安全组 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetSecurityGroupIds() const;

                    /**
                     * 设置<p>绑定的输入安全组 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _securityGroupIds <p>绑定的输入安全组 ID。</p>
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
                     * 获取<p>可用区配置，开启容灾情况下最多有两个，顺序和pipeline 0、1对应，否则最多只有一个可用区。</p>
                     * @return Zones <p>可用区配置，开启容灾情况下最多有两个，顺序和pipeline 0、1对应，否则最多只有一个可用区。</p>
                     * 
                     */
                    std::vector<std::string> GetZones() const;

                    /**
                     * 设置<p>可用区配置，开启容灾情况下最多有两个，顺序和pipeline 0、1对应，否则最多只有一个可用区。</p>
                     * @param _zones <p>可用区配置，开启容灾情况下最多有两个，顺序和pipeline 0、1对应，否则最多只有一个可用区。</p>
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
                     * 获取<p>输入的RIST配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RISTSettings <p>输入的RIST配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DescribeInputRISTSettings GetRISTSettings() const;

                    /**
                     * 设置<p>输入的RIST配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _rISTSettings <p>输入的RIST配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRISTSettings(const DescribeInputRISTSettings& _rISTSettings);

                    /**
                     * 判断参数 RISTSettings 是否已赋值
                     * @return RISTSettings 是否已赋值
                     * 
                     */
                    bool RISTSettingsHasBeenSet() const;

                    /**
                     * 获取<p>输入模块配置相关的URL信息，包含提供的推流地址，或者配置的第三方源流地址</p>
                     * @return StreamUrls <p>输入模块配置相关的URL信息，包含提供的推流地址，或者配置的第三方源流地址</p>
                     * 
                     */
                    std::vector<StreamUrlDetail> GetStreamUrls() const;

                    /**
                     * 设置<p>输入模块配置相关的URL信息，包含提供的推流地址，或者配置的第三方源流地址</p>
                     * @param _streamUrls <p>输入模块配置相关的URL信息，包含提供的推流地址，或者配置的第三方源流地址</p>
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
                     * <p>输入Id。</p>
                     */
                    std::string m_inputId;
                    bool m_inputIdHasBeenSet;

                    /**
                     * <p>输入名称。</p>
                     */
                    std::string m_inputName;
                    bool m_inputNameHasBeenSet;

                    /**
                     * <p>输入描述。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>输入协议。</p>
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * <p>输入地址列表。</p>
                     */
                    std::vector<InputAddress> m_inputAddressList;
                    bool m_inputAddressListHasBeenSet;

                    /**
                     * <p>输入IP白名单列表。</p>
                     */
                    std::vector<std::string> m_allowIpList;
                    bool m_allowIpListHasBeenSet;

                    /**
                     * <p>输入的SRT配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeInputSRTSettings m_sRTSettings;
                    bool m_sRTSettingsHasBeenSet;

                    /**
                     * <p>输入的RTP配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeInputRTPSettings m_rTPSettings;
                    bool m_rTPSettingsHasBeenSet;

                    /**
                     * <p>输入的地区。</p>
                     */
                    std::string m_inputRegion;
                    bool m_inputRegionHasBeenSet;

                    /**
                     * <p>输入的RTMP配置信息。</p>
                     */
                    DescribeInputRTMPSettings m_rTMPSettings;
                    bool m_rTMPSettingsHasBeenSet;

                    /**
                     * <p>输入的主备开关。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * <p>输入的RTMP_PULL配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeInputRTMPPullSettings m_rTMPPullSettings;
                    bool m_rTMPPullSettingsHasBeenSet;

                    /**
                     * <p>输入的RTSP_PULL配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeInputRTSPPullSettings m_rTSPPullSettings;
                    bool m_rTSPPullSettingsHasBeenSet;

                    /**
                     * <p>输入的HLS_PULL配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeInputHLSPullSettings m_hLSPullSettings;
                    bool m_hLSPullSettingsHasBeenSet;

                    /**
                     * <p>延播平滑吐流配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ResilientStreamConf m_resilientStream;
                    bool m_resilientStreamHasBeenSet;

                    /**
                     * <p>绑定的输入安全组 ID。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_securityGroupIds;
                    bool m_securityGroupIdsHasBeenSet;

                    /**
                     * <p>可用区配置，开启容灾情况下最多有两个，顺序和pipeline 0、1对应，否则最多只有一个可用区。</p>
                     */
                    std::vector<std::string> m_zones;
                    bool m_zonesHasBeenSet;

                    /**
                     * <p>输入的RIST配置信息。</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeInputRISTSettings m_rISTSettings;
                    bool m_rISTSettingsHasBeenSet;

                    /**
                     * <p>输入模块配置相关的URL信息，包含提供的推流地址，或者配置的第三方源流地址</p>
                     */
                    std::vector<StreamUrlDetail> m_streamUrls;
                    bool m_streamUrlsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEINPUT_H_
