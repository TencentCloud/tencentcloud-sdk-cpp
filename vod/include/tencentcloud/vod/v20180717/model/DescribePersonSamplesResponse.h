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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEPERSONSAMPLESRESPONSE_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEPERSONSAMPLESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/AiSamplePerson.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribePersonSamples返回参数结构体
                */
                class DescribePersonSamplesResponse : public AbstractModel
                {
                public:
                    DescribePersonSamplesResponse();
                    ~DescribePersonSamplesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取符合条件的记录总数。
                     * @return TotalCount 符合条件的记录总数。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取人物信息。
                     * @return PersonSet 人物信息。
                     * 
                     */
                    std::vector<AiSamplePerson> GetPersonSet() const;

                    /**
                     * 判断参数 PersonSet 是否已赋值
                     * @return PersonSet 是否已赋值
                     * 
                     */
                    bool PersonSetHasBeenSet() const;

                private:

                    /**
                     * 符合条件的记录总数。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 人物信息。
                     */
                    std::vector<AiSamplePerson> m_personSet;
                    bool m_personSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBEPERSONSAMPLESRESPONSE_H_
