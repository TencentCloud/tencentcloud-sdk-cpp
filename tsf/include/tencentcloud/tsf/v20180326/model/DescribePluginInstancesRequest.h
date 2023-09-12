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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEPLUGININSTANCESREQUEST_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEPLUGININSTANCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * DescribePluginInstances请求参数结构体
                */
                class DescribePluginInstancesRequest : public AbstractModel
                {
                public:
                    DescribePluginInstancesRequest();
                    ~DescribePluginInstancesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分组或者API的ID
                     * @return ScopeValue 分组或者API的ID
                     * 
                     */
                    std::string GetScopeValue() const;

                    /**
                     * 设置分组或者API的ID
                     * @param _scopeValue 分组或者API的ID
                     * 
                     */
                    void SetScopeValue(const std::string& _scopeValue);

                    /**
                     * 判断参数 ScopeValue 是否已赋值
                     * @return ScopeValue 是否已赋值
                     * 
                     */
                    bool ScopeValueHasBeenSet() const;

                    /**
                     * 获取翻页偏移量
                     * @return Offset 翻页偏移量
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置翻页偏移量
                     * @param _offset 翻页偏移量
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
                     * 获取每页展示的条数
                     * @return Limit 每页展示的条数
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置每页展示的条数
                     * @param _limit 每页展示的条数
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
                     * 获取绑定: true; 未绑定: false
                     * @return Bound 绑定: true; 未绑定: false
                     * 
                     */
                    bool GetBound() const;

                    /**
                     * 设置绑定: true; 未绑定: false
                     * @param _bound 绑定: true; 未绑定: false
                     * 
                     */
                    void SetBound(const bool& _bound);

                    /**
                     * 判断参数 Bound 是否已赋值
                     * @return Bound 是否已赋值
                     * 
                     */
                    bool BoundHasBeenSet() const;

                    /**
                     * 获取插件类型
                     * @return Type 插件类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置插件类型
                     * @param _type 插件类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取搜索关键字
                     * @return SearchWord 搜索关键字
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置搜索关键字
                     * @param _searchWord 搜索关键字
                     * 
                     */
                    void SetSearchWord(const std::string& _searchWord);

                    /**
                     * 判断参数 SearchWord 是否已赋值
                     * @return SearchWord 是否已赋值
                     * 
                     */
                    bool SearchWordHasBeenSet() const;

                private:

                    /**
                     * 分组或者API的ID
                     */
                    std::string m_scopeValue;
                    bool m_scopeValueHasBeenSet;

                    /**
                     * 翻页偏移量
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 每页展示的条数
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 绑定: true; 未绑定: false
                     */
                    bool m_bound;
                    bool m_boundHasBeenSet;

                    /**
                     * 插件类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 搜索关键字
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_DESCRIBEPLUGININSTANCESREQUEST_H_
