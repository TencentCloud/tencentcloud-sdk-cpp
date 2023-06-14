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

#ifndef TENCENTCLOUD_CPDP_V20190820_MODEL_ASSIGNMENTDATA_H_
#define TENCENTCLOUD_CPDP_V20190820_MODEL_ASSIGNMENTDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cpdp
    {
        namespace V20190820
        {
            namespace Model
            {
                /**
                * 分配关系
                */
                class AssignmentData : public AbstractModel
                {
                public:
                    AssignmentData();
                    ~AssignmentData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取主播ID
                     * @return AnchorId 主播ID
                     * 
                     */
                    std::string GetAnchorId() const;

                    /**
                     * 设置主播ID
                     * @param _anchorId 主播ID
                     * 
                     */
                    void SetAnchorId(const std::string& _anchorId);

                    /**
                     * 判断参数 AnchorId 是否已赋值
                     * @return AnchorId 是否已赋值
                     * 
                     */
                    bool AnchorIdHasBeenSet() const;

                    /**
                     * 获取主播名称
                     * @return AnchorName 主播名称
                     * 
                     */
                    std::string GetAnchorName() const;

                    /**
                     * 设置主播名称
                     * @param _anchorName 主播名称
                     * 
                     */
                    void SetAnchorName(const std::string& _anchorName);

                    /**
                     * 判断参数 AnchorName 是否已赋值
                     * @return AnchorName 是否已赋值
                     * 
                     */
                    bool AnchorNameHasBeenSet() const;

                    /**
                     * 获取代理商ID
                     * @return AgentId 代理商ID
                     * 
                     */
                    std::string GetAgentId() const;

                    /**
                     * 设置代理商ID
                     * @param _agentId 代理商ID
                     * 
                     */
                    void SetAgentId(const std::string& _agentId);

                    /**
                     * 判断参数 AgentId 是否已赋值
                     * @return AgentId 是否已赋值
                     * 
                     */
                    bool AgentIdHasBeenSet() const;

                    /**
                     * 获取代理商名称
                     * @return AgentName 代理商名称
                     * 
                     */
                    std::string GetAgentName() const;

                    /**
                     * 设置代理商名称
                     * @param _agentName 代理商名称
                     * 
                     */
                    void SetAgentName(const std::string& _agentName);

                    /**
                     * 判断参数 AgentName 是否已赋值
                     * @return AgentName 是否已赋值
                     * 
                     */
                    bool AgentNameHasBeenSet() const;

                private:

                    /**
                     * 主播ID
                     */
                    std::string m_anchorId;
                    bool m_anchorIdHasBeenSet;

                    /**
                     * 主播名称
                     */
                    std::string m_anchorName;
                    bool m_anchorNameHasBeenSet;

                    /**
                     * 代理商ID
                     */
                    std::string m_agentId;
                    bool m_agentIdHasBeenSet;

                    /**
                     * 代理商名称
                     */
                    std::string m_agentName;
                    bool m_agentNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CPDP_V20190820_MODEL_ASSIGNMENTDATA_H_
