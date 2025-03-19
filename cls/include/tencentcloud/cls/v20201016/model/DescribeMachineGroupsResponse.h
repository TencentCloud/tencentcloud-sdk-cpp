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

#ifndef TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEMACHINEGROUPSRESPONSE_H_
#define TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEMACHINEGROUPSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cls/v20201016/model/MachineGroupInfo.h>


namespace TencentCloud
{
    namespace Cls
    {
        namespace V20201016
        {
            namespace Model
            {
                /**
                * DescribeMachineGroups返回参数结构体
                */
                class DescribeMachineGroupsResponse : public AbstractModel
                {
                public:
                    DescribeMachineGroupsResponse();
                    ~DescribeMachineGroupsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取机器组信息列表
                     * @return MachineGroups 机器组信息列表
                     * 
                     */
                    std::vector<MachineGroupInfo> GetMachineGroups() const;

                    /**
                     * 判断参数 MachineGroups 是否已赋值
                     * @return MachineGroups 是否已赋值
                     * 
                     */
                    bool MachineGroupsHasBeenSet() const;

                    /**
                     * 获取分页的总数目
                     * @return TotalCount 分页的总数目
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 机器组信息列表
                     */
                    std::vector<MachineGroupInfo> m_machineGroups;
                    bool m_machineGroupsHasBeenSet;

                    /**
                     * 分页的总数目
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLS_V20201016_MODEL_DESCRIBEMACHINEGROUPSRESPONSE_H_
