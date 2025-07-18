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

#ifndef TENCENTCLOUD_TRP_V20210515_MODEL_MODIFYTRACEDATARANKSREQUEST_H_
#define TENCENTCLOUD_TRP_V20210515_MODEL_MODIFYTRACEDATARANKSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Trp
    {
        namespace V20210515
        {
            namespace Model
            {
                /**
                * ModifyTraceDataRanks请求参数结构体
                */
                class ModifyTraceDataRanksRequest : public AbstractModel
                {
                public:
                    ModifyTraceDataRanksRequest();
                    ~ModifyTraceDataRanksRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取企业ID
                     * @return CorpId 企业ID
                     * 
                     */
                    uint64_t GetCorpId() const;

                    /**
                     * 设置企业ID
                     * @param _corpId 企业ID
                     * 
                     */
                    void SetCorpId(const uint64_t& _corpId);

                    /**
                     * 判断参数 CorpId 是否已赋值
                     * @return CorpId 是否已赋值
                     * 
                     */
                    bool CorpIdHasBeenSet() const;

                    /**
                     * 获取批次ID
                     * @return BatchId 批次ID
                     * 
                     */
                    std::string GetBatchId() const;

                    /**
                     * 设置批次ID
                     * @param _batchId 批次ID
                     * 
                     */
                    void SetBatchId(const std::string& _batchId);

                    /**
                     * 判断参数 BatchId 是否已赋值
                     * @return BatchId 是否已赋值
                     * 
                     */
                    bool BatchIdHasBeenSet() const;

                    /**
                     * 获取生产任务ID
                     * @return TaskId 生产任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置生产任务ID
                     * @param _taskId 生产任务ID
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
                     * 获取溯源ID
                     * @return TraceIds 溯源ID
                     * 
                     */
                    std::vector<std::string> GetTraceIds() const;

                    /**
                     * 设置溯源ID
                     * @param _traceIds 溯源ID
                     * 
                     */
                    void SetTraceIds(const std::vector<std::string>& _traceIds);

                    /**
                     * 判断参数 TraceIds 是否已赋值
                     * @return TraceIds 是否已赋值
                     * 
                     */
                    bool TraceIdsHasBeenSet() const;

                private:

                    /**
                     * 企业ID
                     */
                    uint64_t m_corpId;
                    bool m_corpIdHasBeenSet;

                    /**
                     * 批次ID
                     */
                    std::string m_batchId;
                    bool m_batchIdHasBeenSet;

                    /**
                     * 生产任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 溯源ID
                     */
                    std::vector<std::string> m_traceIds;
                    bool m_traceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRP_V20210515_MODEL_MODIFYTRACEDATARANKSREQUEST_H_
