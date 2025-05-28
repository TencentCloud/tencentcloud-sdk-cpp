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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_AVAILABLEZONESCATTERSCHEDULERULE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_AVAILABLEZONESCATTERSCHEDULERULE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/CommonOption.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 打散调度规则
                */
                class AvailableZoneScatterScheduleRule : public AbstractModel
                {
                public:
                    AvailableZoneScatterScheduleRule();
                    ~AvailableZoneScatterScheduleRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取-
                     * @return ScatterDimension -
                     * 
                     */
                    std::string GetScatterDimension() const;

                    /**
                     * 设置-
                     * @param _scatterDimension -
                     * 
                     */
                    void SetScatterDimension(const std::string& _scatterDimension);

                    /**
                     * 判断参数 ScatterDimension 是否已赋值
                     * @return ScatterDimension 是否已赋值
                     * 
                     */
                    bool ScatterDimensionHasBeenSet() const;

                    /**
                     * 获取-
                     * @return MaxUnbalanceQuantity -
                     * 
                     */
                    int64_t GetMaxUnbalanceQuantity() const;

                    /**
                     * 设置-
                     * @param _maxUnbalanceQuantity -
                     * 
                     */
                    void SetMaxUnbalanceQuantity(const int64_t& _maxUnbalanceQuantity);

                    /**
                     * 判断参数 MaxUnbalanceQuantity 是否已赋值
                     * @return MaxUnbalanceQuantity 是否已赋值
                     * 
                     */
                    bool MaxUnbalanceQuantityHasBeenSet() const;

                    /**
                     * 获取-
                     * @return IsForceSchedule -
                     * 
                     */
                    bool GetIsForceSchedule() const;

                    /**
                     * 设置-
                     * @param _isForceSchedule -
                     * 
                     */
                    void SetIsForceSchedule(const bool& _isForceSchedule);

                    /**
                     * 判断参数 IsForceSchedule 是否已赋值
                     * @return IsForceSchedule 是否已赋值
                     * 
                     */
                    bool IsForceScheduleHasBeenSet() const;

                    /**
                     * 获取-
                     * @return Paths -
                     * 
                     */
                    std::vector<CommonOption> GetPaths() const;

                    /**
                     * 设置-
                     * @param _paths -
                     * 
                     */
                    void SetPaths(const std::vector<CommonOption>& _paths);

                    /**
                     * 判断参数 Paths 是否已赋值
                     * @return Paths 是否已赋值
                     * 
                     */
                    bool PathsHasBeenSet() const;

                private:

                    /**
                     * -
                     */
                    std::string m_scatterDimension;
                    bool m_scatterDimensionHasBeenSet;

                    /**
                     * -
                     */
                    int64_t m_maxUnbalanceQuantity;
                    bool m_maxUnbalanceQuantityHasBeenSet;

                    /**
                     * -
                     */
                    bool m_isForceSchedule;
                    bool m_isForceScheduleHasBeenSet;

                    /**
                     * -
                     */
                    std::vector<CommonOption> m_paths;
                    bool m_pathsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_AVAILABLEZONESCATTERSCHEDULERULE_H_
