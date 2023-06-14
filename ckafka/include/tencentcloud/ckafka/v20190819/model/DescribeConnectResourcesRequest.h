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
                     * 获取连接源类型
                     * @return Type 连接源类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置连接源类型
                     * @param _type 连接源类型
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
                     * 获取连接源名称的关键字查询
                     * @return SearchWord 连接源名称的关键字查询
                     * 
                     */
                    std::string GetSearchWord() const;

                    /**
                     * 设置连接源名称的关键字查询
                     * @param _searchWord 连接源名称的关键字查询
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
                     * 获取分页偏移量，默认为0
                     * @return Offset 分页偏移量，默认为0
                     * 
                     */
                    int64_t GetOffset() const;

                    /**
                     * 设置分页偏移量，默认为0
                     * @param _offset 分页偏移量，默认为0
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
                     * 获取返回数量，默认为20，最大值为100
                     * @return Limit 返回数量，默认为20，最大值为100
                     * 
                     */
                    int64_t GetLimit() const;

                    /**
                     * 设置返回数量，默认为20，最大值为100
                     * @param _limit 返回数量，默认为20，最大值为100
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
                     * 获取连接源的关键字查询, 根据地域查询本地域内连接管理列表中的连接(仅支持包含region输入的连接源)
                     * @return ResourceRegion 连接源的关键字查询, 根据地域查询本地域内连接管理列表中的连接(仅支持包含region输入的连接源)
                     * 
                     */
                    std::string GetResourceRegion() const;

                    /**
                     * 设置连接源的关键字查询, 根据地域查询本地域内连接管理列表中的连接(仅支持包含region输入的连接源)
                     * @param _resourceRegion 连接源的关键字查询, 根据地域查询本地域内连接管理列表中的连接(仅支持包含region输入的连接源)
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
                     * 连接源类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 连接源名称的关键字查询
                     */
                    std::string m_searchWord;
                    bool m_searchWordHasBeenSet;

                    /**
                     * 分页偏移量，默认为0
                     */
                    int64_t m_offset;
                    bool m_offsetHasBeenSet;

                    /**
                     * 返回数量，默认为20，最大值为100
                     */
                    int64_t m_limit;
                    bool m_limitHasBeenSet;

                    /**
                     * 连接源的关键字查询, 根据地域查询本地域内连接管理列表中的连接(仅支持包含region输入的连接源)
                     */
                    std::string m_resourceRegion;
                    bool m_resourceRegionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCRIBECONNECTRESOURCESREQUEST_H_
