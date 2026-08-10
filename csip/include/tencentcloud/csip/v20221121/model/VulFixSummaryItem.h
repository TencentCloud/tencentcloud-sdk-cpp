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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXSUMMARYITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXSUMMARYITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Csip
    {
        namespace V20221121
        {
            namespace Model
            {
                /**
                * 漏洞修复汇总信息
                */
                class VulFixSummaryItem : public AbstractModel
                {
                public:
                    VulFixSummaryItem();
                    ~VulFixSummaryItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>漏洞ID</p>
                     * @return VulId <p>漏洞ID</p>
                     * 
                     */
                    int64_t GetVulId() const;

                    /**
                     * 设置<p>漏洞ID</p>
                     * @param _vulId <p>漏洞ID</p>
                     * 
                     */
                    void SetVulId(const int64_t& _vulId);

                    /**
                     * 判断参数 VulId 是否已赋值
                     * @return VulId 是否已赋值
                     * 
                     */
                    bool VulIdHasBeenSet() const;

                    /**
                     * 获取<p>漏洞名称</p>
                     * @return VulName <p>漏洞名称</p>
                     * 
                     */
                    std::string GetVulName() const;

                    /**
                     * 设置<p>漏洞名称</p>
                     * @param _vulName <p>漏洞名称</p>
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
                     * 获取<p>CVE编号</p>
                     * @return CveId <p>CVE编号</p>
                     * 
                     */
                    std::string GetCveId() const;

                    /**
                     * 设置<p>CVE编号</p>
                     * @param _cveId <p>CVE编号</p>
                     * 
                     */
                    void SetCveId(const std::string& _cveId);

                    /**
                     * 判断参数 CveId 是否已赋值
                     * @return CveId 是否已赋值
                     * 
                     */
                    bool CveIdHasBeenSet() const;

                    /**
                     * 获取<p>受影响主机数</p>
                     * @return AffectedCount <p>受影响主机数</p>
                     * 
                     */
                    int64_t GetAffectedCount() const;

                    /**
                     * 设置<p>受影响主机数</p>
                     * @param _affectedCount <p>受影响主机数</p>
                     * 
                     */
                    void SetAffectedCount(const int64_t& _affectedCount);

                    /**
                     * 判断参数 AffectedCount 是否已赋值
                     * @return AffectedCount 是否已赋值
                     * 
                     */
                    bool AffectedCountHasBeenSet() const;

                    /**
                     * 获取<p>修复后是否需要重启系统</p>
                     * @return NeedReboot <p>修复后是否需要重启系统</p>
                     * 
                     */
                    bool GetNeedReboot() const;

                    /**
                     * 设置<p>修复后是否需要重启系统</p>
                     * @param _needReboot <p>修复后是否需要重启系统</p>
                     * 
                     */
                    void SetNeedReboot(const bool& _needReboot);

                    /**
                     * 判断参数 NeedReboot 是否已赋值
                     * @return NeedReboot 是否已赋值
                     * 
                     */
                    bool NeedRebootHasBeenSet() const;

                    /**
                     * 获取<p>是否支持一键修复true-支持 false-不支持</p>
                     * @return FixSwitch <p>是否支持一键修复true-支持 false-不支持</p>
                     * 
                     */
                    bool GetFixSwitch() const;

                    /**
                     * 设置<p>是否支持一键修复true-支持 false-不支持</p>
                     * @param _fixSwitch <p>是否支持一键修复true-支持 false-不支持</p>
                     * 
                     */
                    void SetFixSwitch(const bool& _fixSwitch);

                    /**
                     * 判断参数 FixSwitch 是否已赋值
                     * @return FixSwitch 是否已赋值
                     * 
                     */
                    bool FixSwitchHasBeenSet() const;

                private:

                    /**
                     * <p>漏洞ID</p>
                     */
                    int64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * <p>漏洞名称</p>
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * <p>CVE编号</p>
                     */
                    std::string m_cveId;
                    bool m_cveIdHasBeenSet;

                    /**
                     * <p>受影响主机数</p>
                     */
                    int64_t m_affectedCount;
                    bool m_affectedCountHasBeenSet;

                    /**
                     * <p>修复后是否需要重启系统</p>
                     */
                    bool m_needReboot;
                    bool m_needRebootHasBeenSet;

                    /**
                     * <p>是否支持一键修复true-支持 false-不支持</p>
                     */
                    bool m_fixSwitch;
                    bool m_fixSwitchHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULFIXSUMMARYITEM_H_
