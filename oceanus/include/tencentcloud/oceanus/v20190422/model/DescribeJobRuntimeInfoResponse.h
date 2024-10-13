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

#ifndef TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBRUNTIMEINFORESPONSE_H_
#define TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBRUNTIMEINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/oceanus/v20190422/model/JobRuntimeInfo.h>


namespace TencentCloud
{
    namespace Oceanus
    {
        namespace V20190422
        {
            namespace Model
            {
                /**
                * DescribeJobRuntimeInfo返回参数结构体
                */
                class DescribeJobRuntimeInfoResponse : public AbstractModel
                {
                public:
                    DescribeJobRuntimeInfoResponse();
                    ~DescribeJobRuntimeInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取作业运行时信息
                     * @return JobRuntimeInfo 作业运行时信息
                     * 
                     */
                    std::vector<JobRuntimeInfo> GetJobRuntimeInfo() const;

                    /**
                     * 判断参数 JobRuntimeInfo 是否已赋值
                     * @return JobRuntimeInfo 是否已赋值
                     * 
                     */
                    bool JobRuntimeInfoHasBeenSet() const;

                private:

                    /**
                     * 作业运行时信息
                     */
                    std::vector<JobRuntimeInfo> m_jobRuntimeInfo;
                    bool m_jobRuntimeInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_OCEANUS_V20190422_MODEL_DESCRIBEJOBRUNTIMEINFORESPONSE_H_
