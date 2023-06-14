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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_LISTCLUSTERINSPECTIONRESULTSITEMSRESPONSE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_LISTCLUSTERINSPECTIONRESULTSITEMSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tke/v20180525/model/KubeJarvisStateInspectionResultsItem.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * ListClusterInspectionResultsItems返回参数结构体
                */
                class ListClusterInspectionResultsItemsResponse : public AbstractModel
                {
                public:
                    ListClusterInspectionResultsItemsResponse();
                    ~ListClusterInspectionResultsItemsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取巡检结果历史列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InspectionResultsItems 巡检结果历史列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KubeJarvisStateInspectionResultsItem> GetInspectionResultsItems() const;

                    /**
                     * 判断参数 InspectionResultsItems 是否已赋值
                     * @return InspectionResultsItems 是否已赋值
                     * 
                     */
                    bool InspectionResultsItemsHasBeenSet() const;

                private:

                    /**
                     * 巡检结果历史列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KubeJarvisStateInspectionResultsItem> m_inspectionResultsItems;
                    bool m_inspectionResultsItemsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_LISTCLUSTERINSPECTIONRESULTSITEMSRESPONSE_H_
