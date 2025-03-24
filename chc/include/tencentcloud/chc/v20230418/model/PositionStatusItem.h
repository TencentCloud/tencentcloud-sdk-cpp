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

#ifndef TENCENTCLOUD_CHC_V20230418_MODEL_POSITIONSTATUSITEM_H_
#define TENCENTCLOUD_CHC_V20230418_MODEL_POSITIONSTATUSITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Chc
    {
        namespace V20230418
        {
            namespace Model
            {
                /**
                * 机位状态及对应的数量
                */
                class PositionStatusItem : public AbstractModel
                {
                public:
                    PositionStatusItem();
                    ~PositionStatusItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取状态值
                     * @return PositionStatus 状态值
                     * 
                     */
                    uint64_t GetPositionStatus() const;

                    /**
                     * 设置状态值
                     * @param _positionStatus 状态值
                     * 
                     */
                    void SetPositionStatus(const uint64_t& _positionStatus);

                    /**
                     * 判断参数 PositionStatus 是否已赋值
                     * @return PositionStatus 是否已赋值
                     * 
                     */
                    bool PositionStatusHasBeenSet() const;

                    /**
                     * 获取对应的机位数量
                     * @return Count 对应的机位数量
                     * 
                     */
                    uint64_t GetCount() const;

                    /**
                     * 设置对应的机位数量
                     * @param _count 对应的机位数量
                     * 
                     */
                    void SetCount(const uint64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                private:

                    /**
                     * 状态值
                     */
                    uint64_t m_positionStatus;
                    bool m_positionStatusHasBeenSet;

                    /**
                     * 对应的机位数量
                     */
                    uint64_t m_count;
                    bool m_countHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CHC_V20230418_MODEL_POSITIONSTATUSITEM_H_
