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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTVULRISKEVENTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTVULRISKEVENTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 主机漏洞风险事件明细
                */
                class HostVulRiskEventItem : public AbstractModel
                {
                public:
                    HostVulRiskEventItem();
                    ~HostVulRiskEventItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取漏洞风险记录唯一标识
                     * @return UUID 漏洞风险记录唯一标识
                     * 
                     */
                    std::string GetUUID() const;

                    /**
                     * 设置漏洞风险记录唯一标识
                     * @param _uUID 漏洞风险记录唯一标识
                     * 
                     */
                    void SetUUID(const std::string& _uUID);

                    /**
                     * 判断参数 UUID 是否已赋值
                     * @return UUID 是否已赋值
                     * 
                     */
                    bool UUIDHasBeenSet() const;

                    /**
                     * 获取风险记录 ID
                     * @return RiskID 风险记录 ID
                     * 
                     */
                    uint64_t GetRiskID() const;

                    /**
                     * 设置风险记录 ID
                     * @param _riskID 风险记录 ID
                     * 
                     */
                    void SetRiskID(const uint64_t& _riskID);

                    /**
                     * 判断参数 RiskID 是否已赋值
                     * @return RiskID 是否已赋值
                     * 
                     */
                    bool RiskIDHasBeenSet() const;

                    /**
                     * 获取漏洞 ID
                     * @return VulID 漏洞 ID
                     * 
                     */
                    uint64_t GetVulID() const;

                    /**
                     * 设置漏洞 ID
                     * @param _vulID 漏洞 ID
                     * 
                     */
                    void SetVulID(const uint64_t& _vulID);

                    /**
                     * 判断参数 VulID 是否已赋值
                     * @return VulID 是否已赋值
                     * 
                     */
                    bool VulIDHasBeenSet() const;

                    /**
                     * 获取漏洞名称
                     * @return VulName 漏洞名称
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置漏洞名称
                     * @param _vulName 漏洞名称
                     * 
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取CVE 编号
参数格式：形如 CVE-2024-12345
                     * @return CVEID CVE 编号
参数格式：形如 CVE-2024-12345
                     * 
                     */
                    std::string GetCVEID() const;

                    /**
                     * 设置CVE 编号
参数格式：形如 CVE-2024-12345
                     * @param _cVEID CVE 编号
参数格式：形如 CVE-2024-12345
                     * 
                     */
                    void SetCVEID(const std::string& _cVEID);

                    /**
                     * 判断参数 CVEID 是否已赋值
                     * @return CVEID 是否已赋值
                     * 
                     */
                    bool CVEIDHasBeenSet() const;

                    /**
                     * 获取漏洞分类
枚举值：
LINUX：Linux 软件漏洞
WINDOWS：Windows 系统补丁
WEB_CMS：Web-CMS 漏洞
APPLICATION：应用漏洞
EMERGENCY：应急漏洞
                     * @return Category 漏洞分类
枚举值：
LINUX：Linux 软件漏洞
WINDOWS：Windows 系统补丁
WEB_CMS：Web-CMS 漏洞
APPLICATION：应用漏洞
EMERGENCY：应急漏洞
                     * 
                     */
                    std::string GetCategory() const;

                    /**
                     * 设置漏洞分类
枚举值：
LINUX：Linux 软件漏洞
WINDOWS：Windows 系统补丁
WEB_CMS：Web-CMS 漏洞
APPLICATION：应用漏洞
EMERGENCY：应急漏洞
                     * @param _category 漏洞分类
枚举值：
LINUX：Linux 软件漏洞
WINDOWS：Windows 系统补丁
WEB_CMS：Web-CMS 漏洞
APPLICATION：应用漏洞
EMERGENCY：应急漏洞
                     * 
                     */
                    void SetCategory(const std::string& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取漏洞危害等级
枚举值：
UNKNOWN：无效
LOW：低危
MEDIUM：中危
HIGH：高危
CRITICAL：严重
                     * @return Level 漏洞危害等级
枚举值：
UNKNOWN：无效
LOW：低危
MEDIUM：中危
HIGH：高危
CRITICAL：严重
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置漏洞危害等级
枚举值：
UNKNOWN：无效
LOW：低危
MEDIUM：中危
HIGH：高危
CRITICAL：严重
                     * @param _level 漏洞危害等级
枚举值：
UNKNOWN：无效
LOW：低危
MEDIUM：中危
HIGH：高危
CRITICAL：严重
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取VPR 修复优先级
枚举值：
DEFERRABLE：可暂缓修复
PLANNED：计划修复
SOON：尽快修复
URGENT：紧急修复
                     * @return VPRLevel VPR 修复优先级
枚举值：
DEFERRABLE：可暂缓修复
PLANNED：计划修复
SOON：尽快修复
URGENT：紧急修复
                     * 
                     */
                    std::string GetVPRLevel() const;

                    /**
                     * 设置VPR 修复优先级
枚举值：
DEFERRABLE：可暂缓修复
PLANNED：计划修复
SOON：尽快修复
URGENT：紧急修复
                     * @param _vPRLevel VPR 修复优先级
枚举值：
DEFERRABLE：可暂缓修复
PLANNED：计划修复
SOON：尽快修复
URGENT：紧急修复
                     * 
                     */
                    void SetVPRLevel(const std::string& _vPRLevel);

                    /**
                     * 判断参数 VPRLevel 是否已赋值
                     * @return VPRLevel 是否已赋值
                     * 
                     */
                    bool VPRLevelHasBeenSet() const;

                    /**
                     * 获取检测方式
枚举值：
VersionCompare：版本比对
POC：POC 检测
VersionComparePOC：版本比对 + POC
                     * @return CheckMethod 检测方式
枚举值：
VersionCompare：版本比对
POC：POC 检测
VersionComparePOC：版本比对 + POC
                     * 
                     */
                    std::string GetCheckMethod() const;

                    /**
                     * 设置检测方式
枚举值：
VersionCompare：版本比对
POC：POC 检测
VersionComparePOC：版本比对 + POC
                     * @param _checkMethod 检测方式
枚举值：
VersionCompare：版本比对
POC：POC 检测
VersionComparePOC：版本比对 + POC
                     * 
                     */
                    void SetCheckMethod(const std::string& _checkMethod);

                    /**
                     * 判断参数 CheckMethod 是否已赋值
                     * @return CheckMethod 是否已赋值
                     * 
                     */
                    bool CheckMethodHasBeenSet() const;

                    /**
                     * 获取风险状态
枚举值：
PENDING：待处理
HANDLED：已处置
FIXED：已修复
SCANNING：重新检测中
IGNORED：已忽略
NOT_REQUIRED：无需处理
DELETED：已删除
FIXING：修复中
NEED_REBOOT：已修复待重启
FIX_FAILED：修复失败
                     * @return RiskStatus 风险状态
枚举值：
PENDING：待处理
HANDLED：已处置
FIXED：已修复
SCANNING：重新检测中
IGNORED：已忽略
NOT_REQUIRED：无需处理
DELETED：已删除
FIXING：修复中
NEED_REBOOT：已修复待重启
FIX_FAILED：修复失败
                     * 
                     */
                    std::string GetRiskStatus() const;

                    /**
                     * 设置风险状态
枚举值：
PENDING：待处理
HANDLED：已处置
FIXED：已修复
SCANNING：重新检测中
IGNORED：已忽略
NOT_REQUIRED：无需处理
DELETED：已删除
FIXING：修复中
NEED_REBOOT：已修复待重启
FIX_FAILED：修复失败
                     * @param _riskStatus 风险状态
枚举值：
PENDING：待处理
HANDLED：已处置
FIXED：已修复
SCANNING：重新检测中
IGNORED：已忽略
NOT_REQUIRED：无需处理
DELETED：已删除
FIXING：修复中
NEED_REBOOT：已修复待重启
FIX_FAILED：修复失败
                     * 
                     */
                    void SetRiskStatus(const std::string& _riskStatus);

                    /**
                     * 判断参数 RiskStatus 是否已赋值
                     * @return RiskStatus 是否已赋值
                     * 
                     */
                    bool RiskStatusHasBeenSet() const;

                    /**
                     * 获取是否支持一键修复
                     * @return SupportFix 是否支持一键修复
                     * 
                     */
                    bool GetSupportFix() const;

                    /**
                     * 设置是否支持一键修复
                     * @param _supportFix 是否支持一键修复
                     * 
                     */
                    void SetSupportFix(const bool& _supportFix);

                    /**
                     * 判断参数 SupportFix 是否已赋值
                     * @return SupportFix 是否已赋值
                     * 
                     */
                    bool SupportFixHasBeenSet() const;

                    /**
                     * 获取最近扫描时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @return LatestScanTime 最近扫描时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * 
                     */
                    std::string GetLatestScanTime() const;

                    /**
                     * 设置最近扫描时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * @param _latestScanTime 最近扫描时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     * 
                     */
                    void SetLatestScanTime(const std::string& _latestScanTime);

                    /**
                     * 判断参数 LatestScanTime 是否已赋值
                     * @return LatestScanTime 是否已赋值
                     * 
                     */
                    bool LatestScanTimeHasBeenSet() const;

                    /**
                     * 获取云主机实例 ID
参数格式：形如 ins-xxxxxxxx
                     * @return InstanceID 云主机实例 ID
参数格式：形如 ins-xxxxxxxx
                     * 
                     */
                    std::string GetInstanceID() const;

                    /**
                     * 设置云主机实例 ID
参数格式：形如 ins-xxxxxxxx
                     * @param _instanceID 云主机实例 ID
参数格式：形如 ins-xxxxxxxx
                     * 
                     */
                    void SetInstanceID(const std::string& _instanceID);

                    /**
                     * 判断参数 InstanceID 是否已赋值
                     * @return InstanceID 是否已赋值
                     * 
                     */
                    bool InstanceIDHasBeenSet() const;

                    /**
                     * 获取所属账号 AppID
                     * @return AppID 所属账号 AppID
                     * 
                     */
                    uint64_t GetAppID() const;

                    /**
                     * 设置所属账号 AppID
                     * @param _appID 所属账号 AppID
                     * 
                     */
                    void SetAppID(const uint64_t& _appID);

                    /**
                     * 判断参数 AppID 是否已赋值
                     * @return AppID 是否已赋值
                     * 
                     */
                    bool AppIDHasBeenSet() const;

                private:

                    /**
                     * 漏洞风险记录唯一标识
                     */
                    std::string m_uUID;
                    bool m_uUIDHasBeenSet;

                    /**
                     * 风险记录 ID
                     */
                    uint64_t m_riskID;
                    bool m_riskIDHasBeenSet;

                    /**
                     * 漏洞 ID
                     */
                    uint64_t m_vulID;
                    bool m_vulIDHasBeenSet;

                    /**
                     * 漏洞名称
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * CVE 编号
参数格式：形如 CVE-2024-12345
                     */
                    std::string m_cVEID;
                    bool m_cVEIDHasBeenSet;

                    /**
                     * 漏洞分类
枚举值：
LINUX：Linux 软件漏洞
WINDOWS：Windows 系统补丁
WEB_CMS：Web-CMS 漏洞
APPLICATION：应用漏洞
EMERGENCY：应急漏洞
                     */
                    std::string m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 漏洞危害等级
枚举值：
UNKNOWN：无效
LOW：低危
MEDIUM：中危
HIGH：高危
CRITICAL：严重
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * VPR 修复优先级
枚举值：
DEFERRABLE：可暂缓修复
PLANNED：计划修复
SOON：尽快修复
URGENT：紧急修复
                     */
                    std::string m_vPRLevel;
                    bool m_vPRLevelHasBeenSet;

                    /**
                     * 检测方式
枚举值：
VersionCompare：版本比对
POC：POC 检测
VersionComparePOC：版本比对 + POC
                     */
                    std::string m_checkMethod;
                    bool m_checkMethodHasBeenSet;

                    /**
                     * 风险状态
枚举值：
PENDING：待处理
HANDLED：已处置
FIXED：已修复
SCANNING：重新检测中
IGNORED：已忽略
NOT_REQUIRED：无需处理
DELETED：已删除
FIXING：修复中
NEED_REBOOT：已修复待重启
FIX_FAILED：修复失败
                     */
                    std::string m_riskStatus;
                    bool m_riskStatusHasBeenSet;

                    /**
                     * 是否支持一键修复
                     */
                    bool m_supportFix;
                    bool m_supportFixHasBeenSet;

                    /**
                     * 最近扫描时间
参数格式：YYYY-MM-DDTHH:mm:ssZ（ISO8601格式）
                     */
                    std::string m_latestScanTime;
                    bool m_latestScanTimeHasBeenSet;

                    /**
                     * 云主机实例 ID
参数格式：形如 ins-xxxxxxxx
                     */
                    std::string m_instanceID;
                    bool m_instanceIDHasBeenSet;

                    /**
                     * 所属账号 AppID
                     */
                    uint64_t m_appID;
                    bool m_appIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_HOSTVULRISKEVENTITEM_H_
