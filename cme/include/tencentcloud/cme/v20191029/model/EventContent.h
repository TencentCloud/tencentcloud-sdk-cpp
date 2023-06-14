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

#ifndef TENCENTCLOUD_CME_V20191029_MODEL_EVENTCONTENT_H_
#define TENCENTCLOUD_CME_V20191029_MODEL_EVENTCONTENT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cme/v20191029/model/StorageNewFileCreatedEvent.h>
#include <tencentcloud/cme/v20191029/model/ProjectStreamConnectStatusChangedEvent.h>
#include <tencentcloud/cme/v20191029/model/ProjectSwitcherStatusChangedEvent.h>
#include <tencentcloud/cme/v20191029/model/MaterialImportedEvent.h>
#include <tencentcloud/cme/v20191029/model/MaterialAddedEvent.h>
#include <tencentcloud/cme/v20191029/model/MaterialMovedEvent.h>
#include <tencentcloud/cme/v20191029/model/MaterialModifiedEvent.h>
#include <tencentcloud/cme/v20191029/model/MaterialDeletedEvent.h>
#include <tencentcloud/cme/v20191029/model/ClassCreatedEvent.h>
#include <tencentcloud/cme/v20191029/model/ClassMovedEvent.h>
#include <tencentcloud/cme/v20191029/model/ClassDeletedEvent.h>
#include <tencentcloud/cme/v20191029/model/VideoExportCompletedEvent.h>
#include <tencentcloud/cme/v20191029/model/ProjectMediaCastStatusChangedEvent.h>


namespace TencentCloud
{
    namespace Cme
    {
        namespace V20191029
        {
            namespace Model
            {
                /**
                * 回调事件内容。
                */
                class EventContent : public AbstractModel
                {
                public:
                    EventContent();
                    ~EventContent() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取事件类型，可取值有：
<li>Storage.NewFileCreated：新文件产生事件；</li>
<li>Project.StreamConnect.StatusChanged：云转推项目状态变更事件；</li>
<li>Project.Switcher.StatusChanged：导播台项目状态变更事件；</li>
<li>Material.Imported：媒体导入事件；</li>
<li>Material.Added：媒体添加事件；</li>
<li>Material.Moved：媒体移动事件；</li>
<li>Material.Modified：媒体变更事件；</li>
<li>Material.Deleted：媒体删除事件；</li>
<li>Class.Created：分类新增事件；</li>
<li>Class.Moved：分类移动事件；</li>
<li>Class.Deleted：分类删除事件；</li>
<li>Task.VideoExportCompleted：视频导出完成事件； </li>
<li>Project.MediaCast.StatusChanged：点播转直播项目状态变更事件。 </li>
                     * @return EventType 事件类型，可取值有：
<li>Storage.NewFileCreated：新文件产生事件；</li>
<li>Project.StreamConnect.StatusChanged：云转推项目状态变更事件；</li>
<li>Project.Switcher.StatusChanged：导播台项目状态变更事件；</li>
<li>Material.Imported：媒体导入事件；</li>
<li>Material.Added：媒体添加事件；</li>
<li>Material.Moved：媒体移动事件；</li>
<li>Material.Modified：媒体变更事件；</li>
<li>Material.Deleted：媒体删除事件；</li>
<li>Class.Created：分类新增事件；</li>
<li>Class.Moved：分类移动事件；</li>
<li>Class.Deleted：分类删除事件；</li>
<li>Task.VideoExportCompleted：视频导出完成事件； </li>
<li>Project.MediaCast.StatusChanged：点播转直播项目状态变更事件。 </li>
                     * 
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置事件类型，可取值有：
<li>Storage.NewFileCreated：新文件产生事件；</li>
<li>Project.StreamConnect.StatusChanged：云转推项目状态变更事件；</li>
<li>Project.Switcher.StatusChanged：导播台项目状态变更事件；</li>
<li>Material.Imported：媒体导入事件；</li>
<li>Material.Added：媒体添加事件；</li>
<li>Material.Moved：媒体移动事件；</li>
<li>Material.Modified：媒体变更事件；</li>
<li>Material.Deleted：媒体删除事件；</li>
<li>Class.Created：分类新增事件；</li>
<li>Class.Moved：分类移动事件；</li>
<li>Class.Deleted：分类删除事件；</li>
<li>Task.VideoExportCompleted：视频导出完成事件； </li>
<li>Project.MediaCast.StatusChanged：点播转直播项目状态变更事件。 </li>
                     * @param _eventType 事件类型，可取值有：
<li>Storage.NewFileCreated：新文件产生事件；</li>
<li>Project.StreamConnect.StatusChanged：云转推项目状态变更事件；</li>
<li>Project.Switcher.StatusChanged：导播台项目状态变更事件；</li>
<li>Material.Imported：媒体导入事件；</li>
<li>Material.Added：媒体添加事件；</li>
<li>Material.Moved：媒体移动事件；</li>
<li>Material.Modified：媒体变更事件；</li>
<li>Material.Deleted：媒体删除事件；</li>
<li>Class.Created：分类新增事件；</li>
<li>Class.Moved：分类移动事件；</li>
<li>Class.Deleted：分类删除事件；</li>
<li>Task.VideoExportCompleted：视频导出完成事件； </li>
<li>Project.MediaCast.StatusChanged：点播转直播项目状态变更事件。 </li>
                     * 
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     * 
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取操作者，表示触发事件的操作者。如果是 `cmeid_system` 表示平台管理员操作。
                     * @return Operator 操作者，表示触发事件的操作者。如果是 `cmeid_system` 表示平台管理员操作。
                     * 
                     */
                    std::string GetOperator() const;

                    /**
                     * 设置操作者，表示触发事件的操作者。如果是 `cmeid_system` 表示平台管理员操作。
                     * @param _operator 操作者，表示触发事件的操作者。如果是 `cmeid_system` 表示平台管理员操作。
                     * 
                     */
                    void SetOperator(const std::string& _operator);

                    /**
                     * 判断参数 Operator 是否已赋值
                     * @return Operator 是否已赋值
                     * 
                     */
                    bool OperatorHasBeenSet() const;

                    /**
                     * 获取新文件产生事件。仅当 EventType 为 Storage.NewFileCreated 时有效。
                     * @return StorageNewFileCreatedEvent 新文件产生事件。仅当 EventType 为 Storage.NewFileCreated 时有效。
                     * 
                     */
                    StorageNewFileCreatedEvent GetStorageNewFileCreatedEvent() const;

                    /**
                     * 设置新文件产生事件。仅当 EventType 为 Storage.NewFileCreated 时有效。
                     * @param _storageNewFileCreatedEvent 新文件产生事件。仅当 EventType 为 Storage.NewFileCreated 时有效。
                     * 
                     */
                    void SetStorageNewFileCreatedEvent(const StorageNewFileCreatedEvent& _storageNewFileCreatedEvent);

                    /**
                     * 判断参数 StorageNewFileCreatedEvent 是否已赋值
                     * @return StorageNewFileCreatedEvent 是否已赋值
                     * 
                     */
                    bool StorageNewFileCreatedEventHasBeenSet() const;

                    /**
                     * 获取云转推项目状态变更事件。仅当 EventType 为 Project.StreamConnect.StatusChanged 时有效。
                     * @return ProjectStreamConnectStatusChangedEvent 云转推项目状态变更事件。仅当 EventType 为 Project.StreamConnect.StatusChanged 时有效。
                     * 
                     */
                    ProjectStreamConnectStatusChangedEvent GetProjectStreamConnectStatusChangedEvent() const;

                    /**
                     * 设置云转推项目状态变更事件。仅当 EventType 为 Project.StreamConnect.StatusChanged 时有效。
                     * @param _projectStreamConnectStatusChangedEvent 云转推项目状态变更事件。仅当 EventType 为 Project.StreamConnect.StatusChanged 时有效。
                     * 
                     */
                    void SetProjectStreamConnectStatusChangedEvent(const ProjectStreamConnectStatusChangedEvent& _projectStreamConnectStatusChangedEvent);

                    /**
                     * 判断参数 ProjectStreamConnectStatusChangedEvent 是否已赋值
                     * @return ProjectStreamConnectStatusChangedEvent 是否已赋值
                     * 
                     */
                    bool ProjectStreamConnectStatusChangedEventHasBeenSet() const;

                    /**
                     * 获取导播台项目状态变更事件。仅当 EventType 为 Project.Switcher.StatusChanged 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectSwitcherStatusChangedEvent 导播台项目状态变更事件。仅当 EventType 为 Project.Switcher.StatusChanged 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ProjectSwitcherStatusChangedEvent GetProjectSwitcherStatusChangedEvent() const;

                    /**
                     * 设置导播台项目状态变更事件。仅当 EventType 为 Project.Switcher.StatusChanged 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectSwitcherStatusChangedEvent 导播台项目状态变更事件。仅当 EventType 为 Project.Switcher.StatusChanged 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectSwitcherStatusChangedEvent(const ProjectSwitcherStatusChangedEvent& _projectSwitcherStatusChangedEvent);

                    /**
                     * 判断参数 ProjectSwitcherStatusChangedEvent 是否已赋值
                     * @return ProjectSwitcherStatusChangedEvent 是否已赋值
                     * 
                     */
                    bool ProjectSwitcherStatusChangedEventHasBeenSet() const;

                    /**
                     * 获取媒体导入事件。仅当 EventType 为 Material.Imported 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaterialImportedEvent 媒体导入事件。仅当 EventType 为 Material.Imported 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MaterialImportedEvent GetMaterialImportedEvent() const;

                    /**
                     * 设置媒体导入事件。仅当 EventType 为 Material.Imported 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _materialImportedEvent 媒体导入事件。仅当 EventType 为 Material.Imported 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaterialImportedEvent(const MaterialImportedEvent& _materialImportedEvent);

                    /**
                     * 判断参数 MaterialImportedEvent 是否已赋值
                     * @return MaterialImportedEvent 是否已赋值
                     * 
                     */
                    bool MaterialImportedEventHasBeenSet() const;

                    /**
                     * 获取媒体添加事件。仅当 EventType 为 Material.Added 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaterialAddedEvent 媒体添加事件。仅当 EventType 为 Material.Added 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MaterialAddedEvent GetMaterialAddedEvent() const;

                    /**
                     * 设置媒体添加事件。仅当 EventType 为 Material.Added 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _materialAddedEvent 媒体添加事件。仅当 EventType 为 Material.Added 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaterialAddedEvent(const MaterialAddedEvent& _materialAddedEvent);

                    /**
                     * 判断参数 MaterialAddedEvent 是否已赋值
                     * @return MaterialAddedEvent 是否已赋值
                     * 
                     */
                    bool MaterialAddedEventHasBeenSet() const;

                    /**
                     * 获取媒体移动事件。仅当 EventType 为 Material.Moved 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaterialMovedEvent 媒体移动事件。仅当 EventType 为 Material.Moved 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MaterialMovedEvent GetMaterialMovedEvent() const;

                    /**
                     * 设置媒体移动事件。仅当 EventType 为 Material.Moved 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _materialMovedEvent 媒体移动事件。仅当 EventType 为 Material.Moved 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaterialMovedEvent(const MaterialMovedEvent& _materialMovedEvent);

                    /**
                     * 判断参数 MaterialMovedEvent 是否已赋值
                     * @return MaterialMovedEvent 是否已赋值
                     * 
                     */
                    bool MaterialMovedEventHasBeenSet() const;

                    /**
                     * 获取媒体更新事件。仅当 EventType 为 Material.Modified 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaterialModifiedEvent 媒体更新事件。仅当 EventType 为 Material.Modified 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MaterialModifiedEvent GetMaterialModifiedEvent() const;

                    /**
                     * 设置媒体更新事件。仅当 EventType 为 Material.Modified 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _materialModifiedEvent 媒体更新事件。仅当 EventType 为 Material.Modified 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaterialModifiedEvent(const MaterialModifiedEvent& _materialModifiedEvent);

                    /**
                     * 判断参数 MaterialModifiedEvent 是否已赋值
                     * @return MaterialModifiedEvent 是否已赋值
                     * 
                     */
                    bool MaterialModifiedEventHasBeenSet() const;

                    /**
                     * 获取媒体删除事件。仅当 EventType 为 Material.Deleted 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return MaterialDeletedEvent 媒体删除事件。仅当 EventType 为 Material.Deleted 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    MaterialDeletedEvent GetMaterialDeletedEvent() const;

                    /**
                     * 设置媒体删除事件。仅当 EventType 为 Material.Deleted 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _materialDeletedEvent 媒体删除事件。仅当 EventType 为 Material.Deleted 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMaterialDeletedEvent(const MaterialDeletedEvent& _materialDeletedEvent);

                    /**
                     * 判断参数 MaterialDeletedEvent 是否已赋值
                     * @return MaterialDeletedEvent 是否已赋值
                     * 
                     */
                    bool MaterialDeletedEventHasBeenSet() const;

                    /**
                     * 获取分类创建事件。仅当 EventType 为 Class.Created 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClassCreatedEvent 分类创建事件。仅当 EventType 为 Class.Created 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClassCreatedEvent GetClassCreatedEvent() const;

                    /**
                     * 设置分类创建事件。仅当 EventType 为 Class.Created 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _classCreatedEvent 分类创建事件。仅当 EventType 为 Class.Created 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClassCreatedEvent(const ClassCreatedEvent& _classCreatedEvent);

                    /**
                     * 判断参数 ClassCreatedEvent 是否已赋值
                     * @return ClassCreatedEvent 是否已赋值
                     * 
                     */
                    bool ClassCreatedEventHasBeenSet() const;

                    /**
                     * 获取分类移动事件。仅当 EventType 为 Class.Moved 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClassMovedEvent 分类移动事件。仅当 EventType 为 Class.Moved 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClassMovedEvent GetClassMovedEvent() const;

                    /**
                     * 设置分类移动事件。仅当 EventType 为 Class.Moved 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _classMovedEvent 分类移动事件。仅当 EventType 为 Class.Moved 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClassMovedEvent(const ClassMovedEvent& _classMovedEvent);

                    /**
                     * 判断参数 ClassMovedEvent 是否已赋值
                     * @return ClassMovedEvent 是否已赋值
                     * 
                     */
                    bool ClassMovedEventHasBeenSet() const;

                    /**
                     * 获取分类删除事件。仅当 EventType 为 Class.Deleted 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClassDeletedEvent 分类删除事件。仅当 EventType 为 Class.Deleted 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ClassDeletedEvent GetClassDeletedEvent() const;

                    /**
                     * 设置分类删除事件。仅当 EventType 为 Class.Deleted 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _classDeletedEvent 分类删除事件。仅当 EventType 为 Class.Deleted 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClassDeletedEvent(const ClassDeletedEvent& _classDeletedEvent);

                    /**
                     * 判断参数 ClassDeletedEvent 是否已赋值
                     * @return ClassDeletedEvent 是否已赋值
                     * 
                     */
                    bool ClassDeletedEventHasBeenSet() const;

                    /**
                     * 获取视频导出完成事件。仅当 EventType 为 Task.VideoExportCompleted 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VideoExportCompletedEvent 视频导出完成事件。仅当 EventType 为 Task.VideoExportCompleted 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    VideoExportCompletedEvent GetVideoExportCompletedEvent() const;

                    /**
                     * 设置视频导出完成事件。仅当 EventType 为 Task.VideoExportCompleted 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _videoExportCompletedEvent 视频导出完成事件。仅当 EventType 为 Task.VideoExportCompleted 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVideoExportCompletedEvent(const VideoExportCompletedEvent& _videoExportCompletedEvent);

                    /**
                     * 判断参数 VideoExportCompletedEvent 是否已赋值
                     * @return VideoExportCompletedEvent 是否已赋值
                     * 
                     */
                    bool VideoExportCompletedEventHasBeenSet() const;

                    /**
                     * 获取点播转直播项目状态变更事件。仅当 EventType 为 Project.MediaCast.StatusChanged 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ProjectMediaCastStatusChangedEvent 点播转直播项目状态变更事件。仅当 EventType 为 Project.MediaCast.StatusChanged 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    ProjectMediaCastStatusChangedEvent GetProjectMediaCastStatusChangedEvent() const;

                    /**
                     * 设置点播转直播项目状态变更事件。仅当 EventType 为 Project.MediaCast.StatusChanged 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _projectMediaCastStatusChangedEvent 点播转直播项目状态变更事件。仅当 EventType 为 Project.MediaCast.StatusChanged 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetProjectMediaCastStatusChangedEvent(const ProjectMediaCastStatusChangedEvent& _projectMediaCastStatusChangedEvent);

                    /**
                     * 判断参数 ProjectMediaCastStatusChangedEvent 是否已赋值
                     * @return ProjectMediaCastStatusChangedEvent 是否已赋值
                     * 
                     */
                    bool ProjectMediaCastStatusChangedEventHasBeenSet() const;

                private:

                    /**
                     * 事件类型，可取值有：
<li>Storage.NewFileCreated：新文件产生事件；</li>
<li>Project.StreamConnect.StatusChanged：云转推项目状态变更事件；</li>
<li>Project.Switcher.StatusChanged：导播台项目状态变更事件；</li>
<li>Material.Imported：媒体导入事件；</li>
<li>Material.Added：媒体添加事件；</li>
<li>Material.Moved：媒体移动事件；</li>
<li>Material.Modified：媒体变更事件；</li>
<li>Material.Deleted：媒体删除事件；</li>
<li>Class.Created：分类新增事件；</li>
<li>Class.Moved：分类移动事件；</li>
<li>Class.Deleted：分类删除事件；</li>
<li>Task.VideoExportCompleted：视频导出完成事件； </li>
<li>Project.MediaCast.StatusChanged：点播转直播项目状态变更事件。 </li>
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 操作者，表示触发事件的操作者。如果是 `cmeid_system` 表示平台管理员操作。
                     */
                    std::string m_operator;
                    bool m_operatorHasBeenSet;

                    /**
                     * 新文件产生事件。仅当 EventType 为 Storage.NewFileCreated 时有效。
                     */
                    StorageNewFileCreatedEvent m_storageNewFileCreatedEvent;
                    bool m_storageNewFileCreatedEventHasBeenSet;

                    /**
                     * 云转推项目状态变更事件。仅当 EventType 为 Project.StreamConnect.StatusChanged 时有效。
                     */
                    ProjectStreamConnectStatusChangedEvent m_projectStreamConnectStatusChangedEvent;
                    bool m_projectStreamConnectStatusChangedEventHasBeenSet;

                    /**
                     * 导播台项目状态变更事件。仅当 EventType 为 Project.Switcher.StatusChanged 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ProjectSwitcherStatusChangedEvent m_projectSwitcherStatusChangedEvent;
                    bool m_projectSwitcherStatusChangedEventHasBeenSet;

                    /**
                     * 媒体导入事件。仅当 EventType 为 Material.Imported 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MaterialImportedEvent m_materialImportedEvent;
                    bool m_materialImportedEventHasBeenSet;

                    /**
                     * 媒体添加事件。仅当 EventType 为 Material.Added 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MaterialAddedEvent m_materialAddedEvent;
                    bool m_materialAddedEventHasBeenSet;

                    /**
                     * 媒体移动事件。仅当 EventType 为 Material.Moved 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MaterialMovedEvent m_materialMovedEvent;
                    bool m_materialMovedEventHasBeenSet;

                    /**
                     * 媒体更新事件。仅当 EventType 为 Material.Modified 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MaterialModifiedEvent m_materialModifiedEvent;
                    bool m_materialModifiedEventHasBeenSet;

                    /**
                     * 媒体删除事件。仅当 EventType 为 Material.Deleted 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    MaterialDeletedEvent m_materialDeletedEvent;
                    bool m_materialDeletedEventHasBeenSet;

                    /**
                     * 分类创建事件。仅当 EventType 为 Class.Created 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClassCreatedEvent m_classCreatedEvent;
                    bool m_classCreatedEventHasBeenSet;

                    /**
                     * 分类移动事件。仅当 EventType 为 Class.Moved 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClassMovedEvent m_classMovedEvent;
                    bool m_classMovedEventHasBeenSet;

                    /**
                     * 分类删除事件。仅当 EventType 为 Class.Deleted 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ClassDeletedEvent m_classDeletedEvent;
                    bool m_classDeletedEventHasBeenSet;

                    /**
                     * 视频导出完成事件。仅当 EventType 为 Task.VideoExportCompleted 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    VideoExportCompletedEvent m_videoExportCompletedEvent;
                    bool m_videoExportCompletedEventHasBeenSet;

                    /**
                     * 点播转直播项目状态变更事件。仅当 EventType 为 Project.MediaCast.StatusChanged 时有效。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    ProjectMediaCastStatusChangedEvent m_projectMediaCastStatusChangedEvent;
                    bool m_projectMediaCastStatusChangedEventHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_EVENTCONTENT_H_
