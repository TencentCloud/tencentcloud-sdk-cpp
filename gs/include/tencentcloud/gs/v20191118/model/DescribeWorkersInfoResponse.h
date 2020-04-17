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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEWORKERSINFORESPONSE_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEWORKERSINFORESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/gs/v20191118/model/WorkerDetail.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * DescribeWorkersInfo返回参数结构体
                */
                class DescribeWorkersInfoResponse : public AbstractModel
                {
                public:
                    DescribeWorkersInfoResponse();
                    ~DescribeWorkersInfoResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取机器数量
                     * @return WorkerNum 机器数量
                     */
                    uint64_t GetWorkerNum() const;

                    /**
                     * 判断参数 WorkerNum 是否已赋值
                     * @return WorkerNum 是否已赋值
                     */
                    bool WorkerNumHasBeenSet() const;

                    /**
                     * 获取机器详细信息
                     * @return WorkerDetail 机器详细信息
                     */
                    std::vector<WorkerDetail> GetWorkerDetail() const;

                    /**
                     * 判断参数 WorkerDetail 是否已赋值
                     * @return WorkerDetail 是否已赋值
                     */
                    bool WorkerDetailHasBeenSet() const;

                private:

                    /**
                     * 机器数量
                     */
                    uint64_t m_workerNum;
                    bool m_workerNumHasBeenSet;

                    /**
                     * 机器详细信息
                     */
                    std::vector<WorkerDetail> m_workerDetail;
                    bool m_workerDetailHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEWORKERSINFORESPONSE_H_
