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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECONNECTRESOURCESREQUEST_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECONNECTRESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * DescribeConnectResources请求参数结构体
                */
                class DescribeConnectResourcesRequest : public AbstractModel
                {
                public:
                    DescribeConnectResourcesRequest();
                    ~DescribeConnectResourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>连接源类型</p>
                     * @return Type <p>连接源类型</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>连接源类型</p>
                     * @param _type <p>连接源类型</p>
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
                     * 获取<p>连接源名称的关键字查询,支持模糊匹配</p>
                     * @return SearchWord <p>连接源名称的关键字查询,支持模糊匹配</p>
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置<p>连接源名称的关键字查询,支持模糊匹配</p>
                     * @param _searchWord <p>连接源名称的关键字查询,支持模糊匹配</p>
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
                     * 获取<p>分页偏移量，默认为0</p>
                     * @return Offset <p>分页偏移量，默认为0</p>
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置<p>分页偏移量，默认为0</p>
                     * @param _offset <p>分页偏移量，默认为0</p>
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
                     * 获取<p>返回数量，默认为20，最大值为1000 (超过1000,则限制为1000)</p>
                     * @return Limit <p>返回数量，默认为20，最大值为1000 (超过1000,则限制为1000)</p>
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置<p>返回数量，默认为20，最大值为1000 (超过1000,则限制为1000)</p>
                     * @param _limit <p>返回数量，默认为20，最大值为1000 (超过1000,则限制为1000)</p>
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
                     * 获取<p>连接源的关键字查询, 根据地域查询本地域内连接管理列表中的连接(仅支持包含region输入的连接源)</p>
                     * @return ResourceRegion <p>连接源的关键字查询, 根据地域查询本地域内连接管理列表中的连接(仅支持包含region输入的连接源)</p>
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置<p>连接源的关键字查询, 根据地域查询本地域内连接管理列表中的连接(仅支持包含region输入的连接源)</p>
                     * @param _resourceRegion <p>连接源的关键字查询, 根据地域查询本地域内连接管理列表中的连接(仅支持包含region输入的连接源)</p>
                     * 
                     */
                    void SetResourceRegion(const std::string& _resourceRegion);

                    /**
                     * 判断参数 ResourceRegion 是否已赋值
                     * @return ResourceRegion 是否已赋值
                     * 
                     */
                    bool ResourceRegionHasBeenSet() const;

                private:

                    /**
                     * <p>连接源类型</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>连接源名称的关键字查询,支持模糊匹配</p>
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * <p>分页偏移量，默认为0</p>
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * <p>返回数量，默认为20，最大值为1000 (超过1000,则限制为1000)</p>
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * <p>连接源的关键字查询, 根据地域查询本地域内连接管理列表中的连接(仅支持包含region输入的连接源)</p>
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECONNECTRESOURCESREQUEST_H_
