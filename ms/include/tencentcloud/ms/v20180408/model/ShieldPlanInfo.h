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

#ifndef TENCENTCLOUD_MS_V20180408_MODEL_SHIELDPLANINFO_H_
#define TENCENTCLOUD_MS_V20180408_MODEL_SHIELDPLANINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ms/v20180408/model/PlanDetailInfo.h>


namespace TencentCloud
{
    namespace Ms
    {
        namespace V20180408
        {
            namespace Model
            {
                /**
                * 加固策略信息
                */
                class ShieldPlanInfo : public AbstractModel
                {
                public:
                    ShieldPlanInfo();
                    ~ShieldPlanInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取加固策略数量
                     * @return TotalCount 加固策略数量
                     * 
                     */
                    uint64_t GetTotalCount() const;

                    /**
                     * 设置加固策略数量
                     * @param _totalCount 加固策略数量
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
                     * 获取加固策略具体信息数组
                     * @return PlanSet 加固策略具体信息数组
                     * 
                     */
                    std::vector<PlanDetailInfo> GetPlanSet() const;

                    /**
                     * 设置加固策略具体信息数组
                     * @param _planSet 加固策略具体信息数组
                     * 
                     */
                    void SetPlanSet(const std::vector<PlanDetailInfo>& _planSet);

                    /**
                     * 判断参数 PlanSet 是否已赋值
                     * @return PlanSet 是否已赋值
                     * 
                     */
                    bool PlanSetHasBeenSet() const;

                private:

                    /**
                     * 加固策略数量
                     */
                    uint64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 加固策略具体信息数组
                     */
                    std::vector<PlanDetailInfo> m_planSet;
                    bool m_planSetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MS_V20180408_MODEL_SHIELDPLANINFO_H_
