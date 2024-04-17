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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKLOGRESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKLOGRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/wedata/v20210820/model/LogContent.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * TaskLog返回参数结构体
                */
                class TaskLogResponse : public AbstractModel
                {
                public:
                    TaskLogResponse();
                    ~TaskLogResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取任务详细日志
                     * @return LogContentList 任务详细日志
                     * 
                     */
                    std::vector<LogContent> GetLogContentList() const;

                    /**
                     * 判断参数 LogContentList 是否已赋值
                     * @return LogContentList 是否已赋值
                     * 
                     */
                    bool LogContentListHasBeenSet() const;

                private:

                    /**
                     * 任务详细日志
                     */
                    std::vector<LogContent> m_logContentList;
                    bool m_logContentListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_TASKLOGRESPONSE_H_
