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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_MAINTENANCEEXCLUSION_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_MAINTENANCEEXCLUSION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 维护时间排除项
                */
                class MaintenanceExclusion : public AbstractModel
                {
                public:
                    MaintenanceExclusion();
                    ~MaintenanceExclusion() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取维护排除项名称
                     * @return Name 维护排除项名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置维护排除项名称
                     * @param _name 维护排除项名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取维护排除项开始时间
                     * @return StartAt 维护排除项开始时间
                     * 
                     */
                    std::string GetStartAt() const;

                    /**
                     * 设置维护排除项开始时间
                     * @param _startAt 维护排除项开始时间
                     * 
                     */
                    void SetStartAt(const std::string& _startAt);

                    /**
                     * 判断参数 StartAt 是否已赋值
                     * @return StartAt 是否已赋值
                     * 
                     */
                    bool StartAtHasBeenSet() const;

                    /**
                     * 获取维护排除项结束时间
                     * @return EndAt 维护排除项结束时间
                     * 
                     */
                    std::string GetEndAt() const;

                    /**
                     * 设置维护排除项结束时间
                     * @param _endAt 维护排除项结束时间
                     * 
                     */
                    void SetEndAt(const std::string& _endAt);

                    /**
                     * 判断参数 EndAt 是否已赋值
                     * @return EndAt 是否已赋值
                     * 
                     */
                    bool EndAtHasBeenSet() const;

                    /**
                     * 获取维护排除项ID
                     * @return ID 维护排除项ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置维护排除项ID
                     * @param _iD 维护排除项ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                private:

                    /**
                     * 维护排除项名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 维护排除项开始时间
                     */
                    std::string m_startAt;
                    bool m_startAtHasBeenSet;

                    /**
                     * 维护排除项结束时间
                     */
                    std::string m_endAt;
                    bool m_endAtHasBeenSet;

                    /**
                     * 维护排除项ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_MAINTENANCEEXCLUSION_H_
