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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERPROMPTEXECUTECONFIG_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERPROMPTEXECUTECONFIG_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/AppTriggerParamBindingConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * AppTriggerPromptExecuteConfig
                */
                class AppTriggerPromptExecuteConfig : public AbstractModel
                {
                public:
                    AppTriggerPromptExecuteConfig();
                    ~AppTriggerPromptExecuteConfig() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return ExecutePrompt 
                     * 
                     */
                    std::string GetExecutePrompt() const;

                    /**
                     * 设置
                     * @param _executePrompt 
                     * 
                     */
                    void SetExecutePrompt(const std::string& _executePrompt);

                    /**
                     * 判断参数 ExecutePrompt 是否已赋值
                     * @return ExecutePrompt 是否已赋值
                     * 
                     */
                    bool ExecutePromptHasBeenSet() const;

                    /**
                     * 获取
                     * @return ParamBindingsApi 
                     * 
                     */
                    AppTriggerParamBindingConfig GetParamBindingsApi() const;

                    /**
                     * 设置
                     * @param _paramBindingsApi 
                     * 
                     */
                    void SetParamBindingsApi(const AppTriggerParamBindingConfig& _paramBindingsApi);

                    /**
                     * 判断参数 ParamBindingsApi 是否已赋值
                     * @return ParamBindingsApi 是否已赋值
                     * 
                     */
                    bool ParamBindingsApiHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_executePrompt;
                    bool m_executePromptHasBeenSet;

                    /**
                     * 
                     */
                    AppTriggerParamBindingConfig m_paramBindingsApi;
                    bool m_paramBindingsApiHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGERPROMPTEXECUTECONFIG_H_
