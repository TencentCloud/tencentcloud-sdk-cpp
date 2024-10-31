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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULINFOBYCVEID_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULINFOBYCVEID_H_

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
                * 根据cve_id查询漏洞详情
                */
                class VulInfoByCveId : public AbstractModel
                {
                public:
                    VulInfoByCveId();
                    ~VulInfoByCveId() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取漏洞id
                     * @return VulId 漏洞id
                     * 
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置漏洞id
                     * @param _vulId 漏洞id
                     * 
                     */
                    void SetVulId(const uint64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取修复支持情况：0-Windows/Linux均不支持修复 ;1-Windows/Linux 均支持修复 ;2-仅Linux支持修复;3-仅Windows支持修复
                     * @return FixSwitch 修复支持情况：0-Windows/Linux均不支持修复 ;1-Windows/Linux 均支持修复 ;2-仅Linux支持修复;3-仅Windows支持修复
                     * 
                     */
                    uint64_t GetFixSwitch() const;

                    /**
                     * 设置修复支持情况：0-Windows/Linux均不支持修复 ;1-Windows/Linux 均支持修复 ;2-仅Linux支持修复;3-仅Windows支持修复
                     * @param _fixSwitch 修复支持情况：0-Windows/Linux均不支持修复 ;1-Windows/Linux 均支持修复 ;2-仅Linux支持修复;3-仅Windows支持修复
                     * 
                     */
                    void SetFixSwitch(const uint64_t& _fixSwitch);

                    /**
                     * 判断参数 FixSwitch 是否已赋值
                     * @return FixSwitch 是否已赋值
                     * 
                     */
                    bool FixSwitchHasBeenSet() const;

                private:

                    /**
                     * 漏洞id
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * 修复支持情况：0-Windows/Linux均不支持修复 ;1-Windows/Linux 均支持修复 ;2-仅Linux支持修复;3-仅Windows支持修复
                     */
                    uint64_t m_fixSwitch;
                    bool m_fixSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULINFOBYCVEID_H_
