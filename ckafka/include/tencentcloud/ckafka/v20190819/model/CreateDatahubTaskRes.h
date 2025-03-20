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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEDATAHUBTASKRES_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEDATAHUBTASKRES_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 创建数据转储返回值
                */
                class CreateDatahubTaskRes : public AbstractModel
                {
                public:
                    CreateDatahubTaskRes();
                    ~CreateDatahubTaskRes() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取转储任务id
                     * @return TaskId 转储任务id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置转储任务id
                     * @param _taskId 转储任务id
                     * 
                     */
                    void SetTaskId(const std::string& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取数据转储Id
                     * @return DatahubId 数据转储Id
                     * 
                     */
                    std::string GetDatahubId() const;

                    /**
                     * 设置数据转储Id
                     * @param _datahubId 数据转储Id
                     * 
                     */
                    void SetDatahubId(const std::string& _datahubId);

                    /**
                     * 判断参数 DatahubId 是否已赋值
                     * @return DatahubId 是否已赋值
                     * 
                     */
                    bool DatahubIdHasBeenSet() const;

                private:

                    /**
                     * 转储任务id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 数据转储Id
                     */
                    std::string m_datahubId;
                    bool m_datahubIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_CREATEDATAHUBTASKRES_H_
