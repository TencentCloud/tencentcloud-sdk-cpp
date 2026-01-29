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

#ifndef TENCENTCLOUD_ESS_V20201111_MODEL_FEEDBACKLIST_H_
#define TENCENTCLOUD_ESS_V20201111_MODEL_FEEDBACKLIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ess/v20201111/model/FeedbackInfo.h>


namespace TencentCloud
{
    namespace Ess
    {
        namespace V20201111
        {
            namespace Model
            {
                /**
                * 信息提取任务反馈信息列表
                */
                class FeedbackList : public AbstractModel
                {
                public:
                    FeedbackList();
                    ~FeedbackList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取信息提取结果字段ID
                     * @return Id 信息提取结果字段ID
                     * 
                     */
                    std::string GetId() const;

                    /**
                     * 设置信息提取结果字段ID
                     * @param _id 信息提取结果字段ID
                     * 
                     */
                    void SetId(const std::string& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取反馈信息
                     * @return Info 反馈信息
                     * 
                     */
                    FeedbackInfo GetInfo() const;

                    /**
                     * 设置反馈信息
                     * @param _info 反馈信息
                     * 
                     */
                    void SetInfo(const FeedbackInfo& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                private:

                    /**
                     * 信息提取结果字段ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 反馈信息
                     */
                    FeedbackInfo m_info;
                    bool m_infoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ESS_V20201111_MODEL_FEEDBACKLIST_H_
