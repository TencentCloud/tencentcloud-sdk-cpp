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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_VULTOPRANKINGINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_VULTOPRANKINGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tcss
    {
        namespace V20201101
        {
            namespace Model
            {
                /**
                * 漏洞Top排名信息
                */
                class VulTopRankingInfo : public AbstractModel
                {
                public:
                    VulTopRankingInfo();
                    ~VulTopRankingInfo() = default;
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
                     * 获取威胁等级,CRITICAL:严重 HIGH:高/MIDDLE:中/LOW:低
                     * @return Level 威胁等级,CRITICAL:严重 HIGH:高/MIDDLE:中/LOW:低
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置威胁等级,CRITICAL:严重 HIGH:高/MIDDLE:中/LOW:低
                     * @param _level 威胁等级,CRITICAL:严重 HIGH:高/MIDDLE:中/LOW:低
                     * 
                     */
                    void SetLevel(const std::string& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     * 
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取影响的镜像数
                     * @return AffectedImageCount 影响的镜像数
                     * 
                     */
                    int64_t GetAffectedImageCount() const;

                    /**
                     * 设置影响的镜像数
                     * @param _affectedImageCount 影响的镜像数
                     * 
                     */
                    void SetAffectedImageCount(const int64_t& _affectedImageCount);

                    /**
                     * 判断参数 AffectedImageCount 是否已赋值
                     * @return AffectedImageCount 是否已赋值
                     * 
                     */
                    bool AffectedImageCountHasBeenSet() const;

                    /**
                     * 获取影响的容器数
                     * @return AffectedContainerCount 影响的容器数
                     * 
                     */
                    int64_t GetAffectedContainerCount() const;

                    /**
                     * 设置影响的容器数
                     * @param _affectedContainerCount 影响的容器数
                     * 
                     */
                    void SetAffectedContainerCount(const int64_t& _affectedContainerCount);

                    /**
                     * 判断参数 AffectedContainerCount 是否已赋值
                     * @return AffectedContainerCount 是否已赋值
                     * 
                     */
                    bool AffectedContainerCountHasBeenSet() const;

                    /**
                     * 获取漏洞ID
                     * @return ID 漏洞ID
                     * 
                     */
                    int64_t GetID() const;

                    /**
                     * 设置漏洞ID
                     * @param _iD 漏洞ID
                     * 
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     * 
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取漏洞PocID
                     * @return PocID 漏洞PocID
                     * 
                     */
                    std::string GetPocID() const;

                    /**
                     * 设置漏洞PocID
                     * @param _pocID 漏洞PocID
                     * 
                     */
                    void SetPocID(const std::string& _pocID);

                    /**
                     * 判断参数 PocID 是否已赋值
                     * @return PocID 是否已赋值
                     * 
                     */
                    bool PocIDHasBeenSet() const;

                private:

                    /**
                     * 漏洞名称
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * 威胁等级,CRITICAL:严重 HIGH:高/MIDDLE:中/LOW:低
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 影响的镜像数
                     */
                    int64_t m_affectedImageCount;
                    bool m_affectedImageCountHasBeenSet;

                    /**
                     * 影响的容器数
                     */
                    int64_t m_affectedContainerCount;
                    bool m_affectedContainerCountHasBeenSet;

                    /**
                     * 漏洞ID
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 漏洞PocID
                     */
                    std::string m_pocID;
                    bool m_pocIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_VULTOPRANKINGINFO_H_
