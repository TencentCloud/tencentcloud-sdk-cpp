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

#ifndef TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEINSTANCESNEWREQUEST_H_
#define TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEINSTANCESNEWREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwch/v20200915/model/SearchTags.h>


namespace TencentCloud
{
    namespace Cdwch
    {
        namespace V20200915
        {
            namespace Model
            {
                /**
                * DescribeInstancesNew请求参数结构体
                */
                class DescribeInstancesNewRequest : public AbstractModel
                {
                public:
                    DescribeInstancesNewRequest();
                    ~DescribeInstancesNewRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取搜索的集群id名称
                     * @return SearchInstanceId 搜索的集群id名称
                     * 
                     */
                    std::string GetSearchInstanceId() const;

                    /**
                     * 设置搜索的集群id名称
                     * @param _searchInstanceId 搜索的集群id名称
                     * 
                     */
                    void SetSearchInstanceId(const std::string& _searchInstanceId);

                    /**
                     * 判断参数 SearchInstanceId 是否已赋值
                     * @return SearchInstanceId 是否已赋值
                     * 
                     */
                    bool SearchInstanceIdHasBeenSet() const;

                    /**
                     * 获取搜索的集群name
                     * @return SearchInstanceName 搜索的集群name
                     * 
                     */
                    std::string GetSearchInstanceName() const;

                    /**
                     * 设置搜索的集群name
                     * @param _searchInstanceName 搜索的集群name
                     * 
                     */
                    void SetSearchInstanceName(const std::string& _searchInstanceName);

                    /**
                     * 判断参数 SearchInstanceName 是否已赋值
                     * @return SearchInstanceName 是否已赋值
                     * 
                     */
                    bool SearchInstanceNameHasBeenSet() const;

                    /**
                     * 获取分页参数，第一页为0，第二页为10
                     * @return Offset 分页参数，第一页为0，第二页为10
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页参数，第一页为0，第二页为10
                     * @param _offset 分页参数，第一页为0，第二页为10
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
                     * 获取分页参数，分页步长，默认为10
                     * @return Limit 分页参数，分页步长，默认为10
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置分页参数，分页步长，默认为10
                     * @param _limit 分页参数，分页步长，默认为10
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
                     * 获取搜索标签列表
                     * @return SearchTags 搜索标签列表
                     * 
                     */
                    std::vector<SearchTags> GetSearchTags() const;

                    /**
                     * 设置搜索标签列表
                     * @param _searchTags 搜索标签列表
                     * 
                     */
                    void SetSearchTags(const std::vector<SearchTags>& _searchTags);

                    /**
                     * 判断参数 SearchTags 是否已赋值
                     * @return SearchTags 是否已赋值
                     * 
                     */
                    bool SearchTagsHasBeenSet() const;

                    /**
                     * 获取信息详细与否
                     * @return IsSimple 信息详细与否
                     * 
                     */
                    bool GetIsSimple() const;

                    /**
                     * 设置信息详细与否
                     * @param _isSimple 信息详细与否
                     * 
                     */
                    void SetIsSimple(const bool& _isSimple);

                    /**
                     * 判断参数 IsSimple 是否已赋值
                     * @return IsSimple 是否已赋值
                     * 
                     */
                    bool IsSimpleHasBeenSet() const;

                    /**
                     * 获取vip列表
                     * @return Vips vip列表
                     * 
                     */
                    std::vector<std::string> GetVips() const;

                    /**
                     * 设置vip列表
                     * @param _vips vip列表
                     * 
                     */
                    void SetVips(const std::vector<std::string>& _vips);

                    /**
                     * 判断参数 Vips 是否已赋值
                     * @return Vips 是否已赋值
                     * 
                     */
                    bool VipsHasBeenSet() const;

                private:

                    /**
                     * 搜索的集群id名称
                     */
                    std::string m_searchInstanceId;
                    bool m_searchInstanceIdHasBeenSet;

                    /**
                     * 搜索的集群name
                     */
                    std::string m_searchInstanceName;
                    bool m_searchInstanceNameHasBeenSet;

                    /**
                     * 分页参数，第一页为0，第二页为10
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 分页参数，分页步长，默认为10
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 搜索标签列表
                     */
                    std::vector<SearchTags> m_searchTags;
                    bool m_searchTagsHasBeenSet;

                    /**
                     * 信息详细与否
                     */
                    bool m_isSimple;
                    bool m_isSimpleHasBeenSet;

                    /**
                     * vip列表
                     */
                    std::vector<std::string> m_vips;
                    bool m_vipsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWCH_V20200915_MODEL_DESCRIBEINSTANCESNEWREQUEST_H_
