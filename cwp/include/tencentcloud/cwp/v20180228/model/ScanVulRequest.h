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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCANVULREQUEST_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCANVULREQUEST_H_

#include <string>
#include <vector>
#include <map>
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
                * ScanVul请求参数结构体
                */
                class ScanVulRequest : public AbstractModel
                {
                public:
                    ScanVulRequest();
                    ~ScanVulRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取危害等级：1-低危；2-中危；3-高危；4-严重 (多选英文;分隔)
                     * @return VulLevels 危害等级：1-低危；2-中危；3-高危；4-严重 (多选英文;分隔)
                     * 
                     */
                    std::string GetVulLevels() const;

                    /**
                     * 设置危害等级：1-低危；2-中危；3-高危；4-严重 (多选英文;分隔)
                     * @param _vulLevels 危害等级：1-低危；2-中危；3-高危；4-严重 (多选英文;分隔)
                     * 
                     */
                    void SetVulLevels(const std::string& _vulLevels);

                    /**
                     * 判断参数 VulLevels 是否已赋值
                     * @return VulLevels 是否已赋值
                     * 
                     */
                    bool VulLevelsHasBeenSet() const;

                    /**
                     * 获取服务器分类：1:专业版服务器；2:自选服务器
                     * @return HostType 服务器分类：1:专业版服务器；2:自选服务器
                     * 
                     */
                    uint64_t GetHostType() const;

                    /**
                     * 设置服务器分类：1:专业版服务器；2:自选服务器
                     * @param _hostType 服务器分类：1:专业版服务器；2:自选服务器
                     * 
                     */
                    void SetHostType(const uint64_t& _hostType);

                    /**
                     * 判断参数 HostType 是否已赋值
                     * @return HostType 是否已赋值
                     * 
                     */
                    bool HostTypeHasBeenSet() const;

                    /**
                     * 获取漏洞类型：1: web-cms漏洞 2:应用漏洞  4: Linux软件漏洞 5: Windows系统漏洞 (多选英文;分隔)
                     * @return VulCategories 漏洞类型：1: web-cms漏洞 2:应用漏洞  4: Linux软件漏洞 5: Windows系统漏洞 (多选英文;分隔)
                     * 
                     */
                    std::string GetVulCategories() const;

                    /**
                     * 设置漏洞类型：1: web-cms漏洞 2:应用漏洞  4: Linux软件漏洞 5: Windows系统漏洞 (多选英文;分隔)
                     * @param _vulCategories 漏洞类型：1: web-cms漏洞 2:应用漏洞  4: Linux软件漏洞 5: Windows系统漏洞 (多选英文;分隔)
                     * 
                     */
                    void SetVulCategories(const std::string& _vulCategories);

                    /**
                     * 判断参数 VulCategories 是否已赋值
                     * @return VulCategories 是否已赋值
                     * 
                     */
                    bool VulCategoriesHasBeenSet() const;

                    /**
                     * 获取自选服务器时生效，主机quuid的string数组
                     * @return QuuidList 自选服务器时生效，主机quuid的string数组
                     * 
                     */
                    std::vector<std::string> GetQuuidList() const;

                    /**
                     * 设置自选服务器时生效，主机quuid的string数组
                     * @param _quuidList 自选服务器时生效，主机quuid的string数组
                     * 
                     */
                    void SetQuuidList(const std::vector<std::string>& _quuidList);

                    /**
                     * 判断参数 QuuidList 是否已赋值
                     * @return QuuidList 是否已赋值
                     * 
                     */
                    bool QuuidListHasBeenSet() const;

                    /**
                     * 获取是否是应急漏洞 0 否 1 是
                     * @return VulEmergency 是否是应急漏洞 0 否 1 是
                     * 
                     */
                    uint64_t GetVulEmergency() const;

                    /**
                     * 设置是否是应急漏洞 0 否 1 是
                     * @param _vulEmergency 是否是应急漏洞 0 否 1 是
                     * 
                     */
                    void SetVulEmergency(const uint64_t& _vulEmergency);

                    /**
                     * 判断参数 VulEmergency 是否已赋值
                     * @return VulEmergency 是否已赋值
                     * 
                     */
                    bool VulEmergencyHasBeenSet() const;

                    /**
                     * 获取超时时长 单位秒 默认 3600 秒
                     * @return TimeoutPeriod 超时时长 单位秒 默认 3600 秒
                     * 
                     */
                    uint64_t GetTimeoutPeriod() const;

                    /**
                     * 设置超时时长 单位秒 默认 3600 秒
                     * @param _timeoutPeriod 超时时长 单位秒 默认 3600 秒
                     * 
                     */
                    void SetTimeoutPeriod(const uint64_t& _timeoutPeriod);

                    /**
                     * 判断参数 TimeoutPeriod 是否已赋值
                     * @return TimeoutPeriod 是否已赋值
                     * 
                     */
                    bool TimeoutPeriodHasBeenSet() const;

                    /**
                     * 获取需要扫描的漏洞id
                     * @return VulIds 需要扫描的漏洞id
                     * 
                     */
                    std::vector<uint64_t> GetVulIds() const;

                    /**
                     * 设置需要扫描的漏洞id
                     * @param _vulIds 需要扫描的漏洞id
                     * 
                     */
                    void SetVulIds(const std::vector<uint64_t>& _vulIds);

                    /**
                     * 判断参数 VulIds 是否已赋值
                     * @return VulIds 是否已赋值
                     * 
                     */
                    bool VulIdsHasBeenSet() const;

                    /**
                     * 获取0版本比对，2版本比对+poc
                     * @return ScanMethod 0版本比对，2版本比对+poc
                     * 
                     */
                    uint64_t GetScanMethod() const;

                    /**
                     * 设置0版本比对，2版本比对+poc
                     * @param _scanMethod 0版本比对，2版本比对+poc
                     * 
                     */
                    void SetScanMethod(const uint64_t& _scanMethod);

                    /**
                     * 判断参数 ScanMethod 是否已赋值
                     * @return ScanMethod 是否已赋值
                     * 
                     */
                    bool ScanMethodHasBeenSet() const;

                private:

                    /**
                     * 危害等级：1-低危；2-中危；3-高危；4-严重 (多选英文;分隔)
                     */
                    std::string m_vulLevels;
                    bool m_vulLevelsHasBeenSet;

                    /**
                     * 服务器分类：1:专业版服务器；2:自选服务器
                     */
                    uint64_t m_hostType;
                    bool m_hostTypeHasBeenSet;

                    /**
                     * 漏洞类型：1: web-cms漏洞 2:应用漏洞  4: Linux软件漏洞 5: Windows系统漏洞 (多选英文;分隔)
                     */
                    std::string m_vulCategories;
                    bool m_vulCategoriesHasBeenSet;

                    /**
                     * 自选服务器时生效，主机quuid的string数组
                     */
                    std::vector<std::string> m_quuidList;
                    bool m_quuidListHasBeenSet;

                    /**
                     * 是否是应急漏洞 0 否 1 是
                     */
                    uint64_t m_vulEmergency;
                    bool m_vulEmergencyHasBeenSet;

                    /**
                     * 超时时长 单位秒 默认 3600 秒
                     */
                    uint64_t m_timeoutPeriod;
                    bool m_timeoutPeriodHasBeenSet;

                    /**
                     * 需要扫描的漏洞id
                     */
                    std::vector<uint64_t> m_vulIds;
                    bool m_vulIdsHasBeenSet;

                    /**
                     * 0版本比对，2版本比对+poc
                     */
                    uint64_t m_scanMethod;
                    bool m_scanMethodHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCANVULREQUEST_H_
