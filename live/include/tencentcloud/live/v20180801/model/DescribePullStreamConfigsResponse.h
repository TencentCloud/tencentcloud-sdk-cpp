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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPULLSTREAMCONFIGSRESPONSE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPULLSTREAMCONFIGSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/live/v20180801/model/PullStreamConfig.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * DescribePullStreamConfigs返回参数结构体
                */
                class DescribePullStreamConfigsResponse : public AbstractModel
                {
                public:
                    DescribePullStreamConfigsResponse();
                    ~DescribePullStreamConfigsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取拉流配置。
                     * @return PullStreamConfigs 拉流配置。
                     * 
                     */
                    std::vector<PullStreamConfig> GetPullStreamConfigs() const;

                    /**
                     * 判断参数 PullStreamConfigs 是否已赋值
                     * @return PullStreamConfigs 是否已赋值
                     * 
                     */
                    bool PullStreamConfigsHasBeenSet() const;

                private:

                    /**
                     * 拉流配置。
                     */
                    std::vector<PullStreamConfig> m_pullStreamConfigs;
                    bool m_pullStreamConfigsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_DESCRIBEPULLSTREAMCONFIGSRESPONSE_H_
