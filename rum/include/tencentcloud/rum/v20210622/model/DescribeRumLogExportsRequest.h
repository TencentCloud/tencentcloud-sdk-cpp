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

#ifndef TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMLOGEXPORTSREQUEST_H_
#define TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMLOGEXPORTSREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rum
    {
        namespace V20210622
        {
            namespace Model
            {
                /**
                * DescribeRumLogExports请求参数结构体
                */
                class DescribeRumLogExportsRequest : public AbstractModel
                {
                public:
                    DescribeRumLogExportsRequest();
                    ~DescribeRumLogExportsRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取页面大小
                     * @return PageSize 页面大小
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置页面大小
                     * @param _pageSize 页面大小
                     * 
                     */
                    void SetPageSize(const int64_t& _pageSize);

                    /**
                     * 判断参数 PageSize 是否已赋值
                     * @return PageSize 是否已赋值
                     * 
                     */
                    bool PageSizeHasBeenSet() const;

                    /**
                     * 获取页数，第几页
                     * @return PageNum 页数，第几页
                     * 
                     */
                    int64_t GetPageNum() const;

                    /**
                     * 设置页数，第几页
                     * @param _pageNum 页数，第几页
                     * 
                     */
                    void SetPageNum(const int64_t& _pageNum);

                    /**
                     * 判断参数 PageNum 是否已赋值
                     * @return PageNum 是否已赋值
                     * 
                     */
                    bool PageNumHasBeenSet() const;

                    /**
                     * 获取项目ID（必填）
                     * @return ID 项目ID（必填）
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置项目ID（必填）
                     * @param _iD 项目ID（必填）
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                private:

                    /**
                     * 页面大小
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 页数，第几页
                     */
                    int64_t m_pageNum;
                    bool m_pageNumHasBeenSet;

                    /**
                     * 项目ID（必填）
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RUM_V20210622_MODEL_DESCRIBERUMLOGEXPORTSREQUEST_H_
