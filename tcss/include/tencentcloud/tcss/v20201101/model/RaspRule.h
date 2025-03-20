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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_RASPRULE_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_RASPRULE_H_

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
                * rasp白名单规则
                */
                class RaspRule : public AbstractModel
                {
                public:
                    RaspRule();
                    ~RaspRule() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取规则ID
                     * @return Id 规则ID
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置规则ID
                     * @param _id 规则ID
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
                     * 获取自定义请求url范围正则表达式，为空则保存不成功
                     * @return URLRegexp 自定义请求url范围正则表达式，为空则保存不成功
                     * 
                     */
                    std::string GetURLRegexp() const;

                    /**
                     * 设置自定义请求url范围正则表达式，为空则保存不成功
                     * @param _uRLRegexp 自定义请求url范围正则表达式，为空则保存不成功
                     * 
                     */
                    void SetURLRegexp(const std::string& _uRLRegexp);

                    /**
                     * 判断参数 URLRegexp 是否已赋值
                     * @return URLRegexp 是否已赋值
                     * 
                     */
                    bool URLRegexpHasBeenSet() const;

                    /**
                     * 获取漏洞id
                     * @return VulVulsID 漏洞id
                     * 
                     */
                    uint64_t GetVulVulsID() const;

                    /**
                     * 设置漏洞id
                     * @param _vulVulsID 漏洞id
                     * 
                     */
                    void SetVulVulsID(const uint64_t& _vulVulsID);

                    /**
                     * 判断参数 VulVulsID 是否已赋值
                     * @return VulVulsID 是否已赋值
                     * 
                     */
                    bool VulVulsIDHasBeenSet() const;

                    /**
                     * 获取漏洞名称
                     * @return VulVulsName 漏洞名称
                     * 
                     */
                    std::string GetVulVulsName() const;

                    /**
                     * 设置漏洞名称
                     * @param _vulVulsName 漏洞名称
                     * 
                     */
                    void SetVulVulsName(const std::string& _vulVulsName);

                    /**
                     * 判断参数 VulVulsName 是否已赋值
                     * @return VulVulsName 是否已赋值
                     * 
                     */
                    bool VulVulsNameHasBeenSet() const;

                    /**
                     * 获取cve_id
                     * @return CveID cve_id
                     * 
                     */
                    std::string GetCveID() const;

                    /**
                     * 设置cve_id
                     * @param _cveID cve_id
                     * 
                     */
                    void SetCveID(const std::string& _cveID);

                    /**
                     * 判断参数 CveID 是否已赋值
                     * @return CveID 是否已赋值
                     * 
                     */
                    bool CveIDHasBeenSet() const;

                    /**
                     * 获取漏洞防御类型，从漏洞表富化， 1:支持组件漏洞防御，组件漏洞没有正则加白。2:支持正则防御
                     * @return SupportDefense 漏洞防御类型，从漏洞表富化， 1:支持组件漏洞防御，组件漏洞没有正则加白。2:支持正则防御
                     * 
                     */
                    uint64_t GetSupportDefense() const;

                    /**
                     * 设置漏洞防御类型，从漏洞表富化， 1:支持组件漏洞防御，组件漏洞没有正则加白。2:支持正则防御
                     * @param _supportDefense 漏洞防御类型，从漏洞表富化， 1:支持组件漏洞防御，组件漏洞没有正则加白。2:支持正则防御
                     * 
                     */
                    void SetSupportDefense(const uint64_t& _supportDefense);

                    /**
                     * 判断参数 SupportDefense 是否已赋值
                     * @return SupportDefense 是否已赋值
                     * 
                     */
                    bool SupportDefenseHasBeenSet() const;

                    /**
                     * 获取加白范围，0:全部请求加白，1:自定义请求范围加白
                     * @return WhiteType 加白范围，0:全部请求加白，1:自定义请求范围加白
                     * 
                     */
                    uint64_t GetWhiteType() const;

                    /**
                     * 设置加白范围，0:全部请求加白，1:自定义请求范围加白
                     * @param _whiteType 加白范围，0:全部请求加白，1:自定义请求范围加白
                     * 
                     */
                    void SetWhiteType(const uint64_t& _whiteType);

                    /**
                     * 判断参数 WhiteType 是否已赋值
                     * @return WhiteType 是否已赋值
                     * 
                     */
                    bool WhiteTypeHasBeenSet() const;

                    /**
                     * 获取状态 0: 有效
                     * @return Status 状态 0: 有效
                     * 
                     */
                    uint64_t GetStatus() const;

                    /**
                     * 设置状态 0: 有效
                     * @param _status 状态 0: 有效
                     * 
                     */
                    void SetStatus(const uint64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取创建时间
                     * @return CreateTime 创建时间
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置创建时间
                     * @param _createTime 创建时间
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifyTime 修改时间
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
                     * @param _modifyTime 修改时间
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * 规则ID
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 自定义请求url范围正则表达式，为空则保存不成功
                     */
                    std::string m_uRLRegexp;
                    bool m_uRLRegexpHasBeenSet;

                    /**
                     * 漏洞id
                     */
                    uint64_t m_vulVulsID;
                    bool m_vulVulsIDHasBeenSet;

                    /**
                     * 漏洞名称
                     */
                    std::string m_vulVulsName;
                    bool m_vulVulsNameHasBeenSet;

                    /**
                     * cve_id
                     */
                    std::string m_cveID;
                    bool m_cveIDHasBeenSet;

                    /**
                     * 漏洞防御类型，从漏洞表富化， 1:支持组件漏洞防御，组件漏洞没有正则加白。2:支持正则防御
                     */
                    uint64_t m_supportDefense;
                    bool m_supportDefenseHasBeenSet;

                    /**
                     * 加白范围，0:全部请求加白，1:自定义请求范围加白
                     */
                    uint64_t m_whiteType;
                    bool m_whiteTypeHasBeenSet;

                    /**
                     * 状态 0: 有效
                     */
                    uint64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * 创建时间
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_RASPRULE_H_
