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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEREDISTOPHOTKEYSRESPONSE_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEREDISTOPHOTKEYSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dbbrain/v20210527/model/TopHotKeys.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * DescribeRedisTopHotKeys返回参数结构体
                */
                class DescribeRedisTopHotKeysResponse : public AbstractModel
                {
                public:
                    DescribeRedisTopHotKeysResponse();
                    ~DescribeRedisTopHotKeysResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取热Key分析结果
                     * @return TopHotKeys 热Key分析结果
                     * 
                     */
                    std::vector<TopHotKeys> GetTopHotKeys() const;

                    /**
                     * 判断参数 TopHotKeys 是否已赋值
                     * @return TopHotKeys 是否已赋值
                     * 
                     */
                    bool TopHotKeysHasBeenSet() const;

                private:

                    /**
                     * 热Key分析结果
                     */
                    std::vector<TopHotKeys> m_topHotKeys;
                    bool m_topHotKeysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_DESCRIBEREDISTOPHOTKEYSRESPONSE_H_
