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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_RELATEVULINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_RELATEVULINFO_H_

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
                * Windows补丁关联的漏洞信息
                */
                class RelateVulInfo : public AbstractModel
                {
                public:
                    RelateVulInfo();
                    ~RelateVulInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取CVEid
                     * @return CveId CVEid
                     * 
                     */
                    std::string GetCveId() const;

                    /**
                     * 设置CVEid
                     * @param _cveId CVEid
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
                     * 获取漏洞名
                     * @return Name 漏洞名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置漏洞名
                     * @param _name 漏洞名
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
                     * 获取漏洞标签
                     * @return Label 漏洞标签
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置漏洞标签
                     * @param _label 漏洞标签
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                    /**
                     * 获取漏洞等级
                     * @return Level 漏洞等级
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置漏洞等级
                     * @param _level 漏洞等级
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
                     * 获取CVSS评分
                     * @return CVSS CVSS评分
                     * 
                     */
                    double GetCVSS() const;

                    /**
                     * 设置CVSS评分
                     * @param _cVSS CVSS评分
                     * 
                     */
                    void SetCVSS(const double& _cVSS);

                    /**
                     * 判断参数 CVSS 是否已赋值
                     * @return CVSS 是否已赋值
                     * 
                     */
                    bool CVSSHasBeenSet() const;

                    /**
                     * 获取漏洞披露时间
                     * @return PublishTime 漏洞披露时间
                     * 
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 设置漏洞披露时间
                     * @param _publishTime 漏洞披露时间
                     * 
                     */
                    void SetPublishTime(const std::string& _publishTime);

                    /**
                     * 判断参数 PublishTime 是否已赋值
                     * @return PublishTime 是否已赋值
                     * 
                     */
                    bool PublishTimeHasBeenSet() const;

                    /**
                     * 获取漏洞id
                     * @return Id 漏洞id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置漏洞id
                     * @param _id 漏洞id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

                private:

                    /**
                     * CVEid
                     */
                    std::string m_cveId;
                    bool m_cveIdHasBeenSet;

                    /**
                     * 漏洞名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 漏洞标签
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 漏洞等级
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * CVSS评分
                     */
                    double m_cVSS;
                    bool m_cVSSHasBeenSet;

                    /**
                     * 漏洞披露时间
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                    /**
                     * 漏洞id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_RELATEVULINFO_H_
