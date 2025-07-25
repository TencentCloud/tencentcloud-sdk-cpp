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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEANDROIDINSTANCESAPPBLACKLISTREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEANDROIDINSTANCESAPPBLACKLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gs
    {
        namespace V20191118
        {
            namespace Model
            {
                /**
                * DescribeAndroidInstancesAppBlacklist请求参数结构体
                */
                class DescribeAndroidInstancesAppBlacklistRequest : public AbstractModel
                {
                public:
                    DescribeAndroidInstancesAppBlacklistRequest();
                    ~DescribeAndroidInstancesAppBlacklistRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取实例 ID 列表，数量上限 100
                     * @return AndroidInstanceIds 实例 ID 列表，数量上限 100
                     * 
                     */
                    std::vector<std::string> GetAndroidInstanceIds() const;

                    /**
                     * 设置实例 ID 列表，数量上限 100
                     * @param _androidInstanceIds 实例 ID 列表，数量上限 100
                     * 
                     */
                    void SetAndroidInstanceIds(const std::vector<std::string>& _androidInstanceIds);

                    /**
                     * 判断参数 AndroidInstanceIds 是否已赋值
                     * @return AndroidInstanceIds 是否已赋值
                     * 
                     */
                    bool AndroidInstanceIdsHasBeenSet() const;

                private:

                    /**
                     * 实例 ID 列表，数量上限 100
                     */
                    std::vector<std::string> m_androidInstanceIds;
                    bool m_androidInstanceIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEANDROIDINSTANCESAPPBLACKLISTREQUEST_H_
