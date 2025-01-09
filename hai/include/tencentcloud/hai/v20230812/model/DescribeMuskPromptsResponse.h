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

#ifndef TENCENTCLOUD_HAI_V20230812_MODEL_DESCRIBEMUSKPROMPTSRESPONSE_H_
#define TENCENTCLOUD_HAI_V20230812_MODEL_DESCRIBEMUSKPROMPTSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/hai/v20230812/model/MuskPromptInfo.h>


namespace TencentCloud
{
    namespace Hai
    {
        namespace V20230812
        {
            namespace Model
            {
                /**
                * DescribeMuskPrompts返回参数结构体
                */
                class DescribeMuskPromptsResponse : public AbstractModel
                {
                public:
                    DescribeMuskPromptsResponse();
                    ~DescribeMuskPromptsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取total count
                     * @return TotalCount total count
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
                     * 获取prompt列表详情
                     * @return MuskPromptInfos prompt列表详情
                     * 
                     */
                    std::vector<MuskPromptInfo> GetMuskPromptInfos() const;

                    /**
                     * 判断参数 MuskPromptInfos 是否已赋值
                     * @return MuskPromptInfos 是否已赋值
                     * 
                     */
                    bool MuskPromptInfosHasBeenSet() const;

                private:

                    /**
                     * total count
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * prompt列表详情
                     */
                    std::vector<MuskPromptInfo> m_muskPromptInfos;
                    bool m_muskPromptInfosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_HAI_V20230812_MODEL_DESCRIBEMUSKPROMPTSRESPONSE_H_
