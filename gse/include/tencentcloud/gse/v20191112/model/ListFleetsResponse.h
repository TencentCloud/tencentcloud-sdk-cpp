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

#ifndef TENCENTCLOUD_GSE_V20191112_MODEL_LISTFLEETSRESPONSE_H_
#define TENCENTCLOUD_GSE_V20191112_MODEL_LISTFLEETSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Gse
    {
        namespace V20191112
        {
            namespace Model
            {
                /**
                * ListFleets返回参数结构体
                */
                class ListFleetsResponse : public AbstractModel
                {
                public:
                    ListFleetsResponse();
                    ~ListFleetsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取服务器舰队 Id 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FleetIds 服务器舰队 Id 列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetFleetIds() const;

                    /**
                     * 判断参数 FleetIds 是否已赋值
                     * @return FleetIds 是否已赋值
                     * 
                     */
                    bool FleetIdsHasBeenSet() const;

                    /**
                     * 获取服务器舰队 Id 总数，最小值0
                     * @return TotalCount 服务器舰队 Id 总数，最小值0
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 服务器舰队 Id 列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_fleetIds;
                    bool m_fleetIdsHasBeenSet;

                    /**
                     * 服务器舰队 Id 总数，最小值0
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_GSE_V20191112_MODEL_LISTFLEETSRESPONSE_H_
