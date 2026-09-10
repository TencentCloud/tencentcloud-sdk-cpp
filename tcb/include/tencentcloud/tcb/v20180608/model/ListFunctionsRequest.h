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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_LISTFUNCTIONSREQUEST_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_LISTFUNCTIONSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/Filter.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * ListFunctions请求参数结构体
                */
                class ListFunctionsRequest : public AbstractModel
                {
                public:
                    ListFunctionsRequest();
                    ~ListFunctionsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>命名空间</p>
                     * @return EnvId <p>命名空间</p>
                     * 
                     */
                    std::string GetEnvId() const;

                    /**
                     * 设置<p>命名空间</p>
                     * @param _envId <p>命名空间</p>
                     * 
                     */
                    void SetEnvId(const std::string& _envId);

                    /**
                     * 判断参数 EnvId 是否已赋值
                     * @return EnvId 是否已赋值
                     * 
                     */
                    bool EnvIdHasBeenSet() const;

                    /**
                     * 获取<p>以升序还是降序的方式返回结果，可选值 ASC 和 DESC</p>
                     * @return Order <p>以升序还是降序的方式返回结果，可选值 ASC 和 DESC</p>
                     * 
                     */
                    std::string GetOrder() const;

                    /**
                     * 设置<p>以升序还是降序的方式返回结果，可选值 ASC 和 DESC</p>
                     * @param _order <p>以升序还是降序的方式返回结果，可选值 ASC 和 DESC</p>
                     * 
                     */
                    void SetOrder(const std::string& _order);

                    /**
                     * 判断参数 Order 是否已赋值
                     * @return Order 是否已赋值
                     * 
                     */
                    bool OrderHasBeenSet() const;

                    /**
                     * 获取<p>根据哪个字段进行返回结果排序,支持以下字段：AddTime, ModTime, FunctionName</p>
                     * @return Orderby <p>根据哪个字段进行返回结果排序,支持以下字段：AddTime, ModTime, FunctionName</p>
                     * 
                     */
                    std::string GetOrderby() const;

                    /**
                     * 设置<p>根据哪个字段进行返回结果排序,支持以下字段：AddTime, ModTime, FunctionName</p>
                     * @param _orderby <p>根据哪个字段进行返回结果排序,支持以下字段：AddTime, ModTime, FunctionName</p>
                     * 
                     */
                    void SetOrderby(const std::string& _orderby);

                    /**
                     * 判断参数 Orderby 是否已赋值
                     * @return Orderby 是否已赋值
                     * 
                     */
                    bool OrderbyHasBeenSet() const;

                    /**
                     * 获取<p>数据偏移量，默认值为 0</p>
                     * @return Offset <p>数据偏移量，默认值为 0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>数据偏移量，默认值为 0</p>
                     * @param _offset <p>数据偏移量，默认值为 0</p>
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
                     * 获取<p>返回数据长度，默认值为 20</p>
                     * @return Limit <p>返回数据长度，默认值为 20</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数据长度，默认值为 20</p>
                     * @param _limit <p>返回数据长度，默认值为 20</p>
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
                     * 获取<p>支持FunctionName模糊匹配</p>
                     * @return SearchKey <p>支持FunctionName模糊匹配</p>
                     * 
                     */
                    std::string GetSearchKey() const;

                    /**
                     * 设置<p>支持FunctionName模糊匹配</p>
                     * @param _searchKey <p>支持FunctionName模糊匹配</p>
                     * 
                     */
                    void SetSearchKey(const std::string& _searchKey);

                    /**
                     * 判断参数 SearchKey 是否已赋值
                     * @return SearchKey 是否已赋值
                     * 
                     */
                    bool SearchKeyHasBeenSet() const;

                    /**
                     * 获取<p>函数描述，支持模糊搜索</p>
                     * @return Description <p>函数描述，支持模糊搜索</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>函数描述，支持模糊搜索</p>
                     * @param _description <p>函数描述，支持模糊搜索</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>过滤特定属性或者有特定标签的函数。- 传值方式key-value 进行传值 例如：&quot;Filters&quot;: [{ &quot;Name&quot;: &quot;Status&quot;, &quot;Values&quot;: [&quot;CreateFailed&quot;,&quot;Creating&quot;]}, {&quot;Name&quot;: &quot;Type&quot;,&quot;Values&quot;: [&quot;HTTP&quot;]}]上述条件的函数是，函数状态为创建失败或者创建中，且函数类型为 HTTP 函数如果通过标签进行过滤：- tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。示例值：&quot;Filters&quot;: [{&quot;Name&quot;:&quot;tag-dmtest&quot;,&quot;Values&quot;:[&quot;dmtest&quot;]}]入参限制：1.每次请求的Filters的上限为10，Filter.Values的上限为5。2.[VpcId&#39;, &#39;SubnetId&#39;, &#39;ClsTopicId&#39;, &#39;ClsLogsetId&#39;, &#39;Role&#39;, &#39;CfsId&#39;, &#39;CfsMountInsId&#39;, &#39;Eip&#39;] 过滤的Name 为这些属性时， values 只能传一个值3.[&#39;Status&#39;, &#39;Runtime&#39;, &#39;Type&#39;, &#39;PublicNetStatus&#39;, &#39;AsyncRunEnable&#39;, &#39;TraceEnable&#39;, &#39;Stamp&#39;] 过滤的Name 为这些属性时 ，values 可以传多个值</p>
                     * @return Filters <p>过滤特定属性或者有特定标签的函数。- 传值方式key-value 进行传值 例如：&quot;Filters&quot;: [{ &quot;Name&quot;: &quot;Status&quot;, &quot;Values&quot;: [&quot;CreateFailed&quot;,&quot;Creating&quot;]}, {&quot;Name&quot;: &quot;Type&quot;,&quot;Values&quot;: [&quot;HTTP&quot;]}]上述条件的函数是，函数状态为创建失败或者创建中，且函数类型为 HTTP 函数如果通过标签进行过滤：- tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。示例值：&quot;Filters&quot;: [{&quot;Name&quot;:&quot;tag-dmtest&quot;,&quot;Values&quot;:[&quot;dmtest&quot;]}]入参限制：1.每次请求的Filters的上限为10，Filter.Values的上限为5。2.[VpcId&#39;, &#39;SubnetId&#39;, &#39;ClsTopicId&#39;, &#39;ClsLogsetId&#39;, &#39;Role&#39;, &#39;CfsId&#39;, &#39;CfsMountInsId&#39;, &#39;Eip&#39;] 过滤的Name 为这些属性时， values 只能传一个值3.[&#39;Status&#39;, &#39;Runtime&#39;, &#39;Type&#39;, &#39;PublicNetStatus&#39;, &#39;AsyncRunEnable&#39;, &#39;TraceEnable&#39;, &#39;Stamp&#39;] 过滤的Name 为这些属性时 ，values 可以传多个值</p>
                     * 
                     */
                    std::vector<Filter> GetFilters() const;

                    /**
                     * 设置<p>过滤特定属性或者有特定标签的函数。- 传值方式key-value 进行传值 例如：&quot;Filters&quot;: [{ &quot;Name&quot;: &quot;Status&quot;, &quot;Values&quot;: [&quot;CreateFailed&quot;,&quot;Creating&quot;]}, {&quot;Name&quot;: &quot;Type&quot;,&quot;Values&quot;: [&quot;HTTP&quot;]}]上述条件的函数是，函数状态为创建失败或者创建中，且函数类型为 HTTP 函数如果通过标签进行过滤：- tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。示例值：&quot;Filters&quot;: [{&quot;Name&quot;:&quot;tag-dmtest&quot;,&quot;Values&quot;:[&quot;dmtest&quot;]}]入参限制：1.每次请求的Filters的上限为10，Filter.Values的上限为5。2.[VpcId&#39;, &#39;SubnetId&#39;, &#39;ClsTopicId&#39;, &#39;ClsLogsetId&#39;, &#39;Role&#39;, &#39;CfsId&#39;, &#39;CfsMountInsId&#39;, &#39;Eip&#39;] 过滤的Name 为这些属性时， values 只能传一个值3.[&#39;Status&#39;, &#39;Runtime&#39;, &#39;Type&#39;, &#39;PublicNetStatus&#39;, &#39;AsyncRunEnable&#39;, &#39;TraceEnable&#39;, &#39;Stamp&#39;] 过滤的Name 为这些属性时 ，values 可以传多个值</p>
                     * @param _filters <p>过滤特定属性或者有特定标签的函数。- 传值方式key-value 进行传值 例如：&quot;Filters&quot;: [{ &quot;Name&quot;: &quot;Status&quot;, &quot;Values&quot;: [&quot;CreateFailed&quot;,&quot;Creating&quot;]}, {&quot;Name&quot;: &quot;Type&quot;,&quot;Values&quot;: [&quot;HTTP&quot;]}]上述条件的函数是，函数状态为创建失败或者创建中，且函数类型为 HTTP 函数如果通过标签进行过滤：- tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。示例值：&quot;Filters&quot;: [{&quot;Name&quot;:&quot;tag-dmtest&quot;,&quot;Values&quot;:[&quot;dmtest&quot;]}]入参限制：1.每次请求的Filters的上限为10，Filter.Values的上限为5。2.[VpcId&#39;, &#39;SubnetId&#39;, &#39;ClsTopicId&#39;, &#39;ClsLogsetId&#39;, &#39;Role&#39;, &#39;CfsId&#39;, &#39;CfsMountInsId&#39;, &#39;Eip&#39;] 过滤的Name 为这些属性时， values 只能传一个值3.[&#39;Status&#39;, &#39;Runtime&#39;, &#39;Type&#39;, &#39;PublicNetStatus&#39;, &#39;AsyncRunEnable&#39;, &#39;TraceEnable&#39;, &#39;Stamp&#39;] 过滤的Name 为这些属性时 ，values 可以传多个值</p>
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
                     * <p>命名空间</p>
                     */
                    std::string m_envId;
                    bool m_envIdHasBeenSet;

                    /**
                     * <p>以升序还是降序的方式返回结果，可选值 ASC 和 DESC</p>
                     */
                    std::string m_order;
                    bool m_orderHasBeenSet;

                    /**
                     * <p>根据哪个字段进行返回结果排序,支持以下字段：AddTime, ModTime, FunctionName</p>
                     */
                    std::string m_orderby;
                    bool m_orderbyHasBeenSet;

                    /**
                     * <p>数据偏移量，默认值为 0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数据长度，默认值为 20</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>支持FunctionName模糊匹配</p>
                     */
                    std::string m_searchKey;
                    bool m_searchKeyHasBeenSet;

                    /**
                     * <p>函数描述，支持模糊搜索</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>过滤特定属性或者有特定标签的函数。- 传值方式key-value 进行传值 例如：&quot;Filters&quot;: [{ &quot;Name&quot;: &quot;Status&quot;, &quot;Values&quot;: [&quot;CreateFailed&quot;,&quot;Creating&quot;]}, {&quot;Name&quot;: &quot;Type&quot;,&quot;Values&quot;: [&quot;HTTP&quot;]}]上述条件的函数是，函数状态为创建失败或者创建中，且函数类型为 HTTP 函数如果通过标签进行过滤：- tag:tag-key - String - 是否必填：否 - （过滤条件）按照标签键值对进行过滤。 tag-key使用具体的标签键进行替换。示例值：&quot;Filters&quot;: [{&quot;Name&quot;:&quot;tag-dmtest&quot;,&quot;Values&quot;:[&quot;dmtest&quot;]}]入参限制：1.每次请求的Filters的上限为10，Filter.Values的上限为5。2.[VpcId&#39;, &#39;SubnetId&#39;, &#39;ClsTopicId&#39;, &#39;ClsLogsetId&#39;, &#39;Role&#39;, &#39;CfsId&#39;, &#39;CfsMountInsId&#39;, &#39;Eip&#39;] 过滤的Name 为这些属性时， values 只能传一个值3.[&#39;Status&#39;, &#39;Runtime&#39;, &#39;Type&#39;, &#39;PublicNetStatus&#39;, &#39;AsyncRunEnable&#39;, &#39;TraceEnable&#39;, &#39;Stamp&#39;] 过滤的Name 为这些属性时 ，values 可以传多个值</p>
                     */
                    std::vector<Filter> m_filters;
                    bool m_filtersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_LISTFUNCTIONSREQUEST_H_
