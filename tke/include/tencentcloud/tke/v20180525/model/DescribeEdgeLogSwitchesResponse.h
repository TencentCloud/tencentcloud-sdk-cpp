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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEDGELOGSWITCHESRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEDGELOGSWITCHESRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * DescribeEdgeLogSwitches返回参数结构体
                */
                class DescribeEdgeLogSwitchesResponse : public AbstractModel
                {
                public:
                    DescribeEdgeLogSwitchesResponse();
                    ~DescribeEdgeLogSwitchesResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取集群日志开关集合
                     * @return SwitchSet 集群日志开关集合
                     * 
                     */
                    std::vector<std::string> GetSwitchSet() const;

                    /**
                     * 判断参数 SwitchSet 是否已赋值
                     * @return SwitchSet 是否已赋值
                     * 
                     */
                    bool SwitchSetHasBeenSet() const;

                private:

                    /**
                     * 集群日志开关集合
                     */
                    std::vector<std::string> m_switchSet;
                    bool m_switchSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_DESCRIBEEDGELOGSWITCHESRESPONSE_H_
