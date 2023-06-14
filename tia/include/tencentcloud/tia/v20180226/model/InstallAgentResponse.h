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

#ifndef TENCENTCLOUD_TIA_V20180226_MODEL_INSTALLAGENTRESPONSE_H_
#define TENCENTCLOUD_TIA_V20180226_MODEL_INSTALLAGENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tia
    {
        namespace V20180226
        {
            namespace Model
            {
                /**
                * InstallAgent返回参数结构体
                */
                class InstallAgentResponse : public AbstractModel
                {
                public:
                    InstallAgentResponse();
                    ~InstallAgentResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取Agent版本, 用于私有集群的agent安装
                     * @return TiaVersion Agent版本, 用于私有集群的agent安装
                     * 
                     */
                    std::string GetTiaVersion() const;

                    /**
                     * 判断参数 TiaVersion 是否已赋值
                     * @return TiaVersion 是否已赋值
                     * 
                     */
                    bool TiaVersionHasBeenSet() const;

                private:

                    /**
                     * Agent版本, 用于私有集群的agent安装
                     */
                    std::string m_tiaVersion;
                    bool m_tiaVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIA_V20180226_MODEL_INSTALLAGENTRESPONSE_H_
