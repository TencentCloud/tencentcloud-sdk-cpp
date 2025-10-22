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

#ifndef TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEDATAREPLENISHMENTPLAN_H_
#define TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEDATAREPLENISHMENTPLAN_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20250806
        {
            namespace Model
            {
                /**
                * 创建数据补录计划结果
                */
                class CreateDataReplenishmentPlan : public AbstractModel
                {
                public:
                    CreateDataReplenishmentPlan();
                    ~CreateDataReplenishmentPlan() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取补录计划Id
                     * @return DataBackfillPlanId 补录计划Id
                     * 
                     */
                    std::string GetDataBackfillPlanId() const;

                    /**
                     * 设置补录计划Id
                     * @param _dataBackfillPlanId 补录计划Id
                     * 
                     */
                    void SetDataBackfillPlanId(const std::string& _dataBackfillPlanId);

                    /**
                     * 判断参数 DataBackfillPlanId 是否已赋值
                     * @return DataBackfillPlanId 是否已赋值
                     * 
                     */
                    bool DataBackfillPlanIdHasBeenSet() const;

                private:

                    /**
                     * 补录计划Id
                     */
                    std::string m_dataBackfillPlanId;
                    bool m_dataBackfillPlanIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20250806_MODEL_CREATEDATAREPLENISHMENTPLAN_H_
