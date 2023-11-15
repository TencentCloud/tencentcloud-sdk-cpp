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

#ifndef TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEINTERFACELISTREQUEST_H_
#define TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEINTERFACELISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Weilingwith
    {
        namespace V20230427
        {
            namespace Model
            {
                /**
                * DescribeInterfaceList请求参数结构体
                */
                class DescribeInterfaceListRequest : public AbstractModel
                {
                public:
                    DescribeInterfaceListRequest();
                    ~DescribeInterfaceListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取应用token
                     * @return ApplicationToken 应用token
                     * 
                     */
                    std::string GetApplicationToken() const;

                    /**
                     * 设置应用token
                     * @param _applicationToken 应用token
                     * 
                     */
                    void SetApplicationToken(const std::string& _applicationToken);

                    /**
                     * 判断参数 ApplicationToken 是否已赋值
                     * @return ApplicationToken 是否已赋值
                     * 
                     */
                    bool ApplicationTokenHasBeenSet() const;

                    /**
                     * 获取请求页号
                     * @return PageNumber 请求页号
                     * 
                     */
                    uint64_t GetPageNumber() const;

                    /**
                     * 设置请求页号
                     * @param _pageNumber 请求页号
                     * 
                     */
                    void SetPageNumber(const uint64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取请求页容量，默认全量返回
                     * @return PageSize 请求页容量，默认全量返回
                     * 
                     */
                    uint64_t GetPageSize() const;

                    /**
                     * 设置请求页容量，默认全量返回
                     * @param _pageSize 请求页容量，默认全量返回
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
                     * 获取查询关键字
                     * @return Keyword 查询关键字
                     * 
                     */
                    std::string GetKeyword() const;

                    /**
                     * 设置查询关键字
                     * @param _keyword 查询关键字
                     * 
                     */
                    void SetKeyword(const std::string& _keyword);

                    /**
                     * 判断参数 Keyword 是否已赋值
                     * @return Keyword 是否已赋值
                     * 
                     */
                    bool KeywordHasBeenSet() const;

                    /**
                     * 获取接口方式 1.http 2消息通知服务
                     * @return Style 接口方式 1.http 2消息通知服务
                     * 
                     */
                    std::vector<uint64_t> GetStyle() const;

                    /**
                     * 设置接口方式 1.http 2消息通知服务
                     * @param _style 接口方式 1.http 2消息通知服务
                     * 
                     */
                    void SetStyle(const std::vector<uint64_t>& _style);

                    /**
                     * 判断参数 Style 是否已赋值
                     * @return Style 是否已赋值
                     * 
                     */
                    bool StyleHasBeenSet() const;

                    /**
                     * 获取接口分类0. 其他服务 1. IOT服务 2. 空间服务 3.微应用服务 4.场景服务 5.AI算法服务 6.任务算法服务 7.第三方服务 8.3DTiles服务
                     * @return Type 接口分类0. 其他服务 1. IOT服务 2. 空间服务 3.微应用服务 4.场景服务 5.AI算法服务 6.任务算法服务 7.第三方服务 8.3DTiles服务
                     * 
                     */
                    std::vector<uint64_t> GetType() const;

                    /**
                     * 设置接口分类0. 其他服务 1. IOT服务 2. 空间服务 3.微应用服务 4.场景服务 5.AI算法服务 6.任务算法服务 7.第三方服务 8.3DTiles服务
                     * @param _type 接口分类0. 其他服务 1. IOT服务 2. 空间服务 3.微应用服务 4.场景服务 5.AI算法服务 6.任务算法服务 7.第三方服务 8.3DTiles服务
                     * 
                     */
                    void SetType(const std::vector<uint64_t>& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 应用token
                     */
                    std::string m_applicationToken;
                    bool m_applicationTokenHasBeenSet;

                    /**
                     * 请求页号
                     */
                    uint64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 请求页容量，默认全量返回
                     */
                    uint64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 查询关键字
                     */
                    std::string m_keyword;
                    bool m_keywordHasBeenSet;

                    /**
                     * 接口方式 1.http 2消息通知服务
                     */
                    std::vector<uint64_t> m_style;
                    bool m_styleHasBeenSet;

                    /**
                     * 接口分类0. 其他服务 1. IOT服务 2. 空间服务 3.微应用服务 4.场景服务 5.AI算法服务 6.任务算法服务 7.第三方服务 8.3DTiles服务
                     */
                    std::vector<uint64_t> m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEILINGWITH_V20230427_MODEL_DESCRIBEINTERFACELISTREQUEST_H_
