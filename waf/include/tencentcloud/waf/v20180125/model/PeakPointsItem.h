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

#ifndef TENCENTCLOUD_WAF_V20180125_MODEL_PEAKPOINTSITEM_H_
#define TENCENTCLOUD_WAF_V20180125_MODEL_PEAKPOINTSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Waf
    {
        namespace V20180125
        {
            namespace Model
            {
                /**
                * PeakPoints数组项
                */
                class PeakPointsItem : public AbstractModel
                {
                public:
                    PeakPointsItem();
                    ~PeakPointsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取秒级别时间戳
                     * @return Time 秒级别时间戳
                     * 
                     */
                    uint64_t GetTime() const;

                    /**
                     * 设置秒级别时间戳
                     * @param _time 秒级别时间戳
                     * 
                     */
                    void SetTime(const uint64_t& _time);

                    /**
                     * 判断参数 Time 是否已赋值
                     * @return Time 是否已赋值
                     * 
                     */
                    bool TimeHasBeenSet() const;

                    /**
                     * 获取QPS
                     * @return Access QPS
                     * 
                     */
                    uint64_t GetAccess() const;

                    /**
                     * 设置QPS
                     * @param _access QPS
                     * 
                     */
                    void SetAccess(const uint64_t& _access);

                    /**
                     * 判断参数 Access 是否已赋值
                     * @return Access 是否已赋值
                     * 
                     */
                    bool AccessHasBeenSet() const;

                    /**
                     * 获取上行带宽峰值，单位B
                     * @return Up 上行带宽峰值，单位B
                     * 
                     */
                    uint64_t GetUp() const;

                    /**
                     * 设置上行带宽峰值，单位B
                     * @param _up 上行带宽峰值，单位B
                     * 
                     */
                    void SetUp(const uint64_t& _up);

                    /**
                     * 判断参数 Up 是否已赋值
                     * @return Up 是否已赋值
                     * 
                     */
                    bool UpHasBeenSet() const;

                    /**
                     * 获取下行带宽峰值，单位B
                     * @return Down 下行带宽峰值，单位B
                     * 
                     */
                    uint64_t GetDown() const;

                    /**
                     * 设置下行带宽峰值，单位B
                     * @param _down 下行带宽峰值，单位B
                     * 
                     */
                    void SetDown(const uint64_t& _down);

                    /**
                     * 判断参数 Down 是否已赋值
                     * @return Down 是否已赋值
                     * 
                     */
                    bool DownHasBeenSet() const;

                    /**
                     * 获取Web攻击次数
                     * @return Attack Web攻击次数
                     * 
                     */
                    uint64_t GetAttack() const;

                    /**
                     * 设置Web攻击次数
                     * @param _attack Web攻击次数
                     * 
                     */
                    void SetAttack(const uint64_t& _attack);

                    /**
                     * 判断参数 Attack 是否已赋值
                     * @return Attack 是否已赋值
                     * 
                     */
                    bool AttackHasBeenSet() const;

                    /**
                     * 获取CC攻击次数
                     * @return Cc CC攻击次数
                     * 
                     */
                    uint64_t GetCc() const;

                    /**
                     * 设置CC攻击次数
                     * @param _cc CC攻击次数
                     * 
                     */
                    void SetCc(const uint64_t& _cc);

                    /**
                     * 判断参数 Cc 是否已赋值
                     * @return Cc 是否已赋值
                     * 
                     */
                    bool CcHasBeenSet() const;

                    /**
                     * 获取Bot qps
                     * @return BotAccess Bot qps
                     * 
                     */
                    uint64_t GetBotAccess() const;

                    /**
                     * 设置Bot qps
                     * @param _botAccess Bot qps
                     * 
                     */
                    void SetBotAccess(const uint64_t& _botAccess);

                    /**
                     * 判断参数 BotAccess 是否已赋值
                     * @return BotAccess 是否已赋值
                     * 
                     */
                    bool BotAccessHasBeenSet() const;

                    /**
                     * 获取WAF返回给客户端状态码5xx次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusServerError WAF返回给客户端状态码5xx次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStatusServerError() const;

                    /**
                     * 设置WAF返回给客户端状态码5xx次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusServerError WAF返回给客户端状态码5xx次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusServerError(const uint64_t& _statusServerError);

                    /**
                     * 判断参数 StatusServerError 是否已赋值
                     * @return StatusServerError 是否已赋值
                     * 
                     */
                    bool StatusServerErrorHasBeenSet() const;

                    /**
                     * 获取WAF返回给客户端状态码4xx次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusClientError WAF返回给客户端状态码4xx次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStatusClientError() const;

                    /**
                     * 设置WAF返回给客户端状态码4xx次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusClientError WAF返回给客户端状态码4xx次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusClientError(const uint64_t& _statusClientError);

                    /**
                     * 判断参数 StatusClientError 是否已赋值
                     * @return StatusClientError 是否已赋值
                     * 
                     */
                    bool StatusClientErrorHasBeenSet() const;

                    /**
                     * 获取WAF返回给客户端状态码302次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusRedirect WAF返回给客户端状态码302次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStatusRedirect() const;

                    /**
                     * 设置WAF返回给客户端状态码302次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusRedirect WAF返回给客户端状态码302次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusRedirect(const uint64_t& _statusRedirect);

                    /**
                     * 判断参数 StatusRedirect 是否已赋值
                     * @return StatusRedirect 是否已赋值
                     * 
                     */
                    bool StatusRedirectHasBeenSet() const;

                    /**
                     * 获取WAF返回给客户端状态码202次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StatusOk WAF返回给客户端状态码202次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetStatusOk() const;

                    /**
                     * 设置WAF返回给客户端状态码202次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _statusOk WAF返回给客户端状态码202次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatusOk(const uint64_t& _statusOk);

                    /**
                     * 判断参数 StatusOk 是否已赋值
                     * @return StatusOk 是否已赋值
                     * 
                     */
                    bool StatusOkHasBeenSet() const;

                    /**
                     * 获取源站返回给WAF状态码5xx次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpstreamServerError 源站返回给WAF状态码5xx次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUpstreamServerError() const;

                    /**
                     * 设置源站返回给WAF状态码5xx次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upstreamServerError 源站返回给WAF状态码5xx次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpstreamServerError(const uint64_t& _upstreamServerError);

                    /**
                     * 判断参数 UpstreamServerError 是否已赋值
                     * @return UpstreamServerError 是否已赋值
                     * 
                     */
                    bool UpstreamServerErrorHasBeenSet() const;

                    /**
                     * 获取源站返回给WAF状态码4xx次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpstreamClientError 源站返回给WAF状态码4xx次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUpstreamClientError() const;

                    /**
                     * 设置源站返回给WAF状态码4xx次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upstreamClientError 源站返回给WAF状态码4xx次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpstreamClientError(const uint64_t& _upstreamClientError);

                    /**
                     * 判断参数 UpstreamClientError 是否已赋值
                     * @return UpstreamClientError 是否已赋值
                     * 
                     */
                    bool UpstreamClientErrorHasBeenSet() const;

                    /**
                     * 获取源站返回给WAF状态码302次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return UpstreamRedirect 源站返回给WAF状态码302次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetUpstreamRedirect() const;

                    /**
                     * 设置源站返回给WAF状态码302次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _upstreamRedirect 源站返回给WAF状态码302次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUpstreamRedirect(const uint64_t& _upstreamRedirect);

                    /**
                     * 判断参数 UpstreamRedirect 是否已赋值
                     * @return UpstreamRedirect 是否已赋值
                     * 
                     */
                    bool UpstreamRedirectHasBeenSet() const;

                    /**
                     * 获取黑名单次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return BlackIP 黑名单次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetBlackIP() const;

                    /**
                     * 设置黑名单次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _blackIP 黑名单次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetBlackIP(const uint64_t& _blackIP);

                    /**
                     * 判断参数 BlackIP 是否已赋值
                     * @return BlackIP 是否已赋值
                     * 
                     */
                    bool BlackIPHasBeenSet() const;

                    /**
                     * 获取防篡改次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Tamper 防篡改次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTamper() const;

                    /**
                     * 设置防篡改次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _tamper 防篡改次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTamper(const uint64_t& _tamper);

                    /**
                     * 判断参数 Tamper 是否已赋值
                     * @return Tamper 是否已赋值
                     * 
                     */
                    bool TamperHasBeenSet() const;

                    /**
                     * 获取信息防泄露次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Leak 信息防泄露次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetLeak() const;

                    /**
                     * 设置信息防泄露次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _leak 信息防泄露次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetLeak(const uint64_t& _leak);

                    /**
                     * 判断参数 Leak 是否已赋值
                     * @return Leak 是否已赋值
                     * 
                     */
                    bool LeakHasBeenSet() const;

                    /**
                     * 获取访问控制 
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ACL 访问控制 
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetACL() const;

                    /**
                     * 设置访问控制 
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _aCL 访问控制 
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetACL(const uint64_t& _aCL);

                    /**
                     * 判断参数 ACL 是否已赋值
                     * @return ACL 是否已赋值
                     * 
                     */
                    bool ACLHasBeenSet() const;

                    /**
                     * 获取小程序 qps
注意：此字段可能返回 null，表示取不到有效值。
                     * @return WxAccess 小程序 qps
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetWxAccess() const;

                    /**
                     * 设置小程序 qps
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _wxAccess 小程序 qps
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetWxAccess(const uint64_t& _wxAccess);

                    /**
                     * 判断参数 WxAccess 是否已赋值
                     * @return WxAccess 是否已赋值
                     * 
                     */
                    bool WxAccessHasBeenSet() const;

                private:

                    /**
                     * 秒级别时间戳
                     */
                    uint64_t m_time;
                    bool m_timeHasBeenSet;

                    /**
                     * QPS
                     */
                    uint64_t m_access;
                    bool m_accessHasBeenSet;

                    /**
                     * 上行带宽峰值，单位B
                     */
                    uint64_t m_up;
                    bool m_upHasBeenSet;

                    /**
                     * 下行带宽峰值，单位B
                     */
                    uint64_t m_down;
                    bool m_downHasBeenSet;

                    /**
                     * Web攻击次数
                     */
                    uint64_t m_attack;
                    bool m_attackHasBeenSet;

                    /**
                     * CC攻击次数
                     */
                    uint64_t m_cc;
                    bool m_ccHasBeenSet;

                    /**
                     * Bot qps
                     */
                    uint64_t m_botAccess;
                    bool m_botAccessHasBeenSet;

                    /**
                     * WAF返回给客户端状态码5xx次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_statusServerError;
                    bool m_statusServerErrorHasBeenSet;

                    /**
                     * WAF返回给客户端状态码4xx次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_statusClientError;
                    bool m_statusClientErrorHasBeenSet;

                    /**
                     * WAF返回给客户端状态码302次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_statusRedirect;
                    bool m_statusRedirectHasBeenSet;

                    /**
                     * WAF返回给客户端状态码202次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_statusOk;
                    bool m_statusOkHasBeenSet;

                    /**
                     * 源站返回给WAF状态码5xx次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_upstreamServerError;
                    bool m_upstreamServerErrorHasBeenSet;

                    /**
                     * 源站返回给WAF状态码4xx次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_upstreamClientError;
                    bool m_upstreamClientErrorHasBeenSet;

                    /**
                     * 源站返回给WAF状态码302次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_upstreamRedirect;
                    bool m_upstreamRedirectHasBeenSet;

                    /**
                     * 黑名单次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_blackIP;
                    bool m_blackIPHasBeenSet;

                    /**
                     * 防篡改次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_tamper;
                    bool m_tamperHasBeenSet;

                    /**
                     * 信息防泄露次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_leak;
                    bool m_leakHasBeenSet;

                    /**
                     * 访问控制 
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_aCL;
                    bool m_aCLHasBeenSet;

                    /**
                     * 小程序 qps
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_wxAccess;
                    bool m_wxAccessHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WAF_V20180125_MODEL_PEAKPOINTSITEM_H_
