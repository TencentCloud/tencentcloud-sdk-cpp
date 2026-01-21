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

#ifndef TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEGROUPLIVECODESRESPONSE_H_
#define TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEGROUPLIVECODESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lcic
    {
        namespace V20220817
        {
            namespace Model
            {
                /**
                * DescribeGroupLiveCodes返回参数结构体
                */
                class DescribeGroupLiveCodesResponse : public AbstractModel
                {
                public:
                    DescribeGroupLiveCodesResponse();
                    ~DescribeGroupLiveCodesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>分组直播参加码</p>
                     * @return GroupLiveCodes <p>分组直播参加码</p>
                     * 
                     */
                    std::vector<std::string> GetGroupLiveCodes() const;

                    /**
                     * 判断参数 GroupLiveCodes 是否已赋值
                     * @return GroupLiveCodes 是否已赋值
                     * 
                     */
                    bool GroupLiveCodesHasBeenSet() const;

                private:

                    /**
                     * <p>分组直播参加码</p>
                     */
                    std::vector<std::string> m_groupLiveCodes;
                    bool m_groupLiveCodesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LCIC_V20220817_MODEL_DESCRIBEGROUPLIVECODESRESPONSE_H_
