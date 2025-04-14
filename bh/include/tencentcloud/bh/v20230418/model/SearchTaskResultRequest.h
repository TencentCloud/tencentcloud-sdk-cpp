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
                     * 获取搜索区间的开始时间
                     * @return StartTime 搜索区间的开始时间
                     * 
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置搜索区间的开始时间
                     * @param _startTime 搜索区间的开始时间
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
                     * 获取搜索区间的结束时间
                     * @return EndTime 搜索区间的结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置搜索区间的结束时间
                     * @param _endTime 搜索区间的结束时间
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
                     * 获取运维任务ID
                     * @return OperationId 运维任务ID
                     * 
                     */
                    std::string GetOperationId() const;

                    /**
                     * 设置运维任务ID
                     * @param _operationId 运维任务ID
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
                     * 获取运维任务名称
                     * @return Name 运维任务名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置运维任务名称
                     * @param _name 运维任务名称
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
                     * 获取用户名，长度不超过20
                     * @return UserName 用户名，长度不超过20
                     * 
                     */
                    std::string GetUserName() const;

                    /**
                     * 设置用户名，长度不超过20
                     * @param _userName 用户名，长度不超过20
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
                     * 获取姓名，长度不超过20
                     * @return RealName 姓名，长度不超过20
                     * 
                     */
                    std::string GetRealName() const;

                    /**
                     * 设置姓名，长度不超过20
                     * @param _realName 姓名，长度不超过20
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
                     * 获取任务类型
1 手工运维任务
2 定时任务
3 账号推送任务
                     * @return TaskType 任务类型
1 手工运维任务
2 定时任务
3 账号推送任务
                     * 
                     */
                    std::vector<uint64_t> GetTaskType() const;

                    /**
                     * 设置任务类型
1 手工运维任务
2 定时任务
3 账号推送任务
                     * @param _taskType 任务类型
1 手工运维任务
2 定时任务
3 账号推送任务
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
                     * 获取查询偏移
                     * @return Offset 查询偏移
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置查询偏移
                     * @param _offset 查询偏移
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
                     * 获取分页的页内记录数，默认为20，最大200
                     * @return Limit 分页的页内记录数，默认为20，最大200
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页的页内记录数，默认为20，最大200
                     * @param _limit 分页的页内记录数，默认为20，最大200
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
                     * 搜索区间的开始时间
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 搜索区间的结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 运维任务ID
                     */
                    std::string m_operationId;
                    bool m_operationIdHasBeenSet;

                    /**
                     * 运维任务名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 用户名，长度不超过20
                     */
                    std::string m_userName;
                    bool m_userNameHasBeenSet;

                    /**
                     * 姓名，长度不超过20
                     */
                    std::string m_realName;
                    bool m_realNameHasBeenSet;

                    /**
                     * 任务类型
1 手工运维任务
2 定时任务
3 账号推送任务
                     */
                    std::vector<uint64_t> m_taskType;
                    bool m_taskTypeHasBeenSet;

                    /**
                     * 查询偏移
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页的页内记录数，默认为20，最大200
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BH_V20230418_MODEL_SEARCHTASKRESULTREQUEST_H_
