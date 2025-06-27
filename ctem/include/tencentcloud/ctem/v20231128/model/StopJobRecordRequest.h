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

#ifndef TENCENTCLOUD_CTEM_V20231128_MODEL_STOPJOBRECORDREQUEST_H_
#define TENCENTCLOUD_CTEM_V20231128_MODEL_STOPJOBRECORDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ctem
    {
        namespace V20231128
        {
            namespace Model
            {
                /**
                * StopJobRecord请求参数结构体
                */
                class StopJobRecordRequest : public AbstractModel
                {
                public:
                    StopJobRecordRequest();
                    ~StopJobRecordRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取企业ID
                     * @return CustomerId 企业ID
                     * 
                     */
                    int64_t GetCustomerId() const;

                    /**
                     * 设置企业ID
                     * @param _customerId 企业ID
                     * 
                     */
                    void SetCustomerId(const int64_t& _customerId);

                    /**
                     * 判断参数 CustomerId 是否已赋值
                     * @return CustomerId 是否已赋值
                     * 
                     */
                    bool CustomerIdHasBeenSet() const;

                    /**
                     * 获取任务ID
                     * @return JobRecordId 任务ID
                     * 
                     */
                    int64_t GetJobRecordId() const;

                    /**
                     * 设置任务ID
                     * @param _jobRecordId 任务ID
                     * 
                     */
                    void SetJobRecordId(const int64_t& _jobRecordId);

                    /**
                     * 判断参数 JobRecordId 是否已赋值
                     * @return JobRecordId 是否已赋值
                     * 
                     */
                    bool JobRecordIdHasBeenSet() const;

                private:

                    /**
                     * 企业ID
                     */
                    int64_t m_customerId;
                    bool m_customerIdHasBeenSet;

                    /**
                     * 任务ID
                     */
                    int64_t m_jobRecordId;
                    bool m_jobRecordIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CTEM_V20231128_MODEL_STOPJOBRECORDREQUEST_H_
