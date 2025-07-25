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

#ifndef TENCENTCLOUD_TIIA_V20190529_MODEL_DESCRIBEGROUPSREQUEST_H_
#define TENCENTCLOUD_TIIA_V20190529_MODEL_DESCRIBEGROUPSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tiia
    {
        namespace V20190529
        {
            namespace Model
            {
                /**
                * DescribeGroups请求参数结构体
                */
                class DescribeGroupsRequest : public AbstractModel
                {
                public:
                    DescribeGroupsRequest();
                    ~DescribeGroupsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取起始序号，默认值为0。
                     * @return Offset 起始序号，默认值为0。
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置起始序号，默认值为0。
                     * @param _offset 起始序号，默认值为0。
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
                     * 获取返回数量，默认值为10，最大值为100。
                     * @return Limit 返回数量，默认值为10，最大值为100。
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认值为10，最大值为100。
                     * @param _limit 返回数量，默认值为10，最大值为100。
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
                     * 获取图库ID，如果不为空，则返回指定库信息。
                     * @return GroupId 图库ID，如果不为空，则返回指定库信息。
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置图库ID，如果不为空，则返回指定库信息。
                     * @param _groupId 图库ID，如果不为空，则返回指定库信息。
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                private:

                    /**
                     * 起始序号，默认值为0。
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认值为10，最大值为100。
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 图库ID，如果不为空，则返回指定库信息。
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIIA_V20190529_MODEL_DESCRIBEGROUPSREQUEST_H_
