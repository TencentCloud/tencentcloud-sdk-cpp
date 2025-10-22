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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_SERVICERELEASEHISTORY_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_SERVICERELEASEHISTORY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/ServiceReleaseHistoryInfo.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 服务发布历史
                */
                class ServiceReleaseHistory : public AbstractModel
                {
                public:
                    ServiceReleaseHistory();
                    ~ServiceReleaseHistory() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取发布版本总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 发布版本总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置发布版本总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCount 发布版本总数。
注意：此字段可能返回 null，表示取不到有效值。
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
                     * 获取历史版本列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return VersionList 历史版本列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ServiceReleaseHistoryInfo> GetVersionList() const;

                    /**
                     * 设置历史版本列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _versionList 历史版本列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetVersionList(const std::vector<ServiceReleaseHistoryInfo>& _versionList);

                    /**
                     * 判断参数 VersionList 是否已赋值
                     * @return VersionList 是否已赋值
                     * 
                     */
                    bool VersionListHasBeenSet() const;

                private:

                    /**
                     * 发布版本总数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 历史版本列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ServiceReleaseHistoryInfo> m_versionList;
                    bool m_versionListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_SERVICERELEASEHISTORY_H_
