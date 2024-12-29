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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBECASTERTRANSITIONTYPESRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBECASTERTRANSITIONTYPESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/TransitionTypeInfo.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribeCasterTransitionTypes返回参数结构体
                */
                class DescribeCasterTransitionTypesResponse : public AbstractModel
                {
                public:
                    DescribeCasterTransitionTypesResponse();
                    ~DescribeCasterTransitionTypesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取转场信息列表
                     * @return TransitionTypes 转场信息列表
                     * 
                     */
                    std::vector<TransitionTypeInfo> GetTransitionTypes() const;

                    /**
                     * 判断参数 TransitionTypes 是否已赋值
                     * @return TransitionTypes 是否已赋值
                     * 
                     */
                    bool TransitionTypesHasBeenSet() const;

                private:

                    /**
                     * 转场信息列表
                     */
                    std::vector<TransitionTypeInfo> m_transitionTypes;
                    bool m_transitionTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBECASTERTRANSITIONTYPESRESPONSE_H_
