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

#ifndef TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEUNUSUALEVENTRESPONSE_H_
#define TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEUNUSUALEVENTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/trtc/v20190722/model/AbnormalExperience.h>


namespace TencentCloud
{
    namespace Trtc
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeUnusualEvent返回参数结构体
                */
                class DescribeUnusualEventResponse : public AbstractModel
                {
                public:
                    DescribeUnusualEventResponse();
                    ~DescribeUnusualEventResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的数据总条数
范围：[0，20]
                     * @return Total 返回的数据总条数
范围：[0，20]
                     * 
                     */
                    uint64_t GetTotal() const;

                    /**
                     * 判断参数 Total 是否已赋值
                     * @return Total 是否已赋值
                     * 
                     */
                    bool TotalHasBeenSet() const;

                    /**
                     * 获取异常体验列表
                     * @return AbnormalExperienceList 异常体验列表
                     * 
                     */
                    std::vector<AbnormalExperience> GetAbnormalExperienceList() const;

                    /**
                     * 判断参数 AbnormalExperienceList 是否已赋值
                     * @return AbnormalExperienceList 是否已赋值
                     * 
                     */
                    bool AbnormalExperienceListHasBeenSet() const;

                private:

                    /**
                     * 返回的数据总条数
范围：[0，20]
                     */
                    uint64_t m_total;
                    bool m_totalHasBeenSet;

                    /**
                     * 异常体验列表
                     */
                    std::vector<AbnormalExperience> m_abnormalExperienceList;
                    bool m_abnormalExperienceListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TRTC_V20190722_MODEL_DESCRIBEUNUSUALEVENTRESPONSE_H_
