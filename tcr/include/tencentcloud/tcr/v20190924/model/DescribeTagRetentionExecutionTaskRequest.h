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

#ifndef TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBETAGRETENTIONEXECUTIONTASKREQUEST_H_
#define TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBETAGRETENTIONEXECUTIONTASKREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcr
    {
        namespace V20190924
        {
            namespace Model
            {
                /**
                * DescribeTagRetentionExecutionTask请求参数结构体
                */
                class DescribeTagRetentionExecutionTaskRequest : public AbstractModel
                {
                public:
                    DescribeTagRetentionExecutionTaskRequest();
                    ~DescribeTagRetentionExecutionTaskRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取主实例iD
                     * @return RegistryId 主实例iD
                     * 
                     */
                    std::string GetRegistryId() const;

                    /**
                     * 设置主实例iD
                     * @param _registryId 主实例iD
                     * 
                     */
                    void SetRegistryId(const std::string& _registryId);

                    /**
                     * 判断参数 RegistryId 是否已赋值
                     * @return RegistryId 是否已赋值
                     * 
                     */
                    bool RegistryIdHasBeenSet() const;

                    /**
                     * 获取规则Id
                     * @return RetentionId 规则Id
                     * 
                     */
                    int64_t GetRetentionId() const;

                    /**
                     * 设置规则Id
                     * @param _retentionId 规则Id
                     * 
                     */
                    void SetRetentionId(const int64_t& _retentionId);

                    /**
                     * 判断参数 RetentionId 是否已赋值
                     * @return RetentionId 是否已赋值
                     * 
                     */
                    bool RetentionIdHasBeenSet() const;

                    /**
                     * 获取规则执行Id
                     * @return ExecutionId 规则执行Id
                     * 
                     */
                    int64_t GetExecutionId() const;

                    /**
                     * 设置规则执行Id
                     * @param _executionId 规则执行Id
                     * 
                     */
                    void SetExecutionId(const int64_t& _executionId);

                    /**
                     * 判断参数 ExecutionId 是否已赋值
                     * @return ExecutionId 是否已赋值
                     * 
                     */
                    bool ExecutionIdHasBeenSet() const;

                    /**
                     * 获取页数，第几页，用于分页
                     * @return Offset 页数，第几页，用于分页
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置页数，第几页，用于分页
                     * @param _offset 页数，第几页，用于分页
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取每页个数，用于分页，最大值为100
                     * @return Limit 每页个数，用于分页，最大值为100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页个数，用于分页，最大值为100
                     * @param _limit 每页个数，用于分页，最大值为100
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 主实例iD
                     */
                    std::string m_registryId;
                    bool m_registryIdHasBeenSet;

                    /**
                     * 规则Id
                     */
                    int64_t m_retentionId;
                    bool m_retentionIdHasBeenSet;

                    /**
                     * 规则执行Id
                     */
                    int64_t m_executionId;
                    bool m_executionIdHasBeenSet;

                    /**
                     * 页数，第几页，用于分页
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页个数，用于分页，最大值为100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCR_V20190924_MODEL_DESCRIBETAGRETENTIONEXECUTIONTASKREQUEST_H_
