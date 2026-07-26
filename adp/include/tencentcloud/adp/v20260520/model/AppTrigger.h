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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGER_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGER_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/TimerPushConfig.h>
#include <tencentcloud/adp/v20260520/model/TriggerConfig.h>
#include <tencentcloud/adp/v20260520/model/ExecuteConfig.h>
#include <tencentcloud/adp/v20260520/model/TriggerStatus.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * AppTrigger
                */
                class AppTrigger : public AbstractModel
                {
                public:
                    AppTrigger();
                    ~AppTrigger() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取
                     * @return TriggerId 
                     * 
                     */
                    std::string GetTriggerId() const;

                    /**
                     * 设置
                     * @param _triggerId 
                     * 
                     */
                    void SetTriggerId(const std::string& _triggerId);

                    /**
                     * 判断参数 TriggerId 是否已赋值
                     * @return TriggerId 是否已赋值
                     * 
                     */
                    bool TriggerIdHasBeenSet() const;

                    /**
                     * 获取
                     * @return AppId 
                     * 
                     */
                    std::string GetAppId() const;

                    /**
                     * 设置
                     * @param _appId 
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
                     * 获取
                     * @return TriggerName 
                     * 
                     */
                    std::string GetTriggerName() const;

                    /**
                     * 设置
                     * @param _triggerName 
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
                     * 获取<table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>APP_TRIGGER_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>APP_TRIGGER_TYPE_SCHEDULED</td><td>1</td><td>定时触发</td></tr><tr><td>APP_TRIGGER_TYPE_WEBHOOK</td><td>2</td><td>Webhook 触发</td></tr></table>
                     * @return TriggerType <table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>APP_TRIGGER_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>APP_TRIGGER_TYPE_SCHEDULED</td><td>1</td><td>定时触发</td></tr><tr><td>APP_TRIGGER_TYPE_WEBHOOK</td><td>2</td><td>Webhook 触发</td></tr></table>
                     * 
                     */
                    int64_t GetTriggerType() const;

                    /**
                     * 设置<table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>APP_TRIGGER_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>APP_TRIGGER_TYPE_SCHEDULED</td><td>1</td><td>定时触发</td></tr><tr><td>APP_TRIGGER_TYPE_WEBHOOK</td><td>2</td><td>Webhook 触发</td></tr></table>
                     * @param _triggerType <table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>APP_TRIGGER_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>APP_TRIGGER_TYPE_SCHEDULED</td><td>1</td><td>定时触发</td></tr><tr><td>APP_TRIGGER_TYPE_WEBHOOK</td><td>2</td><td>Webhook 触发</td></tr></table>
                     * 
                     */
                    void SetTriggerType(const int64_t& _triggerType);

                    /**
                     * 判断参数 TriggerType 是否已赋值
                     * @return TriggerType 是否已赋值
                     * 
                     */
                    bool TriggerTypeHasBeenSet() const;

                    /**
                     * 获取<table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>APP_TRIGGER_EXECUTE_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>APP_TRIGGER_EXECUTE_TYPE_PROMPT</td><td>1</td><td>指令执行</td></tr><tr><td>APP_TRIGGER_EXECUTE_TYPE_WORKFLOW</td><td>2</td><td>工作流执行</td></tr></table>
                     * @return ExecuteType <table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>APP_TRIGGER_EXECUTE_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>APP_TRIGGER_EXECUTE_TYPE_PROMPT</td><td>1</td><td>指令执行</td></tr><tr><td>APP_TRIGGER_EXECUTE_TYPE_WORKFLOW</td><td>2</td><td>工作流执行</td></tr></table>
                     * 
                     */
                    int64_t GetExecuteType() const;

                    /**
                     * 设置<table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>APP_TRIGGER_EXECUTE_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>APP_TRIGGER_EXECUTE_TYPE_PROMPT</td><td>1</td><td>指令执行</td></tr><tr><td>APP_TRIGGER_EXECUTE_TYPE_WORKFLOW</td><td>2</td><td>工作流执行</td></tr></table>
                     * @param _executeType <table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>APP_TRIGGER_EXECUTE_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>APP_TRIGGER_EXECUTE_TYPE_PROMPT</td><td>1</td><td>指令执行</td></tr><tr><td>APP_TRIGGER_EXECUTE_TYPE_WORKFLOW</td><td>2</td><td>工作流执行</td></tr></table>
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
                     * 获取
                     * @return PushConfig 
                     * 
                     */
                    TimerPushConfig GetPushConfig() const;

                    /**
                     * 设置
                     * @param _pushConfig 
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
                     * 获取<table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>APP_TRIGGER_STATUS_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>APP_TRIGGER_STATUS_ENABLED</td><td>1</td><td>启用</td></tr><tr><td>APP_TRIGGER_STATUS_PAUSED</td><td>2</td><td>暂停</td></tr><tr><td>APP_TRIGGER_STATUS_DELETED</td><td>3</td><td>已删除</td></tr></table>
                     * @return Status <table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>APP_TRIGGER_STATUS_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>APP_TRIGGER_STATUS_ENABLED</td><td>1</td><td>启用</td></tr><tr><td>APP_TRIGGER_STATUS_PAUSED</td><td>2</td><td>暂停</td></tr><tr><td>APP_TRIGGER_STATUS_DELETED</td><td>3</td><td>已删除</td></tr></table>
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置<table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>APP_TRIGGER_STATUS_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>APP_TRIGGER_STATUS_ENABLED</td><td>1</td><td>启用</td></tr><tr><td>APP_TRIGGER_STATUS_PAUSED</td><td>2</td><td>暂停</td></tr><tr><td>APP_TRIGGER_STATUS_DELETED</td><td>3</td><td>已删除</td></tr></table>
                     * @param _status <table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>APP_TRIGGER_STATUS_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>APP_TRIGGER_STATUS_ENABLED</td><td>1</td><td>启用</td></tr><tr><td>APP_TRIGGER_STATUS_PAUSED</td><td>2</td><td>暂停</td></tr><tr><td>APP_TRIGGER_STATUS_DELETED</td><td>3</td><td>已删除</td></tr></table>
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取
                     * @return SuccessCount 
                     * 
                     */
                    std::string GetSuccessCount() const;

                    /**
                     * 设置
                     * @param _successCount 
                     * 
                     */
                    void SetSuccessCount(const std::string& _successCount);

                    /**
                     * 判断参数 SuccessCount 是否已赋值
                     * @return SuccessCount 是否已赋值
                     * 
                     */
                    bool SuccessCountHasBeenSet() const;

                    /**
                     * 获取
                     * @return FailedCount 
                     * 
                     */
                    std::string GetFailedCount() const;

                    /**
                     * 设置
                     * @param _failedCount 
                     * 
                     */
                    void SetFailedCount(const std::string& _failedCount);

                    /**
                     * 判断参数 FailedCount 是否已赋值
                     * @return FailedCount 是否已赋值
                     * 
                     */
                    bool FailedCountHasBeenSet() const;

                    /**
                     * 获取
                     * @return TriggerConfig 
                     * 
                     */
                    TriggerConfig GetTriggerConfig() const;

                    /**
                     * 设置
                     * @param _triggerConfig 
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
                     * 获取
                     * @return ExecuteConfig 
                     * 
                     */
                    ExecuteConfig GetExecuteConfig() const;

                    /**
                     * 设置
                     * @param _executeConfig 
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
                     * 获取
                     * @return TriggerStatus 
                     * 
                     */
                    TriggerStatus GetTriggerStatus() const;

                    /**
                     * 设置
                     * @param _triggerStatus 
                     * 
                     */
                    void SetTriggerStatus(const TriggerStatus& _triggerStatus);

                    /**
                     * 判断参数 TriggerStatus 是否已赋值
                     * @return TriggerStatus 是否已赋值
                     * 
                     */
                    bool TriggerStatusHasBeenSet() const;

                private:

                    /**
                     * 
                     */
                    std::string m_triggerId;
                    bool m_triggerIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_triggerName;
                    bool m_triggerNameHasBeenSet;

                    /**
                     * <table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>APP_TRIGGER_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>APP_TRIGGER_TYPE_SCHEDULED</td><td>1</td><td>定时触发</td></tr><tr><td>APP_TRIGGER_TYPE_WEBHOOK</td><td>2</td><td>Webhook 触发</td></tr></table>
                     */
                    int64_t m_triggerType;
                    bool m_triggerTypeHasBeenSet;

                    /**
                     * <table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>APP_TRIGGER_EXECUTE_TYPE_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>APP_TRIGGER_EXECUTE_TYPE_PROMPT</td><td>1</td><td>指令执行</td></tr><tr><td>APP_TRIGGER_EXECUTE_TYPE_WORKFLOW</td><td>2</td><td>工作流执行</td></tr></table>
                     */
                    int64_t m_executeType;
                    bool m_executeTypeHasBeenSet;

                    /**
                     * 
                     */
                    TimerPushConfig m_pushConfig;
                    bool m_pushConfigHasBeenSet;

                    /**
                     * <table><tr><td>枚举项</td><td>枚举值</td><td>描述</td></tr><tr><td>APP_TRIGGER_STATUS_UNSPECIFIED</td><td>0</td><td>未指定</td></tr><tr><td>APP_TRIGGER_STATUS_ENABLED</td><td>1</td><td>启用</td></tr><tr><td>APP_TRIGGER_STATUS_PAUSED</td><td>2</td><td>暂停</td></tr><tr><td>APP_TRIGGER_STATUS_DELETED</td><td>3</td><td>已删除</td></tr></table>
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_successCount;
                    bool m_successCountHasBeenSet;

                    /**
                     * 
                     */
                    std::string m_failedCount;
                    bool m_failedCountHasBeenSet;

                    /**
                     * 
                     */
                    TriggerConfig m_triggerConfig;
                    bool m_triggerConfigHasBeenSet;

                    /**
                     * 
                     */
                    ExecuteConfig m_executeConfig;
                    bool m_executeConfigHasBeenSet;

                    /**
                     * 
                     */
                    TriggerStatus m_triggerStatus;
                    bool m_triggerStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_APPTRIGGER_H_
