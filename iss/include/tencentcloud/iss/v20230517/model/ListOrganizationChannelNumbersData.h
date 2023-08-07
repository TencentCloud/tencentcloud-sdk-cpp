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

#ifndef TENCENTCLOUD_ISS_V20230517_MODEL_LISTORGANIZATIONCHANNELNUMBERSDATA_H_
#define TENCENTCLOUD_ISS_V20230517_MODEL_LISTORGANIZATIONCHANNELNUMBERSDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iss
    {
        namespace V20230517
        {
            namespace Model
            {
                /**
                * 组织目录下的未添加到实时上云计划中的通道数量返回数据
                */
                class ListOrganizationChannelNumbersData : public AbstractModel
                {
                public:
                    ListOrganizationChannelNumbersData();
                    ~ListOrganizationChannelNumbersData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取组织下通道总数
                     * @return TotalCount 组织下通道总数
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置组织下通道总数
                     * @param _totalCount 组织下通道总数
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
                     * 获取组织下未添加到计划的通道总数
                     * @return NotInPlanCount 组织下未添加到计划的通道总数
                     * 
                     */
                    int64_t GetNotInPlanCount() const;

                    /**
                     * 设置组织下未添加到计划的通道总数
                     * @param _notInPlanCount 组织下未添加到计划的通道总数
                     * 
                     */
                    void SetNotInPlanCount(const int64_t& _notInPlanCount);

                    /**
                     * 判断参数 NotInPlanCount 是否已赋值
                     * @return NotInPlanCount 是否已赋值
                     * 
                     */
                    bool NotInPlanCountHasBeenSet() const;

                private:

                    /**
                     * 组织下通道总数
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 组织下未添加到计划的通道总数
                     */
                    int64_t m_notInPlanCount;
                    bool m_notInPlanCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ISS_V20230517_MODEL_LISTORGANIZATIONCHANNELNUMBERSDATA_H_
