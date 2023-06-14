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

#ifndef TENCENTCLOUD_CWS_V20180312_MODEL_VUL_H_
#define TENCENTCLOUD_CWS_V20180312_MODEL_VUL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cws
    {
        namespace V20180312
        {
            namespace Model
            {
                /**
                * 漏洞数据
                */
                class Vul : public AbstractModel
                {
                public:
                    Vul();
                    ~Vul() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取漏洞ID。
                     * @return Id 漏洞ID。
                     * 
                     */
                    uint64_t GetId() const;

                    /**
                     * 设置漏洞ID。
                     * @param _id 漏洞ID。
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
                     * 获取站点ID。
                     * @return SiteId 站点ID。
                     * 
                     */
                    uint64_t GetSiteId() const;

                    /**
                     * 设置站点ID。
                     * @param _siteId 站点ID。
                     * 
                     */
                    void SetSiteId(const uint64_t& _siteId);

                    /**
                     * 判断参数 SiteId 是否已赋值
                     * @return SiteId 是否已赋值
                     * 
                     */
                    bool SiteIdHasBeenSet() const;

                    /**
                     * 获取扫描引擎的扫描任务ID。
                     * @return TaskId 扫描引擎的扫描任务ID。
                     * 
                     */
                    uint64_t GetTaskId() const;

                    /**
                     * 设置扫描引擎的扫描任务ID。
                     * @param _taskId 扫描引擎的扫描任务ID。
                     * 
                     */
                    void SetTaskId(const uint64_t& _taskId);

                    /**
                     * 判断参数 TaskId 是否已赋值
                     * @return TaskId 是否已赋值
                     * 
                     */
                    bool TaskIdHasBeenSet() const;

                    /**
                     * 获取漏洞级别：high、middle、low、notice。
                     * @return Level 漏洞级别：high、middle、low、notice。
                     * 
                     */
                    std::string GetLevel() const;

                    /**
                     * 设置漏洞级别：high、middle、low、notice。
                     * @param _level 漏洞级别：high、middle、low、notice。
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
                     * 获取漏洞名称。
                     * @return Name 漏洞名称。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置漏洞名称。
                     * @param _name 漏洞名称。
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
                     * 获取出现漏洞的url。
                     * @return Url 出现漏洞的url。
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置出现漏洞的url。
                     * @param _url 出现漏洞的url。
                     * 
                     */
                    void SetUrl(const std::string& _url);

                    /**
                     * 判断参数 Url 是否已赋值
                     * @return Url 是否已赋值
                     * 
                     */
                    bool UrlHasBeenSet() const;

                    /**
                     * 获取网址/细节。
                     * @return Html 网址/细节。
                     * 
                     */
                    std::string GetHtml() const;

                    /**
                     * 设置网址/细节。
                     * @param _html 网址/细节。
                     * 
                     */
                    void SetHtml(const std::string& _html);

                    /**
                     * 判断参数 Html 是否已赋值
                     * @return Html 是否已赋值
                     * 
                     */
                    bool HtmlHasBeenSet() const;

                    /**
                     * 获取漏洞类型。
                     * @return Nickname 漏洞类型。
                     * 
                     */
                    std::string GetNickname() const;

                    /**
                     * 设置漏洞类型。
                     * @param _nickname 漏洞类型。
                     * 
                     */
                    void SetNickname(const std::string& _nickname);

                    /**
                     * 判断参数 Nickname 是否已赋值
                     * @return Nickname 是否已赋值
                     * 
                     */
                    bool NicknameHasBeenSet() const;

                    /**
                     * 获取危害说明。
                     * @return Harm 危害说明。
                     * 
                     */
                    std::string GetHarm() const;

                    /**
                     * 设置危害说明。
                     * @param _harm 危害说明。
                     * 
                     */
                    void SetHarm(const std::string& _harm);

                    /**
                     * 判断参数 Harm 是否已赋值
                     * @return Harm 是否已赋值
                     * 
                     */
                    bool HarmHasBeenSet() const;

                    /**
                     * 获取漏洞描述。
                     * @return Describe 漏洞描述。
                     * 
                     */
                    std::string GetDescribe() const;

                    /**
                     * 设置漏洞描述。
                     * @param _describe 漏洞描述。
                     * 
                     */
                    void SetDescribe(const std::string& _describe);

                    /**
                     * 判断参数 Describe 是否已赋值
                     * @return Describe 是否已赋值
                     * 
                     */
                    bool DescribeHasBeenSet() const;

                    /**
                     * 获取解决方案。
                     * @return Solution 解决方案。
                     * 
                     */
                    std::string GetSolution() const;

                    /**
                     * 设置解决方案。
                     * @param _solution 解决方案。
                     * 
                     */
                    void SetSolution(const std::string& _solution);

                    /**
                     * 判断参数 Solution 是否已赋值
                     * @return Solution 是否已赋值
                     * 
                     */
                    bool SolutionHasBeenSet() const;

                    /**
                     * 获取漏洞参考。
                     * @return From 漏洞参考。
                     * 
                     */
                    std::string GetFrom() const;

                    /**
                     * 设置漏洞参考。
                     * @param _from 漏洞参考。
                     * 
                     */
                    void SetFrom(const std::string& _from);

                    /**
                     * 判断参数 From 是否已赋值
                     * @return From 是否已赋值
                     * 
                     */
                    bool FromHasBeenSet() const;

                    /**
                     * 获取漏洞通过该参数攻击。
                     * @return Parameter 漏洞通过该参数攻击。
                     * 
                     */
                    std::string GetParameter() const;

                    /**
                     * 设置漏洞通过该参数攻击。
                     * @param _parameter 漏洞通过该参数攻击。
                     * 
                     */
                    void SetParameter(const std::string& _parameter);

                    /**
                     * 判断参数 Parameter 是否已赋值
                     * @return Parameter 是否已赋值
                     * 
                     */
                    bool ParameterHasBeenSet() const;

                    /**
                     * 获取CreatedAt。
                     * @return CreatedAt CreatedAt。
                     * 
                     */
                    std::string GetCreatedAt() const;

                    /**
                     * 设置CreatedAt。
                     * @param _createdAt CreatedAt。
                     * 
                     */
                    void SetCreatedAt(const std::string& _createdAt);

                    /**
                     * 判断参数 CreatedAt 是否已赋值
                     * @return CreatedAt 是否已赋值
                     * 
                     */
                    bool CreatedAtHasBeenSet() const;

                    /**
                     * 获取UpdatedAt。
                     * @return UpdatedAt UpdatedAt。
                     * 
                     */
                    std::string GetUpdatedAt() const;

                    /**
                     * 设置UpdatedAt。
                     * @param _updatedAt UpdatedAt。
                     * 
                     */
                    void SetUpdatedAt(const std::string& _updatedAt);

                    /**
                     * 判断参数 UpdatedAt 是否已赋值
                     * @return UpdatedAt 是否已赋值
                     * 
                     */
                    bool UpdatedAtHasBeenSet() const;

                    /**
                     * 获取是否已经添加误报，0-否，1-是。
                     * @return IsReported 是否已经添加误报，0-否，1-是。
                     * 
                     */
                    uint64_t GetIsReported() const;

                    /**
                     * 设置是否已经添加误报，0-否，1-是。
                     * @param _isReported 是否已经添加误报，0-否，1-是。
                     * 
                     */
                    void SetIsReported(const uint64_t& _isReported);

                    /**
                     * 判断参数 IsReported 是否已赋值
                     * @return IsReported 是否已赋值
                     * 
                     */
                    bool IsReportedHasBeenSet() const;

                    /**
                     * 获取云用户appid。
                     * @return Appid 云用户appid。
                     * 
                     */
                    uint64_t GetAppid() const;

                    /**
                     * 设置云用户appid。
                     * @param _appid 云用户appid。
                     * 
                     */
                    void SetAppid(const uint64_t& _appid);

                    /**
                     * 判断参数 Appid 是否已赋值
                     * @return Appid 是否已赋值
                     * 
                     */
                    bool AppidHasBeenSet() const;

                    /**
                     * 获取云用户标识。
                     * @return Uin 云用户标识。
                     * 
                     */
                    std::string GetUin() const;

                    /**
                     * 设置云用户标识。
                     * @param _uin 云用户标识。
                     * 
                     */
                    void SetUin(const std::string& _uin);

                    /**
                     * 判断参数 Uin 是否已赋值
                     * @return Uin 是否已赋值
                     * 
                     */
                    bool UinHasBeenSet() const;

                private:

                    /**
                     * 漏洞ID。
                     */
                    uint64_t m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 站点ID。
                     */
                    uint64_t m_siteId;
                    bool m_siteIdHasBeenSet;

                    /**
                     * 扫描引擎的扫描任务ID。
                     */
                    uint64_t m_taskId;
                    bool m_taskIdHasBeenSet;

                    /**
                     * 漏洞级别：high、middle、low、notice。
                     */
                    std::string m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 漏洞名称。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 出现漏洞的url。
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * 网址/细节。
                     */
                    std::string m_html;
                    bool m_htmlHasBeenSet;

                    /**
                     * 漏洞类型。
                     */
                    std::string m_nickname;
                    bool m_nicknameHasBeenSet;

                    /**
                     * 危害说明。
                     */
                    std::string m_harm;
                    bool m_harmHasBeenSet;

                    /**
                     * 漏洞描述。
                     */
                    std::string m_describe;
                    bool m_describeHasBeenSet;

                    /**
                     * 解决方案。
                     */
                    std::string m_solution;
                    bool m_solutionHasBeenSet;

                    /**
                     * 漏洞参考。
                     */
                    std::string m_from;
                    bool m_fromHasBeenSet;

                    /**
                     * 漏洞通过该参数攻击。
                     */
                    std::string m_parameter;
                    bool m_parameterHasBeenSet;

                    /**
                     * CreatedAt。
                     */
                    std::string m_createdAt;
                    bool m_createdAtHasBeenSet;

                    /**
                     * UpdatedAt。
                     */
                    std::string m_updatedAt;
                    bool m_updatedAtHasBeenSet;

                    /**
                     * 是否已经添加误报，0-否，1-是。
                     */
                    uint64_t m_isReported;
                    bool m_isReportedHasBeenSet;

                    /**
                     * 云用户appid。
                     */
                    uint64_t m_appid;
                    bool m_appidHasBeenSet;

                    /**
                     * 云用户标识。
                     */
                    std::string m_uin;
                    bool m_uinHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CWS_V20180312_MODEL_VUL_H_
