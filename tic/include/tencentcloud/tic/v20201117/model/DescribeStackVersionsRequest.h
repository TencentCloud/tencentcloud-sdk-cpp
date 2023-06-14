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

#ifndef TENCENTCLOUD_TIC_V20201117_MODEL_DESCRIBESTACKVERSIONSREQUEST_H_
#define TENCENTCLOUD_TIC_V20201117_MODEL_DESCRIBESTACKVERSIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tic/v20201117/model/Filter.h>


namespace TencentCloud
{
    namespace Tic
    {
        namespace V20201117
        {
            namespace Model
            {
                /**
                * DescribeStackVersions请求参数结构体
                */
                class DescribeStackVersionsRequest : public AbstractModel
                {
                public:
                    DescribeStackVersionsRequest();
                    ~DescribeStackVersionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取按照⼀个或者多个版本ID查询
                     * @return VersionIds 按照⼀个或者多个版本ID查询
                     * 
                     */
                    std::vector<std::string> GetVersionIds() const;

                    /**
                     * 设置按照⼀个或者多个版本ID查询
                     * @param _versionIds 按照⼀个或者多个版本ID查询
                     * 
                     */
                    void SetVersionIds(const std::vector<std::string>& _versionIds);

                    /**
                     * 判断参数 VersionIds 是否已赋值
                     * @return VersionIds 是否已赋值
                     * 
                     */
                    bool VersionIdsHasBeenSet() const;

                    /**
                     * 获取偏移量，默认为0。关于Offset的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节
                     * @return Offset 偏移量，默认为0。关于Offset的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置偏移量，默认为0。关于Offset的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节
                     * @param _offset 偏移量，默认为0。关于Offset的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节
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
                     * 获取返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节
                     * @return Limit 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节
                     * @param _limit 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节
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
                     * 获取<li>**Name**</li>
按照【**版本名称**】进行过滤
类型：string

<li>**Status**</li>
按照【**版本状态**】过滤，形如`VERSION_EDITING`，`PLAN_IN_PROGRESS`等
类型：string

<li>**StackId**</li>
按照版本所属的【**资源栈ID**】进行过滤，形如`stk-xxxxxx`
类型：string
                     * @return Filters <li>**Name**</li>
按照【**版本名称**】进行过滤
类型：string

<li>**Status**</li>
按照【**版本状态**】过滤，形如`VERSION_EDITING`，`PLAN_IN_PROGRESS`等
类型：string

<li>**StackId**</li>
按照版本所属的【**资源栈ID**】进行过滤，形如`stk-xxxxxx`
类型：string
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<li>**Name**</li>
按照【**版本名称**】进行过滤
类型：string

<li>**Status**</li>
按照【**版本状态**】过滤，形如`VERSION_EDITING`，`PLAN_IN_PROGRESS`等
类型：string

<li>**StackId**</li>
按照版本所属的【**资源栈ID**】进行过滤，形如`stk-xxxxxx`
类型：string
                     * @param _filters <li>**Name**</li>
按照【**版本名称**】进行过滤
类型：string

<li>**Status**</li>
按照【**版本状态**】过滤，形如`VERSION_EDITING`，`PLAN_IN_PROGRESS`等
类型：string

<li>**StackId**</li>
按照版本所属的【**资源栈ID**】进行过滤，形如`stk-xxxxxx`
类型：string
                     * 
                     */
                    void SetFilters(const std::vector<Filter>& _filters);

                    /**
                     * 判断参数 Filters 是否已赋值
                     * @return Filters 是否已赋值
                     * 
                     */
                    bool FiltersHasBeenSet() const;

                private:

                    /**
                     * 按照⼀个或者多个版本ID查询
                     */
                    std::vector<std::string> m_versionIds;
                    bool m_versionIdsHasBeenSet;

                    /**
                     * 偏移量，默认为0。关于Offset的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100。关于Limit的更进一步介绍请参考 API [简介](https://cloud.tencent.com/document/api/213/15688)中的相关小节
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <li>**Name**</li>
按照【**版本名称**】进行过滤
类型：string

<li>**Status**</li>
按照【**版本状态**】过滤，形如`VERSION_EDITING`，`PLAN_IN_PROGRESS`等
类型：string

<li>**StackId**</li>
按照版本所属的【**资源栈ID**】进行过滤，形如`stk-xxxxxx`
类型：string
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TIC_V20201117_MODEL_DESCRIBESTACKVERSIONSREQUEST_H_
