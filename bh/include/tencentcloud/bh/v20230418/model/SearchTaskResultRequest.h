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

#ifndef TENCENTCLOUD_BH_V20230418_MODEL_SEARCHTASKRESULTREQUEST_H_
#define TENCENTCLOUD_BH_V20230418_MODEL_SEARCHTASKRESULTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Bh
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * SearchTaskResult请求参数结构体
                */
                class SearchTaskResultRequest : public AbstractModel
                {
                public:
                    SearchTaskResultRequest();
                    ~SearchTaskResultRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>搜索区间的开始时间，缺省时取结束时间前7天（含结束时间当日）</p>
                     * @return StartTime <p>搜索区间的开始时间，缺省时取结束时间前7天（含结束时间当日）</p>
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置<p>搜索区间的开始时间，缺省时取结束时间前7天（含结束时间当日）</p>
                     * @param _startTime <p>搜索区间的开始时间，缺省时取结束时间前7天（含结束时间当日）</p>
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
                     * 获取<p>搜索区间的结束时间。未指定时，默认取当前时间</p>
                     * @return EndTime <p>搜索区间的结束时间。未指定时，默认取当前时间</p>
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置<p>搜索区间的结束时间。未指定时，默认取当前时间</p>
                     * @param _endTime <p>搜索区间的结束时间。未指定时，默认取当前时间</p>
                     * 
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     * 
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取<p>运维任务ID</p>
                     * @return OperationId <p>运维任务ID</p>
                     * 
                     */
                    std::string GetOperationId() const;

                    /**
                     * 设置<p>运维任务ID</p>
                     * @param _operationId <p>运维任务ID</p>
                     * 
                     */
                    void SetOperationId(const std::string& _operationId);

                    /**
                     * 判断参数 OperationId 是否已赋值
                     * @return OperationId 是否已赋值
                     * 
                     */
                    bool OperationIdHasBeenSet() const;

                    /**
                     * 获取<p>运维任务名称</p>
                     * @return Name <p>运维任务名称</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>运维任务名称</p>
                     * @param _name <p>运维任务名称</p>
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
                     * 获取<p>用户名，长度不超过20</p>
                     * @return UserName <p>用户名，长度不超过20</p>
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置<p>用户名，长度不超过20</p>
                     * @param _userName <p>用户名，长度不超过20</p>
                     * 
                     */
                    void SetUserName(const std::string& _userName);

                    /**
                     * 判断参数 UserName 是否已赋值
                     * @return UserName 是否已赋值
                     * 
                     */
                    bool UserNameHasBeenSet() const;

                    /**
                     * 获取<p>姓名，长度不超过20</p>
                     * @return RealName <p>姓名，长度不超过20</p>
                     * 
                     */
                    std::string GetRealName() const;

                    /**
                     * 设置<p>姓名，长度不超过20</p>
                     * @param _realName <p>姓名，长度不超过20</p>
                     * 
                     */
                    void SetRealName(const std::string& _realName);

                    /**
                     * 判断参数 RealName 是否已赋值
                     * @return RealName 是否已赋值
                     * 
                     */
                    bool RealNameHasBeenSet() const;

                    /**
                     * 获取<p>任务类型<br>1 手工运维任务<br>2 定时任务<br>3 账号推送任务</p>
                     * @return TaskType <p>任务类型<br>1 手工运维任务<br>2 定时任务<br>3 账号推送任务</p>
                     * 
                     */
                    std::vector<uint64_t> GetTaskType() const;

                    /**
                     * 设置<p>任务类型<br>1 手工运维任务<br>2 定时任务<br>3 账号推送任务</p>
                     * @param _taskType <p>任务类型<br>1 手工运维任务<br>2 定时任务<br>3 账号推送任务</p>
                     * 
                     */
                    void SetTaskType(const std::vector<uint64_t>& _taskType);

                    /**
                     * 判断参数 TaskType 是否已赋值
                     * @return TaskType 是否已赋值
                     * 
                     */
                    bool TaskTypeHasBeenSet() const;

                    /**
                     * 获取<p>查询偏移</p>
                     * @return Offset <p>查询偏移</p>
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置<p>查询偏移</p>
                     * @param _offset <p>查询偏移</p>
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取<p>分页的页内记录数，默认为20，最大200</p>
                     * @return Limit <p>分页的页内记录数，默认为20，最大200</p>
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置<p>分页的页内记录数，默认为20，最大200</p>
                     * @param _limit <p>分页的页内记录数，默认为20，最大200</p>
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * <p>搜索区间的开始时间，缺省时取结束时间前7天（含结束时间当日）</p>
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * <p>搜索区间的结束时间。未指定时，默认取当前时间</p>
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * <p>运维任务ID</p>
                     */
                    std::string m_operationId;
                    bool m_operationIdHasBeenSet;

                    /**
                     * <p>运维任务名称</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>用户名，长度不超过20</p>
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * <p>姓名，长度不超过20</p>
                     */
                    std::string m_realName;
                    bool m_realNameHasBeenSet;

                    /**
                     * <p>任务类型<br>1 手工运维任务<br>2 定时任务<br>3 账号推送任务</p>
                     */
                    std::vector<uint64_t> m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * <p>查询偏移</p>
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>分页的页内记录数，默认为20，最大200</p>
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_SEARCHTASKRESULTREQUEST_H_
