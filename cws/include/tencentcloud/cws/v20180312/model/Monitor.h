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

#ifndef TENCENTCLOUD_CWS_V20180312_MODEL_MONITOR_H_
#define TENCENTCLOUD_CWS_V20180312_MODEL_MONITOR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cws
    {
        namespace V20180312
        {
            namespace Model
            {
                /**
                * 监控任务基础数据
                */
                class Monitor : public AbstractModel
                {
                public:
                    Monitor();
                    ~Monitor() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取监控任务ID。
                     * @return Id 监控任务ID。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置监控任务ID。
                     * @param _id 监控任务ID。
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
                     * 获取监控名称。
                     * @return Name 监控名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置监控名称。
                     * @param _name 监控名称。
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
                     * 获取监测状态：1-监测中；2-暂停监测。
                     * @return MonitorStatus 监测状态：1-监测中；2-暂停监测。
                     * 
                     */
                    uint64_t GetMonitorStatus() const;

                    /**
                     * 设置监测状态：1-监测中；2-暂停监测。
                     * @param _monitorStatus 监测状态：1-监测中；2-暂停监测。
                     * 
                     */
                    void SetMonitorStatus(const uint64_t& _monitorStatus);

                    /**
                     * 判断参数 MonitorStatus 是否已赋值
                     * @return MonitorStatus 是否已赋值
                     * 
                     */
                    bool MonitorStatusHasBeenSet() const;

                    /**
                     * 获取监测模式，normal-正常扫描；deep-深度扫描。
                     * @return ScannerType 监测模式，normal-正常扫描；deep-深度扫描。
                     * 
                     */
                    std::string GetScannerType() const;

                    /**
                     * 设置监测模式，normal-正常扫描；deep-深度扫描。
                     * @param _scannerType 监测模式，normal-正常扫描；deep-深度扫描。
                     * 
                     */
                    void SetScannerType(const std::string& _scannerType);

                    /**
                     * 判断参数 ScannerType 是否已赋值
                     * @return ScannerType 是否已赋值
                     * 
                     */
                    bool ScannerTypeHasBeenSet() const;

                    /**
                     * 获取扫描周期，单位小时，每X小时执行一次。
                     * @return Crontab 扫描周期，单位小时，每X小时执行一次。
                     * 
                     */
                    uint64_t GetCrontab() const;

                    /**
                     * 设置扫描周期，单位小时，每X小时执行一次。
                     * @param _crontab 扫描周期，单位小时，每X小时执行一次。
                     * 
                     */
                    void SetCrontab(const uint64_t& _crontab);

                    /**
                     * 判断参数 Crontab 是否已赋值
                     * @return Crontab 是否已赋值
                     * 
                     */
                    bool CrontabHasBeenSet() const;

                    /**
                     * 获取指定扫描类型，3位数每位依次表示：扫描Web漏洞、扫描系统漏洞、扫描系统端口。
                     * @return IncludedVulsTypes 指定扫描类型，3位数每位依次表示：扫描Web漏洞、扫描系统漏洞、扫描系统端口。
                     * 
                     */
                    std::string GetIncludedVulsTypes() const;

                    /**
                     * 设置指定扫描类型，3位数每位依次表示：扫描Web漏洞、扫描系统漏洞、扫描系统端口。
                     * @param _includedVulsTypes 指定扫描类型，3位数每位依次表示：扫描Web漏洞、扫描系统漏洞、扫描系统端口。
                     * 
                     */
                    void SetIncludedVulsTypes(const std::string& _includedVulsTypes);

                    /**
                     * 判断参数 IncludedVulsTypes 是否已赋值
                     * @return IncludedVulsTypes 是否已赋值
                     * 
                     */
                    bool IncludedVulsTypesHasBeenSet() const;

                    /**
                     * 获取速率限制，每秒发送X个HTTP请求。
                     * @return RateLimit 速率限制，每秒发送X个HTTP请求。
                     * 
                     */
                    uint64_t GetRateLimit() const;

                    /**
                     * 设置速率限制，每秒发送X个HTTP请求。
                     * @param _rateLimit 速率限制，每秒发送X个HTTP请求。
                     * 
                     */
                    void SetRateLimit(const uint64_t& _rateLimit);

                    /**
                     * 判断参数 RateLimit 是否已赋值
                     * @return RateLimit 是否已赋值
                     * 
                     */
                    bool RateLimitHasBeenSet() const;

                    /**
                     * 获取首次扫描开始时间。
                     * @return FirstScanStartTime 首次扫描开始时间。
                     * 
                     */
                    std::string GetFirstScanStartTime() const;

                    /**
                     * 设置首次扫描开始时间。
                     * @param _firstScanStartTime 首次扫描开始时间。
                     * 
                     */
                    void SetFirstScanStartTime(const std::string& _firstScanStartTime);

                    /**
                     * 判断参数 FirstScanStartTime 是否已赋值
                     * @return FirstScanStartTime 是否已赋值
                     * 
                     */
                    bool FirstScanStartTimeHasBeenSet() const;

                    /**
                     * 获取扫描状态：0-待扫描（无任何扫描结果）；1-扫描中（正在进行扫描）；2-已扫描（有扫描结果且不正在扫描）；3-扫描完成待同步结果。
                     * @return ScanStatus 扫描状态：0-待扫描（无任何扫描结果）；1-扫描中（正在进行扫描）；2-已扫描（有扫描结果且不正在扫描）；3-扫描完成待同步结果。
                     * 
                     */
                    uint64_t GetScanStatus() const;

                    /**
                     * 设置扫描状态：0-待扫描（无任何扫描结果）；1-扫描中（正在进行扫描）；2-已扫描（有扫描结果且不正在扫描）；3-扫描完成待同步结果。
                     * @param _scanStatus 扫描状态：0-待扫描（无任何扫描结果）；1-扫描中（正在进行扫描）；2-已扫描（有扫描结果且不正在扫描）；3-扫描完成待同步结果。
                     * 
                     */
                    void SetScanStatus(const uint64_t& _scanStatus);

                    /**
                     * 判断参数 ScanStatus 是否已赋值
                     * @return ScanStatus 是否已赋值
                     * 
                     */
                    bool ScanStatusHasBeenSet() const;

                    /**
                     * 获取上一次扫描完成时间。
                     * @return LastScanFinishTime 上一次扫描完成时间。
                     * 
                     */
                    std::string GetLastScanFinishTime() const;

                    /**
                     * 设置上一次扫描完成时间。
                     * @param _lastScanFinishTime 上一次扫描完成时间。
                     * 
                     */
                    void SetLastScanFinishTime(const std::string& _lastScanFinishTime);

                    /**
                     * 判断参数 LastScanFinishTime 是否已赋值
                     * @return LastScanFinishTime 是否已赋值
                     * 
                     */
                    bool LastScanFinishTimeHasBeenSet() const;

                    /**
                     * 获取当前扫描开始时间，如扫描完成则为上一次扫描的开始时间。
                     * @return CurrentScanStartTime 当前扫描开始时间，如扫描完成则为上一次扫描的开始时间。
                     * 
                     */
                    std::string GetCurrentScanStartTime() const;

                    /**
                     * 设置当前扫描开始时间，如扫描完成则为上一次扫描的开始时间。
                     * @param _currentScanStartTime 当前扫描开始时间，如扫描完成则为上一次扫描的开始时间。
                     * 
                     */
                    void SetCurrentScanStartTime(const std::string& _currentScanStartTime);

                    /**
                     * 判断参数 CurrentScanStartTime 是否已赋值
                     * @return CurrentScanStartTime 是否已赋值
                     * 
                     */
                    bool CurrentScanStartTimeHasBeenSet() const;

                    /**
                     * 获取CreatedAt。
                     * @return CreatedAt CreatedAt。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置CreatedAt。
                     * @param _createdAt CreatedAt。
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取UpdatedAt。
                     * @return UpdatedAt UpdatedAt。
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置UpdatedAt。
                     * @param _updatedAt UpdatedAt。
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取云用户appid。
                     * @return Appid 云用户appid。
                     * 
                     */
                    uint64_t GetAppid() const;

                    /**
                     * 设置云用户appid。
                     * @param _appid 云用户appid。
                     * 
                     */
                    void SetAppid(const uint64_t& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     * 
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取扫描状态：0-待检测；1-检测完成
                     * @return ContentScanStatus 扫描状态：0-待检测；1-检测完成
                     * 
                     */
                    uint64_t GetContentScanStatus() const;

                    /**
                     * 设置扫描状态：0-待检测；1-检测完成
                     * @param _contentScanStatus 扫描状态：0-待检测；1-检测完成
                     * 
                     */
                    void SetContentScanStatus(const uint64_t& _contentScanStatus);

                    /**
                     * 判断参数 ContentScanStatus 是否已赋值
                     * @return ContentScanStatus 是否已赋值
                     * 
                     */
                    bool ContentScanStatusHasBeenSet() const;

                private:

                    /**
                     * 监控任务ID。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 监控名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 监测状态：1-监测中；2-暂停监测。
                     */
                    uint64_t m_monitorStatus;
                    bool m_monitorStatusHasBeenSet;

                    /**
                     * 监测模式，normal-正常扫描；deep-深度扫描。
                     */
                    std::string m_scannerType;
                    bool m_scannerTypeHasBeenSet;

                    /**
                     * 扫描周期，单位小时，每X小时执行一次。
                     */
                    uint64_t m_crontab;
                    bool m_crontabHasBeenSet;

                    /**
                     * 指定扫描类型，3位数每位依次表示：扫描Web漏洞、扫描系统漏洞、扫描系统端口。
                     */
                    std::string m_includedVulsTypes;
                    bool m_includedVulsTypesHasBeenSet;

                    /**
                     * 速率限制，每秒发送X个HTTP请求。
                     */
                    uint64_t m_rateLimit;
                    bool m_rateLimitHasBeenSet;

                    /**
                     * 首次扫描开始时间。
                     */
                    std::string m_firstScanStartTime;
                    bool m_firstScanStartTimeHasBeenSet;

                    /**
                     * 扫描状态：0-待扫描（无任何扫描结果）；1-扫描中（正在进行扫描）；2-已扫描（有扫描结果且不正在扫描）；3-扫描完成待同步结果。
                     */
                    uint64_t m_scanStatus;
                    bool m_scanStatusHasBeenSet;

                    /**
                     * 上一次扫描完成时间。
                     */
                    std::string m_lastScanFinishTime;
                    bool m_lastScanFinishTimeHasBeenSet;

                    /**
                     * 当前扫描开始时间，如扫描完成则为上一次扫描的开始时间。
                     */
                    std::string m_currentScanStartTime;
                    bool m_currentScanStartTimeHasBeenSet;

                    /**
                     * CreatedAt。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * UpdatedAt。
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 云用户appid。
                     */
                    uint64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * 扫描状态：0-待检测；1-检测完成
                     */
                    uint64_t m_contentScanStatus;
                    bool m_contentScanStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWS_V20180312_MODEL_MONITOR_H_
