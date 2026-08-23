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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYSCANTASKINFO_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYSCANTASKINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ImageScanScheduleConfig.h>
#include <tencentcloud/csip/v20221121/model/ImageScanAssetTarget.h>
#include <tencentcloud/csip/v20221121/model/ImageScanRegistryFilter.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 镜像仓库扫描任务信息
                */
                class ImageRegistryScanTaskInfo : public AbstractModel
                {
                public:
                    ImageRegistryScanTaskInfo();
                    ~ImageRegistryScanTaskInfo() = default;
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
                     * 获取<p>定时扫描任务id</p>
                     * @return TimedScanConfigId <p>定时扫描任务id</p>
                     * 
                     */
                    uint64_t GetTimedScanConfigId() const;

                    /**
                     * 设置<p>定时扫描任务id</p>
                     * @param _timedScanConfigId <p>定时扫描任务id</p>
                     * 
                     */
                    void SetTimedScanConfigId(const uint64_t& _timedScanConfigId);

                    /**
                     * 判断参数 TimedScanConfigId 是否已赋值
                     * @return TimedScanConfigId 是否已赋值
                     * 
                     */
                    bool TimedScanConfigIdHasBeenSet() const;

                    /**
                     * 获取<p>自动匹配模式</p><p>枚举值：</p><ul><li>BY_CLUSTER： 按集群选择</li><li>LATEST_VERSION： 仅扫描最新版本镜像</li><li>LOCAL_IMAGE： 本地镜像</li></ul>
                     * @return AutoMatchMode <p>自动匹配模式</p><p>枚举值：</p><ul><li>BY_CLUSTER： 按集群选择</li><li>LATEST_VERSION： 仅扫描最新版本镜像</li><li>LOCAL_IMAGE： 本地镜像</li></ul>
                     * 
                     */
                    std::vector<std::string> GetAutoMatchMode() const;

                    /**
                     * 设置<p>自动匹配模式</p><p>枚举值：</p><ul><li>BY_CLUSTER： 按集群选择</li><li>LATEST_VERSION： 仅扫描最新版本镜像</li><li>LOCAL_IMAGE： 本地镜像</li></ul>
                     * @param _autoMatchMode <p>自动匹配模式</p><p>枚举值：</p><ul><li>BY_CLUSTER： 按集群选择</li><li>LATEST_VERSION： 仅扫描最新版本镜像</li><li>LOCAL_IMAGE： 本地镜像</li></ul>
                     * 
                     */
                    void SetAutoMatchMode(const std::vector<std::string>& _autoMatchMode);

                    /**
                     * 判断参数 AutoMatchMode 是否已赋值
                     * @return AutoMatchMode 是否已赋值
                     * 
                     */
                    bool AutoMatchModeHasBeenSet() const;

                    /**
                     * 获取<p>扫描资产模式</p><p>枚举值：</p><ul><li>ALL： 全部</li><li>MANUAL： 手动选择</li><li>AUTO_MATCH： 自动匹配</li></ul>
                     * @return ScopeMode <p>扫描资产模式</p><p>枚举值：</p><ul><li>ALL： 全部</li><li>MANUAL： 手动选择</li><li>AUTO_MATCH： 自动匹配</li></ul>
                     * 
                     */
                    std::string GetScopeMode() const;

                    /**
                     * 设置<p>扫描资产模式</p><p>枚举值：</p><ul><li>ALL： 全部</li><li>MANUAL： 手动选择</li><li>AUTO_MATCH： 自动匹配</li></ul>
                     * @param _scopeMode <p>扫描资产模式</p><p>枚举值：</p><ul><li>ALL： 全部</li><li>MANUAL： 手动选择</li><li>AUTO_MATCH： 自动匹配</li></ul>
                     * 
                     */
                    void SetScopeMode(const std::string& _scopeMode);

                    /**
                     * 判断参数 ScopeMode 是否已赋值
                     * @return ScopeMode 是否已赋值
                     * 
                     */
                    bool ScopeModeHasBeenSet() const;

                    /**
                     * 获取<p>任务触发类型</p><p>枚举值：</p><ul><li>TIMED： 定时任务</li><li>MANUAL： 手动触发</li></ul>
                     * @return TriggerType <p>任务触发类型</p><p>枚举值：</p><ul><li>TIMED： 定时任务</li><li>MANUAL： 手动触发</li></ul>
                     * 
                     */
                    std::string GetTriggerType() const;

                    /**
                     * 设置<p>任务触发类型</p><p>枚举值：</p><ul><li>TIMED： 定时任务</li><li>MANUAL： 手动触发</li></ul>
                     * @param _triggerType <p>任务触发类型</p><p>枚举值：</p><ul><li>TIMED： 定时任务</li><li>MANUAL： 手动触发</li></ul>
                     * 
                     */
                    void SetTriggerType(const std::string& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取<p>扫描类别</p><p>枚举值：</p><ul><li>CVE： 漏洞</li><li>RISK： 风险</li><li>VIRUS： 木马</li></ul>
                     * @return ScanType <p>扫描类别</p><p>枚举值：</p><ul><li>CVE： 漏洞</li><li>RISK： 风险</li><li>VIRUS： 木马</li></ul>
                     * 
                     */
                    std::vector<std::string> GetScanType() const;

                    /**
                     * 设置<p>扫描类别</p><p>枚举值：</p><ul><li>CVE： 漏洞</li><li>RISK： 风险</li><li>VIRUS： 木马</li></ul>
                     * @param _scanType <p>扫描类别</p><p>枚举值：</p><ul><li>CVE： 漏洞</li><li>RISK： 风险</li><li>VIRUS： 木马</li></ul>
                     * 
                     */
                    void SetScanType(const std::vector<std::string>& _scanType);

                    /**
                     * 判断参数 ScanType 是否已赋值
                     * @return ScanType 是否已赋值
                     * 
                     */
                    bool ScanTypeHasBeenSet() const;

                    /**
                     * 获取<p>扫描的镜像id</p>
                     * @return ImageIds <p>扫描的镜像id</p>
                     * 
                     */
                    std::vector<uint64_t> GetImageIds() const;

                    /**
                     * 设置<p>扫描的镜像id</p>
                     * @param _imageIds <p>扫描的镜像id</p>
                     * 
                     */
                    void SetImageIds(const std::vector<uint64_t>& _imageIds);

                    /**
                     * 判断参数 ImageIds 是否已赋值
                     * @return ImageIds 是否已赋值
                     * 
                     */
                    bool ImageIdsHasBeenSet() const;

                    /**
                     * 获取<p>任务状态</p><p>枚举值：</p><ul><li>RUNNING： 执行中</li><li>SUCCESS： 任务成功</li><li>TIMEOUT： 任务超时</li><li>FAILED： 任务失败</li><li>CANCELLED： 已取消</li></ul>
                     * @return Status <p>任务状态</p><p>枚举值：</p><ul><li>RUNNING： 执行中</li><li>SUCCESS： 任务成功</li><li>TIMEOUT： 任务超时</li><li>FAILED： 任务失败</li><li>CANCELLED： 已取消</li></ul>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置<p>任务状态</p><p>枚举值：</p><ul><li>RUNNING： 执行中</li><li>SUCCESS： 任务成功</li><li>TIMEOUT： 任务超时</li><li>FAILED： 任务失败</li><li>CANCELLED： 已取消</li></ul>
                     * @param _status <p>任务状态</p><p>枚举值：</p><ul><li>RUNNING： 执行中</li><li>SUCCESS： 任务成功</li><li>TIMEOUT： 任务超时</li><li>FAILED： 任务失败</li><li>CANCELLED： 已取消</li></ul>
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
                     * 获取<p>定时任务所属账号名</p>
                     * @return OwnerAccountName <p>定时任务所属账号名</p>
                     * 
                     */
                    std::string GetOwnerAccountName() const;

                    /**
                     * 设置<p>定时任务所属账号名</p>
                     * @param _ownerAccountName <p>定时任务所属账号名</p>
                     * 
                     */
                    void SetOwnerAccountName(const std::string& _ownerAccountName);

                    /**
                     * 判断参数 OwnerAccountName 是否已赋值
                     * @return OwnerAccountName 是否已赋值
                     * 
                     */
                    bool OwnerAccountNameHasBeenSet() const;

                    /**
                     * 获取<p>定时任务所属账号appid</p>
                     * @return OwnerAppId <p>定时任务所属账号appid</p>
                     * 
                     */
                    uint64_t GetOwnerAppId() const;

                    /**
                     * 设置<p>定时任务所属账号appid</p>
                     * @param _ownerAppId <p>定时任务所属账号appid</p>
                     * 
                     */
                    void SetOwnerAppId(const uint64_t& _ownerAppId);

                    /**
                     * 判断参数 OwnerAppId 是否已赋值
                     * @return OwnerAppId 是否已赋值
                     * 
                     */
                    bool OwnerAppIdHasBeenSet() const;

                    /**
                     * 获取<p>定时任务所属账号uin</p>
                     * @return OwnerUin <p>定时任务所属账号uin</p>
                     * 
                     */
                    std::string GetOwnerUin() const;

                    /**
                     * 设置<p>定时任务所属账号uin</p>
                     * @param _ownerUin <p>定时任务所属账号uin</p>
                     * 
                     */
                    void SetOwnerUin(const std::string& _ownerUin);

                    /**
                     * 判断参数 OwnerUin 是否已赋值
                     * @return OwnerUin 是否已赋值
                     * 
                     */
                    bool OwnerUinHasBeenSet() const;

                    /**
                     * 获取<p>扫描镜像数</p>
                     * @return ScanImageCount <p>扫描镜像数</p>
                     * 
                     */
                    uint64_t GetScanImageCount() const;

                    /**
                     * 设置<p>扫描镜像数</p>
                     * @param _scanImageCount <p>扫描镜像数</p>
                     * 
                     */
                    void SetScanImageCount(const uint64_t& _scanImageCount);

                    /**
                     * 判断参数 ScanImageCount 是否已赋值
                     * @return ScanImageCount 是否已赋值
                     * 
                     */
                    bool ScanImageCountHasBeenSet() const;

                    /**
                     * 获取<p>扫描成功镜像数</p>
                     * @return SuccessImageCount <p>扫描成功镜像数</p>
                     * 
                     */
                    uint64_t GetSuccessImageCount() const;

                    /**
                     * 设置<p>扫描成功镜像数</p>
                     * @param _successImageCount <p>扫描成功镜像数</p>
                     * 
                     */
                    void SetSuccessImageCount(const uint64_t& _successImageCount);

                    /**
                     * 判断参数 SuccessImageCount 是否已赋值
                     * @return SuccessImageCount 是否已赋值
                     * 
                     */
                    bool SuccessImageCountHasBeenSet() const;

                    /**
                     * 获取<p>扫描失败镜像数</p>
                     * @return FailureImageCount <p>扫描失败镜像数</p>
                     * 
                     */
                    uint64_t GetFailureImageCount() const;

                    /**
                     * 设置<p>扫描失败镜像数</p>
                     * @param _failureImageCount <p>扫描失败镜像数</p>
                     * 
                     */
                    void SetFailureImageCount(const uint64_t& _failureImageCount);

                    /**
                     * 判断参数 FailureImageCount 是否已赋值
                     * @return FailureImageCount 是否已赋值
                     * 
                     */
                    bool FailureImageCountHasBeenSet() const;

                    /**
                     * 获取<p>任务忽略的镜像数</p>
                     * @return IgnoredImageCount <p>任务忽略的镜像数</p>
                     * 
                     */
                    uint64_t GetIgnoredImageCount() const;

                    /**
                     * 设置<p>任务忽略的镜像数</p>
                     * @param _ignoredImageCount <p>任务忽略的镜像数</p>
                     * 
                     */
                    void SetIgnoredImageCount(const uint64_t& _ignoredImageCount);

                    /**
                     * 判断参数 IgnoredImageCount 是否已赋值
                     * @return IgnoredImageCount 是否已赋值
                     * 
                     */
                    bool IgnoredImageCountHasBeenSet() const;

                    /**
                     * 获取<p>任务被取消镜像数</p>
                     * @return CancelledImageCount <p>任务被取消镜像数</p>
                     * 
                     */
                    uint64_t GetCancelledImageCount() const;

                    /**
                     * 设置<p>任务被取消镜像数</p>
                     * @param _cancelledImageCount <p>任务被取消镜像数</p>
                     * 
                     */
                    void SetCancelledImageCount(const uint64_t& _cancelledImageCount);

                    /**
                     * 判断参数 CancelledImageCount 是否已赋值
                     * @return CancelledImageCount 是否已赋值
                     * 
                     */
                    bool CancelledImageCountHasBeenSet() const;

                    /**
                     * 获取<p>扫描启动时间</p><p>参数格式：hh:mm</p>
                     * @return ScanStartTime <p>扫描启动时间</p><p>参数格式：hh:mm</p>
                     * 
                     */
                    std::string GetScanStartTime() const;

                    /**
                     * 设置<p>扫描启动时间</p><p>参数格式：hh:mm</p>
                     * @param _scanStartTime <p>扫描启动时间</p><p>参数格式：hh:mm</p>
                     * 
                     */
                    void SetScanStartTime(const std::string& _scanStartTime);

                    /**
                     * 判断参数 ScanStartTime 是否已赋值
                     * @return ScanStartTime 是否已赋值
                     * 
                     */
                    bool ScanStartTimeHasBeenSet() const;

                    /**
                     * 获取<p>扫描停止时间</p><p>参数格式：hh:mm</p>
                     * @return ScanEndTime <p>扫描停止时间</p><p>参数格式：hh:mm</p>
                     * 
                     */
                    std::string GetScanEndTime() const;

                    /**
                     * 设置<p>扫描停止时间</p><p>参数格式：hh:mm</p>
                     * @param _scanEndTime <p>扫描停止时间</p><p>参数格式：hh:mm</p>
                     * 
                     */
                    void SetScanEndTime(const std::string& _scanEndTime);

                    /**
                     * 判断参数 ScanEndTime 是否已赋值
                     * @return ScanEndTime 是否已赋值
                     * 
                     */
                    bool ScanEndTimeHasBeenSet() const;

                    /**
                     * 获取<p>超时时间，单位秒</p>
                     * @return Timeout <p>超时时间，单位秒</p>
                     * 
                     */
                    uint64_t GetTimeout() const;

                    /**
                     * 设置<p>超时时间，单位秒</p>
                     * @param _timeout <p>超时时间，单位秒</p>
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
                     * 获取<p>任务取消原因</p>
                     * @return CancelReason <p>任务取消原因</p>
                     * 
                     */
                    std::string GetCancelReason() const;

                    /**
                     * 设置<p>任务取消原因</p>
                     * @param _cancelReason <p>任务取消原因</p>
                     * 
                     */
                    void SetCancelReason(const std::string& _cancelReason);

                    /**
                     * 判断参数 CancelReason 是否已赋值
                     * @return CancelReason 是否已赋值
                     * 
                     */
                    bool CancelReasonHasBeenSet() const;

                    /**
                     * 获取<p>任务名</p>
                     * @return Name <p>任务名</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>任务名</p>
                     * @param _name <p>任务名</p>
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取<p>扫描任务调度配置</p>
                     * @return Schedule <p>扫描任务调度配置</p>
                     * 
                     */
                    ImageScanScheduleConfig GetSchedule() const;

                    /**
                     * 设置<p>扫描任务调度配置</p>
                     * @param _schedule <p>扫描任务调度配置</p>
                     * 
                     */
                    void SetSchedule(const ImageScanScheduleConfig& _schedule);

                    /**
                     * 判断参数 Schedule 是否已赋值
                     * @return Schedule 是否已赋值
                     * 
                     */
                    bool ScheduleHasBeenSet() const;

                    /**
                     * 获取<p>扫描任务目标</p>
                     * @return Target <p>扫描任务目标</p>
                     * 
                     */
                    ImageScanAssetTarget GetTarget() const;

                    /**
                     * 设置<p>扫描任务目标</p>
                     * @param _target <p>扫描任务目标</p>
                     * 
                     */
                    void SetTarget(const ImageScanAssetTarget& _target);

                    /**
                     * 判断参数 Target 是否已赋值
                     * @return Target 是否已赋值
                     * 
                     */
                    bool TargetHasBeenSet() const;

                    /**
                     * 获取<p>扫描任务过滤配置</p>
                     * @return Filter <p>扫描任务过滤配置</p>
                     * 
                     */
                    ImageScanRegistryFilter GetFilter() const;

                    /**
                     * 设置<p>扫描任务过滤配置</p>
                     * @param _filter <p>扫描任务过滤配置</p>
                     * 
                     */
                    void SetFilter(const ImageScanRegistryFilter& _filter);

                    /**
                     * 判断参数 Filter 是否已赋值
                     * @return Filter 是否已赋值
                     * 
                     */
                    bool FilterHasBeenSet() const;

                private:

                    /**
                     * <p>任务id</p>
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * <p>定时扫描任务id</p>
                     */
                    uint64_t m_timedScanConfigId;
                    bool m_timedScanConfigIdHasBeenSet;

                    /**
                     * <p>自动匹配模式</p><p>枚举值：</p><ul><li>BY_CLUSTER： 按集群选择</li><li>LATEST_VERSION： 仅扫描最新版本镜像</li><li>LOCAL_IMAGE： 本地镜像</li></ul>
                     */
                    std::vector<std::string> m_autoMatchMode;
                    bool m_autoMatchModeHasBeenSet;

                    /**
                     * <p>扫描资产模式</p><p>枚举值：</p><ul><li>ALL： 全部</li><li>MANUAL： 手动选择</li><li>AUTO_MATCH： 自动匹配</li></ul>
                     */
                    std::string m_scopeMode;
                    bool m_scopeModeHasBeenSet;

                    /**
                     * <p>任务触发类型</p><p>枚举值：</p><ul><li>TIMED： 定时任务</li><li>MANUAL： 手动触发</li></ul>
                     */
                    std::string m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * <p>扫描类别</p><p>枚举值：</p><ul><li>CVE： 漏洞</li><li>RISK： 风险</li><li>VIRUS： 木马</li></ul>
                     */
                    std::vector<std::string> m_scanType;
                    bool m_scanTypeHasBeenSet;

                    /**
                     * <p>扫描的镜像id</p>
                     */
                    std::vector<uint64_t> m_imageIds;
                    bool m_imageIdsHasBeenSet;

                    /**
                     * <p>任务状态</p><p>枚举值：</p><ul><li>RUNNING： 执行中</li><li>SUCCESS： 任务成功</li><li>TIMEOUT： 任务超时</li><li>FAILED： 任务失败</li><li>CANCELLED： 已取消</li></ul>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * <p>定时任务所属账号名</p>
                     */
                    std::string m_ownerAccountName;
                    bool m_ownerAccountNameHasBeenSet;

                    /**
                     * <p>定时任务所属账号appid</p>
                     */
                    uint64_t m_ownerAppId;
                    bool m_ownerAppIdHasBeenSet;

                    /**
                     * <p>定时任务所属账号uin</p>
                     */
                    std::string m_ownerUin;
                    bool m_ownerUinHasBeenSet;

                    /**
                     * <p>扫描镜像数</p>
                     */
                    uint64_t m_scanImageCount;
                    bool m_scanImageCountHasBeenSet;

                    /**
                     * <p>扫描成功镜像数</p>
                     */
                    uint64_t m_successImageCount;
                    bool m_successImageCountHasBeenSet;

                    /**
                     * <p>扫描失败镜像数</p>
                     */
                    uint64_t m_failureImageCount;
                    bool m_failureImageCountHasBeenSet;

                    /**
                     * <p>任务忽略的镜像数</p>
                     */
                    uint64_t m_ignoredImageCount;
                    bool m_ignoredImageCountHasBeenSet;

                    /**
                     * <p>任务被取消镜像数</p>
                     */
                    uint64_t m_cancelledImageCount;
                    bool m_cancelledImageCountHasBeenSet;

                    /**
                     * <p>扫描启动时间</p><p>参数格式：hh:mm</p>
                     */
                    std::string m_scanStartTime;
                    bool m_scanStartTimeHasBeenSet;

                    /**
                     * <p>扫描停止时间</p><p>参数格式：hh:mm</p>
                     */
                    std::string m_scanEndTime;
                    bool m_scanEndTimeHasBeenSet;

                    /**
                     * <p>超时时间，单位秒</p>
                     */
                    uint64_t m_timeout;
                    bool m_timeoutHasBeenSet;

                    /**
                     * <p>任务取消原因</p>
                     */
                    std::string m_cancelReason;
                    bool m_cancelReasonHasBeenSet;

                    /**
                     * <p>任务名</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>扫描任务调度配置</p>
                     */
                    ImageScanScheduleConfig m_schedule;
                    bool m_scheduleHasBeenSet;

                    /**
                     * <p>扫描任务目标</p>
                     */
                    ImageScanAssetTarget m_target;
                    bool m_targetHasBeenSet;

                    /**
                     * <p>扫描任务过滤配置</p>
                     */
                    ImageScanRegistryFilter m_filter;
                    bool m_filterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_IMAGEREGISTRYSCANTASKINFO_H_
