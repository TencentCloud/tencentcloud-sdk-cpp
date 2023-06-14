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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULDETAILINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULDETAILINFO_H_

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
                * 漏洞详细信息
                */
                class VulDetailInfo : public AbstractModel
                {
                public:
                    VulDetailInfo();
                    ~VulDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取漏洞ID
                     * @return VulId 漏洞ID
                     * 
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置漏洞ID
                     * @param _vulId 漏洞ID
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
                     * 获取漏洞级别
                     * @return Level 漏洞级别
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置漏洞级别
                     * @param _level 漏洞级别
                     * 
                     */
                    void SetLevel(const uint64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取漏洞名称
                     * @return Name 漏洞名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置漏洞名称
                     * @param _name 漏洞名称
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取cve编号
                     * @return CveId cve编号
                     * 
                     */
                    std::string GetCveId() const;

                    /**
                     * 设置cve编号
                     * @param _cveId cve编号
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
                     * 获取1: web-cms漏洞 2:应用漏洞  4: Linux软件漏洞 5: Windows系统漏洞 0= 应急漏洞
                     * @return VulCategory 1: web-cms漏洞 2:应用漏洞  4: Linux软件漏洞 5: Windows系统漏洞 0= 应急漏洞
                     * 
                     */
                    uint64_t GetVulCategory() const;

                    /**
                     * 设置1: web-cms漏洞 2:应用漏洞  4: Linux软件漏洞 5: Windows系统漏洞 0= 应急漏洞
                     * @param _vulCategory 1: web-cms漏洞 2:应用漏洞  4: Linux软件漏洞 5: Windows系统漏洞 0= 应急漏洞
                     * 
                     */
                    void SetVulCategory(const uint64_t& _vulCategory);

                    /**
                     * 判断参数 VulCategory 是否已赋值
                     * @return VulCategory 是否已赋值
                     * 
                     */
                    bool VulCategoryHasBeenSet() const;

                    /**
                     * 获取漏洞描述
                     * @return Descript 漏洞描述
                     * 
                     */
                    std::string GetDescript() const;

                    /**
                     * 设置漏洞描述
                     * @param _descript 漏洞描述
                     * 
                     */
                    void SetDescript(const std::string& _descript);

                    /**
                     * 判断参数 Descript 是否已赋值
                     * @return Descript 是否已赋值
                     * 
                     */
                    bool DescriptHasBeenSet() const;

                    /**
                     * 获取修复建议
                     * @return Fix 修复建议
                     * 
                     */
                    std::string GetFix() const;

                    /**
                     * 设置修复建议
                     * @param _fix 修复建议
                     * 
                     */
                    void SetFix(const std::string& _fix);

                    /**
                     * 判断参数 Fix 是否已赋值
                     * @return Fix 是否已赋值
                     * 
                     */
                    bool FixHasBeenSet() const;

                    /**
                     * 获取参考链接
                     * @return Reference 参考链接
                     * 
                     */
                    std::string GetReference() const;

                    /**
                     * 设置参考链接
                     * @param _reference 参考链接
                     * 
                     */
                    void SetReference(const std::string& _reference);

                    /**
                     * 判断参数 Reference 是否已赋值
                     * @return Reference 是否已赋值
                     * 
                     */
                    bool ReferenceHasBeenSet() const;

                    /**
                     * 获取CVSS评分
                     * @return CvssScore CVSS评分
                     * 
                     */
                    double GetCvssScore() const;

                    /**
                     * 设置CVSS评分
                     * @param _cvssScore CVSS评分
                     * 
                     */
                    void SetCvssScore(const double& _cvssScore);

                    /**
                     * 判断参数 CvssScore 是否已赋值
                     * @return CvssScore 是否已赋值
                     * 
                     */
                    bool CvssScoreHasBeenSet() const;

                    /**
                     * 获取CVSS详情
                     * @return Cvss CVSS详情
                     * 
                     */
                    std::string GetCvss() const;

                    /**
                     * 设置CVSS详情
                     * @param _cvss CVSS详情
                     * 
                     */
                    void SetCvss(const std::string& _cvss);

                    /**
                     * 判断参数 Cvss 是否已赋值
                     * @return Cvss 是否已赋值
                     * 
                     */
                    bool CvssHasBeenSet() const;

                    /**
                     * 获取发布时间
                     * @return PublishTime 发布时间
                     * 
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 设置发布时间
                     * @param _publishTime 发布时间
                     * 
                     */
                    void SetPublishTime(const std::string& _publishTime);

                    /**
                     * 判断参数 PublishTime 是否已赋值
                     * @return PublishTime 是否已赋值
                     * 
                     */
                    bool PublishTimeHasBeenSet() const;

                private:

                    /**
                     * 漏洞ID
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * 漏洞级别
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 漏洞名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * cve编号
                     */
                    std::string m_cveId;
                    bool m_cveIdHasBeenSet;

                    /**
                     * 1: web-cms漏洞 2:应用漏洞  4: Linux软件漏洞 5: Windows系统漏洞 0= 应急漏洞
                     */
                    uint64_t m_vulCategory;
                    bool m_vulCategoryHasBeenSet;

                    /**
                     * 漏洞描述
                     */
                    std::string m_descript;
                    bool m_descriptHasBeenSet;

                    /**
                     * 修复建议
                     */
                    std::string m_fix;
                    bool m_fixHasBeenSet;

                    /**
                     * 参考链接
                     */
                    std::string m_reference;
                    bool m_referenceHasBeenSet;

                    /**
                     * CVSS评分
                     */
                    double m_cvssScore;
                    bool m_cvssScoreHasBeenSet;

                    /**
                     * CVSS详情
                     */
                    std::string m_cvss;
                    bool m_cvssHasBeenSet;

                    /**
                     * 发布时间
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULDETAILINFO_H_
