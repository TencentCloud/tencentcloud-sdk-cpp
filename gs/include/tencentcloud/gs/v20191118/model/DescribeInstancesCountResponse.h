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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEINSTANCESCOUNTRESPONSE_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEINSTANCESCOUNTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * DescribeInstancesCount返回参数结构体
                */
                class DescribeInstancesCountResponse : public AbstractModel
                {
                public:
                    DescribeInstancesCountResponse();
                    ~DescribeInstancesCountResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取客户的实例总数
                     * @return Total 客户的实例总数
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取客户的实例运行数
                     * @return Running 客户的实例运行数
                     * 
                     */
                    uint64_t GetRunning() const;

                    /**
                     * 判断参数 Running 是否已赋值
                     * @return Running 是否已赋值
                     * 
                     */
                    bool RunningHasBeenSet() const;

                private:

                    /**
                     * 客户的实例总数
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 客户的实例运行数
                     */
                    uint64_t m_running;
                    bool m_runningHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEINSTANCESCOUNTRESPONSE_H_
