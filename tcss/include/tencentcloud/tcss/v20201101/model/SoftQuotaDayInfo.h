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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_SOFTQUOTADAYINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_SOFTQUOTADAYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 后付费详情
                */
                class SoftQuotaDayInfo : public AbstractModel
                {
                public:
                    SoftQuotaDayInfo();
                    ~SoftQuotaDayInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取扣费时间
                     * @return PayTime 扣费时间
                     * 
                     */
                    std::string GetPayTime() const;

                    /**
                     * 设置扣费时间
                     * @param _payTime 扣费时间
                     * 
                     */
                    void SetPayTime(const std::string& _payTime);

                    /**
                     * 判断参数 PayTime 是否已赋值
                     * @return PayTime 是否已赋值
                     * 
                     */
                    bool PayTimeHasBeenSet() const;

                    /**
                     * 获取计费核数(已废弃)
                     * @return CoresCnt 计费核数(已废弃)
                     * 
                     */
                    uint64_t GetCoresCnt() const;

                    /**
                     * 设置计费核数(已废弃)
                     * @param _coresCnt 计费核数(已废弃)
                     * 
                     */
                    void SetCoresCnt(const uint64_t& _coresCnt);

                    /**
                     * 判断参数 CoresCnt 是否已赋值
                     * @return CoresCnt 是否已赋值
                     * 
                     */
                    bool CoresCntHasBeenSet() const;

                private:

                    /**
                     * 扣费时间
                     */
                    std::string m_payTime;
                    bool m_payTimeHasBeenSet;

                    /**
                     * 计费核数(已废弃)
                     */
                    uint64_t m_coresCnt;
                    bool m_coresCntHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_SOFTQUOTADAYINFO_H_
