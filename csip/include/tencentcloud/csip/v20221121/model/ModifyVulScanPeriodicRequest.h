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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYVULSCANPERIODICREQUEST_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYVULSCANPERIODICREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ModifyVulScanPeriodic请求参数结构体
                */
                class ModifyVulScanPeriodicRequest : public AbstractModel
                {
                public:
                    ModifyVulScanPeriodicRequest();
                    ~ModifyVulScanPeriodicRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>周期扫描开关（0-关闭, 1-开启）</p>
                     * @return Status <p>周期扫描开关（0-关闭, 1-开启）</p>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<p>周期扫描开关（0-关闭, 1-开启）</p>
                     * @param _status <p>周期扫描开关（0-关闭, 1-开启）</p>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>漏洞类型</p><p>枚举值：</p><ul><li>LINUX： Linux软件漏洞</li><li>WINDOWS： Windows系统补丁</li><li>WEB_CMS： Web-CMS漏洞</li><li>APPLICATION： 应用漏洞</li><li>EMERGENCY： 应急漏洞</li></ul>
                     * @return VulCategory <p>漏洞类型</p><p>枚举值：</p><ul><li>LINUX： Linux软件漏洞</li><li>WINDOWS： Windows系统补丁</li><li>WEB_CMS： Web-CMS漏洞</li><li>APPLICATION： 应用漏洞</li><li>EMERGENCY： 应急漏洞</li></ul>
                     * 
                     */
                    std::vector<std::string> GetVulCategory() const;

                    /**
                     * 设置<p>漏洞类型</p><p>枚举值：</p><ul><li>LINUX： Linux软件漏洞</li><li>WINDOWS： Windows系统补丁</li><li>WEB_CMS： Web-CMS漏洞</li><li>APPLICATION： 应用漏洞</li><li>EMERGENCY： 应急漏洞</li></ul>
                     * @param _vulCategory <p>漏洞类型</p><p>枚举值：</p><ul><li>LINUX： Linux软件漏洞</li><li>WINDOWS： Windows系统补丁</li><li>WEB_CMS： Web-CMS漏洞</li><li>APPLICATION： 应用漏洞</li><li>EMERGENCY： 应急漏洞</li></ul>
                     * 
                     */
                    void SetVulCategory(const std::vector<std::string>& _vulCategory);

                    /**
                     * 判断参数 VulCategory 是否已赋值
                     * @return VulCategory 是否已赋值
                     * 
                     */
                    bool VulCategoryHasBeenSet() const;

                    /**
                     * 获取<p>漏洞等级</p><p>枚举值：</p><ul><li>LOW： 低危</li><li>MEDIUM： 中危</li><li>HIGH： 高危</li><li>CRITICAL： 严重</li></ul>
                     * @return Level <p>漏洞等级</p><p>枚举值：</p><ul><li>LOW： 低危</li><li>MEDIUM： 中危</li><li>HIGH： 高危</li><li>CRITICAL： 严重</li></ul>
                     * 
                     */
                    std::vector<std::string> GetLevel() const;

                    /**
                     * 设置<p>漏洞等级</p><p>枚举值：</p><ul><li>LOW： 低危</li><li>MEDIUM： 中危</li><li>HIGH： 高危</li><li>CRITICAL： 严重</li></ul>
                     * @param _level <p>漏洞等级</p><p>枚举值：</p><ul><li>LOW： 低危</li><li>MEDIUM： 中危</li><li>HIGH： 高危</li><li>CRITICAL： 严重</li></ul>
                     * 
                     */
                    void SetLevel(const std::vector<std::string>& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取<p>扫描方式（VersionCompare: 版本对比, POC: POC检测, VersionComparePOC: 版本对比+POC检测）</p>
                     * @return Method <p>扫描方式（VersionCompare: 版本对比, POC: POC检测, VersionComparePOC: 版本对比+POC检测）</p>
                     * 
                     */
                    std::string GetMethod() const;

                    /**
                     * 设置<p>扫描方式（VersionCompare: 版本对比, POC: POC检测, VersionComparePOC: 版本对比+POC检测）</p>
                     * @param _method <p>扫描方式（VersionCompare: 版本对比, POC: POC检测, VersionComparePOC: 版本对比+POC检测）</p>
                     * 
                     */
                    void SetMethod(const std::string& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取<p>开始时间（09:00:00）</p>
                     * @return StartTime <p>开始时间（09:00:00）</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>开始时间（09:00:00）</p>
                     * @param _startTime <p>开始时间（09:00:00）</p>
                     * 
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     * 
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取<p>结束时间（18:00:00）</p>
                     * @return EndTime <p>结束时间（18:00:00）</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>结束时间（18:00:00）</p>
                     * @param _endTime <p>结束时间（18:00:00）</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>资产范围（0-全部资产，1-自选资产，2-剔除资产，3-自动资产匹配）</p>
                     * @return AssetRange <p>资产范围（0-全部资产，1-自选资产，2-剔除资产，3-自动资产匹配）</p>
                     * 
                     */
                    int64_t GetAssetRange() const;

                    /**
                     * 设置<p>资产范围（0-全部资产，1-自选资产，2-剔除资产，3-自动资产匹配）</p>
                     * @param _assetRange <p>资产范围（0-全部资产，1-自选资产，2-剔除资产，3-自动资产匹配）</p>
                     * 
                     */
                    void SetAssetRange(const int64_t& _assetRange);

                    /**
                     * 判断参数 AssetRange 是否已赋值
                     * @return AssetRange 是否已赋值
                     * 
                     */
                    bool AssetRangeHasBeenSet() const;

                    /**
                     * 获取<p>周期扫描类型</p><p>枚举值：</p><ul><li>1： 每天</li><li>2： 每周</li><li>3： 每月</li></ul>
                     * @return CycleType <p>周期扫描类型</p><p>枚举值：</p><ul><li>1： 每天</li><li>2： 每周</li><li>3： 每月</li></ul>
                     * 
                     */
                    uint64_t GetCycleType() const;

                    /**
                     * 设置<p>周期扫描类型</p><p>枚举值：</p><ul><li>1： 每天</li><li>2： 每周</li><li>3： 每月</li></ul>
                     * @param _cycleType <p>周期扫描类型</p><p>枚举值：</p><ul><li>1： 每天</li><li>2： 每周</li><li>3： 每月</li></ul>
                     * 
                     */
                    void SetCycleType(const uint64_t& _cycleType);

                    /**
                     * 判断参数 CycleType 是否已赋值
                     * @return CycleType 是否已赋值
                     * 
                     */
                    bool CycleTypeHasBeenSet() const;

                    /**
                     * 获取<p>扫描超时时长</p><p>单位：秒</p>
                     * @return Timeout <p>扫描超时时长</p><p>单位：秒</p>
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置<p>扫描超时时长</p><p>单位：秒</p>
                     * @param _timeout <p>扫描超时时长</p><p>单位：秒</p>
                     * 
                     */
                    void SetTimeout(const uint64_t& _timeout);

                    /**
                     * 判断参数 Timeout 是否已赋值
                     * @return Timeout 是否已赋值
                     * 
                     */
                    bool TimeoutHasBeenSet() const;

                    /**
                     * 获取<p>周期值</p><p>取值范围：[1, 31]</p><p>单位：周几或者每月几号</p>
                     * @return CycleValue <p>周期值</p><p>取值范围：[1, 31]</p><p>单位：周几或者每月几号</p>
                     * 
                     */
                    std::vector<uint64_t> GetCycleValue() const;

                    /**
                     * 设置<p>周期值</p><p>取值范围：[1, 31]</p><p>单位：周几或者每月几号</p>
                     * @param _cycleValue <p>周期值</p><p>取值范围：[1, 31]</p><p>单位：周几或者每月几号</p>
                     * 
                     */
                    void SetCycleValue(const std::vector<uint64_t>& _cycleValue);

                    /**
                     * 判断参数 CycleValue 是否已赋值
                     * @return CycleValue 是否已赋值
                     * 
                     */
                    bool CycleValueHasBeenSet() const;

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
                     * 获取<p>资产列表（instance_id列表）</p>
                     * @return AssetList <p>资产列表（instance_id列表）</p>
                     * 
                     */
                    std::vector<std::string> GetAssetList() const;

                    /**
                     * 设置<p>资产列表（instance_id列表）</p>
                     * @param _assetList <p>资产列表（instance_id列表）</p>
                     * 
                     */
                    void SetAssetList(const std::vector<std::string>& _assetList);

                    /**
                     * 判断参数 AssetList 是否已赋值
                     * @return AssetList 是否已赋值
                     * 
                     */
                    bool AssetListHasBeenSet() const;

                    /**
                     * 获取<p>是否运行被同步配置 0-不允许，1-允许</p>
                     * @return AllowSync <p>是否运行被同步配置 0-不允许，1-允许</p>
                     * 
                     */
                    uint64_t GetAllowSync() const;

                    /**
                     * 设置<p>是否运行被同步配置 0-不允许，1-允许</p>
                     * @param _allowSync <p>是否运行被同步配置 0-不允许，1-允许</p>
                     * 
                     */
                    void SetAllowSync(const uint64_t& _allowSync);

                    /**
                     * 判断参数 AllowSync 是否已赋值
                     * @return AllowSync 是否已赋值
                     * 
                     */
                    bool AllowSyncHasBeenSet() const;

                    /**
                     * 获取<p>管理员账号是否开启了自动同步配置开关 0-关闭，1-开启</p>
                     * @return EnableSync <p>管理员账号是否开启了自动同步配置开关 0-关闭，1-开启</p>
                     * 
                     */
                    uint64_t GetEnableSync() const;

                    /**
                     * 设置<p>管理员账号是否开启了自动同步配置开关 0-关闭，1-开启</p>
                     * @param _enableSync <p>管理员账号是否开启了自动同步配置开关 0-关闭，1-开启</p>
                     * 
                     */
                    void SetEnableSync(const uint64_t& _enableSync);

                    /**
                     * 判断参数 EnableSync 是否已赋值
                     * @return EnableSync 是否已赋值
                     * 
                     */
                    bool EnableSyncHasBeenSet() const;

                    /**
                     * 获取<p>配置同步给哪些账号appid</p>
                     * @return SyncTo <p>配置同步给哪些账号appid</p>
                     * 
                     */
                    std::vector<uint64_t> GetSyncTo() const;

                    /**
                     * 设置<p>配置同步给哪些账号appid</p>
                     * @param _syncTo <p>配置同步给哪些账号appid</p>
                     * 
                     */
                    void SetSyncTo(const std::vector<uint64_t>& _syncTo);

                    /**
                     * 判断参数 SyncTo 是否已赋值
                     * @return SyncTo 是否已赋值
                     * 
                     */
                    bool SyncToHasBeenSet() const;

                    /**
                     * 获取<p>标签ID</p>
                     * @return TagIds <p>标签ID</p>
                     * 
                     */
                    std::vector<uint64_t> GetTagIds() const;

                    /**
                     * 设置<p>标签ID</p>
                     * @param _tagIds <p>标签ID</p>
                     * 
                     */
                    void SetTagIds(const std::vector<uint64_t>& _tagIds);

                    /**
                     * 判断参数 TagIds 是否已赋值
                     * @return TagIds 是否已赋值
                     * 
                     */
                    bool TagIdsHasBeenSet() const;

                private:

                    /**
                     * <p>周期扫描开关（0-关闭, 1-开启）</p>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>漏洞类型</p><p>枚举值：</p><ul><li>LINUX： Linux软件漏洞</li><li>WINDOWS： Windows系统补丁</li><li>WEB_CMS： Web-CMS漏洞</li><li>APPLICATION： 应用漏洞</li><li>EMERGENCY： 应急漏洞</li></ul>
                     */
                    std::vector<std::string> m_vulCategory;
                    bool m_vulCategoryHasBeenSet;

                    /**
                     * <p>漏洞等级</p><p>枚举值：</p><ul><li>LOW： 低危</li><li>MEDIUM： 中危</li><li>HIGH： 高危</li><li>CRITICAL： 严重</li></ul>
                     */
                    std::vector<std::string> m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>扫描方式（VersionCompare: 版本对比, POC: POC检测, VersionComparePOC: 版本对比+POC检测）</p>
                     */
                    std::string m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * <p>开始时间（09:00:00）</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>结束时间（18:00:00）</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>资产范围（0-全部资产，1-自选资产，2-剔除资产，3-自动资产匹配）</p>
                     */
                    int64_t m_assetRange;
                    bool m_assetRangeHasBeenSet;

                    /**
                     * <p>周期扫描类型</p><p>枚举值：</p><ul><li>1： 每天</li><li>2： 每周</li><li>3： 每月</li></ul>
                     */
                    uint64_t m_cycleType;
                    bool m_cycleTypeHasBeenSet;

                    /**
                     * <p>扫描超时时长</p><p>单位：秒</p>
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>周期值</p><p>取值范围：[1, 31]</p><p>单位：周几或者每月几号</p>
                     */
                    std::vector<uint64_t> m_cycleValue;
                    bool m_cycleValueHasBeenSet;

                    /**
                     * <p>集团账号的成员id</p>
                     */
                    std::vector<std::string> m_memberId;
                    bool m_memberIdHasBeenSet;

                    /**
                     * <p>资产列表（instance_id列表）</p>
                     */
                    std::vector<std::string> m_assetList;
                    bool m_assetListHasBeenSet;

                    /**
                     * <p>是否运行被同步配置 0-不允许，1-允许</p>
                     */
                    uint64_t m_allowSync;
                    bool m_allowSyncHasBeenSet;

                    /**
                     * <p>管理员账号是否开启了自动同步配置开关 0-关闭，1-开启</p>
                     */
                    uint64_t m_enableSync;
                    bool m_enableSyncHasBeenSet;

                    /**
                     * <p>配置同步给哪些账号appid</p>
                     */
                    std::vector<uint64_t> m_syncTo;
                    bool m_syncToHasBeenSet;

                    /**
                     * <p>标签ID</p>
                     */
                    std::vector<uint64_t> m_tagIds;
                    bool m_tagIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_MODIFYVULSCANPERIODICREQUEST_H_
