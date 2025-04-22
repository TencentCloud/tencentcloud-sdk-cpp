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

#ifndef TENCENTCLOUD_CLB_V20180317_MODEL_SPECAVAILABILITY_H_
#define TENCENTCLOUD_CLB_V20180317_MODEL_SPECAVAILABILITY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Clb
    {
        namespace V20180317
        {
            namespace Model
            {
                /**
                * 规格可用性
                */
                class SpecAvailability : public AbstractModel
                {
                public:
                    SpecAvailability();
                    ~SpecAvailability() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规格类型。
<li>clb.c2.medium（标准型）</li><li>clb.c3.small（高阶型1）</li><li>clb.c3.medium（高阶型2）</li>
<li>clb.c4.small（超强型1）</li><li>clb.c4.medium（超强型2）</li><li>clb.c4.large（超强型3）</li><li>clb.c4.xlarge（超强型4）</li><li>shared（共享型）</li>

                     * @return SpecType 规格类型。
<li>clb.c2.medium（标准型）</li><li>clb.c3.small（高阶型1）</li><li>clb.c3.medium（高阶型2）</li>
<li>clb.c4.small（超强型1）</li><li>clb.c4.medium（超强型2）</li><li>clb.c4.large（超强型3）</li><li>clb.c4.xlarge（超强型4）</li><li>shared（共享型）</li>

                     * 
                     */
                    std::string GetSpecType() const;

                    /**
                     * 设置规格类型。
<li>clb.c2.medium（标准型）</li><li>clb.c3.small（高阶型1）</li><li>clb.c3.medium（高阶型2）</li>
<li>clb.c4.small（超强型1）</li><li>clb.c4.medium（超强型2）</li><li>clb.c4.large（超强型3）</li><li>clb.c4.xlarge（超强型4）</li><li>shared（共享型）</li>

                     * @param _specType 规格类型。
<li>clb.c2.medium（标准型）</li><li>clb.c3.small（高阶型1）</li><li>clb.c3.medium（高阶型2）</li>
<li>clb.c4.small（超强型1）</li><li>clb.c4.medium（超强型2）</li><li>clb.c4.large（超强型3）</li><li>clb.c4.xlarge（超强型4）</li><li>shared（共享型）</li>

                     * 
                     */
                    void SetSpecType(const std::string& _specType);

                    /**
                     * 判断参数 SpecType 是否已赋值
                     * @return SpecType 是否已赋值
                     * 
                     */
                    bool SpecTypeHasBeenSet() const;

                    /**
                     * 获取规格可用性。资源可用性，"Available"：可用，"Unavailable"：不可用
                     * @return Availability 规格可用性。资源可用性，"Available"：可用，"Unavailable"：不可用
                     * 
                     */
                    std::string GetAvailability() const;

                    /**
                     * 设置规格可用性。资源可用性，"Available"：可用，"Unavailable"：不可用
                     * @param _availability 规格可用性。资源可用性，"Available"：可用，"Unavailable"：不可用
                     * 
                     */
                    void SetAvailability(const std::string& _availability);

                    /**
                     * 判断参数 Availability 是否已赋值
                     * @return Availability 是否已赋值
                     * 
                     */
                    bool AvailabilityHasBeenSet() const;

                private:

                    /**
                     * 规格类型。
<li>clb.c2.medium（标准型）</li><li>clb.c3.small（高阶型1）</li><li>clb.c3.medium（高阶型2）</li>
<li>clb.c4.small（超强型1）</li><li>clb.c4.medium（超强型2）</li><li>clb.c4.large（超强型3）</li><li>clb.c4.xlarge（超强型4）</li><li>shared（共享型）</li>

                     */
                    std::string m_specType;
                    bool m_specTypeHasBeenSet;

                    /**
                     * 规格可用性。资源可用性，"Available"：可用，"Unavailable"：不可用
                     */
                    std::string m_availability;
                    bool m_availabilityHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CLB_V20180317_MODEL_SPECAVAILABILITY_H_
