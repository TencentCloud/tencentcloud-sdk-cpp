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

#ifndef TENCENTCLOUD_BIZLIVE_V20190313_MODEL_DESCRIBEWORKERSRESPONSE_H_
#define TENCENTCLOUD_BIZLIVE_V20190313_MODEL_DESCRIBEWORKERSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/bizlive/v20190313/model/WorkerRegionInfo.h>


namespace TencentCloud
{
    namespace Bizlive
    {
        namespace V20190313
        {
            namespace Model
            {
                /**
                * DescribeWorkers返回参数结构体
                */
                class DescribeWorkersResponse : public AbstractModel
                {
                public:
                    DescribeWorkersResponse();
                    ~DescribeWorkersResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取各个区域的机器情况
                     * @return RegionDetail 各个区域的机器情况
                     * 
                     */
                    std::vector<WorkerRegionInfo> GetRegionDetail() const;

                    /**
                     * 判断参数 RegionDetail 是否已赋值
                     * @return RegionDetail 是否已赋值
                     * 
                     */
                    bool RegionDetailHasBeenSet() const;

                    /**
                     * 获取空闲机器总数量
                     * @return Idle 空闲机器总数量
                     * 
                     */
                    uint64_t GetIdle() const;

                    /**
                     * 判断参数 Idle 是否已赋值
                     * @return Idle 是否已赋值
                     * 
                     */
                    bool IdleHasBeenSet() const;

                    /**
                     * 获取区域个数
                     * @return RegionNum 区域个数
                     * 
                     */
                    uint64_t GetRegionNum() const;

                    /**
                     * 判断参数 RegionNum 是否已赋值
                     * @return RegionNum 是否已赋值
                     * 
                     */
                    bool RegionNumHasBeenSet() const;

                private:

                    /**
                     * 各个区域的机器情况
                     */
                    std::vector<WorkerRegionInfo> m_regionDetail;
                    bool m_regionDetailHasBeenSet;

                    /**
                     * 空闲机器总数量
                     */
                    uint64_t m_idle;
                    bool m_idleHasBeenSet;

                    /**
                     * 区域个数
                     */
                    uint64_t m_regionNum;
                    bool m_regionNumHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BIZLIVE_V20190313_MODEL_DESCRIBEWORKERSRESPONSE_H_
