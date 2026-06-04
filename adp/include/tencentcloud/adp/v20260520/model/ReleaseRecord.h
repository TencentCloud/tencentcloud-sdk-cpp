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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_RELEASERECORD_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_RELEASERECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * [数据结构定义] 发布记录
                */
                class ReleaseRecord : public AbstractModel
                {
                public:
                    ReleaseRecord();
                    ~ReleaseRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取是否可导出
                     * @return CanExport 是否可导出
                     * 
                     */
                    bool GetCanExport() const;

                    /**
                     * 设置是否可导出
                     * @param _canExport 是否可导出
                     * 
                     */
                    void SetCanExport(const bool& _canExport);

                    /**
                     * 判断参数 CanExport 是否已赋值
                     * @return CanExport 是否已赋值
                     * 
                     */
                    bool CanExportHasBeenSet() const;

                    /**
                     * 获取是否可回滚
                     * @return CanRollback 是否可回滚
                     * 
                     */
                    bool GetCanRollback() const;

                    /**
                     * 设置是否可回滚
                     * @param _canRollback 是否可回滚
                     * 
                     */
                    void SetCanRollback(const bool& _canRollback);

                    /**
                     * 判断参数 CanRollback 是否已赋值
                     * @return CanRollback 是否已赋值
                     * 
                     */
                    bool CanRollbackHasBeenSet() const;

                    /**
                     * 获取发布描述
                     * @return Description 发布描述
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置发布描述
                     * @param _description 发布描述
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取发布失败数
                     * @return FailCount 发布失败数
                     * 
                     */
                    uint64_t GetFailCount() const;

                    /**
                     * 设置发布失败数
                     * @param _failCount 发布失败数
                     * 
                     */
                    void SetFailCount(const uint64_t& _failCount);

                    /**
                     * 判断参数 FailCount 是否已赋值
                     * @return FailCount 是否已赋值
                     * 
                     */
                    bool FailCountHasBeenSet() const;

                    /**
                     * 获取失败原因
                     * @return Reason 失败原因
                     * 
                     */
                    std::string GetReason() const;

                    /**
                     * 设置失败原因
                     * @param _reason 失败原因
                     * 
                     */
                    void SetReason(const std::string& _reason);

                    /**
                     * 判断参数 Reason 是否已赋值
                     * @return Reason 是否已赋值
                     * 
                     */
                    bool ReasonHasBeenSet() const;

                    /**
                     * 获取发布ID
                     * @return ReleaseId 发布ID
                     * 
                     */
                    std::string GetReleaseId() const;

                    /**
                     * 设置发布ID
                     * @param _releaseId 发布ID
                     * 
                     */
                    void SetReleaseId(const std::string& _releaseId);

                    /**
                     * 判断参数 ReleaseId 是否已赋值
                     * @return ReleaseId 是否已赋值
                     * 
                     */
                    bool ReleaseIdHasBeenSet() const;

                    /**
                     * 获取发布版本
                     * @return ReleaseVersion 发布版本
                     * 
                     */
                    std::string GetReleaseVersion() const;

                    /**
                     * 设置发布版本
                     * @param _releaseVersion 发布版本
                     * 
                     */
                    void SetReleaseVersion(const std::string& _releaseVersion);

                    /**
                     * 判断参数 ReleaseVersion 是否已赋值
                     * @return ReleaseVersion 是否已赋值
                     * 
                     */
                    bool ReleaseVersionHasBeenSet() const;

                    /**
                     * 获取发布状态。枚举值: 1:待发布, 2:发布中, 3:发布成功, 4:发布失败, 5:审核中, 6:审核成功, 7:审核失败, 8:发布成功回调处理中, 9:发布暂停, 10:申诉审核中, 11:申诉审核通过, 12:申诉审核不通过
                     * @return Status 发布状态。枚举值: 1:待发布, 2:发布中, 3:发布成功, 4:发布失败, 5:审核中, 6:审核成功, 7:审核失败, 8:发布成功回调处理中, 9:发布暂停, 10:申诉审核中, 11:申诉审核通过, 12:申诉审核不通过
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置发布状态。枚举值: 1:待发布, 2:发布中, 3:发布成功, 4:发布失败, 5:审核中, 6:审核成功, 7:审核失败, 8:发布成功回调处理中, 9:发布暂停, 10:申诉审核中, 11:申诉审核通过, 12:申诉审核不通过
                     * @param _status 发布状态。枚举值: 1:待发布, 2:发布中, 3:发布成功, 4:发布失败, 5:审核中, 6:审核成功, 7:审核失败, 8:发布成功回调处理中, 9:发布暂停, 10:申诉审核中, 11:申诉审核通过, 12:申诉审核不通过
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
                     * 获取状态描述
                     * @return StatusDescription 状态描述
                     * 
                     */
                    std::string GetStatusDescription() const;

                    /**
                     * 设置状态描述
                     * @param _statusDescription 状态描述
                     * 
                     */
                    void SetStatusDescription(const std::string& _statusDescription);

                    /**
                     * 判断参数 StatusDescription 是否已赋值
                     * @return StatusDescription 是否已赋值
                     * 
                     */
                    bool StatusDescriptionHasBeenSet() const;

                    /**
                     * 获取发布成功数
                     * @return SuccessCount 发布成功数
                     * 
                     */
                    uint64_t GetSuccessCount() const;

                    /**
                     * 设置发布成功数
                     * @param _successCount 发布成功数
                     * 
                     */
                    void SetSuccessCount(const uint64_t& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取更新时间 (Unix时间戳,秒级)
                     * @return UpdateTime 更新时间 (Unix时间戳,秒级)
                     * 
                     */
                    std::string GetUpdateTime() const;

                    /**
                     * 设置更新时间 (Unix时间戳,秒级)
                     * @param _updateTime 更新时间 (Unix时间戳,秒级)
                     * 
                     */
                    void SetUpdateTime(const std::string& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取发布人
                     * @return Updater 发布人
                     * 
                     */
                    std::string GetUpdater() const;

                    /**
                     * 设置发布人
                     * @param _updater 发布人
                     * 
                     */
                    void SetUpdater(const std::string& _updater);

                    /**
                     * 判断参数 Updater 是否已赋值
                     * @return Updater 是否已赋值
                     * 
                     */
                    bool UpdaterHasBeenSet() const;

                private:

                    /**
                     * 是否可导出
                     */
                    bool m_canExport;
                    bool m_canExportHasBeenSet;

                    /**
                     * 是否可回滚
                     */
                    bool m_canRollback;
                    bool m_canRollbackHasBeenSet;

                    /**
                     * 发布描述
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 发布失败数
                     */
                    uint64_t m_failCount;
                    bool m_failCountHasBeenSet;

                    /**
                     * 失败原因
                     */
                    std::string m_reason;
                    bool m_reasonHasBeenSet;

                    /**
                     * 发布ID
                     */
                    std::string m_releaseId;
                    bool m_releaseIdHasBeenSet;

                    /**
                     * 发布版本
                     */
                    std::string m_releaseVersion;
                    bool m_releaseVersionHasBeenSet;

                    /**
                     * 发布状态。枚举值: 1:待发布, 2:发布中, 3:发布成功, 4:发布失败, 5:审核中, 6:审核成功, 7:审核失败, 8:发布成功回调处理中, 9:发布暂停, 10:申诉审核中, 11:申诉审核通过, 12:申诉审核不通过
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 状态描述
                     */
                    std::string m_statusDescription;
                    bool m_statusDescriptionHasBeenSet;

                    /**
                     * 发布成功数
                     */
                    uint64_t m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * 更新时间 (Unix时间戳,秒级)
                     */
                    std::string m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 发布人
                     */
                    std::string m_updater;
                    bool m_updaterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_RELEASERECORD_H_
