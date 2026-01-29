/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_SUBTASKFEEDBACK_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_SUBTASKFEEDBACK_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/FeedbackList.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 信息提取子任务反馈信息
                */
                class SubTaskFeedback : public AbstractModel
                {
                public:
                    SubTaskFeedback();
                    ~SubTaskFeedback() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取信息提取子任务ID
                     * @return SubTaskId 信息提取子任务ID
                     * 
                     */
                    std::string GetSubTaskId() const;

                    /**
                     * 设置信息提取子任务ID
                     * @param _subTaskId 信息提取子任务ID
                     * 
                     */
                    void SetSubTaskId(const std::string& _subTaskId);

                    /**
                     * 判断参数 SubTaskId 是否已赋值
                     * @return SubTaskId 是否已赋值
                     * 
                     */
                    bool SubTaskIdHasBeenSet() const;

                    /**
                     * 获取提取结果反馈信息
                     * @return FeedbackList 提取结果反馈信息
                     * 
                     */
                    std::vector<FeedbackList> GetFeedbackList() const;

                    /**
                     * 设置提取结果反馈信息
                     * @param _feedbackList 提取结果反馈信息
                     * 
                     */
                    void SetFeedbackList(const std::vector<FeedbackList>& _feedbackList);

                    /**
                     * 判断参数 FeedbackList 是否已赋值
                     * @return FeedbackList 是否已赋值
                     * 
                     */
                    bool FeedbackListHasBeenSet() const;

                private:

                    /**
                     * 信息提取子任务ID
                     */
                    std::string m_subTaskId;
                    bool m_subTaskIdHasBeenSet;

                    /**
                     * 提取结果反馈信息
                     */
                    std::vector<FeedbackList> m_feedbackList;
                    bool m_feedbackListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_SUBTASKFEEDBACK_H_
