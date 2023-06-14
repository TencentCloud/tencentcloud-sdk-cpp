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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_AGENTPROFILE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_AGENTPROFILE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 部署javaagent的类型、版本信息
                */
                class AgentProfile : public AbstractModel
                {
                public:
                    AgentProfile();
                    ~AgentProfile() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Agent类型
                     * @return AgentType Agent类型
                     * 
                     */
                    std::string GetAgentType() const;

                    /**
                     * 设置Agent类型
                     * @param _agentType Agent类型
                     * 
                     */
                    void SetAgentType(const std::string& _agentType);

                    /**
                     * 判断参数 AgentType 是否已赋值
                     * @return AgentType 是否已赋值
                     * 
                     */
                    bool AgentTypeHasBeenSet() const;

                    /**
                     * 获取Agent版本号
                     * @return AgentVersion Agent版本号
                     * 
                     */
                    std::string GetAgentVersion() const;

                    /**
                     * 设置Agent版本号
                     * @param _agentVersion Agent版本号
                     * 
                     */
                    void SetAgentVersion(const std::string& _agentVersion);

                    /**
                     * 判断参数 AgentVersion 是否已赋值
                     * @return AgentVersion 是否已赋值
                     * 
                     */
                    bool AgentVersionHasBeenSet() const;

                private:

                    /**
                     * Agent类型
                     */
                    std::string m_agentType;
                    bool m_agentTypeHasBeenSet;

                    /**
                     * Agent版本号
                     */
                    std::string m_agentVersion;
                    bool m_agentVersionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_AGENTPROFILE_H_
