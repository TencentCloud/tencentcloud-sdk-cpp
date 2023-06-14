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

#ifndef TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLANBINDSECRETSTATUS_H_
#define TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLANBINDSECRETSTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/apigateway/v20180808/model/UsagePlanBindSecret.h>


namespace TencentCloud
{
    namespace Apigateway
    {
        namespace V20180808
        {
            namespace Model
            {
                /**
                * 使用计划绑定密钥列表
                */
                class UsagePlanBindSecretStatus : public AbstractModel
                {
                public:
                    UsagePlanBindSecretStatus();
                    ~UsagePlanBindSecretStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取使用计划绑定密钥的数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 使用计划绑定密钥的数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置使用计划绑定密钥的数量。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCount 使用计划绑定密钥的数量。
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
                     * 获取密钥详情列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AccessKeyList 密钥详情列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<UsagePlanBindSecret> GetAccessKeyList() const;

                    /**
                     * 设置密钥详情列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _accessKeyList 密钥详情列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAccessKeyList(const std::vector<UsagePlanBindSecret>& _accessKeyList);

                    /**
                     * 判断参数 AccessKeyList 是否已赋值
                     * @return AccessKeyList 是否已赋值
                     * 
                     */
                    bool AccessKeyListHasBeenSet() const;

                private:

                    /**
                     * 使用计划绑定密钥的数量。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 密钥详情列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<UsagePlanBindSecret> m_accessKeyList;
                    bool m_accessKeyListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_APIGATEWAY_V20180808_MODEL_USAGEPLANBINDSECRETSTATUS_H_
