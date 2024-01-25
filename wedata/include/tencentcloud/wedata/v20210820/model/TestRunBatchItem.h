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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TESTRUNBATCHITEM_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TESTRUNBATCHITEM_H_

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
                * 批量测试运行提交任务实例信息
                */
                class TestRunBatchItem : public AbstractModel
                {
                public:
                    TestRunBatchItem();
                    ~TestRunBatchItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取任务实例Id
                     * @return InstanceKey 任务实例Id
                     * 
                     */
                    std::string GetInstanceKey() const;

                    /**
                     * 设置任务实例Id
                     * @param _instanceKey 任务实例Id
                     * 
                     */
                    void SetInstanceKey(const std::string& _instanceKey);

                    /**
                     * 判断参数 InstanceKey 是否已赋值
                     * @return InstanceKey 是否已赋值
                     * 
                     */
                    bool InstanceKeyHasBeenSet() const;

                    /**
                     * 获取任务Id
                     * @return TaskId 任务Id
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置任务Id
                     * @param _taskId 任务Id
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
                     * 获取实例运行时间
                     * @return CurrRunDate 实例运行时间
                     * 
                     */
                    std::string GetCurrRunDate() const;

                    /**
                     * 设置实例运行时间
                     * @param _currRunDate 实例运行时间
                     * 
                     */
                    void SetCurrRunDate(const std::string& _currRunDate);

                    /**
                     * 判断参数 CurrRunDate 是否已赋值
                     * @return CurrRunDate 是否已赋值
                     * 
                     */
                    bool CurrRunDateHasBeenSet() const;

                private:

                    /**
                     * 任务实例Id
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * 任务Id
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 实例运行时间
                     */
                    std::string m_currRunDate;
                    bool m_currRunDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TESTRUNBATCHITEM_H_
