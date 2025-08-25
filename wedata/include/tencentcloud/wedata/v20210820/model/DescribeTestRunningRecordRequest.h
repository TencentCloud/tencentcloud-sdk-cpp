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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETESTRUNNINGRECORDREQUEST_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETESTRUNNINGRECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * DescribeTestRunningRecord请求参数结构体
                */
                class DescribeTestRunningRecordRequest : public AbstractModel
                {
                public:
                    DescribeTestRunningRecordRequest();
                    ~DescribeTestRunningRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取项目ID
                     * @return ProjectId 项目ID
                     * 
                     */
                    std::string GetProjectId() const;

                    /**
                     * 设置项目ID
                     * @param _projectId 项目ID
                     * 
                     */
                    void SetProjectId(const std::string& _projectId);

                    /**
                     * 判断参数 ProjectId 是否已赋值
                     * @return ProjectId 是否已赋值
                     * 
                     */
                    bool ProjectIdHasBeenSet() const;

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
                     * 获取搜索关键词
                     * @return SearchWord 搜索关键词
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置搜索关键词
                     * @param _searchWord 搜索关键词
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取搜索用户UIN
                     * @return SearchUserUin 搜索用户UIN
                     * 
                     */
                    std::string GetSearchUserUin() const;

                    /**
                     * 设置搜索用户UIN
                     * @param _searchUserUin 搜索用户UIN
                     * 
                     */
                    void SetSearchUserUin(const std::string& _searchUserUin);

                    /**
                     * 判断参数 SearchUserUin 是否已赋值
                     * @return SearchUserUin 是否已赋值
                     * 
                     */
                    bool SearchUserUinHasBeenSet() const;

                    /**
                     * 获取试运行记录创建时间
                     * @return CreateTime 试运行记录创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置试运行记录创建时间
                     * @param _createTime 试运行记录创建时间
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
                     * 获取试运行记录最大创建结束时间
                     * @return EndTime 试运行记录最大创建结束时间
                     * 
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置试运行记录最大创建结束时间
                     * @param _endTime 试运行记录最大创建结束时间
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
                     * 获取试运行记录id
                     * @return RecordIdList 试运行记录id
                     * 
                     */
                    std::vector<int64_t> GetRecordIdList() const;

                    /**
                     * 设置试运行记录id
                     * @param _recordIdList 试运行记录id
                     * 
                     */
                    void SetRecordIdList(const std::vector<int64_t>& _recordIdList);

                    /**
                     * 判断参数 RecordIdList 是否已赋值
                     * @return RecordIdList 是否已赋值
                     * 
                     */
                    bool RecordIdListHasBeenSet() const;

                private:

                    /**
                     * 项目ID
                     */
                    std::string m_projectId;
                    bool m_projectIdHasBeenSet;

                    /**
                     * 任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 搜索关键词
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 搜索用户UIN
                     */
                    std::string m_searchUserUin;
                    bool m_searchUserUinHasBeenSet;

                    /**
                     * 试运行记录创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 试运行记录最大创建结束时间
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 试运行记录id
                     */
                    std::vector<int64_t> m_recordIdList;
                    bool m_recordIdListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETESTRUNNINGRECORDREQUEST_H_
