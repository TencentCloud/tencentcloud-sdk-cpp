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

#ifndef TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINCREATEINFO_H_
#define TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINCREATEINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dnspod
    {
        namespace V20210323
        {
            namespace Model
            {
                /**
                * 域名信息（创建域名时返回）
                */
                class DomainCreateInfo : public AbstractModel
                {
                public:
                    DomainCreateInfo();
                    ~DomainCreateInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取域名ID
                     * @return Id 域名ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置域名ID
                     * @param _id 域名ID
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
                     * 获取域名
                     * @return Domain 域名
                     * 
                     */
                    std::string GetDomain() const;

                    /**
                     * 设置域名
                     * @param _domain 域名
                     * 
                     */
                    void SetDomain(const std::string& _domain);

                    /**
                     * 判断参数 Domain 是否已赋值
                     * @return Domain 是否已赋值
                     * 
                     */
                    bool DomainHasBeenSet() const;

                    /**
                     * 获取域名的punycode
                     * @return Punycode 域名的punycode
                     * 
                     */
                    std::string GetPunycode() const;

                    /**
                     * 设置域名的punycode
                     * @param _punycode 域名的punycode
                     * 
                     */
                    void SetPunycode(const std::string& _punycode);

                    /**
                     * 判断参数 Punycode 是否已赋值
                     * @return Punycode 是否已赋值
                     * 
                     */
                    bool PunycodeHasBeenSet() const;

                    /**
                     * 获取域名的NS列表
                     * @return GradeNsList 域名的NS列表
                     * 
                     */
                    std::vector<std::string> GetGradeNsList() const;

                    /**
                     * 设置域名的NS列表
                     * @param _gradeNsList 域名的NS列表
                     * 
                     */
                    void SetGradeNsList(const std::vector<std::string>& _gradeNsList);

                    /**
                     * 判断参数 GradeNsList 是否已赋值
                     * @return GradeNsList 是否已赋值
                     * 
                     */
                    bool GradeNsListHasBeenSet() const;

                private:

                    /**
                     * 域名ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 域名
                     */
                    std::string m_domain;
                    bool m_domainHasBeenSet;

                    /**
                     * 域名的punycode
                     */
                    std::string m_punycode;
                    bool m_punycodeHasBeenSet;

                    /**
                     * 域名的NS列表
                     */
                    std::vector<std::string> m_gradeNsList;
                    bool m_gradeNsListHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DNSPOD_V20210323_MODEL_DOMAINCREATEINFO_H_
