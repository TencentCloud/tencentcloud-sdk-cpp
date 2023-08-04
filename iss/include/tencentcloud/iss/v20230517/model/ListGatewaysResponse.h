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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTGATEWAYSRESPONSE_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTGATEWAYSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iss/v20230517/model/GatewaysData.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 查询网关列表返回结果
                */
                class ListGatewaysResponse : public AbstractModel
                {
                public:
                    ListGatewaysResponse();
                    ~ListGatewaysResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取网关列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return List 网关列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<GatewaysData> GetList() const;

                    /**
                     * 判断参数 List 是否已赋值
                     * @return List 是否已赋值
                     * 
                     */
                    bool ListHasBeenSet() const;

                    /**
                     * 获取网关数量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 网关数量
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                private:

                    /**
                     * 网关列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<GatewaysData> m_list;
                    bool m_listHasBeenSet;

                    /**
                     * 网关数量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTGATEWAYSRESPONSE_H_
