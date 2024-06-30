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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTFORBIDPLAYCHANNELSDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTFORBIDPLAYCHANNELSDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/ChannelAttrInfo.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 用户禁止播流的通道列表返回数据
                */
                class ListForbidplayChannelsData : public AbstractModel
                {
                public:
                    ListForbidplayChannelsData();
                    ~ListForbidplayChannelsData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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

                    /**
                     * 获取当前页的设备数量
                     * @return PageSize 当前页的设备数量
                     * 
                     */
                    int64_t GetPageSize() const;

                    /**
                     * 设置当前页的设备数量
                     * @param _pageSize 当前页的设备数量
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
                     * 获取本次查询的设备通道总数
                     * @return TotalCount 本次查询的设备通道总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置本次查询的设备通道总数
                     * @param _totalCount 本次查询的设备通道总数
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
                     * 获取设备通道信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return List 设备通道信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ChannelAttrInfo> GetList() const;

                    /**
                     * 设置设备通道信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _list 设备通道信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetList(const std::vector<ChannelAttrInfo>& _list);

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                private:

                    /**
                     * 第几页
                     */
                    int64_t m_pageNumber;
                    bool m_pageNumberHasBeenSet;

                    /**
                     * 当前页的设备数量
                     */
                    int64_t m_pageSize;
                    bool m_pageSizeHasBeenSet;

                    /**
                     * 本次查询的设备通道总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 设备通道信息列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ChannelAttrInfo> m_list;
                    bool m_listHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTFORBIDPLAYCHANNELSDATA_H_
