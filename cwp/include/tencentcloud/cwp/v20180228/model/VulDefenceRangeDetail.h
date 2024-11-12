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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCERANGEDETAIL_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCERANGEDETAIL_H_

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
                * 漏洞防御范围详情
                */
                class VulDefenceRangeDetail : public AbstractModel
                {
                public:
                    VulDefenceRangeDetail();
                    ~VulDefenceRangeDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取标签
                     * @return Label 标签
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置标签
                     * @param _label 标签
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
                     * 获取漏洞级别：  1低危 2中危 3高危 4严重
                     * @return Level 漏洞级别：  1低危 2中危 3高危 4严重
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置漏洞级别：  1低危 2中危 3高危 4严重
                     * @param _level 漏洞级别：  1低危 2中危 3高危 4严重
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
                     * 获取cvss 分数
                     * @return CvssScore cvss 分数
                     * 
                     */
                    double GetCvssScore() const;

                    /**
                     * 设置cvss 分数
                     * @param _cvssScore cvss 分数
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
                     * 获取cve id
                     * @return CveId cve id
                     * 
                     */
                    std::string GetCveId() const;

                    /**
                     * 设置cve id
                     * @param _cveId cve id
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

                    /**
                     * 获取漏洞id
                     * @return VulId 漏洞id
                     * 
                     */
                    int64_t GetVulId() const;

                    /**
                     * 设置漏洞id
                     * @param _vulId 漏洞id
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
                     * 获取状态，0:防御中，1：已加白，指的是在白名单列表中有这个漏洞的，不一定是全局型白名单
                     * @return Status 状态，0:防御中，1：已加白，指的是在白名单列表中有这个漏洞的，不一定是全局型白名单
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置状态，0:防御中，1：已加白，指的是在白名单列表中有这个漏洞的，不一定是全局型白名单
                     * @param _status 状态，0:防御中，1：已加白，指的是在白名单列表中有这个漏洞的，不一定是全局型白名单
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 漏洞名称
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * 标签
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                    /**
                     * 漏洞级别：  1低危 2中危 3高危 4严重
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * cvss 分数
                     */
                    double m_cvssScore;
                    bool m_cvssScoreHasBeenSet;

                    /**
                     * cve id
                     */
                    std::string m_cveId;
                    bool m_cveIdHasBeenSet;

                    /**
                     * 发布时间
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                    /**
                     * 漏洞id
                     */
                    int64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * 状态，0:防御中，1：已加白，指的是在白名单列表中有这个漏洞的，不一定是全局型白名单
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULDEFENCERANGEDETAIL_H_
