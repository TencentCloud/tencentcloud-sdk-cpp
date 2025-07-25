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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEUVLISTRESPONSE_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEUVLISTRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/rum/v20210622/model/RumUvInfo.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeUvList返回参数结构体
                */
                class DescribeUvListResponse : public AbstractModel
                {
                public:
                    DescribeUvListResponse();
                    ~DescribeUvListResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取uv列表
                     * @return ProjectUvSet uv列表
                     * 
                     */
                    std::vector<RumUvInfo> GetProjectUvSet() const;

                    /**
                     * 判断参数 ProjectUvSet 是否已赋值
                     * @return ProjectUvSet 是否已赋值
                     * 
                     */
                    bool ProjectUvSetHasBeenSet() const;

                private:

                    /**
                     * uv列表
                     */
                    std::vector<RumUvInfo> m_projectUvSet;
                    bool m_projectUvSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBEUVLISTRESPONSE_H_
