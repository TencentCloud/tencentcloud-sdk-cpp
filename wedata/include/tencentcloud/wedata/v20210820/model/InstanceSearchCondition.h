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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCESEARCHCONDITION_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCESEARCHCONDITION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/InstanceCondition.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 实例检索条件
                */
                class InstanceSearchCondition : public AbstractModel
                {
                public:
                    InstanceSearchCondition();
                    ~InstanceSearchCondition() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务调度周期类型
                     * @return CycleList 任务调度周期类型
                     * 
                     */
                    std::vector<std::string> GetCycleList() const;

                    /**
                     * 设置任务调度周期类型
                     * @param _cycleList 任务调度周期类型
                     * 
                     */
                    void SetCycleList(const std::vector<std::string>& _cycleList);

                    /**
                     * 判断参数 CycleList 是否已赋值
                     * @return CycleList 是否已赋值
                     * 
                     */
                    bool CycleListHasBeenSet() const;

                    /**
                     * 获取起始时间
                     * @return DateFrom 起始时间
                     * 
                     */
                    std::string GetDateFrom() const;

                    /**
                     * 设置起始时间
                     * @param _dateFrom 起始时间
                     * 
                     */
                    void SetDateFrom(const std::string& _dateFrom);

                    /**
                     * 判断参数 DateFrom 是否已赋值
                     * @return DateFrom 是否已赋值
                     * 
                     */
                    bool DateFromHasBeenSet() const;

                    /**
                     * 获取截止时间
                     * @return DateTo 截止时间
                     * 
                     */
                    std::string GetDateTo() const;

                    /**
                     * 设置截止时间
                     * @param _dateTo 截止时间
                     * 
                     */
                    void SetDateTo(const std::string& _dateTo);

                    /**
                     * 判断参数 DateTo 是否已赋值
                     * @return DateTo 是否已赋值
                     * 
                     */
                    bool DateToHasBeenSet() const;

                    /**
                     * 获取实例过滤条件
                     * @return Instance 实例过滤条件
                     * 
                     */
                    InstanceCondition GetInstance() const;

                    /**
                     * 设置实例过滤条件
                     * @param _instance 实例过滤条件
                     * 
                     */
                    void SetInstance(const InstanceCondition& _instance);

                    /**
                     * 判断参数 Instance 是否已赋值
                     * @return Instance 是否已赋值
                     * 
                     */
                    bool InstanceHasBeenSet() const;

                    /**
                     * 获取模糊查询关键字
                     * @return Keyword 模糊查询关键字
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置模糊查询关键字
                     * @param _keyword 模糊查询关键字
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取排序方式
                     * @return Sort 排序方式
                     * 
                     */
                    std::string GetSort() const;

                    /**
                     * 设置排序方式
                     * @param _sort 排序方式
                     * 
                     */
                    void SetSort(const std::string& _sort);

                    /**
                     * 判断参数 Sort 是否已赋值
                     * @return Sort 是否已赋值
                     * 
                     */
                    bool SortHasBeenSet() const;

                    /**
                     * 获取排序字段
                     * @return SortCol 排序字段
                     * 
                     */
                    std::string GetSortCol() const;

                    /**
                     * 设置排序字段
                     * @param _sortCol 排序字段
                     * 
                     */
                    void SetSortCol(const std::string& _sortCol);

                    /**
                     * 判断参数 SortCol 是否已赋值
                     * @return SortCol 是否已赋值
                     * 
                     */
                    bool SortColHasBeenSet() const;

                    /**
                     * 获取实例状态类型
                     * @return StateList 实例状态类型
                     * 
                     */
                    std::vector<std::string> GetStateList() const;

                    /**
                     * 设置实例状态类型
                     * @param _stateList 实例状态类型
                     * 
                     */
                    void SetStateList(const std::vector<std::string>& _stateList);

                    /**
                     * 判断参数 StateList 是否已赋值
                     * @return StateList 是否已赋值
                     * 
                     */
                    bool StateListHasBeenSet() const;

                private:

                    /**
                     * 任务调度周期类型
                     */
                    std::vector<std::string> m_cycleList;
                    bool m_cycleListHasBeenSet;

                    /**
                     * 起始时间
                     */
                    std::string m_dateFrom;
                    bool m_dateFromHasBeenSet;

                    /**
                     * 截止时间
                     */
                    std::string m_dateTo;
                    bool m_dateToHasBeenSet;

                    /**
                     * 实例过滤条件
                     */
                    InstanceCondition m_instance;
                    bool m_instanceHasBeenSet;

                    /**
                     * 模糊查询关键字
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 排序方式
                     */
                    std::string m_sort;
                    bool m_sortHasBeenSet;

                    /**
                     * 排序字段
                     */
                    std::string m_sortCol;
                    bool m_sortColHasBeenSet;

                    /**
                     * 实例状态类型
                     */
                    std::vector<std::string> m_stateList;
                    bool m_stateListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_INSTANCESEARCHCONDITION_H_
