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

#ifndef TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEDDOSPOLICYCASEREQUEST_H_
#define TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEDDOSPOLICYCASEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dayu
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * CreateDDoSPolicyCase请求参数结构体
                */
                class CreateDDoSPolicyCaseRequest : public AbstractModel
                {
                public:
                    CreateDDoSPolicyCaseRequest();
                    ~CreateDDoSPolicyCaseRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * @return Business 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * 
                     */
                    std::string GetBusiness() const;

                    /**
                     * 设置大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * @param _business 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     * 
                     */
                    void SetBusiness(const std::string& _business);

                    /**
                     * 判断参数 Business 是否已赋值
                     * @return Business 是否已赋值
                     * 
                     */
                    bool BusinessHasBeenSet() const;

                    /**
                     * 获取策略场景名，字符串长度小于64
                     * @return CaseName 策略场景名，字符串长度小于64
                     * 
                     */
                    std::string GetCaseName() const;

                    /**
                     * 设置策略场景名，字符串长度小于64
                     * @param _caseName 策略场景名，字符串长度小于64
                     * 
                     */
                    void SetCaseName(const std::string& _caseName);

                    /**
                     * 判断参数 CaseName 是否已赋值
                     * @return CaseName 是否已赋值
                     * 
                     */
                    bool CaseNameHasBeenSet() const;

                    /**
                     * 获取开发平台，取值[PC（PC客户端）， MOBILE（移动端）， TV（电视端）， SERVER（主机）]
                     * @return PlatformTypes 开发平台，取值[PC（PC客户端）， MOBILE（移动端）， TV（电视端）， SERVER（主机）]
                     * 
                     */
                    std::vector<std::string> GetPlatformTypes() const;

                    /**
                     * 设置开发平台，取值[PC（PC客户端）， MOBILE（移动端）， TV（电视端）， SERVER（主机）]
                     * @param _platformTypes 开发平台，取值[PC（PC客户端）， MOBILE（移动端）， TV（电视端）， SERVER（主机）]
                     * 
                     */
                    void SetPlatformTypes(const std::vector<std::string>& _platformTypes);

                    /**
                     * 判断参数 PlatformTypes 是否已赋值
                     * @return PlatformTypes 是否已赋值
                     * 
                     */
                    bool PlatformTypesHasBeenSet() const;

                    /**
                     * 获取细分品类，取值[WEB（网站）， GAME（游戏）， APP（应用）， OTHER（其他）]
                     * @return AppType 细分品类，取值[WEB（网站）， GAME（游戏）， APP（应用）， OTHER（其他）]
                     * 
                     */
                    std::string GetAppType() const;

                    /**
                     * 设置细分品类，取值[WEB（网站）， GAME（游戏）， APP（应用）， OTHER（其他）]
                     * @param _appType 细分品类，取值[WEB（网站）， GAME（游戏）， APP（应用）， OTHER（其他）]
                     * 
                     */
                    void SetAppType(const std::string& _appType);

                    /**
                     * 判断参数 AppType 是否已赋值
                     * @return AppType 是否已赋值
                     * 
                     */
                    bool AppTypeHasBeenSet() const;

                    /**
                     * 获取应用协议，取值[tcp（TCP协议），udp（UDP协议），icmp（ICMP协议），all（其他协议）]
                     * @return AppProtocols 应用协议，取值[tcp（TCP协议），udp（UDP协议），icmp（ICMP协议），all（其他协议）]
                     * 
                     */
                    std::vector<std::string> GetAppProtocols() const;

                    /**
                     * 设置应用协议，取值[tcp（TCP协议），udp（UDP协议），icmp（ICMP协议），all（其他协议）]
                     * @param _appProtocols 应用协议，取值[tcp（TCP协议），udp（UDP协议），icmp（ICMP协议），all（其他协议）]
                     * 
                     */
                    void SetAppProtocols(const std::vector<std::string>& _appProtocols);

                    /**
                     * 判断参数 AppProtocols 是否已赋值
                     * @return AppProtocols 是否已赋值
                     * 
                     */
                    bool AppProtocolsHasBeenSet() const;

                    /**
                     * 获取TCP业务起始端口，取值(0, 65535]
                     * @return TcpSportStart TCP业务起始端口，取值(0, 65535]
                     * 
                     */
                    std::string GetTcpSportStart() const;

                    /**
                     * 设置TCP业务起始端口，取值(0, 65535]
                     * @param _tcpSportStart TCP业务起始端口，取值(0, 65535]
                     * 
                     */
                    void SetTcpSportStart(const std::string& _tcpSportStart);

                    /**
                     * 判断参数 TcpSportStart 是否已赋值
                     * @return TcpSportStart 是否已赋值
                     * 
                     */
                    bool TcpSportStartHasBeenSet() const;

                    /**
                     * 获取TCP业务结束端口，取值(0, 65535]，必须大于等于TCP业务起始端口
                     * @return TcpSportEnd TCP业务结束端口，取值(0, 65535]，必须大于等于TCP业务起始端口
                     * 
                     */
                    std::string GetTcpSportEnd() const;

                    /**
                     * 设置TCP业务结束端口，取值(0, 65535]，必须大于等于TCP业务起始端口
                     * @param _tcpSportEnd TCP业务结束端口，取值(0, 65535]，必须大于等于TCP业务起始端口
                     * 
                     */
                    void SetTcpSportEnd(const std::string& _tcpSportEnd);

                    /**
                     * 判断参数 TcpSportEnd 是否已赋值
                     * @return TcpSportEnd 是否已赋值
                     * 
                     */
                    bool TcpSportEndHasBeenSet() const;

                    /**
                     * 获取UDP业务起始端口，取值范围(0, 65535]
                     * @return UdpSportStart UDP业务起始端口，取值范围(0, 65535]
                     * 
                     */
                    std::string GetUdpSportStart() const;

                    /**
                     * 设置UDP业务起始端口，取值范围(0, 65535]
                     * @param _udpSportStart UDP业务起始端口，取值范围(0, 65535]
                     * 
                     */
                    void SetUdpSportStart(const std::string& _udpSportStart);

                    /**
                     * 判断参数 UdpSportStart 是否已赋值
                     * @return UdpSportStart 是否已赋值
                     * 
                     */
                    bool UdpSportStartHasBeenSet() const;

                    /**
                     * 获取UDP业务结束端口，取值范围(0, 65535)，必须大于等于UDP业务起始端口
                     * @return UdpSportEnd UDP业务结束端口，取值范围(0, 65535)，必须大于等于UDP业务起始端口
                     * 
                     */
                    std::string GetUdpSportEnd() const;

                    /**
                     * 设置UDP业务结束端口，取值范围(0, 65535)，必须大于等于UDP业务起始端口
                     * @param _udpSportEnd UDP业务结束端口，取值范围(0, 65535)，必须大于等于UDP业务起始端口
                     * 
                     */
                    void SetUdpSportEnd(const std::string& _udpSportEnd);

                    /**
                     * 判断参数 UdpSportEnd 是否已赋值
                     * @return UdpSportEnd 是否已赋值
                     * 
                     */
                    bool UdpSportEndHasBeenSet() const;

                    /**
                     * 获取是否有海外客户，取值[no（没有）, yes（有）]
                     * @return HasAbroad 是否有海外客户，取值[no（没有）, yes（有）]
                     * 
                     */
                    std::string GetHasAbroad() const;

                    /**
                     * 设置是否有海外客户，取值[no（没有）, yes（有）]
                     * @param _hasAbroad 是否有海外客户，取值[no（没有）, yes（有）]
                     * 
                     */
                    void SetHasAbroad(const std::string& _hasAbroad);

                    /**
                     * 判断参数 HasAbroad 是否已赋值
                     * @return HasAbroad 是否已赋值
                     * 
                     */
                    bool HasAbroadHasBeenSet() const;

                    /**
                     * 获取是否会主动对外发起TCP请求，取值[no（不会）, yes（会）]
                     * @return HasInitiateTcp 是否会主动对外发起TCP请求，取值[no（不会）, yes（会）]
                     * 
                     */
                    std::string GetHasInitiateTcp() const;

                    /**
                     * 设置是否会主动对外发起TCP请求，取值[no（不会）, yes（会）]
                     * @param _hasInitiateTcp 是否会主动对外发起TCP请求，取值[no（不会）, yes（会）]
                     * 
                     */
                    void SetHasInitiateTcp(const std::string& _hasInitiateTcp);

                    /**
                     * 判断参数 HasInitiateTcp 是否已赋值
                     * @return HasInitiateTcp 是否已赋值
                     * 
                     */
                    bool HasInitiateTcpHasBeenSet() const;

                    /**
                     * 获取是否会主动对外发起UDP业务请求，取值[no（不会）, yes（会）]
                     * @return HasInitiateUdp 是否会主动对外发起UDP业务请求，取值[no（不会）, yes（会）]
                     * 
                     */
                    std::string GetHasInitiateUdp() const;

                    /**
                     * 设置是否会主动对外发起UDP业务请求，取值[no（不会）, yes（会）]
                     * @param _hasInitiateUdp 是否会主动对外发起UDP业务请求，取值[no（不会）, yes（会）]
                     * 
                     */
                    void SetHasInitiateUdp(const std::string& _hasInitiateUdp);

                    /**
                     * 判断参数 HasInitiateUdp 是否已赋值
                     * @return HasInitiateUdp 是否已赋值
                     * 
                     */
                    bool HasInitiateUdpHasBeenSet() const;

                    /**
                     * 获取主动发起TCP请求的端口，取值范围(0, 65535]
                     * @return PeerTcpPort 主动发起TCP请求的端口，取值范围(0, 65535]
                     * 
                     */
                    std::string GetPeerTcpPort() const;

                    /**
                     * 设置主动发起TCP请求的端口，取值范围(0, 65535]
                     * @param _peerTcpPort 主动发起TCP请求的端口，取值范围(0, 65535]
                     * 
                     */
                    void SetPeerTcpPort(const std::string& _peerTcpPort);

                    /**
                     * 判断参数 PeerTcpPort 是否已赋值
                     * @return PeerTcpPort 是否已赋值
                     * 
                     */
                    bool PeerTcpPortHasBeenSet() const;

                    /**
                     * 获取主动发起UDP请求的端口，取值范围(0, 65535]
                     * @return PeerUdpPort 主动发起UDP请求的端口，取值范围(0, 65535]
                     * 
                     */
                    std::string GetPeerUdpPort() const;

                    /**
                     * 设置主动发起UDP请求的端口，取值范围(0, 65535]
                     * @param _peerUdpPort 主动发起UDP请求的端口，取值范围(0, 65535]
                     * 
                     */
                    void SetPeerUdpPort(const std::string& _peerUdpPort);

                    /**
                     * 判断参数 PeerUdpPort 是否已赋值
                     * @return PeerUdpPort 是否已赋值
                     * 
                     */
                    bool PeerUdpPortHasBeenSet() const;

                    /**
                     * 获取TCP载荷的固定特征码，字符串长度小于512
                     * @return TcpFootprint TCP载荷的固定特征码，字符串长度小于512
                     * 
                     */
                    std::string GetTcpFootprint() const;

                    /**
                     * 设置TCP载荷的固定特征码，字符串长度小于512
                     * @param _tcpFootprint TCP载荷的固定特征码，字符串长度小于512
                     * 
                     */
                    void SetTcpFootprint(const std::string& _tcpFootprint);

                    /**
                     * 判断参数 TcpFootprint 是否已赋值
                     * @return TcpFootprint 是否已赋值
                     * 
                     */
                    bool TcpFootprintHasBeenSet() const;

                    /**
                     * 获取UDP载荷的固定特征码，字符串长度小于512
                     * @return UdpFootprint UDP载荷的固定特征码，字符串长度小于512
                     * 
                     */
                    std::string GetUdpFootprint() const;

                    /**
                     * 设置UDP载荷的固定特征码，字符串长度小于512
                     * @param _udpFootprint UDP载荷的固定特征码，字符串长度小于512
                     * 
                     */
                    void SetUdpFootprint(const std::string& _udpFootprint);

                    /**
                     * 判断参数 UdpFootprint 是否已赋值
                     * @return UdpFootprint 是否已赋值
                     * 
                     */
                    bool UdpFootprintHasBeenSet() const;

                    /**
                     * 获取Web业务的API的URL
                     * @return WebApiUrl Web业务的API的URL
                     * 
                     */
                    std::vector<std::string> GetWebApiUrl() const;

                    /**
                     * 设置Web业务的API的URL
                     * @param _webApiUrl Web业务的API的URL
                     * 
                     */
                    void SetWebApiUrl(const std::vector<std::string>& _webApiUrl);

                    /**
                     * 判断参数 WebApiUrl 是否已赋值
                     * @return WebApiUrl 是否已赋值
                     * 
                     */
                    bool WebApiUrlHasBeenSet() const;

                    /**
                     * 获取TCP业务报文长度最小值，取值范围(0, 1500)
                     * @return MinTcpPackageLen TCP业务报文长度最小值，取值范围(0, 1500)
                     * 
                     */
                    std::string GetMinTcpPackageLen() const;

                    /**
                     * 设置TCP业务报文长度最小值，取值范围(0, 1500)
                     * @param _minTcpPackageLen TCP业务报文长度最小值，取值范围(0, 1500)
                     * 
                     */
                    void SetMinTcpPackageLen(const std::string& _minTcpPackageLen);

                    /**
                     * 判断参数 MinTcpPackageLen 是否已赋值
                     * @return MinTcpPackageLen 是否已赋值
                     * 
                     */
                    bool MinTcpPackageLenHasBeenSet() const;

                    /**
                     * 获取TCP业务报文长度最大值，取值范围(0, 1500)，必须大于等于TCP业务报文长度最小值
                     * @return MaxTcpPackageLen TCP业务报文长度最大值，取值范围(0, 1500)，必须大于等于TCP业务报文长度最小值
                     * 
                     */
                    std::string GetMaxTcpPackageLen() const;

                    /**
                     * 设置TCP业务报文长度最大值，取值范围(0, 1500)，必须大于等于TCP业务报文长度最小值
                     * @param _maxTcpPackageLen TCP业务报文长度最大值，取值范围(0, 1500)，必须大于等于TCP业务报文长度最小值
                     * 
                     */
                    void SetMaxTcpPackageLen(const std::string& _maxTcpPackageLen);

                    /**
                     * 判断参数 MaxTcpPackageLen 是否已赋值
                     * @return MaxTcpPackageLen 是否已赋值
                     * 
                     */
                    bool MaxTcpPackageLenHasBeenSet() const;

                    /**
                     * 获取UDP业务报文长度最小值，取值范围(0, 1500)
                     * @return MinUdpPackageLen UDP业务报文长度最小值，取值范围(0, 1500)
                     * 
                     */
                    std::string GetMinUdpPackageLen() const;

                    /**
                     * 设置UDP业务报文长度最小值，取值范围(0, 1500)
                     * @param _minUdpPackageLen UDP业务报文长度最小值，取值范围(0, 1500)
                     * 
                     */
                    void SetMinUdpPackageLen(const std::string& _minUdpPackageLen);

                    /**
                     * 判断参数 MinUdpPackageLen 是否已赋值
                     * @return MinUdpPackageLen 是否已赋值
                     * 
                     */
                    bool MinUdpPackageLenHasBeenSet() const;

                    /**
                     * 获取UDP业务报文长度最大值，取值范围(0, 1500)，必须大于等于UDP业务报文长度最小值
                     * @return MaxUdpPackageLen UDP业务报文长度最大值，取值范围(0, 1500)，必须大于等于UDP业务报文长度最小值
                     * 
                     */
                    std::string GetMaxUdpPackageLen() const;

                    /**
                     * 设置UDP业务报文长度最大值，取值范围(0, 1500)，必须大于等于UDP业务报文长度最小值
                     * @param _maxUdpPackageLen UDP业务报文长度最大值，取值范围(0, 1500)，必须大于等于UDP业务报文长度最小值
                     * 
                     */
                    void SetMaxUdpPackageLen(const std::string& _maxUdpPackageLen);

                    /**
                     * 判断参数 MaxUdpPackageLen 是否已赋值
                     * @return MaxUdpPackageLen 是否已赋值
                     * 
                     */
                    bool MaxUdpPackageLenHasBeenSet() const;

                    /**
                     * 获取是否有VPN业务，取值[no（没有）, yes（有）]
                     * @return HasVPN 是否有VPN业务，取值[no（没有）, yes（有）]
                     * 
                     */
                    std::string GetHasVPN() const;

                    /**
                     * 设置是否有VPN业务，取值[no（没有）, yes（有）]
                     * @param _hasVPN 是否有VPN业务，取值[no（没有）, yes（有）]
                     * 
                     */
                    void SetHasVPN(const std::string& _hasVPN);

                    /**
                     * 判断参数 HasVPN 是否已赋值
                     * @return HasVPN 是否已赋值
                     * 
                     */
                    bool HasVPNHasBeenSet() const;

                    /**
                     * 获取TCP业务端口列表，同时支持单个端口和端口段，字符串格式，例如：80,443,700-800,53,1000-3000
                     * @return TcpPortList TCP业务端口列表，同时支持单个端口和端口段，字符串格式，例如：80,443,700-800,53,1000-3000
                     * 
                     */
                    std::string GetTcpPortList() const;

                    /**
                     * 设置TCP业务端口列表，同时支持单个端口和端口段，字符串格式，例如：80,443,700-800,53,1000-3000
                     * @param _tcpPortList TCP业务端口列表，同时支持单个端口和端口段，字符串格式，例如：80,443,700-800,53,1000-3000
                     * 
                     */
                    void SetTcpPortList(const std::string& _tcpPortList);

                    /**
                     * 判断参数 TcpPortList 是否已赋值
                     * @return TcpPortList 是否已赋值
                     * 
                     */
                    bool TcpPortListHasBeenSet() const;

                    /**
                     * 获取UDP业务端口列表，同时支持单个端口和端口段，字符串格式，例如：80,443,700-800,53,1000-3000
                     * @return UdpPortList UDP业务端口列表，同时支持单个端口和端口段，字符串格式，例如：80,443,700-800,53,1000-3000
                     * 
                     */
                    std::string GetUdpPortList() const;

                    /**
                     * 设置UDP业务端口列表，同时支持单个端口和端口段，字符串格式，例如：80,443,700-800,53,1000-3000
                     * @param _udpPortList UDP业务端口列表，同时支持单个端口和端口段，字符串格式，例如：80,443,700-800,53,1000-3000
                     * 
                     */
                    void SetUdpPortList(const std::string& _udpPortList);

                    /**
                     * 判断参数 UdpPortList 是否已赋值
                     * @return UdpPortList 是否已赋值
                     * 
                     */
                    bool UdpPortListHasBeenSet() const;

                private:

                    /**
                     * 大禹子产品代号（bgpip表示高防IP；bgp表示独享包；bgp-multip表示共享包；net表示高防IP专业版）
                     */
                    std::string m_business;
                    bool m_businessHasBeenSet;

                    /**
                     * 策略场景名，字符串长度小于64
                     */
                    std::string m_caseName;
                    bool m_caseNameHasBeenSet;

                    /**
                     * 开发平台，取值[PC（PC客户端）， MOBILE（移动端）， TV（电视端）， SERVER（主机）]
                     */
                    std::vector<std::string> m_platformTypes;
                    bool m_platformTypesHasBeenSet;

                    /**
                     * 细分品类，取值[WEB（网站）， GAME（游戏）， APP（应用）， OTHER（其他）]
                     */
                    std::string m_appType;
                    bool m_appTypeHasBeenSet;

                    /**
                     * 应用协议，取值[tcp（TCP协议），udp（UDP协议），icmp（ICMP协议），all（其他协议）]
                     */
                    std::vector<std::string> m_appProtocols;
                    bool m_appProtocolsHasBeenSet;

                    /**
                     * TCP业务起始端口，取值(0, 65535]
                     */
                    std::string m_tcpSportStart;
                    bool m_tcpSportStartHasBeenSet;

                    /**
                     * TCP业务结束端口，取值(0, 65535]，必须大于等于TCP业务起始端口
                     */
                    std::string m_tcpSportEnd;
                    bool m_tcpSportEndHasBeenSet;

                    /**
                     * UDP业务起始端口，取值范围(0, 65535]
                     */
                    std::string m_udpSportStart;
                    bool m_udpSportStartHasBeenSet;

                    /**
                     * UDP业务结束端口，取值范围(0, 65535)，必须大于等于UDP业务起始端口
                     */
                    std::string m_udpSportEnd;
                    bool m_udpSportEndHasBeenSet;

                    /**
                     * 是否有海外客户，取值[no（没有）, yes（有）]
                     */
                    std::string m_hasAbroad;
                    bool m_hasAbroadHasBeenSet;

                    /**
                     * 是否会主动对外发起TCP请求，取值[no（不会）, yes（会）]
                     */
                    std::string m_hasInitiateTcp;
                    bool m_hasInitiateTcpHasBeenSet;

                    /**
                     * 是否会主动对外发起UDP业务请求，取值[no（不会）, yes（会）]
                     */
                    std::string m_hasInitiateUdp;
                    bool m_hasInitiateUdpHasBeenSet;

                    /**
                     * 主动发起TCP请求的端口，取值范围(0, 65535]
                     */
                    std::string m_peerTcpPort;
                    bool m_peerTcpPortHasBeenSet;

                    /**
                     * 主动发起UDP请求的端口，取值范围(0, 65535]
                     */
                    std::string m_peerUdpPort;
                    bool m_peerUdpPortHasBeenSet;

                    /**
                     * TCP载荷的固定特征码，字符串长度小于512
                     */
                    std::string m_tcpFootprint;
                    bool m_tcpFootprintHasBeenSet;

                    /**
                     * UDP载荷的固定特征码，字符串长度小于512
                     */
                    std::string m_udpFootprint;
                    bool m_udpFootprintHasBeenSet;

                    /**
                     * Web业务的API的URL
                     */
                    std::vector<std::string> m_webApiUrl;
                    bool m_webApiUrlHasBeenSet;

                    /**
                     * TCP业务报文长度最小值，取值范围(0, 1500)
                     */
                    std::string m_minTcpPackageLen;
                    bool m_minTcpPackageLenHasBeenSet;

                    /**
                     * TCP业务报文长度最大值，取值范围(0, 1500)，必须大于等于TCP业务报文长度最小值
                     */
                    std::string m_maxTcpPackageLen;
                    bool m_maxTcpPackageLenHasBeenSet;

                    /**
                     * UDP业务报文长度最小值，取值范围(0, 1500)
                     */
                    std::string m_minUdpPackageLen;
                    bool m_minUdpPackageLenHasBeenSet;

                    /**
                     * UDP业务报文长度最大值，取值范围(0, 1500)，必须大于等于UDP业务报文长度最小值
                     */
                    std::string m_maxUdpPackageLen;
                    bool m_maxUdpPackageLenHasBeenSet;

                    /**
                     * 是否有VPN业务，取值[no（没有）, yes（有）]
                     */
                    std::string m_hasVPN;
                    bool m_hasVPNHasBeenSet;

                    /**
                     * TCP业务端口列表，同时支持单个端口和端口段，字符串格式，例如：80,443,700-800,53,1000-3000
                     */
                    std::string m_tcpPortList;
                    bool m_tcpPortListHasBeenSet;

                    /**
                     * UDP业务端口列表，同时支持单个端口和端口段，字符串格式，例如：80,443,700-800,53,1000-3000
                     */
                    std::string m_udpPortList;
                    bool m_udpPortListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DAYU_V20180709_MODEL_CREATEDDOSPOLICYCASEREQUEST_H_
