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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESUBAPPIDSREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESUBAPPIDSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ResourceTag.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * DescribeSubAppIds请求参数结构体
                */
                class DescribeSubAppIdsRequest : public AbstractModel
                {
                public:
                    DescribeSubAppIdsRequest();
                    ~DescribeSubAppIdsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用名称。
                     * @return Name 应用名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置应用名称。
                     * @param _name 应用名称。
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取标签信息，查询指定标签的应用列表。
                     * @return Tags 标签信息，查询指定标签的应用列表。
                     * 
                     */
                    std::vector<ResourceTag> GetTags() const;

                    /**
                     * 设置标签信息，查询指定标签的应用列表。
                     * @param _tags 标签信息，查询指定标签的应用列表。
                     * 
                     */
                    void SetTags(const std::vector<ResourceTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                    /**
                     * 获取分页拉取的起始偏移量。默认值：0。
                     * @return Offset 分页拉取的起始偏移量。默认值：0。
                     * 
                     */
                    uint64_t GetOffset() const;

                    /**
                     * 设置分页拉取的起始偏移量。默认值：0。
                     * @param _offset 分页拉取的起始偏移量。默认值：0。
                     * 
                     */
                    void SetOffset(const uint64_t& _offset);

                    /**
                     * 判断参数 Offset 是否已赋值
                     * @return Offset 是否已赋值
                     * 
                     */
                    bool OffsetHasBeenSet() const;

                    /**
                     * 获取分页拉取的最大返回结果数。默认值：200；最大值：200。
                     * @return Limit 分页拉取的最大返回结果数。默认值：200；最大值：200。
                     * 
                     */
                    uint64_t GetLimit() const;

                    /**
                     * 设置分页拉取的最大返回结果数。默认值：200；最大值：200。
                     * @param _limit 分页拉取的最大返回结果数。默认值：200；最大值：200。
                     * 
                     */
                    void SetLimit(const uint64_t& _limit);

                    /**
                     * 判断参数 Limit 是否已赋值
                     * @return Limit 是否已赋值
                     * 
                     */
                    bool LimitHasBeenSet() const;

                private:

                    /**
                     * 应用名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 标签信息，查询指定标签的应用列表。
                     */
                    std::vector<ResourceTag> m_tags;
                    bool m_tagsHasBeenSet;

                    /**
                     * 分页拉取的起始偏移量。默认值：0。
                     */
                    uint64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页拉取的最大返回结果数。默认值：200；最大值：200。
                     */
                    uint64_t m_limit;
                    bool m_limitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_DESCRIBESUBAPPIDSREQUEST_H_
