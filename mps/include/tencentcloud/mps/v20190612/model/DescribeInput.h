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
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Description 输入描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置输入描述。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Description 输入描述。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取输入协议。
                     * @return Protocol 输入协议。
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置输入协议。
                     * @param Protocol 输入协议。
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取输入地址列表。
                     * @return InputAddressList 输入地址列表。
                     */
                    std::vector<InputAddress> GetInputAddressList() const;

                    /**
                     * 设置输入地址列表。
                     * @param InputAddressList 输入地址列表。
                     */
                    void SetInputAddressList(const std::vector<InputAddress>& _inputAddressList);

                    /**
                     * 判断参数 InputAddressList 是否已赋值
                     * @return InputAddressList 是否已赋值
                     */
                    bool InputAddressListHasBeenSet() const;

                    /**
                     * 获取输入IP白名单列表。
                     * @return AllowIpList 输入IP白名单列表。
                     */
                    std::vector<std::string> GetAllowIpList() const;

                    /**
                     * 设置输入IP白名单列表。
                     * @param AllowIpList 输入IP白名单列表。
                     */
                    void SetAllowIpList(const std::vector<std::string>& _allowIpList);

                    /**
                     * 判断参数 AllowIpList 是否已赋值
                     * @return AllowIpList 是否已赋值
                     */
                    bool AllowIpListHasBeenSet() const;

                    /**
                     * 获取输入的SRT配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SRTSettings 输入的SRT配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeInputSRTSettings GetSRTSettings() const;

                    /**
                     * 设置输入的SRT配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SRTSettings 输入的SRT配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSRTSettings(const DescribeInputSRTSettings& _sRTSettings);

                    /**
                     * 判断参数 SRTSettings 是否已赋值
                     * @return SRTSettings 是否已赋值
                     */
                    bool SRTSettingsHasBeenSet() const;

                    /**
                     * 获取输入的RTP配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RTPSettings 输入的RTP配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeInputRTPSettings GetRTPSettings() const;

                    /**
                     * 设置输入的RTP配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RTPSettings 输入的RTP配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRTPSettings(const DescribeInputRTPSettings& _rTPSettings);

                    /**
                     * 判断参数 RTPSettings 是否已赋值
                     * @return RTPSettings 是否已赋值
                     */
                    bool RTPSettingsHasBeenSet() const;

                    /**
                     * 获取输入的地区。
                     * @return InputRegion 输入的地区。
                     */
                    std::string GetInputRegion() const;

                    /**
                     * 设置输入的地区。
                     * @param InputRegion 输入的地区。
                     */
                    void SetInputRegion(const std::string& _inputRegion);

                    /**
                     * 判断参数 InputRegion 是否已赋值
                     * @return InputRegion 是否已赋值
                     */
                    bool InputRegionHasBeenSet() const;

                    /**
                     * 获取输入的RTMP配置信息。
                     * @return RTMPSettings 输入的RTMP配置信息。
                     */
                    DescribeInputRTMPSettings GetRTMPSettings() const;

                    /**
                     * 设置输入的RTMP配置信息。
                     * @param RTMPSettings 输入的RTMP配置信息。
                     */
                    void SetRTMPSettings(const DescribeInputRTMPSettings& _rTMPSettings);

                    /**
                     * 判断参数 RTMPSettings 是否已赋值
                     * @return RTMPSettings 是否已赋值
                     */
                    bool RTMPSettingsHasBeenSet() const;

                    /**
                     * 获取输入的主备开关。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FailOver 输入的主备开关。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetFailOver() const;

                    /**
                     * 设置输入的主备开关。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param FailOver 输入的主备开关。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetFailOver(const std::string& _failOver);

                    /**
                     * 判断参数 FailOver 是否已赋值
                     * @return FailOver 是否已赋值
                     */
                    bool FailOverHasBeenSet() const;

                    /**
                     * 获取输入的RTMP_PULL配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RTMPPullSettings 输入的RTMP_PULL配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeInputRTMPPullSettings GetRTMPPullSettings() const;

                    /**
                     * 设置输入的RTMP_PULL配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RTMPPullSettings 输入的RTMP_PULL配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRTMPPullSettings(const DescribeInputRTMPPullSettings& _rTMPPullSettings);

                    /**
                     * 判断参数 RTMPPullSettings 是否已赋值
                     * @return RTMPPullSettings 是否已赋值
                     */
                    bool RTMPPullSettingsHasBeenSet() const;

                    /**
                     * 获取输入的RTSP_PULL配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return RTSPPullSettings 输入的RTSP_PULL配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeInputRTSPPullSettings GetRTSPPullSettings() const;

                    /**
                     * 设置输入的RTSP_PULL配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param RTSPPullSettings 输入的RTSP_PULL配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRTSPPullSettings(const DescribeInputRTSPPullSettings& _rTSPPullSettings);

                    /**
                     * 判断参数 RTSPPullSettings 是否已赋值
                     * @return RTSPPullSettings 是否已赋值
                     */
                    bool RTSPPullSettingsHasBeenSet() const;

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
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 输入协议。
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 输入地址列表。
                     */
                    std::vector<InputAddress> m_inputAddressList;
                    bool m_inputAddressListHasBeenSet;

                    /**
                     * 输入IP白名单列表。
                     */
                    std::vector<std::string> m_allowIpList;
                    bool m_allowIpListHasBeenSet;

                    /**
                     * 输入的SRT配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeInputSRTSettings m_sRTSettings;
                    bool m_sRTSettingsHasBeenSet;

                    /**
                     * 输入的RTP配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeInputRTPSettings m_rTPSettings;
                    bool m_rTPSettingsHasBeenSet;

                    /**
                     * 输入的地区。
                     */
                    std::string m_inputRegion;
                    bool m_inputRegionHasBeenSet;

                    /**
                     * 输入的RTMP配置信息。
                     */
                    DescribeInputRTMPSettings m_rTMPSettings;
                    bool m_rTMPSettingsHasBeenSet;

                    /**
                     * 输入的主备开关。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_failOver;
                    bool m_failOverHasBeenSet;

                    /**
                     * 输入的RTMP_PULL配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeInputRTMPPullSettings m_rTMPPullSettings;
                    bool m_rTMPPullSettingsHasBeenSet;

                    /**
                     * 输入的RTSP_PULL配置信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DescribeInputRTSPPullSettings m_rTSPPullSettings;
                    bool m_rTSPPullSettingsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBEINPUT_H_
