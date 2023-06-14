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

#ifndef TENCENTCLOUD_EIAM_V20210420_MODEL_LISTAPPLICATIONSRESPONSE_H_
#define TENCENTCLOUD_EIAM_V20210420_MODEL_LISTAPPLICATIONSRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/eiam/v20210420/model/ApplicationInformation.h>


namespace TencentCloud
{
    namespace Eiam
    {
        namespace V20210420
        {
            namespace Model
            {
                /**
                * ListApplications返回参数结构体
                */
                class ListApplicationsResponse : public AbstractModel
                {
                public:
                    ListApplicationsResponse();
                    ~ListApplicationsResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取返回的应用信息总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 返回的应用信息总数。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取返回的应用信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ApplicationInfoList 返回的应用信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ApplicationInformation> GetApplicationInfoList() const;

                    /**
                     * 判断参数 ApplicationInfoList 是否已赋值
                     * @return ApplicationInfoList 是否已赋值
                     * 
                     */
                    bool ApplicationInfoListHasBeenSet() const;

                private:

                    /**
                     * 返回的应用信息总数。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 返回的应用信息列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ApplicationInformation> m_applicationInfoList;
                    bool m_applicationInfoListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EIAM_V20210420_MODEL_LISTAPPLICATIONSRESPONSE_H_
