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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_DDOSACL_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_DDOSACL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * DDoS配置端口过滤
                */
                class DDoSAcl : public AbstractModel
                {
                public:
                    DDoSAcl();
                    ~DDoSAcl() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目的端口end
                     * @return DportEnd 目的端口end
                     */
                    int64_t GetDportEnd() const;

                    /**
                     * 设置目的端口end
                     * @param DportEnd 目的端口end
                     */
                    void SetDportEnd(const int64_t& _dportEnd);

                    /**
                     * 判断参数 DportEnd 是否已赋值
                     * @return DportEnd 是否已赋值
                     */
                    bool DportEndHasBeenSet() const;

                    /**
                     * 获取目的端口start
                     * @return DportStart 目的端口start
                     */
                    int64_t GetDportStart() const;

                    /**
                     * 设置目的端口start
                     * @param DportStart 目的端口start
                     */
                    void SetDportStart(const int64_t& _dportStart);

                    /**
                     * 判断参数 DportStart 是否已赋值
                     * @return DportStart 是否已赋值
                     */
                    bool DportStartHasBeenSet() const;

                    /**
                     * 获取源端口end
                     * @return SportEnd 源端口end
                     */
                    int64_t GetSportEnd() const;

                    /**
                     * 设置源端口end
                     * @param SportEnd 源端口end
                     */
                    void SetSportEnd(const int64_t& _sportEnd);

                    /**
                     * 判断参数 SportEnd 是否已赋值
                     * @return SportEnd 是否已赋值
                     */
                    bool SportEndHasBeenSet() const;

                    /**
                     * 获取源端口start
                     * @return SportStart 源端口start
                     */
                    int64_t GetSportStart() const;

                    /**
                     * 设置源端口start
                     * @param SportStart 源端口start
                     */
                    void SetSportStart(const int64_t& _sportStart);

                    /**
                     * 判断参数 SportStart 是否已赋值
                     * @return SportStart 是否已赋值
                     */
                    bool SportStartHasBeenSet() const;

                    /**
                     * 获取协议 'tcp', 'udp', 'all'
                     * @return Protocol 协议 'tcp', 'udp', 'all'
                     */
                    std::string GetProtocol() const;

                    /**
                     * 设置协议 'tcp', 'udp', 'all'
                     * @param Protocol 协议 'tcp', 'udp', 'all'
                     */
                    void SetProtocol(const std::string& _protocol);

                    /**
                     * 判断参数 Protocol 是否已赋值
                     * @return Protocol 是否已赋值
                     */
                    bool ProtocolHasBeenSet() const;

                    /**
                     * 获取动作  drop-丢弃,；transmit-放行； forward-继续防护
                     * @return Action 动作  drop-丢弃,；transmit-放行； forward-继续防护
                     */
                    std::string GetAction() const;

                    /**
                     * 设置动作  drop-丢弃,；transmit-放行； forward-继续防护
                     * @param Action 动作  drop-丢弃,；transmit-放行； forward-继续防护
                     */
                    void SetAction(const std::string& _action);

                    /**
                     * 判断参数 Action 是否已赋值
                     * @return Action 是否已赋值
                     */
                    bool ActionHasBeenSet() const;

                    /**
                     * 获取是否为系统配置 0-人工配置；1-系统配置
                     * @return Default 是否为系统配置 0-人工配置；1-系统配置
                     */
                    int64_t GetDefault() const;

                    /**
                     * 设置是否为系统配置 0-人工配置；1-系统配置
                     * @param Default 是否为系统配置 0-人工配置；1-系统配置
                     */
                    void SetDefault(const int64_t& _default);

                    /**
                     * 判断参数 Default 是否已赋值
                     * @return Default 是否已赋值
                     */
                    bool DefaultHasBeenSet() const;

                private:

                    /**
                     * 目的端口end
                     */
                    int64_t m_dportEnd;
                    bool m_dportEndHasBeenSet;

                    /**
                     * 目的端口start
                     */
                    int64_t m_dportStart;
                    bool m_dportStartHasBeenSet;

                    /**
                     * 源端口end
                     */
                    int64_t m_sportEnd;
                    bool m_sportEndHasBeenSet;

                    /**
                     * 源端口start
                     */
                    int64_t m_sportStart;
                    bool m_sportStartHasBeenSet;

                    /**
                     * 协议 'tcp', 'udp', 'all'
                     */
                    std::string m_protocol;
                    bool m_protocolHasBeenSet;

                    /**
                     * 动作  drop-丢弃,；transmit-放行； forward-继续防护
                     */
                    std::string m_action;
                    bool m_actionHasBeenSet;

                    /**
                     * 是否为系统配置 0-人工配置；1-系统配置
                     */
                    int64_t m_default;
                    bool m_defaultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_DDOSACL_H_
