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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBSAVEPOINTREQUEST_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBSAVEPOINTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * DescribeJobSavepoint请求参数结构体
                */
                class DescribeJobSavepointRequest : public AbstractModel
                {
                public:
                    DescribeJobSavepointRequest();
                    ~DescribeJobSavepointRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取作业 SerialId
                     * @return JobId 作业 SerialId
                     * 
                     */
                    std::string GetJobId() const;

                    /**
                     * 设置作业 SerialId
                     * @param _jobId 作业 SerialId
                     * 
                     */
                    void SetJobId(const std::string& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取分页参数，单页总数
                     * @return Limit 分页参数，单页总数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页参数，单页总数
                     * @param _limit 分页参数，单页总数
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取分页参数，偏移量
                     * @return Offset 分页参数，偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页参数，偏移量
                     * @param _offset 分页参数，偏移量
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取工作空间 SerialId
                     * @return WorkSpaceId 工作空间 SerialId
                     * 
                     */
                    std::string GetWorkSpaceId() const;

                    /**
                     * 设置工作空间 SerialId
                     * @param _workSpaceId 工作空间 SerialId
                     * 
                     */
                    void SetWorkSpaceId(const std::string& _workSpaceId);

                    /**
                     * 判断参数 WorkSpaceId 是否已赋值
                     * @return WorkSpaceId 是否已赋值
                     * 
                     */
                    bool WorkSpaceIdHasBeenSet() const;

                    /**
                     * 获取2 是checkpoint
1 是触发savepoint
3 停止触发的savepoint
                     * @return RecordTypes 2 是checkpoint
1 是触发savepoint
3 停止触发的savepoint
                     * 
                     */
                    std::vector<int64_t> GetRecordTypes() const;

                    /**
                     * 设置2 是checkpoint
1 是触发savepoint
3 停止触发的savepoint
                     * @param _recordTypes 2 是checkpoint
1 是触发savepoint
3 停止触发的savepoint
                     * 
                     */
                    void SetRecordTypes(const std::vector<int64_t>& _recordTypes);

                    /**
                     * 判断参数 RecordTypes 是否已赋值
                     * @return RecordTypes 是否已赋值
                     * 
                     */
                    bool RecordTypesHasBeenSet() const;

                private:

                    /**
                     * 作业 SerialId
                     */
                    std::string m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 分页参数，单页总数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 分页参数，偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 工作空间 SerialId
                     */
                    std::string m_workSpaceId;
                    bool m_workSpaceIdHasBeenSet;

                    /**
                     * 2 是checkpoint
1 是触发savepoint
3 停止触发的savepoint
                     */
                    std::vector<int64_t> m_recordTypes;
                    bool m_recordTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBSAVEPOINTREQUEST_H_
