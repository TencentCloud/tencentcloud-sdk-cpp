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

#ifndef TENCENTCLOUD_CFS_V20190719_MODEL_CREATEDATARETRIEVALREQUEST_H_
#define TENCENTCLOUD_CFS_V20190719_MODEL_CREATEDATARETRIEVALREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cfs
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * CreateDataRetrieval请求参数结构体
                */
                class CreateDataRetrievalRequest : public AbstractModel
                {
                public:
                    CreateDataRetrievalRequest();
                    ~CreateDataRetrievalRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>文件系统实例 ID，通过查询文件系统 DescribeCfsFileSystems 获取 示例值：cfs-xxxxxx</p>
                     * @return FileSystemId <p>文件系统实例 ID，通过查询文件系统 DescribeCfsFileSystems 获取 示例值：cfs-xxxxxx</p>
                     * 
                     */
                    std::string GetFileSystemId() const;

                    /**
                     * 设置<p>文件系统实例 ID，通过查询文件系统 DescribeCfsFileSystems 获取 示例值：cfs-xxxxxx</p>
                     * @param _fileSystemId <p>文件系统实例 ID，通过查询文件系统 DescribeCfsFileSystems 获取 示例值：cfs-xxxxxx</p>
                     * 
                     */
                    void SetFileSystemId(const std::string& _fileSystemId);

                    /**
                     * 判断参数 FileSystemId 是否已赋值
                     * @return FileSystemId 是否已赋值
                     * 
                     */
                    bool FileSystemIdHasBeenSet() const;

                    /**
                     * 获取<p>数据检索名称 示例值：DataDive</p>
                     * @return DataRetrievalName <p>数据检索名称 示例值：DataDive</p>
                     * 
                     */
                    std::string GetDataRetrievalName() const;

                    /**
                     * 设置<p>数据检索名称 示例值：DataDive</p>
                     * @param _dataRetrievalName <p>数据检索名称 示例值：DataDive</p>
                     * 
                     */
                    void SetDataRetrievalName(const std::string& _dataRetrievalName);

                    /**
                     * 判断参数 DataRetrievalName 是否已赋值
                     * @return DataRetrievalName 是否已赋值
                     * 
                     */
                    bool DataRetrievalNameHasBeenSet() const;

                    /**
                     * 获取<p>聚合检索条件 示例值：from entries|where size &gt;4096</p>
                     * @return CompoundCondition <p>聚合检索条件 示例值：from entries|where size &gt;4096</p>
                     * 
                     */
                    std::string GetCompoundCondition() const;

                    /**
                     * 设置<p>聚合检索条件 示例值：from entries|where size &gt;4096</p>
                     * @param _compoundCondition <p>聚合检索条件 示例值：from entries|where size &gt;4096</p>
                     * 
                     */
                    void SetCompoundCondition(const std::string& _compoundCondition);

                    /**
                     * 判断参数 CompoundCondition 是否已赋值
                     * @return CompoundCondition 是否已赋值
                     * 
                     */
                    bool CompoundConditionHasBeenSet() const;

                    /**
                     * 获取<p>列表检索条件</p>
                     * @return QueryCondition <p>列表检索条件</p>
                     * 
                     */
                    std::string GetQueryCondition() const;

                    /**
                     * 设置<p>列表检索条件</p>
                     * @param _queryCondition <p>列表检索条件</p>
                     * 
                     */
                    void SetQueryCondition(const std::string& _queryCondition);

                    /**
                     * 判断参数 QueryCondition 是否已赋值
                     * @return QueryCondition 是否已赋值
                     * 
                     */
                    bool QueryConditionHasBeenSet() const;

                    /**
                     * 获取<p>数据检索按月重复，每月1-31号，选择一天，每月将在这一天自动创建快照；例如1 代表1号；与DayOfWeek二选一 示例值：1</p>
                     * @return DayOfMonth <p>数据检索按月重复，每月1-31号，选择一天，每月将在这一天自动创建快照；例如1 代表1号；与DayOfWeek二选一 示例值：1</p>
                     * 
                     */
                    std::string GetDayOfMonth() const;

                    /**
                     * 设置<p>数据检索按月重复，每月1-31号，选择一天，每月将在这一天自动创建快照；例如1 代表1号；与DayOfWeek二选一 示例值：1</p>
                     * @param _dayOfMonth <p>数据检索按月重复，每月1-31号，选择一天，每月将在这一天自动创建快照；例如1 代表1号；与DayOfWeek二选一 示例值：1</p>
                     * 
                     */
                    void SetDayOfMonth(const std::string& _dayOfMonth);

                    /**
                     * 判断参数 DayOfMonth 是否已赋值
                     * @return DayOfMonth 是否已赋值
                     * 
                     */
                    bool DayOfMonthHasBeenSet() const;

                    /**
                     * 获取<p>数据检索重复日期，星期一到星期日。 1代表星期一、7代表星期天，与DayOfMonth，二选一 示例值：2,3</p>
                     * @return DayOfWeek <p>数据检索重复日期，星期一到星期日。 1代表星期一、7代表星期天，与DayOfMonth，二选一 示例值：2,3</p>
                     * 
                     */
                    std::string GetDayOfWeek() const;

                    /**
                     * 设置<p>数据检索重复日期，星期一到星期日。 1代表星期一、7代表星期天，与DayOfMonth，二选一 示例值：2,3</p>
                     * @param _dayOfWeek <p>数据检索重复日期，星期一到星期日。 1代表星期一、7代表星期天，与DayOfMonth，二选一 示例值：2,3</p>
                     * 
                     */
                    void SetDayOfWeek(const std::string& _dayOfWeek);

                    /**
                     * 判断参数 DayOfWeek 是否已赋值
                     * @return DayOfWeek 是否已赋值
                     * 
                     */
                    bool DayOfWeekHasBeenSet() const;

                    /**
                     * 获取<p>重复时间点,0-23，小时 示例值：1,3,5</p>
                     * @return Hour <p>重复时间点,0-23，小时 示例值：1,3,5</p>
                     * 
                     */
                    std::string GetHour() const;

                    /**
                     * 设置<p>重复时间点,0-23，小时 示例值：1,3,5</p>
                     * @param _hour <p>重复时间点,0-23，小时 示例值：1,3,5</p>
                     * 
                     */
                    void SetHour(const std::string& _hour);

                    /**
                     * 判断参数 Hour 是否已赋值
                     * @return Hour 是否已赋值
                     * 
                     */
                    bool HourHasBeenSet() const;

                private:

                    /**
                     * <p>文件系统实例 ID，通过查询文件系统 DescribeCfsFileSystems 获取 示例值：cfs-xxxxxx</p>
                     */
                    std::string m_fileSystemId;
                    bool m_fileSystemIdHasBeenSet;

                    /**
                     * <p>数据检索名称 示例值：DataDive</p>
                     */
                    std::string m_dataRetrievalName;
                    bool m_dataRetrievalNameHasBeenSet;

                    /**
                     * <p>聚合检索条件 示例值：from entries|where size &gt;4096</p>
                     */
                    std::string m_compoundCondition;
                    bool m_compoundConditionHasBeenSet;

                    /**
                     * <p>列表检索条件</p>
                     */
                    std::string m_queryCondition;
                    bool m_queryConditionHasBeenSet;

                    /**
                     * <p>数据检索按月重复，每月1-31号，选择一天，每月将在这一天自动创建快照；例如1 代表1号；与DayOfWeek二选一 示例值：1</p>
                     */
                    std::string m_dayOfMonth;
                    bool m_dayOfMonthHasBeenSet;

                    /**
                     * <p>数据检索重复日期，星期一到星期日。 1代表星期一、7代表星期天，与DayOfMonth，二选一 示例值：2,3</p>
                     */
                    std::string m_dayOfWeek;
                    bool m_dayOfWeekHasBeenSet;

                    /**
                     * <p>重复时间点,0-23，小时 示例值：1,3,5</p>
                     */
                    std::string m_hour;
                    bool m_hourHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFS_V20190719_MODEL_CREATEDATARETRIEVALREQUEST_H_
