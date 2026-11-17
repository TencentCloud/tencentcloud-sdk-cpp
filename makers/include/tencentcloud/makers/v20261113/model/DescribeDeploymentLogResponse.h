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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MODEL_DESCRIBEDEPLOYMENTLOGRESPONSE_H_
#define TENCENTCLOUD_MAKERS_V20261113_MODEL_DESCRIBEDEPLOYMENTLOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Makers
    {
        namespace V20261113
        {
            namespace Model
            {
                /**
                * DescribeDeploymentLog返回参数结构体
                */
                class DescribeDeploymentLogResponse : public AbstractModel
                {
                public:
                    DescribeDeploymentLogResponse();
                    ~DescribeDeploymentLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>构建日志地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogUrl <p>构建日志地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogUrl() const;

                    /**
                     * 判断参数 LogUrl 是否已赋值
                     * @return LogUrl 是否已赋值
                     * 
                     */
                    bool LogUrlHasBeenSet() const;

                private:

                    /**
                     * <p>构建日志地址</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logUrl;
                    bool m_logUrlHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MODEL_DESCRIBEDEPLOYMENTLOGRESPONSE_H_
