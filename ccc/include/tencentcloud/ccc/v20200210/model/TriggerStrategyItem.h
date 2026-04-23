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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_TRIGGERSTRATEGYITEM_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_TRIGGERSTRATEGYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/HttpCallbackConfig.h>
#include <tencentcloud/ccc/v20200210/model/RetryTagItem.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 触发策略数组，每个策略里包含接口调用信息，挂断类型，通话标签，触发模式
                */
                class TriggerStrategyItem : public AbstractModel
                {
                public:
                    TriggerStrategyItem();
                    ~TriggerStrategyItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>http 接口相关参数</p>
                     * @return InterfaceConfig <p>http 接口相关参数</p>
                     * 
                     */
                    HttpCallbackConfig GetInterfaceConfig() const;

                    /**
                     * 设置<p>http 接口相关参数</p>
                     * @param _interfaceConfig <p>http 接口相关参数</p>
                     * 
                     */
                    void SetInterfaceConfig(const HttpCallbackConfig& _interfaceConfig);

                    /**
                     * 判断参数 InterfaceConfig 是否已赋值
                     * @return InterfaceConfig 是否已赋值
                     * 
                     */
                    bool InterfaceConfigHasBeenSet() const;

                    /**
                     * 获取<p>挂断类型</p>
                     * @return HangupTypes <p>挂断类型</p>
                     * 
                     */
                    std::vector<std::string> GetHangupTypes() const;

                    /**
                     * 设置<p>挂断类型</p>
                     * @param _hangupTypes <p>挂断类型</p>
                     * 
                     */
                    void SetHangupTypes(const std::vector<std::string>& _hangupTypes);

                    /**
                     * 判断参数 HangupTypes 是否已赋值
                     * @return HangupTypes 是否已赋值
                     * 
                     */
                    bool HangupTypesHasBeenSet() const;

                    /**
                     * 获取<p>通话标签</p>
                     * @return CallTags <p>通话标签</p>
                     * 
                     */
                    std::vector<RetryTagItem> GetCallTags() const;

                    /**
                     * 设置<p>通话标签</p>
                     * @param _callTags <p>通话标签</p>
                     * 
                     */
                    void SetCallTags(const std::vector<RetryTagItem>& _callTags);

                    /**
                     * 判断参数 CallTags 是否已赋值
                     * @return CallTags 是否已赋值
                     * 
                     */
                    bool CallTagsHasBeenSet() const;

                    /**
                     * 获取<p>触发模式</p><p>枚举值：</p><ul><li>ONCE_PER_NUMBER： 每个号码仅第一次命中条件时触发</li><li>ALWAYS_ON_MATCH： 每次命中条件均触发</li></ul>
                     * @return TriggerMode <p>触发模式</p><p>枚举值：</p><ul><li>ONCE_PER_NUMBER： 每个号码仅第一次命中条件时触发</li><li>ALWAYS_ON_MATCH： 每次命中条件均触发</li></ul>
                     * 
                     */
                    std::string GetTriggerMode() const;

                    /**
                     * 设置<p>触发模式</p><p>枚举值：</p><ul><li>ONCE_PER_NUMBER： 每个号码仅第一次命中条件时触发</li><li>ALWAYS_ON_MATCH： 每次命中条件均触发</li></ul>
                     * @param _triggerMode <p>触发模式</p><p>枚举值：</p><ul><li>ONCE_PER_NUMBER： 每个号码仅第一次命中条件时触发</li><li>ALWAYS_ON_MATCH： 每次命中条件均触发</li></ul>
                     * 
                     */
                    void SetTriggerMode(const std::string& _triggerMode);

                    /**
                     * 判断参数 TriggerMode 是否已赋值
                     * @return TriggerMode 是否已赋值
                     * 
                     */
                    bool TriggerModeHasBeenSet() const;

                private:

                    /**
                     * <p>http 接口相关参数</p>
                     */
                    HttpCallbackConfig m_interfaceConfig;
                    bool m_interfaceConfigHasBeenSet;

                    /**
                     * <p>挂断类型</p>
                     */
                    std::vector<std::string> m_hangupTypes;
                    bool m_hangupTypesHasBeenSet;

                    /**
                     * <p>通话标签</p>
                     */
                    std::vector<RetryTagItem> m_callTags;
                    bool m_callTagsHasBeenSet;

                    /**
                     * <p>触发模式</p><p>枚举值：</p><ul><li>ONCE_PER_NUMBER： 每个号码仅第一次命中条件时触发</li><li>ALWAYS_ON_MATCH： 每次命中条件均触发</li></ul>
                     */
                    std::string m_triggerMode;
                    bool m_triggerModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_TRIGGERSTRATEGYITEM_H_
