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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_SCREENVULINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_SCREENVULINFO_H_

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
                * 大屏漏洞列表
                */
                class ScreenVulInfo : public AbstractModel
                {
                public:
                    ScreenVulInfo();
                    ~ScreenVulInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取漏洞事件id
                     * @return Id 漏洞事件id
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置漏洞事件id
                     * @param _id 漏洞事件id
                     * 
                     */
                    void SetId(const uint64_t& _id);

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     * 
                     */
                    bool IdHasBeenSet() const;

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
                     * 获取最后检测时间
                     * @return LastTime 最后检测时间
                     * 
                     */
                    std::string GetLastTime() const;

                    /**
                     * 设置最后检测时间
                     * @param _lastTime 最后检测时间
                     * 
                     */
                    void SetLastTime(const std::string& _lastTime);

                    /**
                     * 判断参数 LastTime 是否已赋值
                     * @return LastTime 是否已赋值
                     * 
                     */
                    bool LastTimeHasBeenSet() const;

                    /**
                     * 获取漏洞等级 1:低 2:中 3:高 4:提示
                     * @return Level 漏洞等级 1:低 2:中 3:高 4:提示
                     * 
                     */
                    uint64_t GetLevel() const;

                    /**
                     * 设置漏洞等级 1:低 2:中 3:高 4:提示
                     * @param _level 漏洞等级 1:低 2:中 3:高 4:提示
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
                     * 获取漏洞类型 1: web-cms漏洞, 2:应用漏洞, 4: Linux软件漏洞, 5: Windows系统漏洞
                     * @return Category 漏洞类型 1: web-cms漏洞, 2:应用漏洞, 4: Linux软件漏洞, 5: Windows系统漏洞
                     * 
                     */
                    uint64_t GetCategory() const;

                    /**
                     * 设置漏洞类型 1: web-cms漏洞, 2:应用漏洞, 4: Linux软件漏洞, 5: Windows系统漏洞
                     * @param _category 漏洞类型 1: web-cms漏洞, 2:应用漏洞, 4: Linux软件漏洞, 5: Windows系统漏洞
                     * 
                     */
                    void SetCategory(const uint64_t& _category);

                    /**
                     * 判断参数 Category 是否已赋值
                     * @return Category 是否已赋值
                     * 
                     */
                    bool CategoryHasBeenSet() const;

                    /**
                     * 获取主机UUID
                     * @return Uuid 主机UUID
                     * 
                     */
                    std::string GetUuid() const;

                    /**
                     * 设置主机UUID
                     * @param _uuid 主机UUID
                     * 
                     */
                    void SetUuid(const std::string& _uuid);

                    /**
                     * 判断参数 Uuid 是否已赋值
                     * @return Uuid 是否已赋值
                     * 
                     */
                    bool UuidHasBeenSet() const;

                private:

                    /**
                     * 漏洞事件id
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 漏洞名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 漏洞id
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * 最后检测时间
                     */
                    std::string m_lastTime;
                    bool m_lastTimeHasBeenSet;

                    /**
                     * 漏洞等级 1:低 2:中 3:高 4:提示
                     */
                    uint64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 漏洞类型 1: web-cms漏洞, 2:应用漏洞, 4: Linux软件漏洞, 5: Windows系统漏洞
                     */
                    uint64_t m_category;
                    bool m_categoryHasBeenSet;

                    /**
                     * 主机UUID
                     */
                    std::string m_uuid;
                    bool m_uuidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_SCREENVULINFO_H_
