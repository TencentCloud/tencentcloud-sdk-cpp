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

#ifndef TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CANCELISOLATEDBINSTANCESRESPONSE_H_
#define TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CANCELISOLATEDBINSTANCESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tdmysql
    {
        namespace V20211122
        {
            namespace Model
            {
                /**
                * CancelIsolateDBInstances返回参数结构体
                */
                class CancelIsolateDBInstancesResponse : public AbstractModel
                {
                public:
                    CancelIsolateDBInstancesResponse();
                    ~CancelIsolateDBInstancesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取解除隔离成功实例Id列表
                     * @return SuccessInstanceIds 解除隔离成功实例Id列表
                     * 
                     */
                    std::vector<std::string> GetSuccessInstanceIds() const;

                    /**
                     * 判断参数 SuccessInstanceIds 是否已赋值
                     * @return SuccessInstanceIds 是否已赋值
                     * 
                     */
                    bool SuccessInstanceIdsHasBeenSet() const;

                    /**
                     * 获取解除隔离失败实例Id列表
                     * @return FailedInstanceIds 解除隔离失败实例Id列表
                     * 
                     */
                    std::vector<std::string> GetFailedInstanceIds() const;

                    /**
                     * 判断参数 FailedInstanceIds 是否已赋值
                     * @return FailedInstanceIds 是否已赋值
                     * 
                     */
                    bool FailedInstanceIdsHasBeenSet() const;

                private:

                    /**
                     * 解除隔离成功实例Id列表
                     */
                    std::vector<std::string> m_successInstanceIds;
                    bool m_successInstanceIdsHasBeenSet;

                    /**
                     * 解除隔离失败实例Id列表
                     */
                    std::vector<std::string> m_failedInstanceIds;
                    bool m_failedInstanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TDMYSQL_V20211122_MODEL_CANCELISOLATEDBINSTANCESRESPONSE_H_
