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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_ESRECHARGEINFO_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_ESRECHARGEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/EsInfo.h>
#include <tencentcloud/cls/v20201016/model/EsImportInfo.h>
#include <tencentcloud/cls/v20201016/model/EsTimeInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * es导入配置信息
                */
                class EsRechargeInfo : public AbstractModel
                {
                public:
                    EsRechargeInfo();
                    ~EsRechargeInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务id。
                     * @return TaskId 任务id。
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id。
                     * @param _taskId 任务id。
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取主账号id。
                     * @return Uin 主账号id。
                     * 
                     */
                    uint64_t GetUin() const;

                    /**
                     * 设置主账号id。
                     * @param _uin 主账号id。
                     * 
                     */
                    void SetUin(const uint64_t& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                    /**
                     * 获取日志主题id。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。
                     * @return TopicId 日志主题id。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。
                     * 
                     */
                    std::string GetTopicId() const;

                    /**
                     * 设置日志主题id。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。
                     * @param _topicId 日志主题id。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。
                     * 
                     */
                    void SetTopicId(const std::string& _topicId);

                    /**
                     * 判断参数 TopicId 是否已赋值
                     * @return TopicId 是否已赋值
                     * 
                     */
                    bool TopicIdHasBeenSet() const;

                    /**
                     * 获取配置名称。
                     * @return Name 配置名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置配置名称。
                     * @param _name 配置名称。
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
                     * 获取es索引。
                     * @return Index es索引。
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置es索引。
                     * @param _index es索引。
                     * 
                     */
                    void SetIndex(const std::string& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取es查询语句。
                     * @return Query es查询语句。
                     * 
                     */
                    std::string GetQuery() const;

                    /**
                     * 设置es查询语句。
                     * @param _query es查询语句。
                     * 
                     */
                    void SetQuery(const std::string& _query);

                    /**
                     * 判断参数 Query 是否已赋值
                     * @return Query 是否已赋值
                     * 
                     */
                    bool QueryHasBeenSet() const;

                    /**
                     * 获取es集群信息。
                     * @return EsInfo es集群信息。
                     * 
                     */
                    EsInfo GetEsInfo() const;

                    /**
                     * 设置es集群信息。
                     * @param _esInfo es集群信息。
                     * 
                     */
                    void SetEsInfo(const EsInfo& _esInfo);

                    /**
                     * 判断参数 EsInfo 是否已赋值
                     * @return EsInfo 是否已赋值
                     * 
                     */
                    bool EsInfoHasBeenSet() const;

                    /**
                     * 获取es导入信息。
                     * @return ImportInfo es导入信息。
                     * 
                     */
                    EsImportInfo GetImportInfo() const;

                    /**
                     * 设置es导入信息。
                     * @param _importInfo es导入信息。
                     * 
                     */
                    void SetImportInfo(const EsImportInfo& _importInfo);

                    /**
                     * 判断参数 ImportInfo 是否已赋值
                     * @return ImportInfo 是否已赋值
                     * 
                     */
                    bool ImportInfoHasBeenSet() const;

                    /**
                     * 获取es导入时间配置信息。
                     * @return TimeInfo es导入时间配置信息。
                     * 
                     */
                    EsTimeInfo GetTimeInfo() const;

                    /**
                     * 设置es导入时间配置信息。
                     * @param _timeInfo es导入时间配置信息。
                     * 
                     */
                    void SetTimeInfo(const EsTimeInfo& _timeInfo);

                    /**
                     * 判断参数 TimeInfo 是否已赋值
                     * @return TimeInfo 是否已赋值
                     * 
                     */
                    bool TimeInfoHasBeenSet() const;

                    /**
                     * 获取任务状态。
1. 运行中
2. 暂停
3. 完成
4. 异常
                     * @return Status 任务状态。
1. 运行中
2. 暂停
3. 完成
4. 异常
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置任务状态。
1. 运行中
2. 暂停
3. 完成
4. 异常
                     * @param _status 任务状态。
1. 运行中
2. 暂停
3. 完成
4. 异常
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务进度 0~100 百分比。100：表示完成。
                     * @return Progress 任务进度 0~100 百分比。100：表示完成。
                     * 
                     */
                    uint64_t GetProgress() const;

                    /**
                     * 设置任务进度 0~100 百分比。100：表示完成。
                     * @param _progress 任务进度 0~100 百分比。100：表示完成。
                     * 
                     */
                    void SetProgress(const uint64_t& _progress);

                    /**
                     * 判断参数 Progress 是否已赋值
                     * @return Progress 是否已赋值
                     * 
                     */
                    bool ProgressHasBeenSet() const;

                    /**
                     * 获取子账号id。
                     * @return SubUin 子账号id。
                     * 
                     */
                    uint64_t GetSubUin() const;

                    /**
                     * 设置子账号id。
                     * @param _subUin 子账号id。
                     * 
                     */
                    void SetSubUin(const uint64_t& _subUin);

                    /**
                     * 判断参数 SubUin 是否已赋值
                     * @return SubUin 是否已赋值
                     * 
                     */
                    bool SubUinHasBeenSet() const;

                    /**
                     * 获取创建时间。
                     * @return CreateTime 创建时间。
                     * 
                     */
                    uint64_t GetCreateTime() const;

                    /**
                     * 设置创建时间。
                     * @param _createTime 创建时间。
                     * 
                     */
                    void SetCreateTime(const uint64_t& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间。
                     * @return UpdateTime 修改时间。
                     * 
                     */
                    uint64_t GetUpdateTime() const;

                    /**
                     * 设置修改时间。
                     * @param _updateTime 修改时间。
                     * 
                     */
                    void SetUpdateTime(const uint64_t& _updateTime);

                    /**
                     * 判断参数 UpdateTime 是否已赋值
                     * @return UpdateTime 是否已赋值
                     * 
                     */
                    bool UpdateTimeHasBeenSet() const;

                    /**
                     * 获取是否开启投递服务日志。1：关闭，2：开启。
                     * @return HasServicesLog 是否开启投递服务日志。1：关闭，2：开启。
                     * 
                     */
                    uint64_t GetHasServicesLog() const;

                    /**
                     * 设置是否开启投递服务日志。1：关闭，2：开启。
                     * @param _hasServicesLog 是否开启投递服务日志。1：关闭，2：开启。
                     * 
                     */
                    void SetHasServicesLog(const uint64_t& _hasServicesLog);

                    /**
                     * 判断参数 HasServicesLog 是否已赋值
                     * @return HasServicesLog 是否已赋值
                     * 
                     */
                    bool HasServicesLogHasBeenSet() const;

                private:

                    /**
                     * 任务id。
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 主账号id。
                     */
                    uint64_t m_uin;
                    bool m_uinHasBeenSet;

                    /**
                     * 日志主题id。
- 通过 [获取日志主题列表](https://cloud.tencent.com/document/product/614/56454) 获取日志主题Id。
- 通过 [创建日志主题](https://cloud.tencent.com/document/product/614/56456) 获取日志主题Id。
                     */
                    std::string m_topicId;
                    bool m_topicIdHasBeenSet;

                    /**
                     * 配置名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * es索引。
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * es查询语句。
                     */
                    std::string m_query;
                    bool m_queryHasBeenSet;

                    /**
                     * es集群信息。
                     */
                    EsInfo m_esInfo;
                    bool m_esInfoHasBeenSet;

                    /**
                     * es导入信息。
                     */
                    EsImportInfo m_importInfo;
                    bool m_importInfoHasBeenSet;

                    /**
                     * es导入时间配置信息。
                     */
                    EsTimeInfo m_timeInfo;
                    bool m_timeInfoHasBeenSet;

                    /**
                     * 任务状态。
1. 运行中
2. 暂停
3. 完成
4. 异常
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务进度 0~100 百分比。100：表示完成。
                     */
                    uint64_t m_progress;
                    bool m_progressHasBeenSet;

                    /**
                     * 子账号id。
                     */
                    uint64_t m_subUin;
                    bool m_subUinHasBeenSet;

                    /**
                     * 创建时间。
                     */
                    uint64_t m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间。
                     */
                    uint64_t m_updateTime;
                    bool m_updateTimeHasBeenSet;

                    /**
                     * 是否开启投递服务日志。1：关闭，2：开启。
                     */
                    uint64_t m_hasServicesLog;
                    bool m_hasServicesLogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_ESRECHARGEINFO_H_
