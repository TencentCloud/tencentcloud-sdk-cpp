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

#ifndef TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEENVIRONMENTREQUEST_H_
#define TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEENVIRONMENTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tem
    {
        namespace V20210701
        {
            namespace Model
            {
                /**
                * DescribeEnvironment请求参数结构体
                */
                class DescribeEnvironmentRequest : public AbstractModel
                {
                public:
                    DescribeEnvironmentRequest();
                    ~DescribeEnvironmentRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取命名空间id
                     * @return EnvironmentId 命名空间id
                     * 
                     */
                    std::string GetEnvironmentId() const;

                    /**
                     * 设置命名空间id
                     * @param _environmentId 命名空间id
                     * 
                     */
                    void SetEnvironmentId(const std::string& _environmentId);

                    /**
                     * 判断参数 EnvironmentId 是否已赋值
                     * @return EnvironmentId 是否已赋值
                     * 
                     */
                    bool EnvironmentIdHasBeenSet() const;

                    /**
                     * 获取来源Channel
                     * @return SourceChannel 来源Channel
                     * 
                     */
                    int64_t GetSourceChannel() const;

                    /**
                     * 设置来源Channel
                     * @param _sourceChannel 来源Channel
                     * 
                     */
                    void SetSourceChannel(const int64_t& _sourceChannel);

                    /**
                     * 判断参数 SourceChannel 是否已赋值
                     * @return SourceChannel 是否已赋值
                     * 
                     */
                    bool SourceChannelHasBeenSet() const;

                private:

                    /**
                     * 命名空间id
                     */
                    std::string m_environmentId;
                    bool m_environmentIdHasBeenSet;

                    /**
                     * 来源Channel
                     */
                    int64_t m_sourceChannel;
                    bool m_sourceChannelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEM_V20210701_MODEL_DESCRIBEENVIRONMENTREQUEST_H_
