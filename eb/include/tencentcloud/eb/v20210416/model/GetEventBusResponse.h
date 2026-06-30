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

#ifndef TENCENTCLOUD_EB_V20210416_MODEL_GETEVENTBUSRESPONSE_H_
#define TENCENTCLOUD_EB_V20210416_MODEL_GETEVENTBUSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Eb
    {
        namespace V20210416
        {
            namespace Model
            {
                /**
                * GetEventBus返回参数结构体
                */
                class GetEventBusResponse : public AbstractModel
                {
                public:
                    GetEventBusResponse();
                    ~GetEventBusResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>更新时间</p>
                     * @return ModTime <p>更新时间</p>
                     * 
                     */
                    std::string GetModTime() const;

                    /**
                     * 判断参数 ModTime 是否已赋值
                     * @return ModTime 是否已赋值
                     * 
                     */
                    bool ModTimeHasBeenSet() const;

                    /**
                     * 获取<p>事件集描述</p>
                     * @return Description <p>事件集描述</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>日志主题ID</p>
                     * @return ClsTopicId <p>日志主题ID</p>
                     * 
                     */
                    std::string GetClsTopicId() const;

                    /**
                     * 判断参数 ClsTopicId 是否已赋值
                     * @return ClsTopicId 是否已赋值
                     * 
                     */
                    bool ClsTopicIdHasBeenSet() const;

                    /**
                     * 获取<p>创建时间</p>
                     * @return AddTime <p>创建时间</p>
                     * 
                     */
                    std::string GetAddTime() const;

                    /**
                     * 判断参数 AddTime 是否已赋值
                     * @return AddTime 是否已赋值
                     * 
                     */
                    bool AddTimeHasBeenSet() const;

                    /**
                     * 获取<p>日志集ID</p>
                     * @return ClsLogsetId <p>日志集ID</p>
                     * 
                     */
                    std::string GetClsLogsetId() const;

                    /**
                     * 判断参数 ClsLogsetId 是否已赋值
                     * @return ClsLogsetId 是否已赋值
                     * 
                     */
                    bool ClsLogsetIdHasBeenSet() const;

                    /**
                     * 获取<p>事件集名称</p>
                     * @return EventBusName <p>事件集名称</p>
                     * 
                     */
                    std::string GetEventBusName() const;

                    /**
                     * 判断参数 EventBusName 是否已赋值
                     * @return EventBusName 是否已赋值
                     * 
                     */
                    bool EventBusNameHasBeenSet() const;

                    /**
                     * 获取<p>事件集ID</p>
                     * @return EventBusId <p>事件集ID</p>
                     * 
                     */
                    std::string GetEventBusId() const;

                    /**
                     * 判断参数 EventBusId 是否已赋值
                     * @return EventBusId 是否已赋值
                     * 
                     */
                    bool EventBusIdHasBeenSet() const;

                    /**
                     * 获取<p>事件集类型</p><p>枚举值：</p><ul><li>Cloud： 云服务事件集</li><li>Platform： 平台事件集</li><li>Custom： 自定义事件集</li></ul>
                     * @return Type <p>事件集类型</p><p>枚举值：</p><ul><li>Cloud： 云服务事件集</li><li>Platform： 平台事件集</li><li>Custom： 自定义事件集</li></ul>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>计费模式</p>
                     * @return PayMode <p>计费模式</p>
                     * 
                     */
                    std::string GetPayMode() const;

                    /**
                     * 判断参数 PayMode 是否已赋值
                     * @return PayMode 是否已赋值
                     * 
                     */
                    bool PayModeHasBeenSet() const;

                    /**
                     * 获取<p>EB日志存储时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SaveDays <p>EB日志存储时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetSaveDays() const;

                    /**
                     * 判断参数 SaveDays 是否已赋值
                     * @return SaveDays 是否已赋值
                     * 
                     */
                    bool SaveDaysHasBeenSet() const;

                    /**
                     * 获取<p>EB日志主题ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LogTopicId <p>EB日志主题ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLogTopicId() const;

                    /**
                     * 判断参数 LogTopicId 是否已赋值
                     * @return LogTopicId 是否已赋值
                     * 
                     */
                    bool LogTopicIdHasBeenSet() const;

                    /**
                     * 获取<p>是否开启存储</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EnableStore <p>是否开启存储</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetEnableStore() const;

                    /**
                     * 判断参数 EnableStore 是否已赋值
                     * @return EnableStore 是否已赋值
                     * 
                     */
                    bool EnableStoreHasBeenSet() const;

                    /**
                     * 获取<p>消息序列，是否有序</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return LinkMode <p>消息序列，是否有序</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetLinkMode() const;

                    /**
                     * 判断参数 LinkMode 是否已赋值
                     * @return LinkMode 是否已赋值
                     * 
                     */
                    bool LinkModeHasBeenSet() const;

                private:

                    /**
                     * <p>更新时间</p>
                     */
                    std::string m_modTime;
                    bool m_modTimeHasBeenSet;

                    /**
                     * <p>事件集描述</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>日志主题ID</p>
                     */
                    std::string m_clsTopicId;
                    bool m_clsTopicIdHasBeenSet;

                    /**
                     * <p>创建时间</p>
                     */
                    std::string m_addTime;
                    bool m_addTimeHasBeenSet;

                    /**
                     * <p>日志集ID</p>
                     */
                    std::string m_clsLogsetId;
                    bool m_clsLogsetIdHasBeenSet;

                    /**
                     * <p>事件集名称</p>
                     */
                    std::string m_eventBusName;
                    bool m_eventBusNameHasBeenSet;

                    /**
                     * <p>事件集ID</p>
                     */
                    std::string m_eventBusId;
                    bool m_eventBusIdHasBeenSet;

                    /**
                     * <p>事件集类型</p><p>枚举值：</p><ul><li>Cloud： 云服务事件集</li><li>Platform： 平台事件集</li><li>Custom： 自定义事件集</li></ul>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>计费模式</p>
                     */
                    std::string m_payMode;
                    bool m_payModeHasBeenSet;

                    /**
                     * <p>EB日志存储时长</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_saveDays;
                    bool m_saveDaysHasBeenSet;

                    /**
                     * <p>EB日志主题ID</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_logTopicId;
                    bool m_logTopicIdHasBeenSet;

                    /**
                     * <p>是否开启存储</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_enableStore;
                    bool m_enableStoreHasBeenSet;

                    /**
                     * <p>消息序列，是否有序</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_linkMode;
                    bool m_linkModeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EB_V20210416_MODEL_GETEVENTBUSRESPONSE_H_
