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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DELETERECORDBATCHRESPONSE_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DELETERECORDBATCHRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dnspod/v20210323/model/DeleteRecordBatchDetail.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * DeleteRecordBatch返回参数结构体
                */
                class DeleteRecordBatchResponse : public AbstractModel
                {
                public:
                    DeleteRecordBatchResponse();
                    ~DeleteRecordBatchResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取批量任务 ID
                     * @return JobId 批量任务 ID
                     * 
                     */
                    uint64_t GetJobId() const;

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取任务详情
                     * @return DetailList 任务详情
                     * 
                     */
                    std::vector<DeleteRecordBatchDetail> GetDetailList() const;

                    /**
                     * 判断参数 DetailList 是否已赋值
                     * @return DetailList 是否已赋值
                     * 
                     */
                    bool DetailListHasBeenSet() const;

                private:

                    /**
                     * 批量任务 ID
                     */
                    uint64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 任务详情
                     */
                    std::vector<DeleteRecordBatchDetail> m_detailList;
                    bool m_detailListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DELETERECORDBATCHRESPONSE_H_
