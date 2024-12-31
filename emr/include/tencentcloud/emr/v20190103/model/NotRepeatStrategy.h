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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_NOTREPEATSTRATEGY_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_NOTREPEATSTRATEGY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * 弹性扩缩容执行一次规则上下文
                */
                class NotRepeatStrategy : public AbstractModel
                {
                public:
                    NotRepeatStrategy();
                    ~NotRepeatStrategy() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取该次任务执行的具体完整时间，格式为"2020-07-13 00:00:00"
                     * @return ExecuteAt 该次任务执行的具体完整时间，格式为"2020-07-13 00:00:00"
                     * 
                     */
                    std::string GetExecuteAt() const;

                    /**
                     * 设置该次任务执行的具体完整时间，格式为"2020-07-13 00:00:00"
                     * @param _executeAt 该次任务执行的具体完整时间，格式为"2020-07-13 00:00:00"
                     * 
                     */
                    void SetExecuteAt(const std::string& _executeAt);

                    /**
                     * 判断参数 ExecuteAt 是否已赋值
                     * @return ExecuteAt 是否已赋值
                     * 
                     */
                    bool ExecuteAtHasBeenSet() const;

                private:

                    /**
                     * 该次任务执行的具体完整时间，格式为"2020-07-13 00:00:00"
                     */
                    std::string m_executeAt;
                    bool m_executeAtHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_NOTREPEATSTRATEGY_H_
