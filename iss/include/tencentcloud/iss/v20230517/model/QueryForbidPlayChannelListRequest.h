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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_QUERYFORBIDPLAYCHANNELLISTREQUEST_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_QUERYFORBIDPLAYCHANNELLISTREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * QueryForbidPlayChannelList请求参数结构体
                */
                class QueryForbidPlayChannelListRequest : public AbstractModel
                {
                public:
                    QueryForbidPlayChannelListRequest();
                    ~QueryForbidPlayChannelListRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取子用户uin，也可以是主用户的uin
                     * @return UserId 子用户uin，也可以是主用户的uin
                     * 
                     */
                    std::string GetUserId() const;

                    /**
                     * 设置子用户uin，也可以是主用户的uin
                     * @param _userId 子用户uin，也可以是主用户的uin
                     * 
                     */
                    void SetUserId(const std::string& _userId);

                    /**
                     * 判断参数 UserId 是否已赋值
                     * @return UserId 是否已赋值
                     * 
                     */
                    bool UserIdHasBeenSet() const;

                    /**
                     * 获取每页最大数量，最大为200，超过按照200返回
                     * @return PageSize 每页最大数量，最大为200，超过按照200返回
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页最大数量，最大为200，超过按照200返回
                     * @param _pageSize 每页最大数量，最大为200，超过按照200返回
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
                     * 获取第几页
                     * @return PageNumber 第几页
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置第几页
                     * @param _pageNumber 第几页
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                private:

                    /**
                     * 子用户uin，也可以是主用户的uin
                     */
                    std::string m_userId;
                    bool m_userIdHasBeenSet;

                    /**
                     * 每页最大数量，最大为200，超过按照200返回
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 第几页
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_QUERYFORBIDPLAYCHANNELLISTREQUEST_H_
