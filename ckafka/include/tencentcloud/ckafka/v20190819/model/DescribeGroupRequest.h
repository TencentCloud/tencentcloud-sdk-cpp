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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEGROUPREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEGROUPREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ckafka/v20190819/model/Filter.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DescribeGroup请求参数结构体
                */
                class DescribeGroupRequest : public AbstractModel
                {
                public:
                    DescribeGroupRequest();
                    ~DescribeGroupRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>ckafka集群实例Id</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40835">DescribeInstances</a></p>
                     * @return InstanceId <p>ckafka集群实例Id</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40835">DescribeInstances</a></p>
                     * 
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置<p>ckafka集群实例Id</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40835">DescribeInstances</a></p>
                     * @param _instanceId <p>ckafka集群实例Id</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40835">DescribeInstances</a></p>
                     * 
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     * 
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取<p>搜索关键字</p>
                     * @return SearchWord <p>搜索关键字</p>
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置<p>搜索关键字</p>
                     * @param _searchWord <p>搜索关键字</p>
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                    /**
                     * 获取<p>偏移量</p>
                     * @return Offset <p>偏移量</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>偏移量</p>
                     * @param _offset <p>偏移量</p>
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
                     * 获取<p>最大返回数量</p><p>默认值：20</p>
                     * @return Limit <p>最大返回数量</p><p>默认值：20</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>最大返回数量</p><p>默认值：20</p>
                     * @param _limit <p>最大返回数量</p><p>默认值：20</p>
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
                     * 获取<p>仅支持 GroupState 筛选,   支持的筛选状态有 Empty/Stable  注意：该参数只能在2.8/3.2 版本生效</p>
                     * @return Filters <p>仅支持 GroupState 筛选,   支持的筛选状态有 Empty/Stable  注意：该参数只能在2.8/3.2 版本生效</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>仅支持 GroupState 筛选,   支持的筛选状态有 Empty/Stable  注意：该参数只能在2.8/3.2 版本生效</p>
                     * @param _filters <p>仅支持 GroupState 筛选,   支持的筛选状态有 Empty/Stable  注意：该参数只能在2.8/3.2 版本生效</p>
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
                     * <p>ckafka集群实例Id</p><p>取值参考：<a href="https://cloud.tencent.com/document/api/597/40835">DescribeInstances</a></p>
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * <p>搜索关键字</p>
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * <p>偏移量</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>最大返回数量</p><p>默认值：20</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>仅支持 GroupState 筛选,   支持的筛选状态有 Empty/Stable  注意：该参数只能在2.8/3.2 版本生效</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBEGROUPREQUEST_H_
