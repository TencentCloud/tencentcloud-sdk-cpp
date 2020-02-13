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

#ifndef TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEUSERLIMITRESPONSE_H_
#define TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEUSERLIMITRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cat
    {
        namespace V20180409
        {
            namespace Model
            {
                /**
                * DescribeUserLimit返回参数结构体
                */
                class DescribeUserLimitResponse : public AbstractModel
                {
                public:
                    DescribeUserLimitResponse();
                    ~DescribeUserLimitResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取用户可建立的最大任务数
                     * @return MaxTaskNum 用户可建立的最大任务数
                     */
                    uint64_t GetMaxTaskNum() const;

                    /**
                     * 判断参数 MaxTaskNum 是否已赋值
                     * @return MaxTaskNum 是否已赋值
                     */
                    bool MaxTaskNumHasBeenSet() const;

                    /**
                     * 获取用户可用的最大拨测结点数
                     * @return MaxAgentNum 用户可用的最大拨测结点数
                     */
                    uint64_t GetMaxAgentNum() const;

                    /**
                     * 判断参数 MaxAgentNum 是否已赋值
                     * @return MaxAgentNum 是否已赋值
                     */
                    bool MaxAgentNumHasBeenSet() const;

                    /**
                     * 获取用户可建立的最大拨测分组数
                     * @return MaxGroupNum 用户可建立的最大拨测分组数
                     */
                    uint64_t GetMaxGroupNum() const;

                    /**
                     * 判断参数 MaxGroupNum 是否已赋值
                     * @return MaxGroupNum 是否已赋值
                     */
                    bool MaxGroupNumHasBeenSet() const;

                    /**
                     * 获取用户可用的最小拨测间隔
                     * @return MinPeriod 用户可用的最小拨测间隔
                     */
                    uint64_t GetMinPeriod() const;

                    /**
                     * 判断参数 MinPeriod 是否已赋值
                     * @return MinPeriod 是否已赋值
                     */
                    bool MinPeriodHasBeenSet() const;

                private:

                    /**
                     * 用户可建立的最大任务数
                     */
                    uint64_t m_maxTaskNum;
                    bool m_maxTaskNumHasBeenSet;

                    /**
                     * 用户可用的最大拨测结点数
                     */
                    uint64_t m_maxAgentNum;
                    bool m_maxAgentNumHasBeenSet;

                    /**
                     * 用户可建立的最大拨测分组数
                     */
                    uint64_t m_maxGroupNum;
                    bool m_maxGroupNumHasBeenSet;

                    /**
                     * 用户可用的最小拨测间隔
                     */
                    uint64_t m_minPeriod;
                    bool m_minPeriodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAT_V20180409_MODEL_DESCRIBEUSERLIMITRESPONSE_H_
