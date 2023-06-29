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

#ifndef TENCENTCLOUD_CDB_V20170320_MODEL_REMOTEBACKUPINFO_H_
#define TENCENTCLOUD_CDB_V20170320_MODEL_REMOTEBACKUPINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdb
    {
        namespace V20170320
        {
            namespace Model
            {
                /**
                * 异地备份信息
                */
                class RemoteBackupInfo : public AbstractModel
                {
                public:
                    RemoteBackupInfo();
                    ~RemoteBackupInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取异地备份子任务的ID
                     * @return SubBackupId 异地备份子任务的ID
                     * 
                     */
                    int64_t GetSubBackupId() const;

                    /**
                     * 设置异地备份子任务的ID
                     * @param _subBackupId 异地备份子任务的ID
                     * 
                     */
                    void SetSubBackupId(const int64_t& _subBackupId);

                    /**
                     * 判断参数 SubBackupId 是否已赋值
                     * @return SubBackupId 是否已赋值
                     * 
                     */
                    bool SubBackupIdHasBeenSet() const;

                    /**
                     * 获取异地备份所在地域
                     * @return Region 异地备份所在地域
                     * 
                     */
                    std::string GetRegion() const;

                    /**
                     * 设置异地备份所在地域
                     * @param _region 异地备份所在地域
                     * 
                     */
                    void SetRegion(const std::string& _region);

                    /**
                     * 判断参数 Region 是否已赋值
                     * @return Region 是否已赋值
                     * 
                     */
                    bool RegionHasBeenSet() const;

                    /**
                     * 获取备份任务状态。可能的值有 "SUCCESS": 备份成功， "FAILED": 备份失败， "RUNNING": 备份进行中。
                     * @return Status 备份任务状态。可能的值有 "SUCCESS": 备份成功， "FAILED": 备份失败， "RUNNING": 备份进行中。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置备份任务状态。可能的值有 "SUCCESS": 备份成功， "FAILED": 备份失败， "RUNNING": 备份进行中。
                     * @param _status 备份任务状态。可能的值有 "SUCCESS": 备份成功， "FAILED": 备份失败， "RUNNING": 备份进行中。
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
                     * 获取异地备份任务的开始时间
                     * @return StartTime 异地备份任务的开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置异地备份任务的开始时间
                     * @param _startTime 异地备份任务的开始时间
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
                     * 获取异地备份任务的结束时间
                     * @return FinishTime 异地备份任务的结束时间
                     * 
                     */
                    std::string GetFinishTime() const;

                    /**
                     * 设置异地备份任务的结束时间
                     * @param _finishTime 异地备份任务的结束时间
                     * 
                     */
                    void SetFinishTime(const std::string& _finishTime);

                    /**
                     * 判断参数 FinishTime 是否已赋值
                     * @return FinishTime 是否已赋值
                     * 
                     */
                    bool FinishTimeHasBeenSet() const;

                    /**
                     * 获取下载地址
                     * @return Url 下载地址
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置下载地址
                     * @param _url 下载地址
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                private:

                    /**
                     * 异地备份子任务的ID
                     */
                    int64_t m_subBackupId;
                    bool m_subBackupIdHasBeenSet;

                    /**
                     * 异地备份所在地域
                     */
                    std::string m_region;
                    bool m_regionHasBeenSet;

                    /**
                     * 备份任务状态。可能的值有 "SUCCESS": 备份成功， "FAILED": 备份失败， "RUNNING": 备份进行中。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 异地备份任务的开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 异地备份任务的结束时间
                     */
                    std::string m_finishTime;
                    bool m_finishTimeHasBeenSet;

                    /**
                     * 下载地址
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDB_V20170320_MODEL_REMOTEBACKUPINFO_H_
