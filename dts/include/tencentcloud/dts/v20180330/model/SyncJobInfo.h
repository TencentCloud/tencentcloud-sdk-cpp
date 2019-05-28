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

#ifndef TENCENTCLOUD_DTS_V20180330_MODEL_SYNCJOBINFO_H_
#define TENCENTCLOUD_DTS_V20180330_MODEL_SYNCJOBINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20180330/model/SyncOption.h>
#include <tencentcloud/dts/v20180330/model/SyncInstanceInfo.h>
#include <tencentcloud/dts/v20180330/model/SyncDetailInfo.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20180330
        {
            namespace Model
            {
                /**
                * 灾备同步任务信息
                */
                class SyncJobInfo : public AbstractModel
                {
                public:
                    SyncJobInfo();
                    ~SyncJobInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取灾备任务id
                     * @return JobId 灾备任务id
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置灾备任务id
                     * @param JobId 灾备任务id
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取灾备任务名
                     * @return JobName 灾备任务名
                     */
                    std::string GetJobName() const;

                    /**
                     * 设置灾备任务名
                     * @param JobName 灾备任务名
                     */
                    void SetJobName(const std::string& _jobName);

                    /**
                     * 判断参数 JobName 是否已赋值
                     * @return JobName 是否已赋值
                     */
                    bool JobNameHasBeenSet() const;

                    /**
                     * 获取任务同步
                     * @return SyncOption 任务同步
                     */
                    SyncOption GetSyncOption() const;

                    /**
                     * 设置任务同步
                     * @param SyncOption 任务同步
                     */
                    void SetSyncOption(const SyncOption& _syncOption);

                    /**
                     * 判断参数 SyncOption 是否已赋值
                     * @return SyncOption 是否已赋值
                     */
                    bool SyncOptionHasBeenSet() const;

                    /**
                     * 获取源接入类型
                     * @return SrcAccessType 源接入类型
                     */
                    std::string GetSrcAccessType() const;

                    /**
                     * 设置源接入类型
                     * @param SrcAccessType 源接入类型
                     */
                    void SetSrcAccessType(const std::string& _srcAccessType);

                    /**
                     * 判断参数 SrcAccessType 是否已赋值
                     * @return SrcAccessType 是否已赋值
                     */
                    bool SrcAccessTypeHasBeenSet() const;

                    /**
                     * 获取源数据类型
                     * @return SrcDatabaseType 源数据类型
                     */
                    std::string GetSrcDatabaseType() const;

                    /**
                     * 设置源数据类型
                     * @param SrcDatabaseType 源数据类型
                     */
                    void SetSrcDatabaseType(const std::string& _srcDatabaseType);

                    /**
                     * 判断参数 SrcDatabaseType 是否已赋值
                     * @return SrcDatabaseType 是否已赋值
                     */
                    bool SrcDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取源实例信息
                     * @return SrcInfo 源实例信息
                     */
                    SyncInstanceInfo GetSrcInfo() const;

                    /**
                     * 设置源实例信息
                     * @param SrcInfo 源实例信息
                     */
                    void SetSrcInfo(const SyncInstanceInfo& _srcInfo);

                    /**
                     * 判断参数 SrcInfo 是否已赋值
                     * @return SrcInfo 是否已赋值
                     */
                    bool SrcInfoHasBeenSet() const;

                    /**
                     * 获取灾备接入类型
                     * @return DstAccessType 灾备接入类型
                     */
                    std::string GetDstAccessType() const;

                    /**
                     * 设置灾备接入类型
                     * @param DstAccessType 灾备接入类型
                     */
                    void SetDstAccessType(const std::string& _dstAccessType);

                    /**
                     * 判断参数 DstAccessType 是否已赋值
                     * @return DstAccessType 是否已赋值
                     */
                    bool DstAccessTypeHasBeenSet() const;

                    /**
                     * 获取灾备数据类型
                     * @return DstDatabaseType 灾备数据类型
                     */
                    std::string GetDstDatabaseType() const;

                    /**
                     * 设置灾备数据类型
                     * @param DstDatabaseType 灾备数据类型
                     */
                    void SetDstDatabaseType(const std::string& _dstDatabaseType);

                    /**
                     * 判断参数 DstDatabaseType 是否已赋值
                     * @return DstDatabaseType 是否已赋值
                     */
                    bool DstDatabaseTypeHasBeenSet() const;

                    /**
                     * 获取灾备实例信息
                     * @return DstInfo 灾备实例信息
                     */
                    SyncInstanceInfo GetDstInfo() const;

                    /**
                     * 设置灾备实例信息
                     * @param DstInfo 灾备实例信息
                     */
                    void SetDstInfo(const SyncInstanceInfo& _dstInfo);

                    /**
                     * 判断参数 DstInfo 是否已赋值
                     * @return DstInfo 是否已赋值
                     */
                    bool DstInfoHasBeenSet() const;

                    /**
                     * 获取任务信息
                     * @return Detail 任务信息
                     */
                    SyncDetailInfo GetDetail() const;

                    /**
                     * 设置任务信息
                     * @param Detail 任务信息
                     */
                    void SetDetail(const SyncDetailInfo& _detail);

                    /**
                     * 判断参数 Detail 是否已赋值
                     * @return Detail 是否已赋值
                     */
                    bool DetailHasBeenSet() const;

                    /**
                     * 获取任务状态
                     * @return Status 任务状态
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置任务状态
                     * @param Status 任务状态
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取迁移库表
                     * @return DatabaseInfo 迁移库表
                     */
                    std::string GetDatabaseInfo() const;

                    /**
                     * 设置迁移库表
                     * @param DatabaseInfo 迁移库表
                     */
                    void SetDatabaseInfo(const std::string& _databaseInfo);

                    /**
                     * 判断参数 DatabaseInfo 是否已赋值
                     * @return DatabaseInfo 是否已赋值
                     */
                    bool DatabaseInfoHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param CreateTime 创建时间
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取开始时间
                     * @return StartTime 开始时间
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置开始时间
                     * @param StartTime 开始时间
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取结束时间
                     * @return EndTime 结束时间
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置结束时间
                     * @param EndTime 结束时间
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                private:

                    /**
                     * 灾备任务id
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 灾备任务名
                     */
                    std::string m_jobName;
                    bool m_jobNameHasBeenSet;

                    /**
                     * 任务同步
                     */
                    SyncOption m_syncOption;
                    bool m_syncOptionHasBeenSet;

                    /**
                     * 源接入类型
                     */
                    std::string m_srcAccessType;
                    bool m_srcAccessTypeHasBeenSet;

                    /**
                     * 源数据类型
                     */
                    std::string m_srcDatabaseType;
                    bool m_srcDatabaseTypeHasBeenSet;

                    /**
                     * 源实例信息
                     */
                    SyncInstanceInfo m_srcInfo;
                    bool m_srcInfoHasBeenSet;

                    /**
                     * 灾备接入类型
                     */
                    std::string m_dstAccessType;
                    bool m_dstAccessTypeHasBeenSet;

                    /**
                     * 灾备数据类型
                     */
                    std::string m_dstDatabaseType;
                    bool m_dstDatabaseTypeHasBeenSet;

                    /**
                     * 灾备实例信息
                     */
                    SyncInstanceInfo m_dstInfo;
                    bool m_dstInfoHasBeenSet;

                    /**
                     * 任务信息
                     */
                    SyncDetailInfo m_detail;
                    bool m_detailHasBeenSet;

                    /**
                     * 任务状态
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 迁移库表
                     */
                    std::string m_databaseInfo;
                    bool m_databaseInfoHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20180330_MODEL_SYNCJOBINFO_H_
