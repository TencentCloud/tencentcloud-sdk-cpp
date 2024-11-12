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

#ifndef TENCENTCLOUD_CWP_V20180228_MODEL_VULEMERGENTMSGINFO_H_
#define TENCENTCLOUD_CWP_V20180228_MODEL_VULEMERGENTMSGINFO_H_

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
                * 紧急通知实体
                */
                class VulEmergentMsgInfo : public AbstractModel
                {
                public:
                    VulEmergentMsgInfo();
                    ~VulEmergentMsgInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


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
                     * 获取漏洞纰漏时间
                     * @return PublishTime 漏洞纰漏时间
                     * 
                     */
                    std::string GetPublishTime() const;

                    /**
                     * 设置漏洞纰漏时间
                     * @param _publishTime 漏洞纰漏时间
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
                     * 获取漏洞名,英文描述
                     * @return NameEn 漏洞名,英文描述
                     * 
                     */
                    std::string GetNameEn() const;

                    /**
                     * 设置漏洞名,英文描述
                     * @param _nameEn 漏洞名,英文描述
                     * 
                     */
                    void SetNameEn(const std::string& _nameEn);

                    /**
                     * 判断参数 NameEn 是否已赋值
                     * @return NameEn 是否已赋值
                     * 
                     */
                    bool NameEnHasBeenSet() const;

                private:

                    /**
                     * 漏洞id
                     */
                    uint64_t m_vulId;
                    bool m_vulIdHasBeenSet;

                    /**
                     * 漏洞纰漏时间
                     */
                    std::string m_publishTime;
                    bool m_publishTimeHasBeenSet;

                    /**
                     * 漏洞名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 漏洞名,英文描述
                     */
                    std::string m_nameEn;
                    bool m_nameEnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWP_V20180228_MODEL_VULEMERGENTMSGINFO_H_
