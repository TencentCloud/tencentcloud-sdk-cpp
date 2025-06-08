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

#ifndef TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEANDROIDINSTANCESBYAPPSREQUEST_H_
#define TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEANDROIDINSTANCESBYAPPSREQUEST_H_

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
                * DescribeAndroidInstancesByApps请求参数结构体
                */
                class DescribeAndroidInstancesByAppsRequest : public AbstractModel
                {
                public:
                    DescribeAndroidInstancesByAppsRequest();
                    ~DescribeAndroidInstancesByAppsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取偏移量，默认为 0	
                     * @return Offset 偏移量，默认为 0	
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为 0	
                     * @param _offset 偏移量，默认为 0	
                     * 
                     */
                    void SetOffset(const int64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取限制量，默认为20，最大值为100	
                     * @return Limit 限制量，默认为20，最大值为100	
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置限制量，默认为20，最大值为100	
                     * @param _limit 限制量，默认为20，最大值为100	
                     * 
                     */
                    void SetLimit(const int64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                    /**
                     * 获取应用 ID 列表。通过应用 ID 做集合查询
                     * @return AndroidAppIds 应用 ID 列表。通过应用 ID 做集合查询
                     * 
                     */
                    std::vector<std::string> GetAndroidAppIds() const;

                    /**
                     * 设置应用 ID 列表。通过应用 ID 做集合查询
                     * @param _androidAppIds 应用 ID 列表。通过应用 ID 做集合查询
                     * 
                     */
                    void SetAndroidAppIds(const std::vector<std::string>& _androidAppIds);

                    /**
                     * 判断参数 AndroidAppIds 是否已赋值
                     * @return AndroidAppIds 是否已赋值
                     * 
                     */
                    bool AndroidAppIdsHasBeenSet() const;

                private:

                    /**
                     * 偏移量，默认为 0	
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 限制量，默认为20，最大值为100	
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 应用 ID 列表。通过应用 ID 做集合查询
                     */
                    std::vector<std::string> m_androidAppIds;
                    bool m_androidAppIdsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GS_V20191118_MODEL_DESCRIBEANDROIDINSTANCESBYAPPSREQUEST_H_
