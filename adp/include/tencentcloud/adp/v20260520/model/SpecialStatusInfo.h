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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_SPECIALSTATUSINFO_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_SPECIALSTATUSINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 特殊状态信息
                */
                class SpecialStatusInfo : public AbstractModel
                {
                public:
                    SpecialStatusInfo();
                    ~SpecialStatusInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取状态 (0-不在特殊状态中, 1-在特殊状态中)。枚举值: 1:在特殊状态中
                     * @return Status 状态 (0-不在特殊状态中, 1-在特殊状态中)。枚举值: 1:在特殊状态中
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态 (0-不在特殊状态中, 1-在特殊状态中)。枚举值: 1:在特殊状态中
                     * @param _status 状态 (0-不在特殊状态中, 1-在特殊状态中)。枚举值: 1:在特殊状态中
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 状态 (0-不在特殊状态中, 1-在特殊状态中)。枚举值: 1:在特殊状态中
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_SPECIALSTATUSINFO_H_
