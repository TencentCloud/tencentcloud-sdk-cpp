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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_EXTRESOURCEFLAGDTO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_EXTRESOURCEFLAGDTO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 扩展信息参数
                */
                class ExtResourceFlagDto : public AbstractModel
                {
                public:
                    ExtResourceFlagDto();
                    ~ExtResourceFlagDto() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取父任务信息获取标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ParentTask 父任务信息获取标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    bool GetParentTask() const;

                    /**
                     * 设置父任务信息获取标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _parentTask 父任务信息获取标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetParentTask(const bool& _parentTask);

                    /**
                     * 判断参数 ParentTask 是否已赋值
                     * @return ParentTask 是否已赋值
                     * 
                     */
                    bool ParentTaskHasBeenSet() const;

                    /**
                     * 获取生产事件获取标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EventListener 生产事件获取标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetEventListener() const;

                    /**
                     * 设置生产事件获取标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _eventListener 生产事件获取标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetEventListener(const std::string& _eventListener);

                    /**
                     * 判断参数 EventListener 是否已赋值
                     * @return EventListener 是否已赋值
                     * 
                     */
                    bool EventListenerHasBeenSet() const;

                    /**
                     * 获取Dlc相关配置获取标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DlcResourceConfig Dlc相关配置获取标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDlcResourceConfig() const;

                    /**
                     * 设置Dlc相关配置获取标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dlcResourceConfig Dlc相关配置获取标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDlcResourceConfig(const std::string& _dlcResourceConfig);

                    /**
                     * 判断参数 DlcResourceConfig 是否已赋值
                     * @return DlcResourceConfig 是否已赋值
                     * 
                     */
                    bool DlcResourceConfigHasBeenSet() const;

                    /**
                     * 获取脚本信息获取标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Script 脚本信息获取标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetScript() const;

                    /**
                     * 设置脚本信息获取标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _script 脚本信息获取标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetScript(const std::string& _script);

                    /**
                     * 判断参数 Script 是否已赋值
                     * @return Script 是否已赋值
                     * 
                     */
                    bool ScriptHasBeenSet() const;

                    /**
                     * 获取离线任务信息获取标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OfflineSyncTask 离线任务信息获取标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOfflineSyncTask() const;

                    /**
                     * 设置离线任务信息获取标识
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _offlineSyncTask 离线任务信息获取标识
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOfflineSyncTask(const std::string& _offlineSyncTask);

                    /**
                     * 判断参数 OfflineSyncTask 是否已赋值
                     * @return OfflineSyncTask 是否已赋值
                     * 
                     */
                    bool OfflineSyncTaskHasBeenSet() const;

                private:

                    /**
                     * 父任务信息获取标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_parentTask;
                    bool m_parentTaskHasBeenSet;

                    /**
                     * 生产事件获取标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_eventListener;
                    bool m_eventListenerHasBeenSet;

                    /**
                     * Dlc相关配置获取标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dlcResourceConfig;
                    bool m_dlcResourceConfigHasBeenSet;

                    /**
                     * 脚本信息获取标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_script;
                    bool m_scriptHasBeenSet;

                    /**
                     * 离线任务信息获取标识
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_offlineSyncTask;
                    bool m_offlineSyncTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_EXTRESOURCEFLAGDTO_H_
