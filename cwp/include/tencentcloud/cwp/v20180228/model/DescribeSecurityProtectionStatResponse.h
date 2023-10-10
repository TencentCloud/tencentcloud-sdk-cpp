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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESECURITYPROTECTIONSTATRESPONSE_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESECURITYPROTECTIONSTATRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * DescribeSecurityProtectionStat返回参数结构体
                */
                class DescribeSecurityProtectionStatResponse : public AbstractModel
                {
                public:
                    DescribeSecurityProtectionStatResponse();
                    ~DescribeSecurityProtectionStatResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取0 ：0付费资产情况， 1：存在未安装agent情况 ，2：部分资产已是专业版/旗舰版， 3：全部资产已是专业版/旗舰版
                     * @return AssetManageStat 0 ：0付费资产情况， 1：存在未安装agent情况 ，2：部分资产已是专业版/旗舰版， 3：全部资产已是专业版/旗舰版
                     * 
                     */
                    uint64_t GetAssetManageStat() const;

                    /**
                     * 判断参数 AssetManageStat 是否已赋值
                     * @return AssetManageStat 是否已赋值
                     * 
                     */
                    bool AssetManageStatHasBeenSet() const;

                    /**
                     * 获取0:从未检测过，或0资产付费情况, 1:存在漏洞风险, 2:无风险
                     * @return VulManageStat 0:从未检测过，或0资产付费情况, 1:存在漏洞风险, 2:无风险
                     * 
                     */
                    uint64_t GetVulManageStat() const;

                    /**
                     * 判断参数 VulManageStat 是否已赋值
                     * @return VulManageStat 是否已赋值
                     * 
                     */
                    bool VulManageStatHasBeenSet() const;

                    /**
                     * 获取0:从未检测过，或0资产付费情况, 1:存在基线风险,2:无风险
                     * @return SecureBasicLineStat 0:从未检测过，或0资产付费情况, 1:存在基线风险,2:无风险
                     * 
                     */
                    uint64_t GetSecureBasicLineStat() const;

                    /**
                     * 判断参数 SecureBasicLineStat 是否已赋值
                     * @return SecureBasicLineStat 是否已赋值
                     * 
                     */
                    bool SecureBasicLineStatHasBeenSet() const;

                    /**
                     * 获取0:从未检测过，或0资产付费情况, 1:已检测，存在恶意文件, 2:已检测，未开启隔离防护, 3:已检测且已开启防护且无风险
                     * @return MalwareScanStat 0:从未检测过，或0资产付费情况, 1:已检测，存在恶意文件, 2:已检测，未开启隔离防护, 3:已检测且已开启防护且无风险
                     * 
                     */
                    uint64_t GetMalwareScanStat() const;

                    /**
                     * 判断参数 MalwareScanStat 是否已赋值
                     * @return MalwareScanStat 是否已赋值
                     * 
                     */
                    bool MalwareScanStatHasBeenSet() const;

                    /**
                     * 获取密码破解是否开启防护 0:未开启防护或0付费资产情况 1:已开启防护 2:存在带处理事件
                     * @return DefenseBruteAttackStat 密码破解是否开启防护 0:未开启防护或0付费资产情况 1:已开启防护 2:存在带处理事件
                     * 
                     */
                    uint64_t GetDefenseBruteAttackStat() const;

                    /**
                     * 判断参数 DefenseBruteAttackStat 是否已赋值
                     * @return DefenseBruteAttackStat 是否已赋值
                     * 
                     */
                    bool DefenseBruteAttackStatHasBeenSet() const;

                    /**
                     * 获取核心文件监控 0:未开启防护（0付费资产情况）,1: 已开通
                     * @return FileTamperStat 核心文件监控 0:未开启防护（0付费资产情况）,1: 已开通
                     * 
                     */
                    uint64_t GetFileTamperStat() const;

                    /**
                     * 判断参数 FileTamperStat 是否已赋值
                     * @return FileTamperStat 是否已赋值
                     * 
                     */
                    bool FileTamperStatHasBeenSet() const;

                    /**
                     * 获取网页防篡改  0:未开通, 1:已开通
                     * @return WebPageStat 网页防篡改  0:未开通, 1:已开通
                     * 
                     */
                    uint64_t GetWebPageStat() const;

                    /**
                     * 判断参数 WebPageStat 是否已赋值
                     * @return WebPageStat 是否已赋值
                     * 
                     */
                    bool WebPageStatHasBeenSet() const;

                    /**
                     * 获取异常登录 0:存在未处理风险,1:无风险，未配置白名单,2:无风险，已配置
                     * @return LoginLogStat 异常登录 0:存在未处理风险,1:无风险，未配置白名单,2:无风险，已配置
                     * 
                     */
                    uint64_t GetLoginLogStat() const;

                    /**
                     * 判断参数 LoginLogStat 是否已赋值
                     * @return LoginLogStat 是否已赋值
                     * 
                     */
                    bool LoginLogStatHasBeenSet() const;

                    /**
                     * 获取检测--密码破解有无存在风险  0:存在未处理风险, 1：无风险，正常检测
                     * @return DiscoverBruteAttackStat 检测--密码破解有无存在风险  0:存在未处理风险, 1：无风险，正常检测
                     * 
                     */
                    uint64_t GetDiscoverBruteAttackStat() const;

                    /**
                     * 判断参数 DiscoverBruteAttackStat 是否已赋值
                     * @return DiscoverBruteAttackStat 是否已赋值
                     * 
                     */
                    bool DiscoverBruteAttackStatHasBeenSet() const;

                    /**
                     * 获取恶意请求 0 : 0台开通专业版/旗舰版, 1: 恶意请求 存在未处理风险, 2:已有付费资产，无风险
                     * @return MaliciousRequestStat 恶意请求 0 : 0台开通专业版/旗舰版, 1: 恶意请求 存在未处理风险, 2:已有付费资产，无风险
                     * 
                     */
                    uint64_t GetMaliciousRequestStat() const;

                    /**
                     * 判断参数 MaliciousRequestStat 是否已赋值
                     * @return MaliciousRequestStat 是否已赋值
                     * 
                     */
                    bool MaliciousRequestStatHasBeenSet() const;

                    /**
                     * 获取本地提权 0:0台开通专业版/旗舰版, 1:存在未处理风险 2:已有付费资产，无风险
                     * @return PrivilegeStat 本地提权 0:0台开通专业版/旗舰版, 1:存在未处理风险 2:已有付费资产，无风险
                     * 
                     */
                    uint64_t GetPrivilegeStat() const;

                    /**
                     * 判断参数 PrivilegeStat 是否已赋值
                     * @return PrivilegeStat 是否已赋值
                     * 
                     */
                    bool PrivilegeStatHasBeenSet() const;

                    /**
                     * 获取反弹shell 0:0台开通专业版/旗舰版, 1:存在未处理风险 2:已有付费资产，无风险
                     * @return ReverseShellStat 反弹shell 0:0台开通专业版/旗舰版, 1:存在未处理风险 2:已有付费资产，无风险
                     * 
                     */
                    uint64_t GetReverseShellStat() const;

                    /**
                     * 判断参数 ReverseShellStat 是否已赋值
                     * @return ReverseShellStat 是否已赋值
                     * 
                     */
                    bool ReverseShellStatHasBeenSet() const;

                    /**
                     * 获取专家服务 0:未开通服务, 1:已开通
                     * @return ExpertServiceStat 专家服务 0:未开通服务, 1:已开通
                     * 
                     */
                    uint64_t GetExpertServiceStat() const;

                    /**
                     * 判断参数 ExpertServiceStat 是否已赋值
                     * @return ExpertServiceStat 是否已赋值
                     * 
                     */
                    bool ExpertServiceStatHasBeenSet() const;

                    /**
                     * 获取日志分析 0:未开通服务, 1:已开通
                     * @return LogAnalysisStat 日志分析 0:未开通服务, 1:已开通
                     * 
                     */
                    uint64_t GetLogAnalysisStat() const;

                    /**
                     * 判断参数 LogAnalysisStat 是否已赋值
                     * @return LogAnalysisStat 是否已赋值
                     * 
                     */
                    bool LogAnalysisStatHasBeenSet() const;

                    /**
                     * 获取安全告警 0:未开通设置（全部关闭） 1:已开通（只要开启1个就算）
                     * @return WarningSetStat 安全告警 0:未开通设置（全部关闭） 1:已开通（只要开启1个就算）
                     * 
                     */
                    uint64_t GetWarningSetStat() const;

                    /**
                     * 判断参数 WarningSetStat 是否已赋值
                     * @return WarningSetStat 是否已赋值
                     * 
                     */
                    bool WarningSetStatHasBeenSet() const;

                    /**
                     * 获取高危命令，0：0台开通专业版/旗舰版， 1：存在未处理风险， 2：已有付费资产，无风险
                     * @return EventBashStat 高危命令，0：0台开通专业版/旗舰版， 1：存在未处理风险， 2：已有付费资产，无风险
                     * 
                     */
                    uint64_t GetEventBashStat() const;

                    /**
                     * 判断参数 EventBashStat 是否已赋值
                     * @return EventBashStat 是否已赋值
                     * 
                     */
                    bool EventBashStatHasBeenSet() const;

                private:

                    /**
                     * 0 ：0付费资产情况， 1：存在未安装agent情况 ，2：部分资产已是专业版/旗舰版， 3：全部资产已是专业版/旗舰版
                     */
                    uint64_t m_assetManageStat;
                    bool m_assetManageStatHasBeenSet;

                    /**
                     * 0:从未检测过，或0资产付费情况, 1:存在漏洞风险, 2:无风险
                     */
                    uint64_t m_vulManageStat;
                    bool m_vulManageStatHasBeenSet;

                    /**
                     * 0:从未检测过，或0资产付费情况, 1:存在基线风险,2:无风险
                     */
                    uint64_t m_secureBasicLineStat;
                    bool m_secureBasicLineStatHasBeenSet;

                    /**
                     * 0:从未检测过，或0资产付费情况, 1:已检测，存在恶意文件, 2:已检测，未开启隔离防护, 3:已检测且已开启防护且无风险
                     */
                    uint64_t m_malwareScanStat;
                    bool m_malwareScanStatHasBeenSet;

                    /**
                     * 密码破解是否开启防护 0:未开启防护或0付费资产情况 1:已开启防护 2:存在带处理事件
                     */
                    uint64_t m_defenseBruteAttackStat;
                    bool m_defenseBruteAttackStatHasBeenSet;

                    /**
                     * 核心文件监控 0:未开启防护（0付费资产情况）,1: 已开通
                     */
                    uint64_t m_fileTamperStat;
                    bool m_fileTamperStatHasBeenSet;

                    /**
                     * 网页防篡改  0:未开通, 1:已开通
                     */
                    uint64_t m_webPageStat;
                    bool m_webPageStatHasBeenSet;

                    /**
                     * 异常登录 0:存在未处理风险,1:无风险，未配置白名单,2:无风险，已配置
                     */
                    uint64_t m_loginLogStat;
                    bool m_loginLogStatHasBeenSet;

                    /**
                     * 检测--密码破解有无存在风险  0:存在未处理风险, 1：无风险，正常检测
                     */
                    uint64_t m_discoverBruteAttackStat;
                    bool m_discoverBruteAttackStatHasBeenSet;

                    /**
                     * 恶意请求 0 : 0台开通专业版/旗舰版, 1: 恶意请求 存在未处理风险, 2:已有付费资产，无风险
                     */
                    uint64_t m_maliciousRequestStat;
                    bool m_maliciousRequestStatHasBeenSet;

                    /**
                     * 本地提权 0:0台开通专业版/旗舰版, 1:存在未处理风险 2:已有付费资产，无风险
                     */
                    uint64_t m_privilegeStat;
                    bool m_privilegeStatHasBeenSet;

                    /**
                     * 反弹shell 0:0台开通专业版/旗舰版, 1:存在未处理风险 2:已有付费资产，无风险
                     */
                    uint64_t m_reverseShellStat;
                    bool m_reverseShellStatHasBeenSet;

                    /**
                     * 专家服务 0:未开通服务, 1:已开通
                     */
                    uint64_t m_expertServiceStat;
                    bool m_expertServiceStatHasBeenSet;

                    /**
                     * 日志分析 0:未开通服务, 1:已开通
                     */
                    uint64_t m_logAnalysisStat;
                    bool m_logAnalysisStatHasBeenSet;

                    /**
                     * 安全告警 0:未开通设置（全部关闭） 1:已开通（只要开启1个就算）
                     */
                    uint64_t m_warningSetStat;
                    bool m_warningSetStatHasBeenSet;

                    /**
                     * 高危命令，0：0台开通专业版/旗舰版， 1：存在未处理风险， 2：已有付费资产，无风险
                     */
                    uint64_t m_eventBashStat;
                    bool m_eventBashStatHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_DESCRIBESECURITYPROTECTIONSTATRESPONSE_H_
