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

#ifndef TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DDOSSPEEDLIMITCONFIG_H_
#define TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DDOSSPEEDLIMITCONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/antiddos/v20200309/model/SpeedValue.h>
#include <tencentcloud/antiddos/v20200309/model/PortSegment.h>


namespace TencentCloud
{
    namespace Antiddos
    {
        namespace V20200309
        {
            namespace Model
            {
                /**
                * DDoS访问限速配置
                */
                class DDoSSpeedLimitConfig : public AbstractModel
                {
                public:
                    DDoSSpeedLimitConfig();
                    ~DDoSSpeedLimitConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取限速模式，取值[
1(基于源IP限速)
2(基于目的端口限速)
]
                     * @return Mode 限速模式，取值[
1(基于源IP限速)
2(基于目的端口限速)
]
                     * 
                     */
                    uint64_t GetMode() const;

                    /**
                     * 设置限速模式，取值[
1(基于源IP限速)
2(基于目的端口限速)
]
                     * @param _mode 限速模式，取值[
1(基于源IP限速)
2(基于目的端口限速)
]
                     * 
                     */
                    void SetMode(const uint64_t& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取限速值，每种类型的限速值最多支持1个；该字段数组至少有一种限速值
                     * @return SpeedValues 限速值，每种类型的限速值最多支持1个；该字段数组至少有一种限速值
                     * 
                     */
                    std::vector<SpeedValue> GetSpeedValues() const;

                    /**
                     * 设置限速值，每种类型的限速值最多支持1个；该字段数组至少有一种限速值
                     * @param _speedValues 限速值，每种类型的限速值最多支持1个；该字段数组至少有一种限速值
                     * 
                     */
                    void SetSpeedValues(const std::vector<SpeedValue>& _speedValues);

                    /**
                     * 判断参数 SpeedValues 是否已赋值
                     * @return SpeedValues 是否已赋值
                     * 
                     */
                    bool SpeedValuesHasBeenSet() const;

                    /**
                     * 获取此字段已弃用，请填写新字段DstPortList。
                     * @return DstPortScopes 此字段已弃用，请填写新字段DstPortList。
                     * 
                     */
                    std::vector<PortSegment> GetDstPortScopes() const;

                    /**
                     * 设置此字段已弃用，请填写新字段DstPortList。
                     * @param _dstPortScopes 此字段已弃用，请填写新字段DstPortList。
                     * 
                     */
                    void SetDstPortScopes(const std::vector<PortSegment>& _dstPortScopes);

                    /**
                     * 判断参数 DstPortScopes 是否已赋值
                     * @return DstPortScopes 是否已赋值
                     * 
                     */
                    bool DstPortScopesHasBeenSet() const;

                    /**
                     * 获取配置ID，配置添加成功后生成；添加新限制配置时不用填写此字段，修改或删除限速配置时需要填写配置ID
                     * @return Id 配置ID，配置添加成功后生成；添加新限制配置时不用填写此字段，修改或删除限速配置时需要填写配置ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置配置ID，配置添加成功后生成；添加新限制配置时不用填写此字段，修改或删除限速配置时需要填写配置ID
                     * @param _id 配置ID，配置添加成功后生成；添加新限制配置时不用填写此字段，修改或删除限速配置时需要填写配置ID
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
                     * 获取IP protocol numbers, 取值[
ALL(所有协议)
TCP(tcp协议)
UDP(udp协议)
SMP(smp协议)
1;2-100(自定义协议号范围,最多8个)
]
注意：当自定义协议号范围时，只能填写协议号，多个范围;分隔；当填写ALL时不能再填写其他协议或协议号。
                     * @return ProtocolList IP protocol numbers, 取值[
ALL(所有协议)
TCP(tcp协议)
UDP(udp协议)
SMP(smp协议)
1;2-100(自定义协议号范围,最多8个)
]
注意：当自定义协议号范围时，只能填写协议号，多个范围;分隔；当填写ALL时不能再填写其他协议或协议号。
                     * 
                     */
                    std::string GetProtocolList() const;

                    /**
                     * 设置IP protocol numbers, 取值[
ALL(所有协议)
TCP(tcp协议)
UDP(udp协议)
SMP(smp协议)
1;2-100(自定义协议号范围,最多8个)
]
注意：当自定义协议号范围时，只能填写协议号，多个范围;分隔；当填写ALL时不能再填写其他协议或协议号。
                     * @param _protocolList IP protocol numbers, 取值[
ALL(所有协议)
TCP(tcp协议)
UDP(udp协议)
SMP(smp协议)
1;2-100(自定义协议号范围,最多8个)
]
注意：当自定义协议号范围时，只能填写协议号，多个范围;分隔；当填写ALL时不能再填写其他协议或协议号。
                     * 
                     */
                    void SetProtocolList(const std::string& _protocolList);

                    /**
                     * 判断参数 ProtocolList 是否已赋值
                     * @return ProtocolList 是否已赋值
                     * 
                     */
                    bool ProtocolListHasBeenSet() const;

                    /**
                     * 获取端口范围列表，最多8个，多个;分隔，范围表示用-；此端口范围必须填写；填写样式1:0-65535，样式2:80;443;1000-2000
                     * @return DstPortList 端口范围列表，最多8个，多个;分隔，范围表示用-；此端口范围必须填写；填写样式1:0-65535，样式2:80;443;1000-2000
                     * 
                     */
                    std::string GetDstPortList() const;

                    /**
                     * 设置端口范围列表，最多8个，多个;分隔，范围表示用-；此端口范围必须填写；填写样式1:0-65535，样式2:80;443;1000-2000
                     * @param _dstPortList 端口范围列表，最多8个，多个;分隔，范围表示用-；此端口范围必须填写；填写样式1:0-65535，样式2:80;443;1000-2000
                     * 
                     */
                    void SetDstPortList(const std::string& _dstPortList);

                    /**
                     * 判断参数 DstPortList 是否已赋值
                     * @return DstPortList 是否已赋值
                     * 
                     */
                    bool DstPortListHasBeenSet() const;

                private:

                    /**
                     * 限速模式，取值[
1(基于源IP限速)
2(基于目的端口限速)
]
                     */
                    uint64_t m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 限速值，每种类型的限速值最多支持1个；该字段数组至少有一种限速值
                     */
                    std::vector<SpeedValue> m_speedValues;
                    bool m_speedValuesHasBeenSet;

                    /**
                     * 此字段已弃用，请填写新字段DstPortList。
                     */
                    std::vector<PortSegment> m_dstPortScopes;
                    bool m_dstPortScopesHasBeenSet;

                    /**
                     * 配置ID，配置添加成功后生成；添加新限制配置时不用填写此字段，修改或删除限速配置时需要填写配置ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * IP protocol numbers, 取值[
ALL(所有协议)
TCP(tcp协议)
UDP(udp协议)
SMP(smp协议)
1;2-100(自定义协议号范围,最多8个)
]
注意：当自定义协议号范围时，只能填写协议号，多个范围;分隔；当填写ALL时不能再填写其他协议或协议号。
                     */
                    std::string m_protocolList;
                    bool m_protocolListHasBeenSet;

                    /**
                     * 端口范围列表，最多8个，多个;分隔，范围表示用-；此端口范围必须填写；填写样式1:0-65535，样式2:80;443;1000-2000
                     */
                    std::string m_dstPortList;
                    bool m_dstPortListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ANTIDDOS_V20200309_MODEL_DDOSSPEEDLIMITCONFIG_H_
