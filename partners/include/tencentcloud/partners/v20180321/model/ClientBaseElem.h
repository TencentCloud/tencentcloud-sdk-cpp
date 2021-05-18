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

#ifndef TENCENTCLOUD_PARTNERS_V20180321_MODEL_CLIENTBASEELEM_H_
#define TENCENTCLOUD_PARTNERS_V20180321_MODEL_CLIENTBASEELEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Partners
    {
        namespace V20180321
        {
            namespace Model
            {
                /**
                * 代客基础信息，for国际站查代客API
                */
                class ClientBaseElem : public AbstractModel
                {
                public:
                    ClientBaseElem();
                    ~ClientBaseElem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取代客关联的代理商UIN
                     * @return AgentUin 代客关联的代理商UIN
                     */
                    std::string GetAgentUin() const;

                    /**
                     * 设置代客关联的代理商UIN
                     * @param AgentUin 代客关联的代理商UIN
                     */
                    void SetAgentUin(const std::string& _agentUin);

                    /**
                     * 判断参数 AgentUin 是否已赋值
                     * @return AgentUin 是否已赋值
                     */
                    bool AgentUinHasBeenSet() const;

                    /**
                     * 获取代客UIN
                     * @return ClientUin 代客UIN
                     */
                    std::string GetClientUin() const;

                    /**
                     * 设置代客UIN
                     * @param ClientUin 代客UIN
                     */
                    void SetClientUin(const std::string& _clientUin);

                    /**
                     * 判断参数 ClientUin 是否已赋值
                     * @return ClientUin 是否已赋值
                     */
                    bool ClientUinHasBeenSet() const;

                    /**
                     * 获取代客关联类型 0:代理 1:转售
                     * @return ClientRelateType 代客关联类型 0:代理 1:转售
                     */
                    uint64_t GetClientRelateType() const;

                    /**
                     * 设置代客关联类型 0:代理 1:转售
                     * @param ClientRelateType 代客关联类型 0:代理 1:转售
                     */
                    void SetClientRelateType(const uint64_t& _clientRelateType);

                    /**
                     * 判断参数 ClientRelateType 是否已赋值
                     * @return ClientRelateType 是否已赋值
                     */
                    bool ClientRelateTypeHasBeenSet() const;

                    /**
                     * 获取代理商合作模式 0:代理 1:转售
                     * @return AgentCooperationMode 代理商合作模式 0:代理 1:转售
                     */
                    uint64_t GetAgentCooperationMode() const;

                    /**
                     * 设置代理商合作模式 0:代理 1:转售
                     * @param AgentCooperationMode 代理商合作模式 0:代理 1:转售
                     */
                    void SetAgentCooperationMode(const uint64_t& _agentCooperationMode);

                    /**
                     * 判断参数 AgentCooperationMode 是否已赋值
                     * @return AgentCooperationMode 是否已赋值
                     */
                    bool AgentCooperationModeHasBeenSet() const;

                    /**
                     * 获取代理商国家编码 China:中国  其他:海外，如US等
                     * @return AgentCountry 代理商国家编码 China:中国  其他:海外，如US等
                     */
                    std::string GetAgentCountry() const;

                    /**
                     * 设置代理商国家编码 China:中国  其他:海外，如US等
                     * @param AgentCountry 代理商国家编码 China:中国  其他:海外，如US等
                     */
                    void SetAgentCountry(const std::string& _agentCountry);

                    /**
                     * 判断参数 AgentCountry 是否已赋值
                     * @return AgentCountry 是否已赋值
                     */
                    bool AgentCountryHasBeenSet() const;

                private:

                    /**
                     * 代客关联的代理商UIN
                     */
                    std::string m_agentUin;
                    bool m_agentUinHasBeenSet;

                    /**
                     * 代客UIN
                     */
                    std::string m_clientUin;
                    bool m_clientUinHasBeenSet;

                    /**
                     * 代客关联类型 0:代理 1:转售
                     */
                    uint64_t m_clientRelateType;
                    bool m_clientRelateTypeHasBeenSet;

                    /**
                     * 代理商合作模式 0:代理 1:转售
                     */
                    uint64_t m_agentCooperationMode;
                    bool m_agentCooperationModeHasBeenSet;

                    /**
                     * 代理商国家编码 China:中国  其他:海外，如US等
                     */
                    std::string m_agentCountry;
                    bool m_agentCountryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PARTNERS_V20180321_MODEL_CLIENTBASEELEM_H_
