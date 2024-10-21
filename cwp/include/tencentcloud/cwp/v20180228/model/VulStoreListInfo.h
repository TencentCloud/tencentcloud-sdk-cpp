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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULSTORELISTINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULSTORELISTINFO_H_

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
                * 漏洞仓库列表信息
                */
                class VulStoreListInfo : public AbstractModel
                {
                public:
                    VulStoreListInfo();
                    ~VulStoreListInfo() = default;
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
                     * 获取发布时间
                     * @return PublishDate 发布时间
                     * 
                     */
                    std::string GetPublishDate() const;

                    /**
                     * 设置发布时间
                     * @param _publishDate 发布时间
                     * 
                     */
                    void SetPublishDate(const std::string& _publishDate);

                    /**
                     * 判断参数 PublishDate 是否已赋值
                     * @return PublishDate 是否已赋值
                     * 
                     */
                    bool PublishDateHasBeenSet() const;

                    /**
                     * 获取漏洞检测方法 0 - 版本比对, 1 - POC验证
                     * @return Method 漏洞检测方法 0 - 版本比对, 1 - POC验证
                     * 
                     */
                    uint64_t GetMethod() const;

                    /**
                     * 设置漏洞检测方法 0 - 版本比对, 1 - POC验证
                     * @param _method 漏洞检测方法 0 - 版本比对, 1 - POC验证
                     * 
                     */
                    void SetMethod(const uint64_t& _method);

                    /**
                     * 判断参数 Method 是否已赋值
                     * @return Method 是否已赋值
                     * 
                     */
                    bool MethodHasBeenSet() const;

                    /**
                     * 获取漏洞攻击热度
                     * @return AttackLevel 漏洞攻击热度
                     * 
                     */
                    uint64_t GetAttackLevel() const;

                    /**
                     * 设置漏洞攻击热度
                     * @param _attackLevel 漏洞攻击热度
                     * 
                     */
                    void SetAttackLevel(const uint64_t& _attackLevel);

                    /**
                     * 判断参数 AttackLevel 是否已赋值
                     * @return AttackLevel 是否已赋值
                     * 
                     */
                    bool AttackLevelHasBeenSet() const;

                    /**
                     * 获取漏洞是否支持自动修复
0-Windows/Linux均关闭; 1-Windows/Linux均打开; 2-仅Linux; 3-仅Windows
                     * @return FixSwitch 漏洞是否支持自动修复
0-Windows/Linux均关闭; 1-Windows/Linux均打开; 2-仅Linux; 3-仅Windows
                     * 
                     */
                    uint64_t GetFixSwitch() const;

                    /**
                     * 设置漏洞是否支持自动修复
0-Windows/Linux均关闭; 1-Windows/Linux均打开; 2-仅Linux; 3-仅Windows
                     * @param _fixSwitch 漏洞是否支持自动修复
0-Windows/Linux均关闭; 1-Windows/Linux均打开; 2-仅Linux; 3-仅Windows
                     * 
                     */
                    void SetFixSwitch(const uint64_t& _fixSwitch);

                    /**
                     * 判断参数 FixSwitch 是否已赋值
                     * @return FixSwitch 是否已赋值
                     * 
                     */
                    bool FixSwitchHasBeenSet() const;

                    /**
                     * 获取漏洞是否支持防御
0:不支持 1:支持
                     * @return SupportDefense 漏洞是否支持防御
0:不支持 1:支持
                     * 
                     */
                    uint64_t GetSupportDefense() const;

                    /**
                     * 设置漏洞是否支持防御
0:不支持 1:支持
                     * @param _supportDefense 漏洞是否支持防御
0:不支持 1:支持
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
                     * 发布时间
                     */
                    std::string m_publishDate;
                    bool m_publishDateHasBeenSet;

                    /**
                     * 漏洞检测方法 0 - 版本比对, 1 - POC验证
                     */
                    uint64_t m_method;
                    bool m_methodHasBeenSet;

                    /**
                     * 漏洞攻击热度
                     */
                    uint64_t m_attackLevel;
                    bool m_attackLevelHasBeenSet;

                    /**
                     * 漏洞是否支持自动修复
0-Windows/Linux均关闭; 1-Windows/Linux均打开; 2-仅Linux; 3-仅Windows
                     */
                    uint64_t m_fixSwitch;
                    bool m_fixSwitchHasBeenSet;

                    /**
                     * 漏洞是否支持防御
0:不支持 1:支持
                     */
                    uint64_t m_supportDefense;
                    bool m_supportDefenseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULSTORELISTINFO_H_
