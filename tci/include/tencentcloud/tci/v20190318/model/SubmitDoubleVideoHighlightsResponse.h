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

#ifndef TENCENTCLOUD_TCI_V20190318_MODEL_SUBMITDOUBLEVIDEOHIGHLIGHTSRESPONSE_H_
#define TENCENTCLOUD_TCI_V20190318_MODEL_SUBMITDOUBLEVIDEOHIGHLIGHTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tci
    {
        namespace V20190318
        {
            namespace Model
            {
                /**
                * SubmitDoubleVideoHighlights返回参数结构体
                */
                class SubmitDoubleVideoHighlightsResponse : public AbstractModel
                {
                public:
                    SubmitDoubleVideoHighlightsResponse();
                    ~SubmitDoubleVideoHighlightsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取视频拆条任务ID，用来唯一标识视频拆条任务。
                     * @return JobId 视频拆条任务ID，用来唯一标识视频拆条任务。
                     * 
                     */
                    int64_t GetJobId() const;

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                    /**
                     * 获取未注册的人员ID列表。若出现此项，代表评估出现了问题，输入的PersonId中有不在库中的人员ID。
                     * @return NotRegistered 未注册的人员ID列表。若出现此项，代表评估出现了问题，输入的PersonId中有不在库中的人员ID。
                     * 
                     */
                    std::vector<std::string> GetNotRegistered() const;

                    /**
                     * 判断参数 NotRegistered 是否已赋值
                     * @return NotRegistered 是否已赋值
                     * 
                     */
                    bool NotRegisteredHasBeenSet() const;

                private:

                    /**
                     * 视频拆条任务ID，用来唯一标识视频拆条任务。
                     */
                    int64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                    /**
                     * 未注册的人员ID列表。若出现此项，代表评估出现了问题，输入的PersonId中有不在库中的人员ID。
                     */
                    std::vector<std::string> m_notRegistered;
                    bool m_notRegisteredHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCI_V20190318_MODEL_SUBMITDOUBLEVIDEOHIGHLIGHTSRESPONSE_H_
