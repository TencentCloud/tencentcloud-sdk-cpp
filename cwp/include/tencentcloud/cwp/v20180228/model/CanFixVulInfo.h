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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_CANFIXVULINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_CANFIXVULINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cwp/v20180228/model/VulInfoHostInfo.h>


namespace TencentCloud
{
    namespace Cwp
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 批量修复漏洞二次弹窗 漏洞主机信息
                */
                class CanFixVulInfo : public AbstractModel
                {
                public:
                    CanFixVulInfo();
                    ~CanFixVulInfo() = default;
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
                     * 获取漏洞名称
                     * @return VulName 漏洞名称
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置漏洞名称
                     * @param _vulName 漏洞名称
                     * 
                     */
                    void SetVulName(const std::string& _vulName);

                    /**
                     * 判断参数 VulName 是否已赋值
                     * @return VulName 是否已赋值
                     * 
                     */
                    bool VulNameHasBeenSet() const;

                    /**
                     * 获取该漏洞可修复的主机信息
                     * @return HostList 该漏洞可修复的主机信息
                     * 
                     */
                    std::vector<VulInfoHostInfo> GetHostList() const;

                    /**
                     * 设置该漏洞可修复的主机信息
                     * @param _hostList 该漏洞可修复的主机信息
                     * 
                     */
                    void SetHostList(const std::vector<VulInfoHostInfo>& _hostList);

                    /**
                     * 判断参数 HostList 是否已赋值
                     * @return HostList 是否已赋值
                     * 
                     */
                    bool HostListHasBeenSet() const;

                    /**
                     * 获取修复提示tag
                     * @return FixTag 修复提示tag
                     * 
                     */
                    std::vector<std::string> GetFixTag() const;

                    /**
                     * 设置修复提示tag
                     * @param _fixTag 修复提示tag
                     * 
                     */
                    void SetFixTag(const std::vector<std::string>& _fixTag);

                    /**
                     * 判断参数 FixTag 是否已赋值
                     * @return FixTag 是否已赋值
                     * 
                     */
                    bool FixTagHasBeenSet() const;

                    /**
                     * 获取漏洞分类1 web cms漏洞,2应用漏洞,4linux软件漏洞,5windows系统漏洞
                     * @return VulCategory 漏洞分类1 web cms漏洞,2应用漏洞,4linux软件漏洞,5windows系统漏洞
                     * 
                     */
                    uint64_t GetVulCategory() const;

                    /**
                     * 设置漏洞分类1 web cms漏洞,2应用漏洞,4linux软件漏洞,5windows系统漏洞
                     * @param _vulCategory 漏洞分类1 web cms漏洞,2应用漏洞,4linux软件漏洞,5windows系统漏洞
                     * 
                     */
                    void SetVulCategory(const uint64_t& _vulCategory);

                    /**
                     * 判断参数 VulCategory 是否已赋值
                     * @return VulCategory 是否已赋值
                     * 
                     */
                    bool VulCategoryHasBeenSet() const;

                private:

                    /**
                     * 漏洞id
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * 漏洞名称
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * 该漏洞可修复的主机信息
                     */
                    std::vector<VulInfoHostInfo> m_hostList;
                    bool m_hostListHasBeenSet;

                    /**
                     * 修复提示tag
                     */
                    std::vector<std::string> m_fixTag;
                    bool m_fixTagHasBeenSet;

                    /**
                     * 漏洞分类1 web cms漏洞,2应用漏洞,4linux软件漏洞,5windows系统漏洞
                     */
                    uint64_t m_vulCategory;
                    bool m_vulCategoryHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_CANFIXVULINFO_H_
