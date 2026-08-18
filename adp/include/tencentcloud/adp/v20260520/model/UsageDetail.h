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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_USAGEDETAIL_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_USAGEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/adp/v20260520/model/CallSource.h>
#include <tencentcloud/adp/v20260520/model/ModelUsageDetail.h>
#include <tencentcloud/adp/v20260520/model/PluginUsageDetail.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 资源调用时序明细
                */
                class UsageDetail : public AbstractModel
                {
                public:
                    UsageDetail();
                    ~UsageDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>调用来源</p>
                     * @return CallSource <p>调用来源</p>
                     * 
                     */
                    CallSource GetCallSource() const;

                    /**
                     * 设置<p>调用来源</p>
                     * @param _callSource <p>调用来源</p>
                     * 
                     */
                    void SetCallSource(const CallSource& _callSource);

                    /**
                     * 判断参数 CallSource 是否已赋值
                     * @return CallSource 是否已赋值
                     * 
                     */
                    bool CallSourceHasBeenSet() const;

                    /**
                     * 获取<p>计量 ID，用于对账/回溯</p>
                     * @return DosageId <p>计量 ID，用于对账/回溯</p>
                     * 
                     */
                    std::string GetDosageId() const;

                    /**
                     * 设置<p>计量 ID，用于对账/回溯</p>
                     * @param _dosageId <p>计量 ID，用于对账/回溯</p>
                     * 
                     */
                    void SetDosageId(const std::string& _dosageId);

                    /**
                     * 判断参数 DosageId 是否已赋值
                     * @return DosageId 是否已赋值
                     * 
                     */
                    bool DosageIdHasBeenSet() const;

                    /**
                     * 获取<p>调用时间戳（Unix 秒）</p>
                     * @return EventTime <p>调用时间戳（Unix 秒）</p>
                     * 
                     */
                    std::string GetEventTime() const;

                    /**
                     * 设置<p>调用时间戳（Unix 秒）</p>
                     * @param _eventTime <p>调用时间戳（Unix 秒）</p>
                     * 
                     */
                    void SetEventTime(const std::string& _eventTime);

                    /**
                     * 判断参数 EventTime 是否已赋值
                     * @return EventTime 是否已赋值
                     * 
                     */
                    bool EventTimeHasBeenSet() const;

                    /**
                     * 获取<p>MODEL 域专属</p>
                     * @return Model <p>MODEL 域专属</p>
                     * 
                     */
                    ModelUsageDetail GetModel() const;

                    /**
                     * 设置<p>MODEL 域专属</p>
                     * @param _model <p>MODEL 域专属</p>
                     * 
                     */
                    void SetModel(const ModelUsageDetail& _model);

                    /**
                     * 判断参数 Model 是否已赋值
                     * @return Model 是否已赋值
                     * 
                     */
                    bool ModelHasBeenSet() const;

                    /**
                     * 获取<p>PLUGIN 域专属</p>
                     * @return Plugin <p>PLUGIN 域专属</p>
                     * 
                     */
                    PluginUsageDetail GetPlugin() const;

                    /**
                     * 设置<p>PLUGIN 域专属</p>
                     * @param _plugin <p>PLUGIN 域专属</p>
                     * 
                     */
                    void SetPlugin(const PluginUsageDetail& _plugin);

                    /**
                     * 判断参数 Plugin 是否已赋值
                     * @return Plugin 是否已赋值
                     * 
                     */
                    bool PluginHasBeenSet() const;

                    /**
                     * 获取<p>调用链路追踪 ID</p>
                     * @return TraceId <p>调用链路追踪 ID</p>
                     * 
                     */
                    std::string GetTraceId() const;

                    /**
                     * 设置<p>调用链路追踪 ID</p>
                     * @param _traceId <p>调用链路追踪 ID</p>
                     * 
                     */
                    void SetTraceId(const std::string& _traceId);

                    /**
                     * 判断参数 TraceId 是否已赋值
                     * @return TraceId 是否已赋值
                     * 
                     */
                    bool TraceIdHasBeenSet() const;

                    /**
                     * 获取<p>用户 ID</p>
                     * @return UserId <p>用户 ID</p>
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置<p>用户 ID</p>
                     * @param _userId <p>用户 ID</p>
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                private:

                    /**
                     * <p>调用来源</p>
                     */
                    CallSource m_callSource;
                    bool m_callSourceHasBeenSet;

                    /**
                     * <p>计量 ID，用于对账/回溯</p>
                     */
                    std::string m_dosageId;
                    bool m_dosageIdHasBeenSet;

                    /**
                     * <p>调用时间戳（Unix 秒）</p>
                     */
                    std::string m_eventTime;
                    bool m_eventTimeHasBeenSet;

                    /**
                     * <p>MODEL 域专属</p>
                     */
                    ModelUsageDetail m_model;
                    bool m_modelHasBeenSet;

                    /**
                     * <p>PLUGIN 域专属</p>
                     */
                    PluginUsageDetail m_plugin;
                    bool m_pluginHasBeenSet;

                    /**
                     * <p>调用链路追踪 ID</p>
                     */
                    std::string m_traceId;
                    bool m_traceIdHasBeenSet;

                    /**
                     * <p>用户 ID</p>
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_USAGEDETAIL_H_
