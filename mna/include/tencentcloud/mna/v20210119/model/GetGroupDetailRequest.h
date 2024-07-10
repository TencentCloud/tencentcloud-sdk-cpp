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

#ifndef TENCENTCLOUD_MNA_V20210119_MODEL_GETGROUPDETAILREQUEST_H_
#define TENCENTCLOUD_MNA_V20210119_MODEL_GETGROUPDETAILREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mna
    {
        namespace V20210119
        {
            namespace Model
            {
                /**
                * GetGroupDetail请求参数结构体
                */
                class GetGroupDetailRequest : public AbstractModel
                {
                public:
                    GetGroupDetailRequest();
                    ~GetGroupDetailRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取分组ID
                     * @return GroupId 分组ID
                     * 
                     */
                    std::string GetGroupId() const;

                    /**
                     * 设置分组ID
                     * @param _groupId 分组ID
                     * 
                     */
                    void SetGroupId(const std::string& _groupId);

                    /**
                     * 判断参数 GroupId 是否已赋值
                     * @return GroupId 是否已赋值
                     * 
                     */
                    bool GroupIdHasBeenSet() const;

                    /**
                     * 获取每页显示记录数，PageSize、PageNumber值均为-1 时，按照1页无限制条数匹配所有设备	
                     * @return PageSize 每页显示记录数，PageSize、PageNumber值均为-1 时，按照1页无限制条数匹配所有设备	
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页显示记录数，PageSize、PageNumber值均为-1 时，按照1页无限制条数匹配所有设备	
                     * @param _pageSize 每页显示记录数，PageSize、PageNumber值均为-1 时，按照1页无限制条数匹配所有设备	
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
                     * 获取每页显示记录数，PageSize、PageNumber值均为-1 时，按照1页无限制条数匹配所有设备	
                     * @return PageNumber 每页显示记录数，PageSize、PageNumber值均为-1 时，按照1页无限制条数匹配所有设备	
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置每页显示记录数，PageSize、PageNumber值均为-1 时，按照1页无限制条数匹配所有设备	
                     * @param _pageNumber 每页显示记录数，PageSize、PageNumber值均为-1 时，按照1页无限制条数匹配所有设备	
                     * 
                     */
                    void SetPageNumber(const int64_t& _pageNumber);

                    /**
                     * 判断参数 PageNumber 是否已赋值
                     * @return PageNumber 是否已赋值
                     * 
                     */
                    bool PageNumberHasBeenSet() const;

                    /**
                     * 获取搜索关键字
                     * @return KeyWord 搜索关键字
                     * 
                     */
                    std::string GetKeyWord() const;

                    /**
                     * 设置搜索关键字
                     * @param _keyWord 搜索关键字
                     * 
                     */
                    void SetKeyWord(const std::string& _keyWord);

                    /**
                     * 判断参数 KeyWord 是否已赋值
                     * @return KeyWord 是否已赋值
                     * 
                     */
                    bool KeyWordHasBeenSet() const;

                private:

                    /**
                     * 分组ID
                     */
                    std::string m_groupId;
                    bool m_groupIdHasBeenSet;

                    /**
                     * 每页显示记录数，PageSize、PageNumber值均为-1 时，按照1页无限制条数匹配所有设备	
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 每页显示记录数，PageSize、PageNumber值均为-1 时，按照1页无限制条数匹配所有设备	
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 搜索关键字
                     */
                    std::string m_keyWord;
                    bool m_keyWordHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MNA_V20210119_MODEL_GETGROUPDETAILREQUEST_H_
