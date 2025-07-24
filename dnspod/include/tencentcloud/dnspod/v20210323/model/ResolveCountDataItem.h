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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_RESOLVECOUNTDATAITEM_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_RESOLVECOUNTDATAITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 解析量小计
                */
                class ResolveCountDataItem : public AbstractModel
                {
                public:
                    ResolveCountDataItem();
                    ~ResolveCountDataItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取解析量
                     * @return Num 解析量
                     * 
                     */
                    uint64_t GetNum() const;

                    /**
                     * 设置解析量
                     * @param _num 解析量
                     * 
                     */
                    void SetNum(const uint64_t& _num);

                    /**
                     * 判断参数 Num 是否已赋值
                     * @return Num 是否已赋值
                     * 
                     */
                    bool NumHasBeenSet() const;

                    /**
                     * 获取统计的时间点
                     * @return DateKey 统计的时间点
                     * 
                     */
                    std::string GetDateKey() const;

                    /**
                     * 设置统计的时间点
                     * @param _dateKey 统计的时间点
                     * 
                     */
                    void SetDateKey(const std::string& _dateKey);

                    /**
                     * 判断参数 DateKey 是否已赋值
                     * @return DateKey 是否已赋值
                     * 
                     */
                    bool DateKeyHasBeenSet() const;

                private:

                    /**
                     * 解析量
                     */
                    uint64_t m_num;
                    bool m_numHasBeenSet;

                    /**
                     * 统计的时间点
                     */
                    std::string m_dateKey;
                    bool m_dateKeyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_RESOLVECOUNTDATAITEM_H_
