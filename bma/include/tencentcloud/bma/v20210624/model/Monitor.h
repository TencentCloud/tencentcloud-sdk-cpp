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

#ifndef TENCENTCLOUD_BMA_V20210624_MODEL_MONITOR_H_
#define TENCENTCLOUD_BMA_V20210624_MODEL_MONITOR_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bma
    {
        namespace V20210624
        {
            namespace Model
            {
                /**
                * 版权保护-监测结果
                */
                class Monitor : public AbstractModel
                {
                public:
                    Monitor();
                    ~Monitor() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取作品ID
                     * @return WorkId 作品ID
                     * 
                     */
                    int64_t GetWorkId() const;

                    /**
                     * 设置作品ID
                     * @param _workId 作品ID
                     * 
                     */
                    void SetWorkId(const int64_t& _workId);

                    /**
                     * 判断参数 WorkId 是否已赋值
                     * @return WorkId 是否已赋值
                     * 
                     */
                    bool WorkIdHasBeenSet() const;

                    /**
                     * 获取作品名称
                     * @return WorkName 作品名称
                     * 
                     */
                    std::string GetWorkName() const;

                    /**
                     * 设置作品名称
                     * @param _workName 作品名称
                     * 
                     */
                    void SetWorkName(const std::string& _workName);

                    /**
                     * 判断参数 WorkName 是否已赋值
                     * @return WorkName 是否已赋值
                     * 
                     */
                    bool WorkNameHasBeenSet() const;

                    /**
                     * 获取作品内容类型 01-视频 02-音频 03-文本 04-图片
                     * @return WorkType 作品内容类型 01-视频 02-音频 03-文本 04-图片
                     * 
                     */
                    std::string GetWorkType() const;

                    /**
                     * 设置作品内容类型 01-视频 02-音频 03-文本 04-图片
                     * @param _workType 作品内容类型 01-视频 02-音频 03-文本 04-图片
                     * 
                     */
                    void SetWorkType(const std::string& _workType);

                    /**
                     * 判断参数 WorkType 是否已赋值
                     * @return WorkType 是否已赋值
                     * 
                     */
                    bool WorkTypeHasBeenSet() const;

                    /**
                     * 获取侵权平台数量
                     * @return TortPlatNum 侵权平台数量
                     * 
                     */
                    int64_t GetTortPlatNum() const;

                    /**
                     * 设置侵权平台数量
                     * @param _tortPlatNum 侵权平台数量
                     * 
                     */
                    void SetTortPlatNum(const int64_t& _tortPlatNum);

                    /**
                     * 判断参数 TortPlatNum 是否已赋值
                     * @return TortPlatNum 是否已赋值
                     * 
                     */
                    bool TortPlatNumHasBeenSet() const;

                    /**
                     * 获取侵权链接数量
                     * @return TortURLNum 侵权链接数量
                     * 
                     */
                    int64_t GetTortURLNum() const;

                    /**
                     * 设置侵权链接数量
                     * @param _tortURLNum 侵权链接数量
                     * 
                     */
                    void SetTortURLNum(const int64_t& _tortURLNum);

                    /**
                     * 判断参数 TortURLNum 是否已赋值
                     * @return TortURLNum 是否已赋值
                     * 
                     */
                    bool TortURLNumHasBeenSet() const;

                    /**
                     * 获取监测时间
                     * @return MonitorTime 监测时间
                     * 
                     */
                    std::string GetMonitorTime() const;

                    /**
                     * 设置监测时间
                     * @param _monitorTime 监测时间
                     * 
                     */
                    void SetMonitorTime(const std::string& _monitorTime);

                    /**
                     * 判断参数 MonitorTime 是否已赋值
                     * @return MonitorTime 是否已赋值
                     * 
                     */
                    bool MonitorTimeHasBeenSet() const;

                    /**
                     * 获取0-待监测 1-监测中 2-不监测 3-暂停监测
                     * @return MonitorStatus 0-待监测 1-监测中 2-不监测 3-暂停监测
                     * 
                     */
                    int64_t GetMonitorStatus() const;

                    /**
                     * 设置0-待监测 1-监测中 2-不监测 3-暂停监测
                     * @param _monitorStatus 0-待监测 1-监测中 2-不监测 3-暂停监测
                     * 
                     */
                    void SetMonitorStatus(const int64_t& _monitorStatus);

                    /**
                     * 判断参数 MonitorStatus 是否已赋值
                     * @return MonitorStatus 是否已赋值
                     * 
                     */
                    bool MonitorStatusHasBeenSet() const;

                    /**
                     * 获取作品类型
                     * @return WorkCategory 作品类型
                     * 
                     */
                    std::string GetWorkCategory() const;

                    /**
                     * 设置作品类型
                     * @param _workCategory 作品类型
                     * 
                     */
                    void SetWorkCategory(const std::string& _workCategory);

                    /**
                     * 判断参数 WorkCategory 是否已赋值
                     * @return WorkCategory 是否已赋值
                     * 
                     */
                    bool WorkCategoryHasBeenSet() const;

                    /**
                     * 获取新增时间
                     * @return InsertTime 新增时间
                     * 
                     */
                    std::string GetInsertTime() const;

                    /**
                     * 设置新增时间
                     * @param _insertTime 新增时间
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
                     * 获取监测状态说明
                     * @return MonitorNote 监测状态说明
                     * 
                     */
                    std::string GetMonitorNote() const;

                    /**
                     * 设置监测状态说明
                     * @param _monitorNote 监测状态说明
                     * 
                     */
                    void SetMonitorNote(const std::string& _monitorNote);

                    /**
                     * 判断参数 MonitorNote 是否已赋值
                     * @return MonitorNote 是否已赋值
                     * 
                     */
                    bool MonitorNoteHasBeenSet() const;

                    /**
                     * 获取作品类型全部展示
                     * @return WorkCategoryAll 作品类型全部展示
                     * 
                     */
                    std::string GetWorkCategoryAll() const;

                    /**
                     * 设置作品类型全部展示
                     * @param _workCategoryAll 作品类型全部展示
                     * 
                     */
                    void SetWorkCategoryAll(const std::string& _workCategoryAll);

                    /**
                     * 判断参数 WorkCategoryAll 是否已赋值
                     * @return WorkCategoryAll 是否已赋值
                     * 
                     */
                    bool WorkCategoryAllHasBeenSet() const;

                    /**
                     * 获取存证状态
                     * @return EvidenceStatus 存证状态
                     * 
                     */
                    int64_t GetEvidenceStatus() const;

                    /**
                     * 设置存证状态
                     * @param _evidenceStatus 存证状态
                     * 
                     */
                    void SetEvidenceStatus(const int64_t& _evidenceStatus);

                    /**
                     * 判断参数 EvidenceStatus 是否已赋值
                     * @return EvidenceStatus 是否已赋值
                     * 
                     */
                    bool EvidenceStatusHasBeenSet() const;

                    /**
                     * 获取存证状态说明
                     * @return EvidenceNote 存证状态说明
                     * 
                     */
                    std::string GetEvidenceNote() const;

                    /**
                     * 设置存证状态说明
                     * @param _evidenceNote 存证状态说明
                     * 
                     */
                    void SetEvidenceNote(const std::string& _evidenceNote);

                    /**
                     * 判断参数 EvidenceNote 是否已赋值
                     * @return EvidenceNote 是否已赋值
                     * 
                     */
                    bool EvidenceNoteHasBeenSet() const;

                    /**
                     * 获取侵权站点数量
                     * @return TortSiteNum 侵权站点数量
                     * 
                     */
                    int64_t GetTortSiteNum() const;

                    /**
                     * 设置侵权站点数量
                     * @param _tortSiteNum 侵权站点数量
                     * 
                     */
                    void SetTortSiteNum(const int64_t& _tortSiteNum);

                    /**
                     * 判断参数 TortSiteNum 是否已赋值
                     * @return TortSiteNum 是否已赋值
                     * 
                     */
                    bool TortSiteNumHasBeenSet() const;

                    /**
                     * 获取监测截止时间
                     * @return MonitorEndTime 监测截止时间
                     * 
                     */
                    std::string GetMonitorEndTime() const;

                    /**
                     * 设置监测截止时间
                     * @param _monitorEndTime 监测截止时间
                     * 
                     */
                    void SetMonitorEndTime(const std::string& _monitorEndTime);

                    /**
                     * 判断参数 MonitorEndTime 是否已赋值
                     * @return MonitorEndTime 是否已赋值
                     * 
                     */
                    bool MonitorEndTimeHasBeenSet() const;

                    /**
                     * 获取是否自动续费
                     * @return AutoRenew 是否自动续费
                     * 
                     */
                    int64_t GetAutoRenew() const;

                    /**
                     * 设置是否自动续费
                     * @param _autoRenew 是否自动续费
                     * 
                     */
                    void SetAutoRenew(const int64_t& _autoRenew);

                    /**
                     * 判断参数 AutoRenew 是否已赋值
                     * @return AutoRenew 是否已赋值
                     * 
                     */
                    bool AutoRenewHasBeenSet() const;

                private:

                    /**
                     * 作品ID
                     */
                    int64_t m_workId;
                    bool m_workIdHasBeenSet;

                    /**
                     * 作品名称
                     */
                    std::string m_workName;
                    bool m_workNameHasBeenSet;

                    /**
                     * 作品内容类型 01-视频 02-音频 03-文本 04-图片
                     */
                    std::string m_workType;
                    bool m_workTypeHasBeenSet;

                    /**
                     * 侵权平台数量
                     */
                    int64_t m_tortPlatNum;
                    bool m_tortPlatNumHasBeenSet;

                    /**
                     * 侵权链接数量
                     */
                    int64_t m_tortURLNum;
                    bool m_tortURLNumHasBeenSet;

                    /**
                     * 监测时间
                     */
                    std::string m_monitorTime;
                    bool m_monitorTimeHasBeenSet;

                    /**
                     * 0-待监测 1-监测中 2-不监测 3-暂停监测
                     */
                    int64_t m_monitorStatus;
                    bool m_monitorStatusHasBeenSet;

                    /**
                     * 作品类型
                     */
                    std::string m_workCategory;
                    bool m_workCategoryHasBeenSet;

                    /**
                     * 新增时间
                     */
                    std::string m_insertTime;
                    bool m_insertTimeHasBeenSet;

                    /**
                     * 监测状态说明
                     */
                    std::string m_monitorNote;
                    bool m_monitorNoteHasBeenSet;

                    /**
                     * 作品类型全部展示
                     */
                    std::string m_workCategoryAll;
                    bool m_workCategoryAllHasBeenSet;

                    /**
                     * 存证状态
                     */
                    int64_t m_evidenceStatus;
                    bool m_evidenceStatusHasBeenSet;

                    /**
                     * 存证状态说明
                     */
                    std::string m_evidenceNote;
                    bool m_evidenceNoteHasBeenSet;

                    /**
                     * 侵权站点数量
                     */
                    int64_t m_tortSiteNum;
                    bool m_tortSiteNumHasBeenSet;

                    /**
                     * 监测截止时间
                     */
                    std::string m_monitorEndTime;
                    bool m_monitorEndTimeHasBeenSet;

                    /**
                     * 是否自动续费
                     */
                    int64_t m_autoRenew;
                    bool m_autoRenewHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BMA_V20210624_MODEL_MONITOR_H_
