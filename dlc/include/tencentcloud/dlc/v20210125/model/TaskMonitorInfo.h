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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_TASKMONITORINFO_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_TASKMONITORINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * 任务监控信息
                */
                class TaskMonitorInfo : public AbstractModel
                {
                public:
                    TaskMonitorInfo();
                    ~TaskMonitorInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务id
                     * @return TaskId 任务id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务id
                     * @param _taskId 任务id
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
                     * 获取引擎名称
                     * @return HouseName 引擎名称
                     * 
                     */
                    std::string GetHouseName() const;

                    /**
                     * 设置引擎名称
                     * @param _houseName 引擎名称
                     * 
                     */
                    void SetHouseName(const std::string& _houseName);

                    /**
                     * 判断参数 HouseName 是否已赋值
                     * @return HouseName 是否已赋值
                     * 
                     */
                    bool HouseNameHasBeenSet() const;

                    /**
                     * 获取sql语句
                     * @return QuerySQL sql语句
                     * 
                     */
                    std::string GetQuerySQL() const;

                    /**
                     * 设置sql语句
                     * @param _querySQL sql语句
                     * 
                     */
                    void SetQuerySQL(const std::string& _querySQL);

                    /**
                     * 判断参数 QuerySQL 是否已赋值
                     * @return QuerySQL 是否已赋值
                     * 
                     */
                    bool QuerySQLHasBeenSet() const;

                    /**
                     * 获取任务时间
                     * @return CreateTime 任务时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置任务时间
                     * @param _createTime 任务时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取执行时间
                     * @return UsedTime 执行时间
                     * 
                     */
                    std::string GetUsedTime() const;

                    /**
                     * 设置执行时间
                     * @param _usedTime 执行时间
                     * 
                     */
                    void SetUsedTime(const std::string& _usedTime);

                    /**
                     * 判断参数 UsedTime 是否已赋值
                     * @return UsedTime 是否已赋值
                     * 
                     */
                    bool UsedTimeHasBeenSet() const;

                    /**
                     * 获取数据扫描量
                     * @return DataAmount 数据扫描量
                     * 
                     */
                    std::string GetDataAmount() const;

                    /**
                     * 设置数据扫描量
                     * @param _dataAmount 数据扫描量
                     * 
                     */
                    void SetDataAmount(const std::string& _dataAmount);

                    /**
                     * 判断参数 DataAmount 是否已赋值
                     * @return DataAmount 是否已赋值
                     * 
                     */
                    bool DataAmountHasBeenSet() const;

                    /**
                     * 获取指标信息
                     * @return QueryStats 指标信息
                     * 
                     */
                    std::string GetQueryStats() const;

                    /**
                     * 设置指标信息
                     * @param _queryStats 指标信息
                     * 
                     */
                    void SetQueryStats(const std::string& _queryStats);

                    /**
                     * 判断参数 QueryStats 是否已赋值
                     * @return QueryStats 是否已赋值
                     * 
                     */
                    bool QueryStatsHasBeenSet() const;

                private:

                    /**
                     * 任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 引擎名称
                     */
                    std::string m_houseName;
                    bool m_houseNameHasBeenSet;

                    /**
                     * sql语句
                     */
                    std::string m_querySQL;
                    bool m_querySQLHasBeenSet;

                    /**
                     * 任务时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 执行时间
                     */
                    std::string m_usedTime;
                    bool m_usedTimeHasBeenSet;

                    /**
                     * 数据扫描量
                     */
                    std::string m_dataAmount;
                    bool m_dataAmountHasBeenSet;

                    /**
                     * 指标信息
                     */
                    std::string m_queryStats;
                    bool m_queryStatsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_TASKMONITORINFO_H_
