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

#ifndef TENCENTCLOUD_CDZ_V20221123_MODEL_EXTRAINFO_H_
#define TENCENTCLOUD_CDZ_V20221123_MODEL_EXTRAINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdz
    {
        namespace V20221123
        {
            namespace Model
            {
                /**
                * 专属可用区资源水位数据扩展信息，包含可用区当地时间等数据。
                */
                class ExtraInfo : public AbstractModel
                {
                public:
                    ExtraInfo();
                    ~ExtraInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取专属可用区当地时间本周一日期
                     * @return ThisMondayLocalDate 专属可用区当地时间本周一日期
                     * 
                     */
                    std::string GetThisMondayLocalDate() const;

                    /**
                     * 设置专属可用区当地时间本周一日期
                     * @param _thisMondayLocalDate 专属可用区当地时间本周一日期
                     * 
                     */
                    void SetThisMondayLocalDate(const std::string& _thisMondayLocalDate);

                    /**
                     * 判断参数 ThisMondayLocalDate 是否已赋值
                     * @return ThisMondayLocalDate 是否已赋值
                     * 
                     */
                    bool ThisMondayLocalDateHasBeenSet() const;

                    /**
                     * 获取专属可用区当地时间上周一日期
                     * @return LastMondayLocalDate 专属可用区当地时间上周一日期
                     * 
                     */
                    std::string GetLastMondayLocalDate() const;

                    /**
                     * 设置专属可用区当地时间上周一日期
                     * @param _lastMondayLocalDate 专属可用区当地时间上周一日期
                     * 
                     */
                    void SetLastMondayLocalDate(const std::string& _lastMondayLocalDate);

                    /**
                     * 判断参数 LastMondayLocalDate 是否已赋值
                     * @return LastMondayLocalDate 是否已赋值
                     * 
                     */
                    bool LastMondayLocalDateHasBeenSet() const;

                private:

                    /**
                     * 专属可用区当地时间本周一日期
                     */
                    std::string m_thisMondayLocalDate;
                    bool m_thisMondayLocalDateHasBeenSet;

                    /**
                     * 专属可用区当地时间上周一日期
                     */
                    std::string m_lastMondayLocalDate;
                    bool m_lastMondayLocalDateHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDZ_V20221123_MODEL_EXTRAINFO_H_
