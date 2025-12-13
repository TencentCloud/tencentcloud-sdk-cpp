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

#ifndef TENCENTCLOUD_DBS_V20211108_MODEL_CREATECONNECTTESTJOBRESPONSE_H_
#define TENCENTCLOUD_DBS_V20211108_MODEL_CREATECONNECTTESTJOBRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbs
    {
        namespace V20211108
        {
            namespace Model
            {
                /**
                * CreateConnectTestJob返回参数结构体
                */
                class CreateConnectTestJobResponse : public AbstractModel
                {
                public:
                    CreateConnectTestJobResponse();
                    ~CreateConnectTestJobResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取连通性任务 ID。
                     * @return ConnTaskId 连通性任务 ID。
                     * 
                     */
                    std::string GetConnTaskId() const;

                    /**
                     * 判断参数 ConnTaskId 是否已赋值
                     * @return ConnTaskId 是否已赋值
                     * 
                     */
                    bool ConnTaskIdHasBeenSet() const;

                private:

                    /**
                     * 连通性任务 ID。
                     */
                    std::string m_connTaskId;
                    bool m_connTaskIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBS_V20211108_MODEL_CREATECONNECTTESTJOBRESPONSE_H_
