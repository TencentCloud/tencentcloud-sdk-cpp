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

#ifndef TENCENTCLOUD_CCC_V20200210_MODEL_EVENTSTAFFDETAIL_H_
#define TENCENTCLOUD_CCC_V20200210_MODEL_EVENTSTAFFDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/ccc/v20200210/model/EventStaffElement.h>


namespace TencentCloud
{
    namespace Ccc
    {
        namespace V20200210
        {
            namespace Model
            {
                /**
                * 座席事件相关详情
                */
                class EventStaffDetail : public AbstractModel
                {
                public:
                    EventStaffDetail();
                    ~EventStaffDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取座席数据
                     * @return Staffs 座席数据
                     * 
                     */
                    std::vector<EventStaffElement> GetStaffs() const;

                    /**
                     * 设置座席数据
                     * @param _staffs 座席数据
                     * 
                     */
                    void SetStaffs(const std::vector<EventStaffElement>& _staffs);

                    /**
                     * 判断参数 Staffs 是否已赋值
                     * @return Staffs 是否已赋值
                     * 
                     */
                    bool StaffsHasBeenSet() const;

                private:

                    /**
                     * 座席数据
                     */
                    std::vector<EventStaffElement> m_staffs;
                    bool m_staffsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CCC_V20200210_MODEL_EVENTSTAFFDETAIL_H_
