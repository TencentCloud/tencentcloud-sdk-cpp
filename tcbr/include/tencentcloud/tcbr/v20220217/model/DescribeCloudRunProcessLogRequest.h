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

#ifndef TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBECLOUDRUNPROCESSLOGREQUEST_H_
#define TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBECLOUDRUNPROCESSLOGREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcbr
    {
        namespace V20220217
        {
            namespace Model
            {
                /**
                * DescribeCloudRunProcessLog请求参数结构体
                */
                class DescribeCloudRunProcessLogRequest : public AbstractModel
                {
                public:
                    DescribeCloudRunProcessLogRequest();
                    ~DescribeCloudRunProcessLogRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取环境 Id
                     * @return EnvId 环境 Id
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置环境 Id
                     * @param _envId 环境 Id
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取操作 Id
                     * @return RunId 操作 Id
                     * 
                     */
                    std::string GetRunId() const;

                    /**
                     * 设置操作 Id
                     * @param _runId 操作 Id
                     * 
                     */
                    void SetRunId(const std::string& _runId);

                    /**
                     * 判断参数 RunId 是否已赋值
                     * @return RunId 是否已赋值
                     * 
                     */
                    bool RunIdHasBeenSet() const;

                private:

                    /**
                     * 环境 Id
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * 操作 Id
                     */
                    std::string m_runId;
                    bool m_runIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCBR_V20220217_MODEL_DESCRIBECLOUDRUNPROCESSLOGREQUEST_H_
