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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEDETAILEDSINGLEPROBEDATAREQUEST_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEDETAILEDSINGLEPROBEDATAREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * DescribeDetailedSingleProbeData请求参数结构体
                */
                class DescribeDetailedSingleProbeDataRequest : public AbstractModel
                {
                public:
                    DescribeDetailedSingleProbeDataRequest();
                    ~DescribeDetailedSingleProbeDataRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取开始时间戳（毫秒级）
                     * @return BeginTime 开始时间戳（毫秒级）
                     */
                    uint64_t GetBeginTime() const;

                    /**
                     * 设置开始时间戳（毫秒级）
                     * @param BeginTime 开始时间戳（毫秒级）
                     */
                    void SetBeginTime(const uint64_t& _beginTime);

                    /**
                     * 判断参数 BeginTime 是否已赋值
                     * @return BeginTime 是否已赋值
                     */
                    bool BeginTimeHasBeenSet() const;

                    /**
                     * 获取结束时间戳（毫秒级）
                     * @return EndTime 结束时间戳（毫秒级）
                     */
                    uint64_t GetEndTime() const;

                    /**
                     * 设置结束时间戳（毫秒级）
                     * @param EndTime 结束时间戳（毫秒级）
                     */
                    void SetEndTime(const uint64_t& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取任务类型
                     * @return TaskType 任务类型
                     */
                    std::string GetTaskType() const;

                    /**
                     * 设置任务类型
                     * @param TaskType 任务类型
                     */
                    void SetTaskType(const std::string& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取待排序字段
                     * @return SortField 待排序字段
                     */
                    std::string GetSortField() const;

                    /**
                     * 设置待排序字段
                     * @param SortField 待排序字段
                     */
                    void SetSortField(const std::string& _sortField);

                    /**
                     * 判断参数 SortField 是否已赋值
                     * @return SortField 是否已赋值
                     */
                    bool SortFieldHasBeenSet() const;

                    /**
                     * 获取true表示升序
                     * @return Ascending true表示升序
                     */
                    bool GetAscending() const;

                    /**
                     * 设置true表示升序
                     * @param Ascending true表示升序
                     */
                    void SetAscending(const bool& _ascending);

                    /**
                     * 判断参数 Ascending 是否已赋值
                     * @return Ascending 是否已赋值
                     */
                    bool AscendingHasBeenSet() const;

                    /**
                     * 获取选中字段
                     * @return SelectedFields 选中字段
                     */
                    std::vector<std::string> GetSelectedFields() const;

                    /**
                     * 设置选中字段
                     * @param SelectedFields 选中字段
                     */
                    void SetSelectedFields(const std::vector<std::string>& _selectedFields);

                    /**
                     * 判断参数 SelectedFields 是否已赋值
                     * @return SelectedFields 是否已赋值
                     */
                    bool SelectedFieldsHasBeenSet() const;

                    /**
                     * 获取起始取数位置
                     * @return Offset 起始取数位置
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置起始取数位置
                     * @param Offset 起始取数位置
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取取数数量
                     * @return Limit 取数数量
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置取数数量
                     * @param Limit 取数数量
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return TaskID 任务ID
                     */
                    std::vector<std::string> GetTaskID() const;

                    /**
                     * 设置任务ID
                     * @param TaskID 任务ID
                     */
                    void SetTaskID(const std::vector<std::string>& _taskID);

                    /**
                     * 判断参数 TaskID 是否已赋值
                     * @return TaskID 是否已赋值
                     */
                    bool TaskIDHasBeenSet() const;

                    /**
                     * 获取拨测点运营商
                     * @return Operators 拨测点运营商
                     */
                    std::vector<std::string> GetOperators() const;

                    /**
                     * 设置拨测点运营商
                     * @param Operators 拨测点运营商
                     */
                    void SetOperators(const std::vector<std::string>& _operators);

                    /**
                     * 判断参数 Operators 是否已赋值
                     * @return Operators 是否已赋值
                     */
                    bool OperatorsHasBeenSet() const;

                    /**
                     * 获取拨测点地区
                     * @return Districts 拨测点地区
                     */
                    std::vector<std::string> GetDistricts() const;

                    /**
                     * 设置拨测点地区
                     * @param Districts 拨测点地区
                     */
                    void SetDistricts(const std::vector<std::string>& _districts);

                    /**
                     * 判断参数 Districts 是否已赋值
                     * @return Districts 是否已赋值
                     */
                    bool DistrictsHasBeenSet() const;

                    /**
                     * 获取错误类型
                     * @return ErrorTypes 错误类型
                     */
                    std::vector<std::string> GetErrorTypes() const;

                    /**
                     * 设置错误类型
                     * @param ErrorTypes 错误类型
                     */
                    void SetErrorTypes(const std::vector<std::string>& _errorTypes);

                    /**
                     * 判断参数 ErrorTypes 是否已赋值
                     * @return ErrorTypes 是否已赋值
                     */
                    bool ErrorTypesHasBeenSet() const;

                    /**
                     * 获取城市
                     * @return City 城市
                     */
                    std::vector<std::string> GetCity() const;

                    /**
                     * 设置城市
                     * @param City 城市
                     */
                    void SetCity(const std::vector<std::string>& _city);

                    /**
                     * 判断参数 City 是否已赋值
                     * @return City 是否已赋值
                     */
                    bool CityHasBeenSet() const;

                private:

                    /**
                     * 开始时间戳（毫秒级）
                     */
                    uint64_t m_beginTime;
                    bool m_beginTimeHasBeenSet;

                    /**
                     * 结束时间戳（毫秒级）
                     */
                    uint64_t m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 任务类型
                     */
                    std::string m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 待排序字段
                     */
                    std::string m_sortField;
                    bool m_sortFieldHasBeenSet;

                    /**
                     * true表示升序
                     */
                    bool m_ascending;
                    bool m_ascendingHasBeenSet;

                    /**
                     * 选中字段
                     */
                    std::vector<std::string> m_selectedFields;
                    bool m_selectedFieldsHasBeenSet;

                    /**
                     * 起始取数位置
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 取数数量
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 任务ID
                     */
                    std::vector<std::string> m_taskID;
                    bool m_taskIDHasBeenSet;

                    /**
                     * 拨测点运营商
                     */
                    std::vector<std::string> m_operators;
                    bool m_operatorsHasBeenSet;

                    /**
                     * 拨测点地区
                     */
                    std::vector<std::string> m_districts;
                    bool m_districtsHasBeenSet;

                    /**
                     * 错误类型
                     */
                    std::vector<std::string> m_errorTypes;
                    bool m_errorTypesHasBeenSet;

                    /**
                     * 城市
                     */
                    std::vector<std::string> m_city;
                    bool m_cityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEDETAILEDSINGLEPROBEDATAREQUEST_H_
