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

#ifndef TENCENTCLOUD_CAPTCHA_V20190722_MODEL_TICKETTHROUGHUNIT_H_
#define TENCENTCLOUD_CAPTCHA_V20190722_MODEL_TICKETTHROUGHUNIT_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Captcha
    {
        namespace V20190722
        {
            namespace Model
            {
                /**
                * DescribeCaptchaTicketData 返回的数据结构
                */
                class TicketThroughUnit : public AbstractModel
                {
                public:
                    TicketThroughUnit();
                    ~TicketThroughUnit() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取时间
                     * @return DateKey 时间
                     * 
                     */
                    std::string GetDateKey() const;

                    /**
                     * 设置时间
                     * @param _dateKey 时间
                     * 
                     */
                    void SetDateKey(const std::string& _dateKey);

                    /**
                     * 判断参数 DateKey 是否已赋值
                     * @return DateKey 是否已赋值
                     * 
                     */
                    bool DateKeyHasBeenSet() const;

                    /**
                     * 获取票据验证的通过量
                     * @return Through 票据验证的通过量
                     * 
                     */
                    int64_t GetThrough() const;

                    /**
                     * 设置票据验证的通过量
                     * @param _through 票据验证的通过量
                     * 
                     */
                    void SetThrough(const int64_t& _through);

                    /**
                     * 判断参数 Through 是否已赋值
                     * @return Through 是否已赋值
                     * 
                     */
                    bool ThroughHasBeenSet() const;

                private:

                    /**
                     * 时间
                     */
                    std::string m_dateKey;
                    bool m_dateKeyHasBeenSet;

                    /**
                     * 票据验证的通过量
                     */
                    int64_t m_through;
                    bool m_throughHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CAPTCHA_V20190722_MODEL_TICKETTHROUGHUNIT_H_
