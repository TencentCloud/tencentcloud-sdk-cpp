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

#ifndef TENCENTCLOUD_ECM_V20190719_MODEL_QUERYVPCTASKRESULTRESPONSE_H_
#define TENCENTCLOUD_ECM_V20190719_MODEL_QUERYVPCTASKRESULTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ecm
    {
        namespace V20190719
        {
            namespace Model
            {
                /**
                * QueryVpcTaskResult返回参数结构体
                */
                class QueryVpcTaskResultResponse : public AbstractModel
                {
                public:
                    QueryVpcTaskResultResponse();
                    ~QueryVpcTaskResultResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取执行结果，包括"SUCCESS", "FAILED", "RUNNING"
                     * @return Status 执行结果，包括"SUCCESS", "FAILED", "RUNNING"
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取异步任务执行输出。
                     * @return Output 异步任务执行输出。
                     * 
                     */
                    std::string GetOutput() const;

                    /**
                     * 判断参数 Output 是否已赋值
                     * @return Output 是否已赋值
                     * 
                     */
                    bool OutputHasBeenSet() const;

                private:

                    /**
                     * 执行结果，包括"SUCCESS", "FAILED", "RUNNING"
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 异步任务执行输出。
                     */
                    std::string m_output;
                    bool m_outputHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ECM_V20190719_MODEL_QUERYVPCTASKRESULTRESPONSE_H_
