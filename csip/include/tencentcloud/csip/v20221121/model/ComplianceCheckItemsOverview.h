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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_COMPLIANCECHECKITEMSOVERVIEW_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_COMPLIANCECHECKITEMSOVERVIEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/csip/v20221121/model/ComplianceCheckTypeItem.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 云资源配置检测全部检查项统计
                */
                class ComplianceCheckItemsOverview : public AbstractModel
                {
                public:
                    ComplianceCheckItemsOverview();
                    ~ComplianceCheckItemsOverview() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>检查项数量</p>
                     * @return TotalCount <p>检查项数量</p>
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置<p>检查项数量</p>
                     * @param _totalCount <p>检查项数量</p>
                     * 
                     */
                    void SetTotalCount(const uint64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取<p>检查项通过率</p>
                     * @return PassRate <p>检查项通过率</p>
                     * 
                     */
                    uint64_t GetPassRate() const;

                    /**
                     * 设置<p>检查项通过率</p>
                     * @param _passRate <p>检查项通过率</p>
                     * 
                     */
                    void SetPassRate(const uint64_t& _passRate);

                    /**
                     * 判断参数 PassRate 是否已赋值
                     * @return PassRate 是否已赋值
                     * 
                     */
                    bool PassRateHasBeenSet() const;

                    /**
                     * 获取<p>检查类型和检查项分布</p>
                     * @return CheckTypes <p>检查类型和检查项分布</p>
                     * 
                     */
                    std::vector<ComplianceCheckTypeItem> GetCheckTypes() const;

                    /**
                     * 设置<p>检查类型和检查项分布</p>
                     * @param _checkTypes <p>检查类型和检查项分布</p>
                     * 
                     */
                    void SetCheckTypes(const std::vector<ComplianceCheckTypeItem>& _checkTypes);

                    /**
                     * 判断参数 CheckTypes 是否已赋值
                     * @return CheckTypes 是否已赋值
                     * 
                     */
                    bool CheckTypesHasBeenSet() const;

                private:

                    /**
                     * <p>检查项数量</p>
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * <p>检查项通过率</p>
                     */
                    uint64_t m_passRate;
                    bool m_passRateHasBeenSet;

                    /**
                     * <p>检查类型和检查项分布</p>
                     */
                    std::vector<ComplianceCheckTypeItem> m_checkTypes;
                    bool m_checkTypesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_COMPLIANCECHECKITEMSOVERVIEW_H_
