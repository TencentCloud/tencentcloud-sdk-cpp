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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETESTRUNBATCHITEM_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETESTRUNBATCHITEM_H_

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
                * 描述etl测试运行批量结果
                */
                class DescribeTestRunBatchItem : public AbstractModel
                {
                public:
                    DescribeTestRunBatchItem();
                    ~DescribeTestRunBatchItem() = default;
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
                     * 获取当前任务状态
                     * @return Status 当前任务状态
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置当前任务状态
                     * @param _status 当前任务状态
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取任务是否结束
                     * @return Finished 任务是否结束
                     * 
                     */
                    bool GetFinished() const;

                    /**
                     * 设置任务是否结束
                     * @param _finished 任务是否结束
                     * 
                     */
                    void SetFinished(const bool& _finished);

                    /**
                     * 判断参数 Finished 是否已赋值
                     * @return Finished 是否已赋值
                     * 
                     */
                    bool FinishedHasBeenSet() const;

                    /**
                     * 获取日志内容
                     * @return LogContent 日志内容
                     * 
                     */
                    std::string GetLogContent() const;

                    /**
                     * 设置日志内容
                     * @param _logContent 日志内容
                     * 
                     */
                    void SetLogContent(const std::string& _logContent);

                    /**
                     * 判断参数 LogContent 是否已赋值
                     * @return LogContent 是否已赋值
                     * 
                     */
                    bool LogContentHasBeenSet() const;

                private:

                    /**
                     * 任务实例Id
                     */
                    std::string m_instanceKey;
                    bool m_instanceKeyHasBeenSet;

                    /**
                     * 当前任务状态
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 任务是否结束
                     */
                    bool m_finished;
                    bool m_finishedHasBeenSet;

                    /**
                     * 日志内容
                     */
                    std::string m_logContent;
                    bool m_logContentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_DESCRIBETESTRUNBATCHITEM_H_
