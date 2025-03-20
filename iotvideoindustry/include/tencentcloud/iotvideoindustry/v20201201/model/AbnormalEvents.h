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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_ABNORMALEVENTS_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_ABNORMALEVENTS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/iotvideoindustry/v20201201/model/AbnormalEventsInfo.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * 异动事件走势列表
                */
                class AbnormalEvents : public AbstractModel
                {
                public:
                    AbnormalEvents();
                    ~AbnormalEvents() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对应查询日期
                     * @return Date 对应查询日期
                     * 
                     */
                    std::string GetDate() const;

                    /**
                     * 设置对应查询日期
                     * @param _date 对应查询日期
                     * 
                     */
                    void SetDate(const std::string& _date);

                    /**
                     * 判断参数 Date 是否已赋值
                     * @return Date 是否已赋值
                     * 
                     */
                    bool DateHasBeenSet() const;

                    /**
                     * 获取列表信息
                     * @return Info 列表信息
                     * 
                     */
                    std::vector<AbnormalEventsInfo> GetInfo() const;

                    /**
                     * 设置列表信息
                     * @param _info 列表信息
                     * 
                     */
                    void SetInfo(const std::vector<AbnormalEventsInfo>& _info);

                    /**
                     * 判断参数 Info 是否已赋值
                     * @return Info 是否已赋值
                     * 
                     */
                    bool InfoHasBeenSet() const;

                private:

                    /**
                     * 对应查询日期
                     */
                    std::string m_date;
                    bool m_dateHasBeenSet;

                    /**
                     * 列表信息
                     */
                    std::vector<AbnormalEventsInfo> m_info;
                    bool m_infoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_ABNORMALEVENTS_H_
