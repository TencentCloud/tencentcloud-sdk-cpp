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

#ifndef TENCENTCLOUD_IE_V20200304_MODEL_MEDIAQUALITYRESTORATIONTASKRESULT_H_
#define TENCENTCLOUD_IE_V20200304_MODEL_MEDIAQUALITYRESTORATIONTASKRESULT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ie/v20200304/model/SubTaskResultItem.h>


namespace TencentCloud
{
    namespace Ie
    {
        namespace V20200304
        {
            namespace Model
            {
                /**
                * 画质重生任务结果
                */
                class MediaQualityRestorationTaskResult : public AbstractModel
                {
                public:
                    MediaQualityRestorationTaskResult();
                    ~MediaQualityRestorationTaskResult() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取画质重生任务ID
                     * @return TaskId 画质重生任务ID
                     * 
                     */
                    std::string GetTaskId() const;

                    /**
                     * 设置画质重生任务ID
                     * @param _taskId 画质重生任务ID
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
                     * 获取画质重生处理后文件的详细信息。
                     * @return SubTaskResult 画质重生处理后文件的详细信息。
                     * 
                     */
                    std::vector<SubTaskResultItem> GetSubTaskResult() const;

                    /**
                     * 设置画质重生处理后文件的详细信息。
                     * @param _subTaskResult 画质重生处理后文件的详细信息。
                     * 
                     */
                    void SetSubTaskResult(const std::vector<SubTaskResultItem>& _subTaskResult);

                    /**
                     * 判断参数 SubTaskResult 是否已赋值
                     * @return SubTaskResult 是否已赋值
                     * 
                     */
                    bool SubTaskResultHasBeenSet() const;

                private:

                    /**
                     * 画质重生任务ID
                     */
                    std::string m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 画质重生处理后文件的详细信息。
                     */
                    std::vector<SubTaskResultItem> m_subTaskResult;
                    bool m_subTaskResultHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IE_V20200304_MODEL_MEDIAQUALITYRESTORATIONTASKRESULT_H_
