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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CREATEAPPTRIGGERREQUEST_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CREATEAPPTRIGGERREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/ExecuteConfig.h>
#include <tencentcloud/adp/v20260520/model/TimerPushConfig.h>
#include <tencentcloud/adp/v20260520/model/TriggerConfig.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * CreateAppTrigger请求参数结构体
                */
                class CreateAppTriggerRequest : public AbstractModel
                {
                public:
                    CreateAppTriggerRequest();
                    ~CreateAppTriggerRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用ID</p>
                     * @return AppId <p>应用ID</p>
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置<p>应用ID</p>
                     * @param _appId <p>应用ID</p>
                     * 
                     */
                    void SetAppId(const std::string& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     * 
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取<p>应用触发器执行配置</p>
                     * @return ExecuteConfig <p>应用触发器执行配置</p>
                     * 
                     */
                    ExecuteConfig GetExecuteConfig() const;

                    /**
                     * 设置<p>应用触发器执行配置</p>
                     * @param _executeConfig <p>应用触发器执行配置</p>
                     * 
                     */
                    void SetExecuteConfig(const ExecuteConfig& _executeConfig);

                    /**
                     * 判断参数 ExecuteConfig 是否已赋值
                     * @return ExecuteConfig 是否已赋值
                     * 
                     */
                    bool ExecuteConfigHasBeenSet() const;

                    /**
                     * 获取<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>APP_TRIGGER_EXECUTE_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>APP_TRIGGER_EXECUTE_TYPE_PROMPT</td><td>1</td><td>指令执行</td></tr><tr><td>APP_TRIGGER_EXECUTE_TYPE_WORKFLOW</td><td>2</td><td>工作流执行</td></tr></tbody></table>
                     * @return ExecuteType <table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>APP_TRIGGER_EXECUTE_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>APP_TRIGGER_EXECUTE_TYPE_PROMPT</td><td>1</td><td>指令执行</td></tr><tr><td>APP_TRIGGER_EXECUTE_TYPE_WORKFLOW</td><td>2</td><td>工作流执行</td></tr></tbody></table>
                     * 
                     */
                    int64_t GetExecuteType() const;

                    /**
                     * 设置<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>APP_TRIGGER_EXECUTE_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>APP_TRIGGER_EXECUTE_TYPE_PROMPT</td><td>1</td><td>指令执行</td></tr><tr><td>APP_TRIGGER_EXECUTE_TYPE_WORKFLOW</td><td>2</td><td>工作流执行</td></tr></tbody></table>
                     * @param _executeType <table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>APP_TRIGGER_EXECUTE_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>APP_TRIGGER_EXECUTE_TYPE_PROMPT</td><td>1</td><td>指令执行</td></tr><tr><td>APP_TRIGGER_EXECUTE_TYPE_WORKFLOW</td><td>2</td><td>工作流执行</td></tr></tbody></table>
                     * 
                     */
                    void SetExecuteType(const int64_t& _executeType);

                    /**
                     * 判断参数 ExecuteType 是否已赋值
                     * @return ExecuteType 是否已赋值
                     * 
                     */
                    bool ExecuteTypeHasBeenSet() const;

                    /**
                     * 获取<p>第三方推送配置</p>
                     * @return PushConfig <p>第三方推送配置</p>
                     * 
                     */
                    TimerPushConfig GetPushConfig() const;

                    /**
                     * 设置<p>第三方推送配置</p>
                     * @param _pushConfig <p>第三方推送配置</p>
                     * 
                     */
                    void SetPushConfig(const TimerPushConfig& _pushConfig);

                    /**
                     * 判断参数 PushConfig 是否已赋值
                     * @return PushConfig 是否已赋值
                     * 
                     */
                    bool PushConfigHasBeenSet() const;

                    /**
                     * 获取<p>触发器配置</p>
                     * @return TriggerConfig <p>触发器配置</p>
                     * 
                     */
                    TriggerConfig GetTriggerConfig() const;

                    /**
                     * 设置<p>触发器配置</p>
                     * @param _triggerConfig <p>触发器配置</p>
                     * 
                     */
                    void SetTriggerConfig(const TriggerConfig& _triggerConfig);

                    /**
                     * 判断参数 TriggerConfig 是否已赋值
                     * @return TriggerConfig 是否已赋值
                     * 
                     */
                    bool TriggerConfigHasBeenSet() const;

                    /**
                     * 获取<p>触发器名字</p>
                     * @return TriggerName <p>触发器名字</p>
                     * 
                     */
                    std::string GetTriggerName() const;

                    /**
                     * 设置<p>触发器名字</p>
                     * @param _triggerName <p>触发器名字</p>
                     * 
                     */
                    void SetTriggerName(const std::string& _triggerName);

                    /**
                     * 判断参数 TriggerName 是否已赋值
                     * @return TriggerName 是否已赋值
                     * 
                     */
                    bool TriggerNameHasBeenSet() const;

                    /**
                     * 获取<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>APP_TRIGGER_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>APP_TRIGGER_TYPE_SCHEDULED</td><td>1</td><td>定时触发</td></tr><tr><td>APP_TRIGGER_TYPE_WEBHOOK</td><td>2</td><td>Webhook 触发</td></tr></tbody></table>
                     * @return TriggerType <table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>APP_TRIGGER_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>APP_TRIGGER_TYPE_SCHEDULED</td><td>1</td><td>定时触发</td></tr><tr><td>APP_TRIGGER_TYPE_WEBHOOK</td><td>2</td><td>Webhook 触发</td></tr></tbody></table>
                     * 
                     */
                    int64_t GetTriggerType() const;

                    /**
                     * 设置<table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>APP_TRIGGER_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>APP_TRIGGER_TYPE_SCHEDULED</td><td>1</td><td>定时触发</td></tr><tr><td>APP_TRIGGER_TYPE_WEBHOOK</td><td>2</td><td>Webhook 触发</td></tr></tbody></table>
                     * @param _triggerType <table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>APP_TRIGGER_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>APP_TRIGGER_TYPE_SCHEDULED</td><td>1</td><td>定时触发</td></tr><tr><td>APP_TRIGGER_TYPE_WEBHOOK</td><td>2</td><td>Webhook 触发</td></tr></tbody></table>
                     * 
                     */
                    void SetTriggerType(const int64_t& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                private:

                    /**
                     * <p>应用ID</p>
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * <p>应用触发器执行配置</p>
                     */
                    ExecuteConfig m_executeConfig;
                    bool m_executeConfigHasBeenSet;

                    /**
                     * <table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>APP_TRIGGER_EXECUTE_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>APP_TRIGGER_EXECUTE_TYPE_PROMPT</td><td>1</td><td>指令执行</td></tr><tr><td>APP_TRIGGER_EXECUTE_TYPE_WORKFLOW</td><td>2</td><td>工作流执行</td></tr></tbody></table>
                     */
                    int64_t m_executeType;
                    bool m_executeTypeHasBeenSet;

                    /**
                     * <p>第三方推送配置</p>
                     */
                    TimerPushConfig m_pushConfig;
                    bool m_pushConfigHasBeenSet;

                    /**
                     * <p>触发器配置</p>
                     */
                    TriggerConfig m_triggerConfig;
                    bool m_triggerConfigHasBeenSet;

                    /**
                     * <p>触发器名字</p>
                     */
                    std::string m_triggerName;
                    bool m_triggerNameHasBeenSet;

                    /**
                     * <table><tbody><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>APP_TRIGGER_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>APP_TRIGGER_TYPE_SCHEDULED</td><td>1</td><td>定时触发</td></tr><tr><td>APP_TRIGGER_TYPE_WEBHOOK</td><td>2</td><td>Webhook 触发</td></tr></tbody></table>
                     */
                    int64_t m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CREATEAPPTRIGGERREQUEST_H_
