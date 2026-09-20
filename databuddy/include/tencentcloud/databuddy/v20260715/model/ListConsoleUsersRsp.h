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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTCONSOLEUSERSRSP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTCONSOLEUSERSRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/ConsoleUserInfo.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 查询控制台用户列表响应
                */
                class ListConsoleUsersRsp : public AbstractModel
                {
                public:
                    ListConsoleUsersRsp();
                    ~ListConsoleUsersRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取用户列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Items 用户列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ConsoleUserInfo> GetItems() const;

                    /**
                     * 设置用户列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _items 用户列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetItems(const std::vector<ConsoleUserInfo>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取当前页码
                     * @return PageNumber 当前页码
                     * 
                     */
                    int64_t GetPageNumber() const;

                    /**
                     * 设置当前页码
                     * @param _pageNumber 当前页码
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
                     * 获取每页大小
                     * @return PageSize 每页大小
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置每页大小
                     * @param _pageSize 每页大小
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
                     * 获取总记录数
                     * @return TotalCount 总记录数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置总记录数
                     * @param _totalCount 总记录数
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取总页数
                     * @return TotalPageNumber 总页数
                     * 
                     */
                    int64_t GetTotalPageNumber() const;

                    /**
                     * 设置总页数
                     * @param _totalPageNumber 总页数
                     * 
                     */
                    void SetTotalPageNumber(const int64_t& _totalPageNumber);

                    /**
                     * 判断参数 TotalPageNumber 是否已赋值
                     * @return TotalPageNumber 是否已赋值
                     * 
                     */
                    bool TotalPageNumberHasBeenSet() const;

                private:

                    /**
                     * 用户列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ConsoleUserInfo> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 当前页码
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 每页大小
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 总记录数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 总页数
                     */
                    int64_t m_totalPageNumber;
                    bool m_totalPageNumberHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTCONSOLEUSERSRSP_H_
