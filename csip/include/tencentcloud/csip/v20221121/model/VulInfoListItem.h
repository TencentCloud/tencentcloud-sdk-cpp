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

#ifndef TENCENTCLOUD_CSIP_V20221121_MODEL_VULINFOLISTITEM_H_
#define TENCENTCLOUD_CSIP_V20221121_MODEL_VULINFOLISTITEM_H_

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
                * 漏洞情报数据
                */
                class VulInfoListItem : public AbstractModel
                {
                public:
                    VulInfoListItem();
                    ~VulInfoListItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取风险等级
high 高危/ middle 中危 / low 低危 /info 提示
                     * @return Level 风险等级
high 高危/ middle 中危 / low 低危 /info 提示
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置风险等级
high 高危/ middle 中危 / low 低危 /info 提示
                     * @param _level 风险等级
high 高危/ middle 中危 / low 低危 /info 提示
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
                     * 获取漏洞披露时间
                     * @return SubmitTime 漏洞披露时间
                     * 
                     */
                    std::string GetSubmitTime() const;

                    /**
                     * 设置漏洞披露时间
                     * @param _submitTime 漏洞披露时间
                     * 
                     */
                    void SetSubmitTime(const std::string& _submitTime);

                    /**
                     * 判断参数 SubmitTime 是否已赋值
                     * @return SubmitTime 是否已赋值
                     * 
                     */
                    bool SubmitTimeHasBeenSet() const;

                    /**
                     * 获取漏洞名
                     * @return VULName 漏洞名
                     * 
                     */
                    std::string GetVULName() const;

                    /**
                     * 设置漏洞名
                     * @param _vULName 漏洞名
                     * 
                     */
                    void SetVULName(const std::string& _vULName);

                    /**
                     * 判断参数 VULName 是否已赋值
                     * @return VULName 是否已赋值
                     * 
                     */
                    bool VULNameHasBeenSet() const;

                    /**
                     * 获取cveID/tvdID/ssvid
                     * @return VULID cveID/tvdID/ssvid
                     * 
                     */
                    std::string GetVULID() const;

                    /**
                     * 设置cveID/tvdID/ssvid
                     * @param _vULID cveID/tvdID/ssvid
                     * 
                     */
                    void SetVULID(const std::string& _vULID);

                    /**
                     * 判断参数 VULID 是否已赋值
                     * @return VULID 是否已赋值
                     * 
                     */
                    bool VULIDHasBeenSet() const;

                private:

                    /**
                     * 风险等级
high 高危/ middle 中危 / low 低危 /info 提示
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 漏洞披露时间
                     */
                    std::string m_submitTime;
                    bool m_submitTimeHasBeenSet;

                    /**
                     * 漏洞名
                     */
                    std::string m_vULName;
                    bool m_vULNameHasBeenSet;

                    /**
                     * cveID/tvdID/ssvid
                     */
                    std::string m_vULID;
                    bool m_vULIDHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CSIP_V20221121_MODEL_VULINFOLISTITEM_H_
