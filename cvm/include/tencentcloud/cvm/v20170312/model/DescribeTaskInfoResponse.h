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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBETASKINFORESPONSE_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBETASKINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cvm/v20170312/model/RepairTaskInfo.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * DescribeTaskInfo返回参数结构体
                */
                class DescribeTaskInfoResponse : public AbstractModel
                {
                public:
                    DescribeTaskInfoResponse();
                    ~DescribeTaskInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取查询返回的维修任务总数量。
                     * @return TotalCount 查询返回的维修任务总数量。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取查询返回的维修任务列表。
                     * @return RepairTaskInfoSet 查询返回的维修任务列表。
                     * 
                     */
                    std::vector<RepairTaskInfo> GetRepairTaskInfoSet() const;

                    /**
                     * 判断参数 RepairTaskInfoSet 是否已赋值
                     * @return RepairTaskInfoSet 是否已赋值
                     * 
                     */
                    bool RepairTaskInfoSetHasBeenSet() const;

                private:

                    /**
                     * 查询返回的维修任务总数量。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 查询返回的维修任务列表。
                     */
                    std::vector<RepairTaskInfo> m_repairTaskInfoSet;
                    bool m_repairTaskInfoSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DESCRIBETASKINFORESPONSE_H_
