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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_REPORTTABLERESPONSE_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_REPORTTABLERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * ReportTable返回参数结构体
                */
                class ReportTableResponse : public AbstractModel
                {
                public:
                    ReportTableResponse();
                    ~ReportTableResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取元数据唯一id
                     * @return Guid 元数据唯一id
                     * 
                     */
                    std::string GetGuid() const;

                    /**
                     * 判断参数 Guid 是否已赋值
                     * @return Guid 是否已赋值
                     * 
                     */
                    bool GuidHasBeenSet() const;

                private:

                    /**
                     * 元数据唯一id
                     */
                    std::string m_guid;
                    bool m_guidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_REPORTTABLERESPONSE_H_
