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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULSCANTASK_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULSCANTASK_H_

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
                * 漏洞扫描任务记录
                */
                class VulScanTask : public AbstractModel
                {
                public:
                    VulScanTask();
                    ~VulScanTask() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>任务id</p>
                     * @return Id <p>任务id</p>
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置<p>任务id</p>
                     * @param _id <p>任务id</p>
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取<p>任务id</p>
                     * @return JobId <p>任务id</p>
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置<p>任务id</p>
                     * @param _jobId <p>任务id</p>
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取<p>任务所属用户appid</p>
                     * @return AppId <p>任务所属用户appid</p>
                     * 
                     */
                    uint64_t GetAppId() const;

                    /**
                     * 设置<p>任务所属用户appid</p>
                     * @param _appId <p>任务所属用户appid</p>
                     * 
                     */
                    void SetAppId(const uint64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>任务类型</p><p>枚举值：</p><ul><li>0： 一键扫描</li><li>1： 周期扫描</li></ul>
                     * @return TaskType <p>任务类型</p><p>枚举值：</p><ul><li>0： 一键扫描</li><li>1： 周期扫描</li></ul>
                     * 
                     */
                    uint64_t GetTaskType() const;

                    /**
                     * 设置<p>任务类型</p><p>枚举值：</p><ul><li>0： 一键扫描</li><li>1： 周期扫描</li></ul>
                     * @param _taskType <p>任务类型</p><p>枚举值：</p><ul><li>0： 一键扫描</li><li>1： 周期扫描</li></ul>
                     * 
                     */
                    void SetTaskType(const uint64_t& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>漏洞分类</p><p>枚举值：</p><ul><li>LINUX： Linux软件漏洞</li><li>WINDOWS： Windows系统补丁</li><li>WEB_CMS： Web-CMS漏洞</li><li>APPLICATION： 应用漏洞</li><li>EMERGENCY： 应急漏洞</li></ul>
                     * @return VulCategory <p>漏洞分类</p><p>枚举值：</p><ul><li>LINUX： Linux软件漏洞</li><li>WINDOWS： Windows系统补丁</li><li>WEB_CMS： Web-CMS漏洞</li><li>APPLICATION： 应用漏洞</li><li>EMERGENCY： 应急漏洞</li></ul>
                     * 
                     */
                    std::vector<std::string> GetVulCategory() const;

                    /**
                     * 设置<p>漏洞分类</p><p>枚举值：</p><ul><li>LINUX： Linux软件漏洞</li><li>WINDOWS： Windows系统补丁</li><li>WEB_CMS： Web-CMS漏洞</li><li>APPLICATION： 应用漏洞</li><li>EMERGENCY： 应急漏洞</li></ul>
                     * @param _vulCategory <p>漏洞分类</p><p>枚举值：</p><ul><li>LINUX： Linux软件漏洞</li><li>WINDOWS： Windows系统补丁</li><li>WEB_CMS： Web-CMS漏洞</li><li>APPLICATION： 应用漏洞</li><li>EMERGENCY： 应急漏洞</li></ul>
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
                     * 获取<p>漏洞名称</p>
                     * @return VulName <p>漏洞名称</p>
                     * 
                     */
                    std::vector<std::string> GetVulName() const;

                    /**
                     * 设置<p>漏洞名称</p>
                     * @param _vulName <p>漏洞名称</p>
                     * 
                     */
                    void SetVulName(const std::vector<std::string>& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取<p>kb名称</p>
                     * @return KbName <p>kb名称</p>
                     * 
                     */
                    std::vector<std::string> GetKbName() const;

                    /**
                     * 设置<p>kb名称</p>
                     * @param _kbName <p>kb名称</p>
                     * 
                     */
                    void SetKbName(const std::vector<std::string>& _kbName);

                    /**
                     * 判断参数 KbName 是否已赋值
                     * @return KbName 是否已赋值
                     * 
                     */
                    bool KbNameHasBeenSet() const;

                    /**
                     * 获取<p>是否应急漏洞</p><p>枚举值：</p><ul><li>0： 否</li><li>1： 是</li></ul>
                     * @return Emergency <p>是否应急漏洞</p><p>枚举值：</p><ul><li>0： 否</li><li>1： 是</li></ul>
                     * 
                     */
                    uint64_t GetEmergency() const;

                    /**
                     * 设置<p>是否应急漏洞</p><p>枚举值：</p><ul><li>0： 否</li><li>1： 是</li></ul>
                     * @param _emergency <p>是否应急漏洞</p><p>枚举值：</p><ul><li>0： 否</li><li>1： 是</li></ul>
                     * 
                     */
                    void SetEmergency(const uint64_t& _emergency);

                    /**
                     * 判断参数 Emergency 是否已赋值
                     * @return Emergency 是否已赋值
                     * 
                     */
                    bool EmergencyHasBeenSet() const;

                    /**
                     * 获取<p>扫描账号数量（0: 全部账号, others: 账号数量）</p>
                     * @return Account <p>扫描账号数量（0: 全部账号, others: 账号数量）</p>
                     * 
                     */
                    uint64_t GetAccount() const;

                    /**
                     * 设置<p>扫描账号数量（0: 全部账号, others: 账号数量）</p>
                     * @param _account <p>扫描账号数量（0: 全部账号, others: 账号数量）</p>
                     * 
                     */
                    void SetAccount(const uint64_t& _account);

                    /**
                     * 判断参数 Account 是否已赋值
                     * @return Account 是否已赋值
                     * 
                     */
                    bool AccountHasBeenSet() const;

                    /**
                     * 获取<p>扫描开始时间</p>
                     * @return StartTime <p>扫描开始时间</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>扫描开始时间</p>
                     * @param _startTime <p>扫描开始时间</p>
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
                     * 获取<p>扫描结束时间</p>
                     * @return EndTime <p>扫描结束时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>扫描结束时间</p>
                     * @param _endTime <p>扫描结束时间</p>
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
                     * 获取<p>扫描状态（INITIALIZING: 初始化, SCANNING: 扫描中, SUCCESS: 扫描成功,  TOTAL_FAIL: 全部扫描失败）</p><p>枚举值：</p><ul><li>STOPPED： 已停止</li></ul>
                     * @return Status <p>扫描状态（INITIALIZING: 初始化, SCANNING: 扫描中, SUCCESS: 扫描成功,  TOTAL_FAIL: 全部扫描失败）</p><p>枚举值：</p><ul><li>STOPPED： 已停止</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>扫描状态（INITIALIZING: 初始化, SCANNING: 扫描中, SUCCESS: 扫描成功,  TOTAL_FAIL: 全部扫描失败）</p><p>枚举值：</p><ul><li>STOPPED： 已停止</li></ul>
                     * @param _status <p>扫描状态（INITIALIZING: 初始化, SCANNING: 扫描中, SUCCESS: 扫描成功,  TOTAL_FAIL: 全部扫描失败）</p><p>枚举值：</p><ul><li>STOPPED： 已停止</li></ul>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取<p>漏洞威胁等级</p><p>枚举值：</p><ul><li>LOW： 低危</li><li>MEDIUM： 中危</li><li>HIGH： 高危</li><li>CRITICAL： 严重</li></ul>
                     * @return Level <p>漏洞威胁等级</p><p>枚举值：</p><ul><li>LOW： 低危</li><li>MEDIUM： 中危</li><li>HIGH： 高危</li><li>CRITICAL： 严重</li></ul>
                     * 
                     */
                    std::vector<std::string> GetLevel() const;

                    /**
                     * 设置<p>漏洞威胁等级</p><p>枚举值：</p><ul><li>LOW： 低危</li><li>MEDIUM： 中危</li><li>HIGH： 高危</li><li>CRITICAL： 严重</li></ul>
                     * @param _level <p>漏洞威胁等级</p><p>枚举值：</p><ul><li>LOW： 低危</li><li>MEDIUM： 中危</li><li>HIGH： 高危</li><li>CRITICAL： 严重</li></ul>
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
                     * 获取<p>扫描方式</p><p>枚举值：</p><ul><li>VersionCompare： 版本对比</li><li>POC： POC检测</li><li>VersionComparePOC： 版本对比+POC检测</li></ul>
                     * @return Method <p>扫描方式</p><p>枚举值：</p><ul><li>VersionCompare： 版本对比</li><li>POC： POC检测</li><li>VersionComparePOC： 版本对比+POC检测</li></ul>
                     * 
                     */
                    std::vector<std::string> GetMethod() const;

                    /**
                     * 设置<p>扫描方式</p><p>枚举值：</p><ul><li>VersionCompare： 版本对比</li><li>POC： POC检测</li><li>VersionComparePOC： 版本对比+POC检测</li></ul>
                     * @param _method <p>扫描方式</p><p>枚举值：</p><ul><li>VersionCompare： 版本对比</li><li>POC： POC检测</li><li>VersionComparePOC： 版本对比+POC检测</li></ul>
                     * 
                     */
                    void SetMethod(const std::vector<std::string>& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取<p>资产列表</p>
                     * @return AssetList <p>资产列表</p>
                     * 
                     */
                    std::vector<std::string> GetAssetList() const;

                    /**
                     * 设置<p>资产列表</p>
                     * @param _assetList <p>资产列表</p>
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
                     * 获取<p>资产范围</p><p>枚举值：</p><ul><li>0： 所有资产</li><li>1： 自选资产</li><li>2： 自选排除资产</li></ul>
                     * @return AssetRange <p>资产范围</p><p>枚举值：</p><ul><li>0： 所有资产</li><li>1： 自选资产</li><li>2： 自选排除资产</li></ul>
                     * 
                     */
                    uint64_t GetAssetRange() const;

                    /**
                     * 设置<p>资产范围</p><p>枚举值：</p><ul><li>0： 所有资产</li><li>1： 自选资产</li><li>2： 自选排除资产</li></ul>
                     * @param _assetRange <p>资产范围</p><p>枚举值：</p><ul><li>0： 所有资产</li><li>1： 自选资产</li><li>2： 自选排除资产</li></ul>
                     * 
                     */
                    void SetAssetRange(const uint64_t& _assetRange);

                    /**
                     * 判断参数 AssetRange 是否已赋值
                     * @return AssetRange 是否已赋值
                     * 
                     */
                    bool AssetRangeHasBeenSet() const;

                private:

                    /**
                     * <p>任务id</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>任务id</p>
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * <p>任务所属用户appid</p>
                     */
                    uint64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>任务类型</p><p>枚举值：</p><ul><li>0： 一键扫描</li><li>1： 周期扫描</li></ul>
                     */
                    uint64_t m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>漏洞分类</p><p>枚举值：</p><ul><li>LINUX： Linux软件漏洞</li><li>WINDOWS： Windows系统补丁</li><li>WEB_CMS： Web-CMS漏洞</li><li>APPLICATION： 应用漏洞</li><li>EMERGENCY： 应急漏洞</li></ul>
                     */
                    std::vector<std::string> m_vulCategory;
                    bool m_vulCategoryHasBeenSet;

                    /**
                     * <p>漏洞名称</p>
                     */
                    std::vector<std::string> m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * <p>kb名称</p>
                     */
                    std::vector<std::string> m_kbName;
                    bool m_kbNameHasBeenSet;

                    /**
                     * <p>是否应急漏洞</p><p>枚举值：</p><ul><li>0： 否</li><li>1： 是</li></ul>
                     */
                    uint64_t m_emergency;
                    bool m_emergencyHasBeenSet;

                    /**
                     * <p>扫描账号数量（0: 全部账号, others: 账号数量）</p>
                     */
                    uint64_t m_account;
                    bool m_accountHasBeenSet;

                    /**
                     * <p>扫描开始时间</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>扫描结束时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>扫描状态（INITIALIZING: 初始化, SCANNING: 扫描中, SUCCESS: 扫描成功,  TOTAL_FAIL: 全部扫描失败）</p><p>枚举值：</p><ul><li>STOPPED： 已停止</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>漏洞威胁等级</p><p>枚举值：</p><ul><li>LOW： 低危</li><li>MEDIUM： 中危</li><li>HIGH： 高危</li><li>CRITICAL： 严重</li></ul>
                     */
                    std::vector<std::string> m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * <p>扫描方式</p><p>枚举值：</p><ul><li>VersionCompare： 版本对比</li><li>POC： POC检测</li><li>VersionComparePOC： 版本对比+POC检测</li></ul>
                     */
                    std::vector<std::string> m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * <p>资产列表</p>
                     */
                    std::vector<std::string> m_assetList;
                    bool m_assetListHasBeenSet;

                    /**
                     * <p>资产范围</p><p>枚举值：</p><ul><li>0： 所有资产</li><li>1： 自选资产</li><li>2： 自选排除资产</li></ul>
                     */
                    uint64_t m_assetRange;
                    bool m_assetRangeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULSCANTASK_H_
