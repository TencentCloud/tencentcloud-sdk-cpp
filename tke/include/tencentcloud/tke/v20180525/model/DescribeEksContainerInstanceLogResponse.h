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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEKSCONTAINERINSTANCELOGRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEKSCONTAINERINSTANCELOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeEksContainerInstanceLog返回参数结构体
                */
                class DescribeEksContainerInstanceLogResponse : public AbstractModel
                {
                public:
                    DescribeEksContainerInstanceLogResponse();
                    ~DescribeEksContainerInstanceLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取容器名称
                     * @return ContainerName 容器名称
                     * 
                     */
                    std::string GetContainerName() const;

                    /**
                     * 判断参数 ContainerName 是否已赋值
                     * @return ContainerName 是否已赋值
                     * 
                     */
                    bool ContainerNameHasBeenSet() const;

                    /**
                     * 获取日志内容
                     * @return LogContent 日志内容
                     * 
                     */
                    std::string GetLogContent() const;

                    /**
                     * 判断参数 LogContent 是否已赋值
                     * @return LogContent 是否已赋值
                     * 
                     */
                    bool LogContentHasBeenSet() const;

                private:

                    /**
                     * 容器名称
                     */
                    std::string m_containerName;
                    bool m_containerNameHasBeenSet;

                    /**
                     * 日志内容
                     */
                    std::string m_logContent;
                    bool m_logContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEKSCONTAINERINSTANCELOGRESPONSE_H_
