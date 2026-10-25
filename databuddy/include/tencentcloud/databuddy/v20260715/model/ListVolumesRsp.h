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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTVOLUMESRSP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTVOLUMESRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/Volume.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 数据卷返回信息
                */
                class ListVolumesRsp : public AbstractModel
                {
                public:
                    ListVolumesRsp();
                    ~ListVolumesRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据卷信息
                     * @return Items 数据卷信息
                     * 
                     */
                    std::vector<Volume> GetItems() const;

                    /**
                     * 设置数据卷信息
                     * @param _items 数据卷信息
                     * 
                     */
                    void SetItems(const std::vector<Volume>& _items);

                    /**
                     * 判断参数 Items 是否已赋值
                     * @return Items 是否已赋值
                     * 
                     */
                    bool ItemsHasBeenSet() const;

                    /**
                     * 获取总数据卷数量
                     * @return TotalCount 总数据卷数量
                     * 
                     */
                    std::string GetTotalCount() const;

                    /**
                     * 设置总数据卷数量
                     * @param _totalCount 总数据卷数量
                     * 
                     */
                    void SetTotalCount(const std::string& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取分页信息
                     * @return NextPageToken 分页信息
                     * 
                     */
                    std::string GetNextPageToken() const;

                    /**
                     * 设置分页信息
                     * @param _nextPageToken 分页信息
                     * 
                     */
                    void SetNextPageToken(const std::string& _nextPageToken);

                    /**
                     * 判断参数 NextPageToken 是否已赋值
                     * @return NextPageToken 是否已赋值
                     * 
                     */
                    bool NextPageTokenHasBeenSet() const;

                private:

                    /**
                     * 数据卷信息
                     */
                    std::vector<Volume> m_items;
                    bool m_itemsHasBeenSet;

                    /**
                     * 总数据卷数量
                     */
                    std::string m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 分页信息
                     */
                    std::string m_nextPageToken;
                    bool m_nextPageTokenHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_LISTVOLUMESRSP_H_
