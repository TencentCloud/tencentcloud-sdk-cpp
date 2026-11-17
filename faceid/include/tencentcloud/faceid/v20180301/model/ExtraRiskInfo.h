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

#ifndef TENCENTCLOUD_FACEID_V20180301_MODEL_EXTRARISKINFO_H_
#define TENCENTCLOUD_FACEID_V20180301_MODEL_EXTRARISKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Faceid
    {
        namespace V20180301
        {
            namespace Model
            {
                /**
                * ExtraRiskInfo
                */
                class ExtraRiskInfo : public AbstractModel
                {
                public:
                    ExtraRiskInfo();
                    ~ExtraRiskInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>客户业务域内稳定且唯一的人员标识，用于把同一人员的多次位置上报关联起来，判断是否存在异常位移。</p><p>入参限制：长度 ≤ 128 字符；不可含控制字符（ASCII &lt; 0x20 或 0x7F）；建议传脱敏标识，勿传明文身份证号/手机号</p>
                     * @return PersonId <p>客户业务域内稳定且唯一的人员标识，用于把同一人员的多次位置上报关联起来，判断是否存在异常位移。</p><p>入参限制：长度 ≤ 128 字符；不可含控制字符（ASCII &lt; 0x20 或 0x7F）；建议传脱敏标识，勿传明文身份证号/手机号</p>
                     * 
                     */
                    std::string GetPersonId() const;

                    /**
                     * 设置<p>客户业务域内稳定且唯一的人员标识，用于把同一人员的多次位置上报关联起来，判断是否存在异常位移。</p><p>入参限制：长度 ≤ 128 字符；不可含控制字符（ASCII &lt; 0x20 或 0x7F）；建议传脱敏标识，勿传明文身份证号/手机号</p>
                     * @param _personId <p>客户业务域内稳定且唯一的人员标识，用于把同一人员的多次位置上报关联起来，判断是否存在异常位移。</p><p>入参限制：长度 ≤ 128 字符；不可含控制字符（ASCII &lt; 0x20 或 0x7F）；建议传脱敏标识，勿传明文身份证号/手机号</p>
                     * 
                     */
                    void SetPersonId(const std::string& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                    /**
                     * 获取<p>设备采集时的纬度，WGS84 十进制度    </p><p>入参限制：与 Longitude 必须成对出现；取值 [-90, 90]；须为有效数字，不接受 NaN/Inf；JSON 中按字符串传（如 &quot;22.5431&quot;）</p>
                     * @return Latitude <p>设备采集时的纬度，WGS84 十进制度    </p><p>入参限制：与 Longitude 必须成对出现；取值 [-90, 90]；须为有效数字，不接受 NaN/Inf；JSON 中按字符串传（如 &quot;22.5431&quot;）</p>
                     * 
                     */
                    std::string GetLatitude() const;

                    /**
                     * 设置<p>设备采集时的纬度，WGS84 十进制度    </p><p>入参限制：与 Longitude 必须成对出现；取值 [-90, 90]；须为有效数字，不接受 NaN/Inf；JSON 中按字符串传（如 &quot;22.5431&quot;）</p>
                     * @param _latitude <p>设备采集时的纬度，WGS84 十进制度    </p><p>入参限制：与 Longitude 必须成对出现；取值 [-90, 90]；须为有效数字，不接受 NaN/Inf；JSON 中按字符串传（如 &quot;22.5431&quot;）</p>
                     * 
                     */
                    void SetLatitude(const std::string& _latitude);

                    /**
                     * 判断参数 Latitude 是否已赋值
                     * @return Latitude 是否已赋值
                     * 
                     */
                    bool LatitudeHasBeenSet() const;

                    /**
                     * 获取<p>设备采集时的经度，WGS84 十进制度    </p><p>入参限制：与 Latitude 必须成对出现；取值 [-180, 180]；其余同上</p>
                     * @return Longitude <p>设备采集时的经度，WGS84 十进制度    </p><p>入参限制：与 Latitude 必须成对出现；取值 [-180, 180]；其余同上</p>
                     * 
                     */
                    std::string GetLongitude() const;

                    /**
                     * 设置<p>设备采集时的经度，WGS84 十进制度    </p><p>入参限制：与 Latitude 必须成对出现；取值 [-180, 180]；其余同上</p>
                     * @param _longitude <p>设备采集时的经度，WGS84 十进制度    </p><p>入参限制：与 Latitude 必须成对出现；取值 [-180, 180]；其余同上</p>
                     * 
                     */
                    void SetLongitude(const std::string& _longitude);

                    /**
                     * 判断参数 Longitude 是否已赋值
                     * @return Longitude 是否已赋值
                     * 
                     */
                    bool LongitudeHasBeenSet() const;

                    /**
                     * 获取<p>设备采集时的公网出口 IP    </p><p>入参限制：长度 ≤ 64；须为可解析的 IPv4/IPv6；私网、回环、链路本地、组播地址视为不可定位</p>
                     * @return Ip <p>设备采集时的公网出口 IP    </p><p>入参限制：长度 ≤ 64；须为可解析的 IPv4/IPv6；私网、回环、链路本地、组播地址视为不可定位</p>
                     * 
                     */
                    std::string GetIp() const;

                    /**
                     * 设置<p>设备采集时的公网出口 IP    </p><p>入参限制：长度 ≤ 64；须为可解析的 IPv4/IPv6；私网、回环、链路本地、组播地址视为不可定位</p>
                     * @param _ip <p>设备采集时的公网出口 IP    </p><p>入参限制：长度 ≤ 64；须为可解析的 IPv4/IPv6；私网、回环、链路本地、组播地址视为不可定位</p>
                     * 
                     */
                    void SetIp(const std::string& _ip);

                    /**
                     * 判断参数 Ip 是否已赋值
                     * @return Ip 是否已赋值
                     * 
                     */
                    bool IpHasBeenSet() const;

                private:

                    /**
                     * <p>客户业务域内稳定且唯一的人员标识，用于把同一人员的多次位置上报关联起来，判断是否存在异常位移。</p><p>入参限制：长度 ≤ 128 字符；不可含控制字符（ASCII &lt; 0x20 或 0x7F）；建议传脱敏标识，勿传明文身份证号/手机号</p>
                     */
                    std::string m_personId;
                    bool m_personIdHasBeenSet;

                    /**
                     * <p>设备采集时的纬度，WGS84 十进制度    </p><p>入参限制：与 Longitude 必须成对出现；取值 [-90, 90]；须为有效数字，不接受 NaN/Inf；JSON 中按字符串传（如 &quot;22.5431&quot;）</p>
                     */
                    std::string m_latitude;
                    bool m_latitudeHasBeenSet;

                    /**
                     * <p>设备采集时的经度，WGS84 十进制度    </p><p>入参限制：与 Latitude 必须成对出现；取值 [-180, 180]；其余同上</p>
                     */
                    std::string m_longitude;
                    bool m_longitudeHasBeenSet;

                    /**
                     * <p>设备采集时的公网出口 IP    </p><p>入参限制：长度 ≤ 64；须为可解析的 IPv4/IPv6；私网、回环、链路本地、组播地址视为不可定位</p>
                     */
                    std::string m_ip;
                    bool m_ipHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_FACEID_V20180301_MODEL_EXTRARISKINFO_H_
