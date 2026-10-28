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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_INTELLIGENCEDESC_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_INTELLIGENCEDESC_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * 漏洞情报详情
                */
                class IntelligenceDesc : public AbstractModel
                {
                public:
                    IntelligenceDesc();
                    ~IntelligenceDesc() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>情报ID</p>
                     * @return VulId <p>情报ID</p>
                     * 
                     */
                    std::string GetVulId() const;

                    /**
                     * 设置<p>情报ID</p>
                     * @param _vulId <p>情报ID</p>
                     * 
                     */
                    void SetVulId(const std::string& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取<p>情报名称</p>
                     * @return VulName <p>情报名称</p>
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置<p>情报名称</p>
                     * @param _vulName <p>情报名称</p>
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
                     * 获取<p>情报概述</p>
                     * @return VulOverview <p>情报概述</p>
                     * 
                     */
                    std::string GetVulOverview() const;

                    /**
                     * 设置<p>情报概述</p>
                     * @param _vulOverview <p>情报概述</p>
                     * 
                     */
                    void SetVulOverview(const std::string& _vulOverview);

                    /**
                     * 判断参数 VulOverview 是否已赋值
                     * @return VulOverview 是否已赋值
                     * 
                     */
                    bool VulOverviewHasBeenSet() const;

                    /**
                     * 获取<p>录入时间</p>
                     * @return InsertTime <p>录入时间</p>
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置<p>录入时间</p>
                     * @param _insertTime <p>录入时间</p>
                     * 
                     */
                    void SetInsertTime(const std::string& _insertTime);

                    /**
                     * 判断参数 InsertTime 是否已赋值
                     * @return InsertTime 是否已赋值
                     * 
                     */
                    bool InsertTimeHasBeenSet() const;

                    /**
                     * 获取<p>漏洞风险等级 1：低风险，2：中风险，3：高风险</p>
                     * @return RiskLevel <p>漏洞风险等级 1：低风险，2：中风险，3：高风险</p>
                     * 
                     */
                    int64_t GetRiskLevel() const;

                    /**
                     * 设置<p>漏洞风险等级 1：低风险，2：中风险，3：高风险</p>
                     * @param _riskLevel <p>漏洞风险等级 1：低风险，2：中风险，3：高风险</p>
                     * 
                     */
                    void SetRiskLevel(const int64_t& _riskLevel);

                    /**
                     * 判断参数 RiskLevel 是否已赋值
                     * @return RiskLevel 是否已赋值
                     * 
                     */
                    bool RiskLevelHasBeenSet() const;

                    /**
                     * 获取<p>标签</p>
                     * @return Tags <p>标签</p>
                     * 
                     */
                    std::string GetTags() const;

                    /**
                     * 设置<p>标签</p>
                     * @param _tags <p>标签</p>
                     * 
                     */
                    void SetTags(const std::string& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取<p>关联组件</p>
                     * @return VulComponents <p>关联组件</p>
                     * 
                     */
                    std::string GetVulComponents() const;

                    /**
                     * 设置<p>关联组件</p>
                     * @param _vulComponents <p>关联组件</p>
                     * 
                     */
                    void SetVulComponents(const std::string& _vulComponents);

                    /**
                     * 判断参数 VulComponents 是否已赋值
                     * @return VulComponents 是否已赋值
                     * 
                     */
                    bool VulComponentsHasBeenSet() const;

                    /**
                     * 获取<p>相关指纹数量</p>
                     * @return BannerCount <p>相关指纹数量</p>
                     * 
                     */
                    int64_t GetBannerCount() const;

                    /**
                     * 设置<p>相关指纹数量</p>
                     * @param _bannerCount <p>相关指纹数量</p>
                     * 
                     */
                    void SetBannerCount(const int64_t& _bannerCount);

                    /**
                     * 判断参数 BannerCount 是否已赋值
                     * @return BannerCount 是否已赋值
                     * 
                     */
                    bool BannerCountHasBeenSet() const;

                    /**
                     * 获取<p>漏洞资产数量</p>
                     * @return VulAssetCount <p>漏洞资产数量</p>
                     * 
                     */
                    int64_t GetVulAssetCount() const;

                    /**
                     * 设置<p>漏洞资产数量</p>
                     * @param _vulAssetCount <p>漏洞资产数量</p>
                     * 
                     */
                    void SetVulAssetCount(const int64_t& _vulAssetCount);

                    /**
                     * 判断参数 VulAssetCount 是否已赋值
                     * @return VulAssetCount 是否已赋值
                     * 
                     */
                    bool VulAssetCountHasBeenSet() const;

                    /**
                     * 获取<p>最新任务状态:todo/doing/done，如果为空表示没有任务</p>
                     * @return LastTaskStatus <p>最新任务状态:todo/doing/done，如果为空表示没有任务</p>
                     * 
                     */
                    std::string GetLastTaskStatus() const;

                    /**
                     * 设置<p>最新任务状态:todo/doing/done，如果为空表示没有任务</p>
                     * @param _lastTaskStatus <p>最新任务状态:todo/doing/done，如果为空表示没有任务</p>
                     * 
                     */
                    void SetLastTaskStatus(const std::string& _lastTaskStatus);

                    /**
                     * 判断参数 LastTaskStatus 是否已赋值
                     * @return LastTaskStatus 是否已赋值
                     * 
                     */
                    bool LastTaskStatusHasBeenSet() const;

                    /**
                     * 获取<p>任务id</p>
                     * @return LastTaskInstanceId <p>任务id</p>
                     * 
                     */
                    std::string GetLastTaskInstanceId() const;

                    /**
                     * 设置<p>任务id</p>
                     * @param _lastTaskInstanceId <p>任务id</p>
                     * 
                     */
                    void SetLastTaskInstanceId(const std::string& _lastTaskInstanceId);

                    /**
                     * 判断参数 LastTaskInstanceId 是否已赋值
                     * @return LastTaskInstanceId 是否已赋值
                     * 
                     */
                    bool LastTaskInstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>xscan指纹插件id</p>
                     * @return XscanBannerPluginId <p>xscan指纹插件id</p>
                     * 
                     */
                    std::string GetXscanBannerPluginId() const;

                    /**
                     * 设置<p>xscan指纹插件id</p>
                     * @param _xscanBannerPluginId <p>xscan指纹插件id</p>
                     * 
                     */
                    void SetXscanBannerPluginId(const std::string& _xscanBannerPluginId);

                    /**
                     * 判断参数 XscanBannerPluginId 是否已赋值
                     * @return XscanBannerPluginId 是否已赋值
                     * 
                     */
                    bool XscanBannerPluginIdHasBeenSet() const;

                    /**
                     * 获取<p>xscan poc插件id</p>
                     * @return XscanPocPluginId <p>xscan poc插件id</p>
                     * 
                     */
                    std::string GetXscanPocPluginId() const;

                    /**
                     * 设置<p>xscan poc插件id</p>
                     * @param _xscanPocPluginId <p>xscan poc插件id</p>
                     * 
                     */
                    void SetXscanPocPluginId(const std::string& _xscanPocPluginId);

                    /**
                     * 判断参数 XscanPocPluginId 是否已赋值
                     * @return XscanPocPluginId 是否已赋值
                     * 
                     */
                    bool XscanPocPluginIdHasBeenSet() const;

                    /**
                     * 获取<p>上一次扫描时间</p>
                     * @return LastScanTime <p>上一次扫描时间</p>
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置<p>上一次扫描时间</p>
                     * @param _lastScanTime <p>上一次扫描时间</p>
                     * 
                     */
                    void SetLastScanTime(const std::string& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     * 
                     */
                    bool LastScanTimeHasBeenSet() const;

                private:

                    /**
                     * <p>情报ID</p>
                     */
                    std::string m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * <p>情报名称</p>
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * <p>情报概述</p>
                     */
                    std::string m_vulOverview;
                    bool m_vulOverviewHasBeenSet;

                    /**
                     * <p>录入时间</p>
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * <p>漏洞风险等级 1：低风险，2：中风险，3：高风险</p>
                     */
                    int64_t m_riskLevel;
                    bool m_riskLevelHasBeenSet;

                    /**
                     * <p>标签</p>
                     */
                    std::string m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * <p>关联组件</p>
                     */
                    std::string m_vulComponents;
                    bool m_vulComponentsHasBeenSet;

                    /**
                     * <p>相关指纹数量</p>
                     */
                    int64_t m_bannerCount;
                    bool m_bannerCountHasBeenSet;

                    /**
                     * <p>漏洞资产数量</p>
                     */
                    int64_t m_vulAssetCount;
                    bool m_vulAssetCountHasBeenSet;

                    /**
                     * <p>最新任务状态:todo/doing/done，如果为空表示没有任务</p>
                     */
                    std::string m_lastTaskStatus;
                    bool m_lastTaskStatusHasBeenSet;

                    /**
                     * <p>任务id</p>
                     */
                    std::string m_lastTaskInstanceId;
                    bool m_lastTaskInstanceIdHasBeenSet;

                    /**
                     * <p>xscan指纹插件id</p>
                     */
                    std::string m_xscanBannerPluginId;
                    bool m_xscanBannerPluginIdHasBeenSet;

                    /**
                     * <p>xscan poc插件id</p>
                     */
                    std::string m_xscanPocPluginId;
                    bool m_xscanPocPluginIdHasBeenSet;

                    /**
                     * <p>上一次扫描时间</p>
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_INTELLIGENCEDESC_H_
