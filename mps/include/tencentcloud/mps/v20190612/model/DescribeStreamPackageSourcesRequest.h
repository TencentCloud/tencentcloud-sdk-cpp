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

#ifndef TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMPACKAGESOURCESREQUEST_H_
#define TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMPACKAGESOURCESREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mps
    {
        namespace V20190612
        {
            namespace Model
            {
                /**
                * DescribeStreamPackageSources请求参数结构体
                */
                class DescribeStreamPackageSourcesRequest : public AbstractModel
                {
                public:
                    DescribeStreamPackageSourcesRequest();
                    ~DescribeStreamPackageSourcesRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取页数，取值范围为[1, 1000]。
                     * @return PageNum 页数，取值范围为[1, 1000]。
                     * 
                     */
                    uint64_t GetPageNum() const;

                    /**
                     * 设置页数，取值范围为[1, 1000]。
                     * @param _pageNum 页数，取值范围为[1, 1000]。
                     * 
                     */
                    void SetPageNum(const uint64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取每页大小，取值范围为[1, 1000]。
                     * @return PageSize 每页大小，取值范围为[1, 1000]。
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置每页大小，取值范围为[1, 1000]。
                     * @param _pageSize 每页大小，取值范围为[1, 1000]。
                     * 
                     */
                    void SetPageSize(const uint64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取Location Id，查询该location下面所有source。
                     * @return LocationId Location Id，查询该location下面所有source。
                     * 
                     */
                    std::string GetLocationId() const;

                    /**
                     * 设置Location Id，查询该location下面所有source。
                     * @param _locationId Location Id，查询该location下面所有source。
                     * 
                     */
                    void SetLocationId(const std::string& _locationId);

                    /**
                     * 判断参数 LocationId 是否已赋值
                     * @return LocationId 是否已赋值
                     * 
                     */
                    bool LocationIdHasBeenSet() const;

                    /**
                     * 获取Source的类型，分直播Live和点播VOD。
                     * @return Type Source的类型，分直播Live和点播VOD。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置Source的类型，分直播Live和点播VOD。
                     * @param _type Source的类型，分直播Live和点播VOD。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 页数，取值范围为[1, 1000]。
                     */
                    uint64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * 每页大小，取值范围为[1, 1000]。
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * Location Id，查询该location下面所有source。
                     */
                    std::string m_locationId;
                    bool m_locationIdHasBeenSet;

                    /**
                     * Source的类型，分直播Live和点播VOD。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MPS_V20190612_MODEL_DESCRIBESTREAMPACKAGESOURCESREQUEST_H_
