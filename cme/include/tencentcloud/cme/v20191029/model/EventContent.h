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
                     * 获取事件类型，可取值为：
<li>Storage.NewFileCreated：新文件产生。</li>
                     * @return EventType 事件类型，可取值为：
<li>Storage.NewFileCreated：新文件产生。</li>
                     */
                    std::string GetEventType() const;

                    /**
                     * 设置事件类型，可取值为：
<li>Storage.NewFileCreated：新文件产生。</li>
                     * @param EventType 事件类型，可取值为：
<li>Storage.NewFileCreated：新文件产生。</li>
                     */
                    void SetEventType(const std::string& _eventType);

                    /**
                     * 判断参数 EventType 是否已赋值
                     * @return EventType 是否已赋值
                     */
                    bool EventTypeHasBeenSet() const;

                    /**
                     * 获取新文件产生事件信息。仅当 EventType 为 Storage.NewFileCreated 时有效。
                     * @return StorageNewFileCreatedEvent 新文件产生事件信息。仅当 EventType 为 Storage.NewFileCreated 时有效。
                     */
                    StorageNewFileCreatedEvent GetStorageNewFileCreatedEvent() const;

                    /**
                     * 设置新文件产生事件信息。仅当 EventType 为 Storage.NewFileCreated 时有效。
                     * @param StorageNewFileCreatedEvent 新文件产生事件信息。仅当 EventType 为 Storage.NewFileCreated 时有效。
                     */
                    void SetStorageNewFileCreatedEvent(const StorageNewFileCreatedEvent& _storageNewFileCreatedEvent);

                    /**
                     * 判断参数 StorageNewFileCreatedEvent 是否已赋值
                     * @return StorageNewFileCreatedEvent 是否已赋值
                     */
                    bool StorageNewFileCreatedEventHasBeenSet() const;

                private:

                    /**
                     * 事件类型，可取值为：
<li>Storage.NewFileCreated：新文件产生。</li>
                     */
                    std::string m_eventType;
                    bool m_eventTypeHasBeenSet;

                    /**
                     * 新文件产生事件信息。仅当 EventType 为 Storage.NewFileCreated 时有效。
                     */
                    StorageNewFileCreatedEvent m_storageNewFileCreatedEvent;
                    bool m_storageNewFileCreatedEventHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CME_V20191029_MODEL_EVENTCONTENT_H_
