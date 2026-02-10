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

#ifndef TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBELOADTASKRESPONSE_H_
#define TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBELOADTASKRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/goosefs/v20220519/model/LoadTaskAttrs.h>


namespace TencentCloud
{
    namespace Goosefs
    {
        namespace V20220519
        {
            namespace Model
            {
                /**
                * DescribeLoadTask返回参数结构体
                */
                class DescribeLoadTaskResponse : public AbstractModel
                {
                public:
                    DescribeLoadTaskResponse();
                    ~DescribeLoadTaskResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取预热任务参数
                     * @return LoadTaskAttrs 预热任务参数
                     * 
                     */
                    LoadTaskAttrs GetLoadTaskAttrs() const;

                    /**
                     * 判断参数 LoadTaskAttrs 是否已赋值
                     * @return LoadTaskAttrs 是否已赋值
                     * 
                     */
                    bool LoadTaskAttrsHasBeenSet() const;

                private:

                    /**
                     * 预热任务参数
                     */
                    LoadTaskAttrs m_loadTaskAttrs;
                    bool m_loadTaskAttrsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GOOSEFS_V20220519_MODEL_DESCRIBELOADTASKRESPONSE_H_
