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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRALERTCOUNTFORASSETREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRALERTCOUNTFORASSETREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/EDRFilters.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * DescribeEdrAlertCountForAsset请求参数结构体
                */
                class DescribeEdrAlertCountForAssetRequest : public AbstractModel
                {
                public:
                    DescribeEdrAlertCountForAssetRequest();
                    ~DescribeEdrAlertCountForAssetRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>集团账号的成员id</p>
                     * @return MemberId <p>集团账号的成员id</p>
                     * 
                     */
                    std::vector<std::string> GetMemberId() const;

                    /**
                     * 设置<p>集团账号的成员id</p>
                     * @param _memberId <p>集团账号的成员id</p>
                     * 
                     */
                    void SetMemberId(const std::vector<std::string>& _memberId);

                    /**
                     * 判断参数 MemberId 是否已赋值
                     * @return MemberId 是否已赋值
                     * 
                     */
                    bool MemberIdHasBeenSet() const;

                    /**
                     * 获取<p>主机instance_id列表，为空时返回MemberId对应appid范围内的汇总统计，非空时按每个instance_id粒度分别返回统计</p>
                     * @return InstanceIds <p>主机instance_id列表，为空时返回MemberId对应appid范围内的汇总统计，非空时按每个instance_id粒度分别返回统计</p>
                     * 
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置<p>主机instance_id列表，为空时返回MemberId对应appid范围内的汇总统计，非空时按每个instance_id粒度分别返回统计</p>
                     * @param _instanceIds <p>主机instance_id列表，为空时返回MemberId对应appid范围内的汇总统计，非空时按每个instance_id粒度分别返回统计</p>
                     * 
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     * 
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取<p>筛选条件列表，与DescribeEdrAlertList保持一致。支持的Name取值及对应Values枚举：Status - string - 是否必填：否 - 告警状态。Values取值：PENDING（待处理）、WHITELISTED（已加白）、PROCESSED（已处理）、IGNORED（已忽略）Level - string - 是否必填：否 - 告警等级。Values取值：CRITICAL（严重）、HIGH（高危）、MEDIUM（中危）、LOW（低危）、INFO（提示）DetectMode - string - 是否必填：否 - 检测模式。Values取值：PRECISE（精准）、BALANCED（均衡）、DEEP（深度）AlertCategory - string - 是否必填：否 - 告警大类。Values取值：VIRUS_TROJAN（病毒木马）、ABNORMAL_LOGIN（异常登录）、HOST_BEHAVIOR（主机行为）、NETWORK_BEHAVIOR（网络行为）、AI_LINK_ENGINE（AI关联引擎）AlertSubType - string - 是否必填：否 - 告警子类型。Values取值：MALWARE_FILE（恶意文件）、MALWARE_PROCESS（恶意进程）、RISK_LOGIN（异常登录）、BRUTE_FORCE（密码破解）、DNS（恶意请求）、BASH（高危命令）、PRIV_ESCALATION（本地提权）、REVERSE_SHELL（反弹Shell）、NET_ATTACK（网络攻击）、VUL_DEFENCE（漏洞防御）、MEMORY_SHELL_INJECT（内存马注入）、MEMORY_SHELL_SCAN（内存马扫描）、MULTI_BEHAVIOR_ATTACK（多行为攻击）AttackStage - string - 是否必填：否 - ATT&amp;CK攻击阶段。Values取值：TA0001~TA0011、TA0040、TA0042、TA0043，空字符串表示未分类AlertSource - string - 是否必填：否 - 告警来源。Values取值：HOST（主机）StartTime - string - 是否必填：否 - 起始时间，格式YYYY-MM-DD HH:MM:SS，不传默认近180天EndTime - string - 是否必填：否 - 结束时间，格式YYYY-MM-DD HH:MM:SS，不传默认当前时间</p>
                     * @return Filters <p>筛选条件列表，与DescribeEdrAlertList保持一致。支持的Name取值及对应Values枚举：Status - string - 是否必填：否 - 告警状态。Values取值：PENDING（待处理）、WHITELISTED（已加白）、PROCESSED（已处理）、IGNORED（已忽略）Level - string - 是否必填：否 - 告警等级。Values取值：CRITICAL（严重）、HIGH（高危）、MEDIUM（中危）、LOW（低危）、INFO（提示）DetectMode - string - 是否必填：否 - 检测模式。Values取值：PRECISE（精准）、BALANCED（均衡）、DEEP（深度）AlertCategory - string - 是否必填：否 - 告警大类。Values取值：VIRUS_TROJAN（病毒木马）、ABNORMAL_LOGIN（异常登录）、HOST_BEHAVIOR（主机行为）、NETWORK_BEHAVIOR（网络行为）、AI_LINK_ENGINE（AI关联引擎）AlertSubType - string - 是否必填：否 - 告警子类型。Values取值：MALWARE_FILE（恶意文件）、MALWARE_PROCESS（恶意进程）、RISK_LOGIN（异常登录）、BRUTE_FORCE（密码破解）、DNS（恶意请求）、BASH（高危命令）、PRIV_ESCALATION（本地提权）、REVERSE_SHELL（反弹Shell）、NET_ATTACK（网络攻击）、VUL_DEFENCE（漏洞防御）、MEMORY_SHELL_INJECT（内存马注入）、MEMORY_SHELL_SCAN（内存马扫描）、MULTI_BEHAVIOR_ATTACK（多行为攻击）AttackStage - string - 是否必填：否 - ATT&amp;CK攻击阶段。Values取值：TA0001~TA0011、TA0040、TA0042、TA0043，空字符串表示未分类AlertSource - string - 是否必填：否 - 告警来源。Values取值：HOST（主机）StartTime - string - 是否必填：否 - 起始时间，格式YYYY-MM-DD HH:MM:SS，不传默认近180天EndTime - string - 是否必填：否 - 结束时间，格式YYYY-MM-DD HH:MM:SS，不传默认当前时间</p>
                     * 
                     */
                    std::vector<EDRFilters> GetFilters() const;

                    /**
                     * 设置<p>筛选条件列表，与DescribeEdrAlertList保持一致。支持的Name取值及对应Values枚举：Status - string - 是否必填：否 - 告警状态。Values取值：PENDING（待处理）、WHITELISTED（已加白）、PROCESSED（已处理）、IGNORED（已忽略）Level - string - 是否必填：否 - 告警等级。Values取值：CRITICAL（严重）、HIGH（高危）、MEDIUM（中危）、LOW（低危）、INFO（提示）DetectMode - string - 是否必填：否 - 检测模式。Values取值：PRECISE（精准）、BALANCED（均衡）、DEEP（深度）AlertCategory - string - 是否必填：否 - 告警大类。Values取值：VIRUS_TROJAN（病毒木马）、ABNORMAL_LOGIN（异常登录）、HOST_BEHAVIOR（主机行为）、NETWORK_BEHAVIOR（网络行为）、AI_LINK_ENGINE（AI关联引擎）AlertSubType - string - 是否必填：否 - 告警子类型。Values取值：MALWARE_FILE（恶意文件）、MALWARE_PROCESS（恶意进程）、RISK_LOGIN（异常登录）、BRUTE_FORCE（密码破解）、DNS（恶意请求）、BASH（高危命令）、PRIV_ESCALATION（本地提权）、REVERSE_SHELL（反弹Shell）、NET_ATTACK（网络攻击）、VUL_DEFENCE（漏洞防御）、MEMORY_SHELL_INJECT（内存马注入）、MEMORY_SHELL_SCAN（内存马扫描）、MULTI_BEHAVIOR_ATTACK（多行为攻击）AttackStage - string - 是否必填：否 - ATT&amp;CK攻击阶段。Values取值：TA0001~TA0011、TA0040、TA0042、TA0043，空字符串表示未分类AlertSource - string - 是否必填：否 - 告警来源。Values取值：HOST（主机）StartTime - string - 是否必填：否 - 起始时间，格式YYYY-MM-DD HH:MM:SS，不传默认近180天EndTime - string - 是否必填：否 - 结束时间，格式YYYY-MM-DD HH:MM:SS，不传默认当前时间</p>
                     * @param _filters <p>筛选条件列表，与DescribeEdrAlertList保持一致。支持的Name取值及对应Values枚举：Status - string - 是否必填：否 - 告警状态。Values取值：PENDING（待处理）、WHITELISTED（已加白）、PROCESSED（已处理）、IGNORED（已忽略）Level - string - 是否必填：否 - 告警等级。Values取值：CRITICAL（严重）、HIGH（高危）、MEDIUM（中危）、LOW（低危）、INFO（提示）DetectMode - string - 是否必填：否 - 检测模式。Values取值：PRECISE（精准）、BALANCED（均衡）、DEEP（深度）AlertCategory - string - 是否必填：否 - 告警大类。Values取值：VIRUS_TROJAN（病毒木马）、ABNORMAL_LOGIN（异常登录）、HOST_BEHAVIOR（主机行为）、NETWORK_BEHAVIOR（网络行为）、AI_LINK_ENGINE（AI关联引擎）AlertSubType - string - 是否必填：否 - 告警子类型。Values取值：MALWARE_FILE（恶意文件）、MALWARE_PROCESS（恶意进程）、RISK_LOGIN（异常登录）、BRUTE_FORCE（密码破解）、DNS（恶意请求）、BASH（高危命令）、PRIV_ESCALATION（本地提权）、REVERSE_SHELL（反弹Shell）、NET_ATTACK（网络攻击）、VUL_DEFENCE（漏洞防御）、MEMORY_SHELL_INJECT（内存马注入）、MEMORY_SHELL_SCAN（内存马扫描）、MULTI_BEHAVIOR_ATTACK（多行为攻击）AttackStage - string - 是否必填：否 - ATT&amp;CK攻击阶段。Values取值：TA0001~TA0011、TA0040、TA0042、TA0043，空字符串表示未分类AlertSource - string - 是否必填：否 - 告警来源。Values取值：HOST（主机）StartTime - string - 是否必填：否 - 起始时间，格式YYYY-MM-DD HH:MM:SS，不传默认近180天EndTime - string - 是否必填：否 - 结束时间，格式YYYY-MM-DD HH:MM:SS，不传默认当前时间</p>
                     * 
                     */
                    void SetFilters(const std::vector<EDRFilters>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>主机instance_id列表，为空时返回MemberId对应appid范围内的汇总统计，非空时按每个instance_id粒度分别返回统计</p>
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * <p>筛选条件列表，与DescribeEdrAlertList保持一致。支持的Name取值及对应Values枚举：Status - string - 是否必填：否 - 告警状态。Values取值：PENDING（待处理）、WHITELISTED（已加白）、PROCESSED（已处理）、IGNORED（已忽略）Level - string - 是否必填：否 - 告警等级。Values取值：CRITICAL（严重）、HIGH（高危）、MEDIUM（中危）、LOW（低危）、INFO（提示）DetectMode - string - 是否必填：否 - 检测模式。Values取值：PRECISE（精准）、BALANCED（均衡）、DEEP（深度）AlertCategory - string - 是否必填：否 - 告警大类。Values取值：VIRUS_TROJAN（病毒木马）、ABNORMAL_LOGIN（异常登录）、HOST_BEHAVIOR（主机行为）、NETWORK_BEHAVIOR（网络行为）、AI_LINK_ENGINE（AI关联引擎）AlertSubType - string - 是否必填：否 - 告警子类型。Values取值：MALWARE_FILE（恶意文件）、MALWARE_PROCESS（恶意进程）、RISK_LOGIN（异常登录）、BRUTE_FORCE（密码破解）、DNS（恶意请求）、BASH（高危命令）、PRIV_ESCALATION（本地提权）、REVERSE_SHELL（反弹Shell）、NET_ATTACK（网络攻击）、VUL_DEFENCE（漏洞防御）、MEMORY_SHELL_INJECT（内存马注入）、MEMORY_SHELL_SCAN（内存马扫描）、MULTI_BEHAVIOR_ATTACK（多行为攻击）AttackStage - string - 是否必填：否 - ATT&amp;CK攻击阶段。Values取值：TA0001~TA0011、TA0040、TA0042、TA0043，空字符串表示未分类AlertSource - string - 是否必填：否 - 告警来源。Values取值：HOST（主机）StartTime - string - 是否必填：否 - 起始时间，格式YYYY-MM-DD HH:MM:SS，不传默认近180天EndTime - string - 是否必填：否 - 结束时间，格式YYYY-MM-DD HH:MM:SS，不传默认当前时间</p>
                     */
                    std::vector<EDRFilters> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_DESCRIBEEDRALERTCOUNTFORASSETREQUEST_H_
