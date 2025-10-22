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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_BROWSERIMPERSONATIONDETECTIONACTION_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_BROWSERIMPERSONATIONDETECTIONACTION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220901/model/BotSessionValidation.h>
#include <tencentcloud/teo/v20220901/model/ClientBehaviorDetection.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * Bot 浏览器校验规则（原主动特征识别规则）的 Action。
                */
                class BrowserImpersonationDetectionAction : public AbstractModel
                {
                public:
                    BrowserImpersonationDetectionAction();
                    ~BrowserImpersonationDetectionAction() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取Cookie 校验和会话跟踪配置。
                     * @return BotSessionValidation Cookie 校验和会话跟踪配置。
                     * 
                     */
                    BotSessionValidation GetBotSessionValidation() const;

                    /**
                     * 设置Cookie 校验和会话跟踪配置。
                     * @param _botSessionValidation Cookie 校验和会话跟踪配置。
                     * 
                     */
                    void SetBotSessionValidation(const BotSessionValidation& _botSessionValidation);

                    /**
                     * 判断参数 BotSessionValidation 是否已赋值
                     * @return BotSessionValidation 是否已赋值
                     * 
                     */
                    bool BotSessionValidationHasBeenSet() const;

                    /**
                     * 获取客户端行为校验配置。
                     * @return ClientBehaviorDetection 客户端行为校验配置。
                     * 
                     */
                    ClientBehaviorDetection GetClientBehaviorDetection() const;

                    /**
                     * 设置客户端行为校验配置。
                     * @param _clientBehaviorDetection 客户端行为校验配置。
                     * 
                     */
                    void SetClientBehaviorDetection(const ClientBehaviorDetection& _clientBehaviorDetection);

                    /**
                     * 判断参数 ClientBehaviorDetection 是否已赋值
                     * @return ClientBehaviorDetection 是否已赋值
                     * 
                     */
                    bool ClientBehaviorDetectionHasBeenSet() const;

                private:

                    /**
                     * Cookie 校验和会话跟踪配置。
                     */
                    BotSessionValidation m_botSessionValidation;
                    bool m_botSessionValidationHasBeenSet;

                    /**
                     * 客户端行为校验配置。
                     */
                    ClientBehaviorDetection m_clientBehaviorDetection;
                    bool m_clientBehaviorDetectionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_BROWSERIMPERSONATIONDETECTIONACTION_H_
