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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RASPRULEVUL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RASPRULEVUL_H_

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
                * rasp白名单漏洞列表
                */
                class RaspRuleVul : public AbstractModel
                {
                public:
                    RaspRuleVul();
                    ~RaspRuleVul() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取漏洞id
                     * @return VulVulsID 漏洞id
                     * 
                     */
                    uint64_t GetVulVulsID() const;

                    /**
                     * 设置漏洞id
                     * @param _vulVulsID 漏洞id
                     * 
                     */
                    void SetVulVulsID(const uint64_t& _vulVulsID);

                    /**
                     * 判断参数 VulVulsID 是否已赋值
                     * @return VulVulsID 是否已赋值
                     * 
                     */
                    bool VulVulsIDHasBeenSet() const;

                    /**
                     * 获取漏洞名称
                     * @return VulVulsName 漏洞名称
                     * 
                     */
                    std::string GetVulVulsName() const;

                    /**
                     * 设置漏洞名称
                     * @param _vulVulsName 漏洞名称
                     * 
                     */
                    void SetVulVulsName(const std::string& _vulVulsName);

                    /**
                     * 判断参数 VulVulsName 是否已赋值
                     * @return VulVulsName 是否已赋值
                     * 
                     */
                    bool VulVulsNameHasBeenSet() const;

                    /**
                     * 获取cve_id
                     * @return CveID cve_id
                     * 
                     */
                    std::string GetCveID() const;

                    /**
                     * 设置cve_id
                     * @param _cveID cve_id
                     * 
                     */
                    void SetCveID(const std::string& _cveID);

                    /**
                     * 判断参数 CveID 是否已赋值
                     * @return CveID 是否已赋值
                     * 
                     */
                    bool CveIDHasBeenSet() const;

                    /**
                     * 获取漏洞防御类型，从漏洞表富化， 1:支持组件漏洞防御，组件漏洞没有正则加白。2:支持正则防御
                     * @return SupportDefense 漏洞防御类型，从漏洞表富化， 1:支持组件漏洞防御，组件漏洞没有正则加白。2:支持正则防御
                     * 
                     */
                    uint64_t GetSupportDefense() const;

                    /**
                     * 设置漏洞防御类型，从漏洞表富化， 1:支持组件漏洞防御，组件漏洞没有正则加白。2:支持正则防御
                     * @param _supportDefense 漏洞防御类型，从漏洞表富化， 1:支持组件漏洞防御，组件漏洞没有正则加白。2:支持正则防御
                     * 
                     */
                    void SetSupportDefense(const uint64_t& _supportDefense);

                    /**
                     * 判断参数 SupportDefense 是否已赋值
                     * @return SupportDefense 是否已赋值
                     * 
                     */
                    bool SupportDefenseHasBeenSet() const;

                private:

                    /**
                     * 漏洞id
                     */
                    uint64_t m_vulVulsID;
                    bool m_vulVulsIDHasBeenSet;

                    /**
                     * 漏洞名称
                     */
                    std::string m_vulVulsName;
                    bool m_vulVulsNameHasBeenSet;

                    /**
                     * cve_id
                     */
                    std::string m_cveID;
                    bool m_cveIDHasBeenSet;

                    /**
                     * 漏洞防御类型，从漏洞表富化， 1:支持组件漏洞防御，组件漏洞没有正则加白。2:支持正则防御
                     */
                    uint64_t m_supportDefense;
                    bool m_supportDefenseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RASPRULEVUL_H_
