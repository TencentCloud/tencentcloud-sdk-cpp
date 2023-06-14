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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULLEVELCOUNTINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULLEVELCOUNTINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 漏洞等级数量实体
                */
                class VulLevelCountInfo : public AbstractModel
                {
                public:
                    VulLevelCountInfo();
                    ~VulLevelCountInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取漏洞等级
                     * @return VulLevel 漏洞等级
                     * 
                     */
                    uint64_t GetVulLevel() const;

                    /**
                     * 设置漏洞等级
                     * @param _vulLevel 漏洞等级
                     * 
                     */
                    void SetVulLevel(const uint64_t& _vulLevel);

                    /**
                     * 判断参数 VulLevel 是否已赋值
                     * @return VulLevel 是否已赋值
                     * 
                     */
                    bool VulLevelHasBeenSet() const;

                    /**
                     * 获取漏洞数量
                     * @return VulCount 漏洞数量
                     * 
                     */
                    uint64_t GetVulCount() const;

                    /**
                     * 设置漏洞数量
                     * @param _vulCount 漏洞数量
                     * 
                     */
                    void SetVulCount(const uint64_t& _vulCount);

                    /**
                     * 判断参数 VulCount 是否已赋值
                     * @return VulCount 是否已赋值
                     * 
                     */
                    bool VulCountHasBeenSet() const;

                private:

                    /**
                     * 漏洞等级
                     */
                    uint64_t m_vulLevel;
                    bool m_vulLevelHasBeenSet;

                    /**
                     * 漏洞数量
                     */
                    uint64_t m_vulCount;
                    bool m_vulCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULLEVELCOUNTINFO_H_
