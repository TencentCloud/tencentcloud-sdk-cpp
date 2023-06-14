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

#ifndef TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_TASK_H_
#define TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_TASK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotcloud/v20180614/model/BatchUpdateShadow.h>
#include <tencentcloud/iotcloud/v20180614/model/BatchPublishMessage.h>


namespace TencentCloud
{
    namespace Iotcloud
    {
        namespace V20180614
        {
            namespace Model
            {
                /**
                * 任务描述细节
                */
                class Task : public AbstractModel
                {
                public:
                    Task();
                    ~Task() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取批量更新影子任务的描述细节，当 taskType 取值为 “UpdateShadow” 时，此字段必填。描述见下 BatchUpdateShadow
                     * @return UpdateShadowTask 批量更新影子任务的描述细节，当 taskType 取值为 “UpdateShadow” 时，此字段必填。描述见下 BatchUpdateShadow
                     * 
                     */
                    BatchUpdateShadow GetUpdateShadowTask() const;

                    /**
                     * 设置批量更新影子任务的描述细节，当 taskType 取值为 “UpdateShadow” 时，此字段必填。描述见下 BatchUpdateShadow
                     * @param _updateShadowTask 批量更新影子任务的描述细节，当 taskType 取值为 “UpdateShadow” 时，此字段必填。描述见下 BatchUpdateShadow
                     * 
                     */
                    void SetUpdateShadowTask(const BatchUpdateShadow& _updateShadowTask);

                    /**
                     * 判断参数 UpdateShadowTask 是否已赋值
                     * @return UpdateShadowTask 是否已赋值
                     * 
                     */
                    bool UpdateShadowTaskHasBeenSet() const;

                    /**
                     * 获取批量下发消息任务的描述细节，当 taskType 取值为 “PublishMessage” 时，此字段必填。描述见下 BatchPublishMessage
                     * @return PublishMessageTask 批量下发消息任务的描述细节，当 taskType 取值为 “PublishMessage” 时，此字段必填。描述见下 BatchPublishMessage
                     * 
                     */
                    BatchPublishMessage GetPublishMessageTask() const;

                    /**
                     * 设置批量下发消息任务的描述细节，当 taskType 取值为 “PublishMessage” 时，此字段必填。描述见下 BatchPublishMessage
                     * @param _publishMessageTask 批量下发消息任务的描述细节，当 taskType 取值为 “PublishMessage” 时，此字段必填。描述见下 BatchPublishMessage
                     * 
                     */
                    void SetPublishMessageTask(const BatchPublishMessage& _publishMessageTask);

                    /**
                     * 判断参数 PublishMessageTask 是否已赋值
                     * @return PublishMessageTask 是否已赋值
                     * 
                     */
                    bool PublishMessageTaskHasBeenSet() const;

                private:

                    /**
                     * 批量更新影子任务的描述细节，当 taskType 取值为 “UpdateShadow” 时，此字段必填。描述见下 BatchUpdateShadow
                     */
                    BatchUpdateShadow m_updateShadowTask;
                    bool m_updateShadowTaskHasBeenSet;

                    /**
                     * 批量下发消息任务的描述细节，当 taskType 取值为 “PublishMessage” 时，此字段必填。描述见下 BatchPublishMessage
                     */
                    BatchPublishMessage m_publishMessageTask;
                    bool m_publishMessageTaskHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTCLOUD_V20180614_MODEL_TASK_H_
