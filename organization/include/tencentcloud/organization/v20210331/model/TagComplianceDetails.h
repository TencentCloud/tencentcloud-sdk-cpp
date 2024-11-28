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

#ifndef TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_TAGCOMPLIANCEDETAILS_H_
#define TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_TAGCOMPLIANCEDETAILS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Organization
    {
        namespace V20210331
        {
            namespace Model
            {
                /**
                * 标签合规信息
                */
                class TagComplianceDetails : public AbstractModel
                {
                public:
                    TagComplianceDetails();
                    ~TagComplianceDetails() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取合规状态。true-合规，false-不合规
                     * @return ComplianceStatus 合规状态。true-合规，false-不合规
                     * 
                     */
                    bool GetComplianceStatus() const;

                    /**
                     * 设置合规状态。true-合规，false-不合规
                     * @param _complianceStatus 合规状态。true-合规，false-不合规
                     * 
                     */
                    void SetComplianceStatus(const bool& _complianceStatus);

                    /**
                     * 判断参数 ComplianceStatus 是否已赋值
                     * @return ComplianceStatus 是否已赋值
                     * 
                     */
                    bool ComplianceStatusHasBeenSet() const;

                    /**
                     * 获取值不合规的标签键列表。
                     * @return KeysWithNonCompliantValues 值不合规的标签键列表。
                     * 
                     */
                    std::vector<std::string> GetKeysWithNonCompliantValues() const;

                    /**
                     * 设置值不合规的标签键列表。
                     * @param _keysWithNonCompliantValues 值不合规的标签键列表。
                     * 
                     */
                    void SetKeysWithNonCompliantValues(const std::vector<std::string>& _keysWithNonCompliantValues);

                    /**
                     * 判断参数 KeysWithNonCompliantValues 是否已赋值
                     * @return KeysWithNonCompliantValues 是否已赋值
                     * 
                     */
                    bool KeysWithNonCompliantValuesHasBeenSet() const;

                    /**
                     * 获取键不合规的标签键列表。
                     * @return NonCompliantKeys 键不合规的标签键列表。
                     * 
                     */
                    std::vector<std::string> GetNonCompliantKeys() const;

                    /**
                     * 设置键不合规的标签键列表。
                     * @param _nonCompliantKeys 键不合规的标签键列表。
                     * 
                     */
                    void SetNonCompliantKeys(const std::vector<std::string>& _nonCompliantKeys);

                    /**
                     * 判断参数 NonCompliantKeys 是否已赋值
                     * @return NonCompliantKeys 是否已赋值
                     * 
                     */
                    bool NonCompliantKeysHasBeenSet() const;

                private:

                    /**
                     * 合规状态。true-合规，false-不合规
                     */
                    bool m_complianceStatus;
                    bool m_complianceStatusHasBeenSet;

                    /**
                     * 值不合规的标签键列表。
                     */
                    std::vector<std::string> m_keysWithNonCompliantValues;
                    bool m_keysWithNonCompliantValuesHasBeenSet;

                    /**
                     * 键不合规的标签键列表。
                     */
                    std::vector<std::string> m_nonCompliantKeys;
                    bool m_nonCompliantKeysHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ORGANIZATION_V20210331_MODEL_TAGCOMPLIANCEDETAILS_H_
