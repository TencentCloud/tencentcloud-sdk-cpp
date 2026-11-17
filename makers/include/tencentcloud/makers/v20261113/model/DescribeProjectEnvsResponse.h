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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MODEL_DESCRIBEPROJECTENVSRESPONSE_H_
#define TENCENTCLOUD_MAKERS_V20261113_MODEL_DESCRIBEPROJECTENVSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/makers/v20261113/model/EnvVar.h>


namespace TencentCloud
{
    namespace Makers
    {
        namespace V20261113
        {
            namespace Model
            {
                /**
                * DescribeProjectEnvs返回参数结构体
                */
                class DescribeProjectEnvsResponse : public AbstractModel
                {
                public:
                    DescribeProjectEnvsResponse();
                    ~DescribeProjectEnvsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>环境变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnvVars <p>环境变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<EnvVar> GetEnvVars() const;

                    /**
                     * 判断参数 EnvVars 是否已赋值
                     * @return EnvVars 是否已赋值
                     * 
                     */
                    bool EnvVarsHasBeenSet() const;

                private:

                    /**
                     * <p>环境变量</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<EnvVar> m_envVars;
                    bool m_envVarsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MODEL_DESCRIBEPROJECTENVSRESPONSE_H_
