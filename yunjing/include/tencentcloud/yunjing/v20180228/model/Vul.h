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

#ifndef TENCENTCLOUD_YUNJING_V20180228_MODEL_VUL_H_
#define TENCENTCLOUD_YUNJING_V20180228_MODEL_VUL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Yunjing
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 漏洞列表数据
                */
                class Vul : public AbstractModel
                {
                public:
                    Vul();
                    ~Vul() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取漏洞种类ID
                     * @return VulId 漏洞种类ID
                     * 
                     */
                    uint64_t GetVulId() const;

                    /**
                     * 设置漏洞种类ID
                     * @param _vulId 漏洞种类ID
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
                     * 获取漏洞危害等级:
HIGH：高危
MIDDLE：中危
LOW：低危
NOTICE：提示
                     * @return VulLevel 漏洞危害等级:
HIGH：高危
MIDDLE：中危
LOW：低危
NOTICE：提示
                     * 
                     */
                    std::string GetVulLevel() const;

                    /**
                     * 设置漏洞危害等级:
HIGH：高危
MIDDLE：中危
LOW：低危
NOTICE：提示
                     * @param _vulLevel 漏洞危害等级:
HIGH：高危
MIDDLE：中危
LOW：低危
NOTICE：提示
                     * 
                     */
                    void SetVulLevel(const std::string& _vulLevel);

                    /**
                     * 判断参数 VulLevel 是否已赋值
                     * @return VulLevel 是否已赋值
                     * 
                     */
                    bool VulLevelHasBeenSet() const;

                    /**
                     * 获取最后扫描时间
                     * @return LastScanTime 最后扫描时间
                     * 
                     */
                    std::string GetLastScanTime() const;

                    /**
                     * 设置最后扫描时间
                     * @param _lastScanTime 最后扫描时间
                     * 
                     */
                    void SetLastScanTime(const std::string& _lastScanTime);

                    /**
                     * 判断参数 LastScanTime 是否已赋值
                     * @return LastScanTime 是否已赋值
                     * 
                     */
                    bool LastScanTimeHasBeenSet() const;

                    /**
                     * 获取受影响机器数量
                     * @return ImpactedHostNum 受影响机器数量
                     * 
                     */
                    uint64_t GetImpactedHostNum() const;

                    /**
                     * 设置受影响机器数量
                     * @param _impactedHostNum 受影响机器数量
                     * 
                     */
                    void SetImpactedHostNum(const uint64_t& _impactedHostNum);

                    /**
                     * 判断参数 ImpactedHostNum 是否已赋值
                     * @return ImpactedHostNum 是否已赋值
                     * 
                     */
                    bool ImpactedHostNumHasBeenSet() const;

                    /**
                     * 获取漏洞状态
* UN_OPERATED : 待处理
* FIXED : 已修复
                     * @return VulStatus 漏洞状态
* UN_OPERATED : 待处理
* FIXED : 已修复
                     * 
                     */
                    std::string GetVulStatus() const;

                    /**
                     * 设置漏洞状态
* UN_OPERATED : 待处理
* FIXED : 已修复
                     * @param _vulStatus 漏洞状态
* UN_OPERATED : 待处理
* FIXED : 已修复
                     * 
                     */
                    void SetVulStatus(const std::string& _vulStatus);

                    /**
                     * 判断参数 VulStatus 是否已赋值
                     * @return VulStatus 是否已赋值
                     * 
                     */
                    bool VulStatusHasBeenSet() const;

                private:

                    /**
                     * 漏洞种类ID
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * 漏洞名称
                     */
                    std::string m_vulName;
                    bool m_vulNameHasBeenSet;

                    /**
                     * 漏洞危害等级:
HIGH：高危
MIDDLE：中危
LOW：低危
NOTICE：提示
                     */
                    std::string m_vulLevel;
                    bool m_vulLevelHasBeenSet;

                    /**
                     * 最后扫描时间
                     */
                    std::string m_lastScanTime;
                    bool m_lastScanTimeHasBeenSet;

                    /**
                     * 受影响机器数量
                     */
                    uint64_t m_impactedHostNum;
                    bool m_impactedHostNumHasBeenSet;

                    /**
                     * 漏洞状态
* UN_OPERATED : 待处理
* FIXED : 已修复
                     */
                    std::string m_vulStatus;
                    bool m_vulStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YUNJING_V20180228_MODEL_VUL_H_
