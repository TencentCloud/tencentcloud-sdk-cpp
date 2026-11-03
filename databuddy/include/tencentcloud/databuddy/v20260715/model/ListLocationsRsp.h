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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTLOCATIONSRSP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTLOCATIONSRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/LocationInfo.h>
#include <tencentcloud/databuddy/v20260715/model/ListLocationItem.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 分页查询存储位置列表响应
                */
                class ListLocationsRsp : public AbstractModel
                {
                public:
                    ListLocationsRsp();
                    ~ListLocationsRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存储位置详情列表（Deprecated: 请使用 Items，平铺含订阅状态；前端切换完成后移除）
                     * @return Locations 存储位置详情列表（Deprecated: 请使用 Items，平铺含订阅状态；前端切换完成后移除）
                     * 
                     */
                    std::vector<LocationInfo> GetLocations() const;

                    /**
                     * 设置存储位置详情列表（Deprecated: 请使用 Items，平铺含订阅状态；前端切换完成后移除）
                     * @param _locations 存储位置详情列表（Deprecated: 请使用 Items，平铺含订阅状态；前端切换完成后移除）
                     * 
                     */
                    void SetLocations(const std::vector<LocationInfo>& _locations);

                    /**
                     * 判断参数 Locations 是否已赋值
                     * @return Locations 是否已赋值
                     * 
                     */
                    bool LocationsHasBeenSet() const;

                    /**
                     * 获取结果总条数
                     * @return TotalCount 结果总条数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置结果总条数
                     * @param _totalCount 结果总条数
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
                     * 获取快照ID
                     * @return SnapshotId 快照ID
                     * 
                     */
                    std::string GetSnapshotId() const;

                    /**
                     * 设置快照ID
                     * @param _snapshotId 快照ID
                     * 
                     */
                    void SetSnapshotId(const std::string& _snapshotId);

                    /**
                     * 判断参数 SnapshotId 是否已赋值
                     * @return SnapshotId 是否已赋值
                     * 
                     */
                    bool SnapshotIdHasBeenSet() const;

                    /**
                     * 获取存储位置 + 订阅平铺列表（与 Locations 同序同长，前端优先使用本字段）；订阅状态判断：FileEventSubscription 非空即已开启
                     * @return Items 存储位置 + 订阅平铺列表（与 Locations 同序同长，前端优先使用本字段）；订阅状态判断：FileEventSubscription 非空即已开启
                     * 
                     */
                    std::vector<ListLocationItem> GetItems() const;

                    /**
                     * 设置存储位置 + 订阅平铺列表（与 Locations 同序同长，前端优先使用本字段）；订阅状态判断：FileEventSubscription 非空即已开启
                     * @param _items 存储位置 + 订阅平铺列表（与 Locations 同序同长，前端优先使用本字段）；订阅状态判断：FileEventSubscription 非空即已开启
                     * 
                     */
                    void SetItems(const std::vector<ListLocationItem>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                private:

                    /**
                     * 存储位置详情列表（Deprecated: 请使用 Items，平铺含订阅状态；前端切换完成后移除）
                     */
                    std::vector<LocationInfo> m_locations;
                    bool m_locationsHasBeenSet;

                    /**
                     * 结果总条数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 快照ID
                     */
                    std::string m_snapshotId;
                    bool m_snapshotIdHasBeenSet;

                    /**
                     * 存储位置 + 订阅平铺列表（与 Locations 同序同长，前端优先使用本字段）；订阅状态判断：FileEventSubscription 非空即已开启
                     */
                    std::vector<ListLocationItem> m_items;
                    bool m_itemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTLOCATIONSRSP_H_
