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

#ifndef TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_GETRECORDDATESBYDEVRESPONSE_H_
#define TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_GETRECORDDATESBYDEVRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotvideoindustry
    {
        namespace V20201201
        {
            namespace Model
            {
                /**
                * GetRecordDatesByDev返回参数结构体
                */
                class GetRecordDatesByDevResponse : public AbstractModel
                {
                public:
                    GetRecordDatesByDevResponse();
                    ~GetRecordDatesByDevResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取含有录像文件的日期列表
                     * @return Dates 含有录像文件的日期列表
                     * 
                     */
                    std::vector<std::string> GetDates() const;

                    /**
                     * 判断参数 Dates 是否已赋值
                     * @return Dates 是否已赋值
                     * 
                     */
                    bool DatesHasBeenSet() const;

                private:

                    /**
                     * 含有录像文件的日期列表
                     */
                    std::vector<std::string> m_dates;
                    bool m_datesHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTVIDEOINDUSTRY_V20201201_MODEL_GETRECORDDATESBYDEVRESPONSE_H_
