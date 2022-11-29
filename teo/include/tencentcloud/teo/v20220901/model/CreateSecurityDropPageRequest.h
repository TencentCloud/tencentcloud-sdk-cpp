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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CREATESECURITYDROPPAGEREQUEST_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CREATESECURITYDROPPAGEREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CreateSecurityDropPage请求参数结构体
                */
                class CreateSecurityDropPageRequest : public AbstractModel
                {
                public:
                    CreateSecurityDropPageRequest();
                    ~CreateSecurityDropPageRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取站点Id。当使用ZoneId和Entity时可不填写TemplateId，否则必须填写TemplateId。
                     * @return ZoneId 站点Id。当使用ZoneId和Entity时可不填写TemplateId，否则必须填写TemplateId。
                     */
                    std::string GetZoneId() const;

                    /**
                     * 设置站点Id。当使用ZoneId和Entity时可不填写TemplateId，否则必须填写TemplateId。
                     * @param ZoneId 站点Id。当使用ZoneId和Entity时可不填写TemplateId，否则必须填写TemplateId。
                     */
                    void SetZoneId(const std::string& _zoneId);

                    /**
                     * 判断参数 ZoneId 是否已赋值
                     * @return ZoneId 是否已赋值
                     */
                    bool ZoneIdHasBeenSet() const;

                    /**
                     * 获取子域名/应用名。当使用ZoneId和Entity时可不填写TemplateId，否则必须填写TemplateId。
                     * @return Entity 子域名/应用名。当使用ZoneId和Entity时可不填写TemplateId，否则必须填写TemplateId。
                     */
                    std::string GetEntity() const;

                    /**
                     * 设置子域名/应用名。当使用ZoneId和Entity时可不填写TemplateId，否则必须填写TemplateId。
                     * @param Entity 子域名/应用名。当使用ZoneId和Entity时可不填写TemplateId，否则必须填写TemplateId。
                     */
                    void SetEntity(const std::string& _entity);

                    /**
                     * 判断参数 Entity 是否已赋值
                     * @return Entity 是否已赋值
                     */
                    bool EntityHasBeenSet() const;

                    /**
                     * 获取自定义页面的文件名。
                     * @return Name 自定义页面的文件名。
                     */
                    std::string GetName() const;

                    /**
                     * 设置自定义页面的文件名。
                     * @param Name 自定义页面的文件名。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取自定义页面的内容，本字段的内容需要将数据经过urlencode后传入。
                     * @return Content 自定义页面的内容，本字段的内容需要将数据经过urlencode后传入。
                     */
                    std::string GetContent() const;

                    /**
                     * 设置自定义页面的内容，本字段的内容需要将数据经过urlencode后传入。
                     * @param Content 自定义页面的内容，本字段的内容需要将数据经过urlencode后传入。
                     */
                    void SetContent(const std::string& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     */
                    bool ContentHasBeenSet() const;

                    /**
                     * 获取上传的类型，取值有：
<li> file：将页面文件内容进行urlencode编码，填入Content字段；</li>
<li> url：将待上传的url地址进行urlencode编码，填入Content字段，即时下载，内容不会自动更新。</li>
                     * @return Type 上传的类型，取值有：
<li> file：将页面文件内容进行urlencode编码，填入Content字段；</li>
<li> url：将待上传的url地址进行urlencode编码，填入Content字段，即时下载，内容不会自动更新。</li>
                     */
                    std::string GetType() const;

                    /**
                     * 设置上传的类型，取值有：
<li> file：将页面文件内容进行urlencode编码，填入Content字段；</li>
<li> url：将待上传的url地址进行urlencode编码，填入Content字段，即时下载，内容不会自动更新。</li>
                     * @param Type 上传的类型，取值有：
<li> file：将页面文件内容进行urlencode编码，填入Content字段；</li>
<li> url：将待上传的url地址进行urlencode编码，填入Content字段，即时下载，内容不会自动更新。</li>
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取页面所属的模块，取值有：
<li> waf ：托管规则模块；</li>
<li> rate：自定义规则模块。</li>
                     * @return Module 页面所属的模块，取值有：
<li> waf ：托管规则模块；</li>
<li> rate：自定义规则模块。</li>
                     */
                    std::string GetModule() const;

                    /**
                     * 设置页面所属的模块，取值有：
<li> waf ：托管规则模块；</li>
<li> rate：自定义规则模块。</li>
                     * @param Module 页面所属的模块，取值有：
<li> waf ：托管规则模块；</li>
<li> rate：自定义规则模块。</li>
                     */
                    void SetModule(const std::string& _module);

                    /**
                     * 判断参数 Module 是否已赋值
                     * @return Module 是否已赋值
                     */
                    bool ModuleHasBeenSet() const;

                    /**
                     * 获取模板Id。当使用模板Id时可不填ZoneId和Entity，否则必须填写ZoneId和Entity。
                     * @return TemplateId 模板Id。当使用模板Id时可不填ZoneId和Entity，否则必须填写ZoneId和Entity。
                     */
                    std::string GetTemplateId() const;

                    /**
                     * 设置模板Id。当使用模板Id时可不填ZoneId和Entity，否则必须填写ZoneId和Entity。
                     * @param TemplateId 模板Id。当使用模板Id时可不填ZoneId和Entity，否则必须填写ZoneId和Entity。
                     */
                    void SetTemplateId(const std::string& _templateId);

                    /**
                     * 判断参数 TemplateId 是否已赋值
                     * @return TemplateId 是否已赋值
                     */
                    bool TemplateIdHasBeenSet() const;

                private:

                    /**
                     * 站点Id。当使用ZoneId和Entity时可不填写TemplateId，否则必须填写TemplateId。
                     */
                    std::string m_zoneId;
                    bool m_zoneIdHasBeenSet;

                    /**
                     * 子域名/应用名。当使用ZoneId和Entity时可不填写TemplateId，否则必须填写TemplateId。
                     */
                    std::string m_entity;
                    bool m_entityHasBeenSet;

                    /**
                     * 自定义页面的文件名。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 自定义页面的内容，本字段的内容需要将数据经过urlencode后传入。
                     */
                    std::string m_content;
                    bool m_contentHasBeenSet;

                    /**
                     * 上传的类型，取值有：
<li> file：将页面文件内容进行urlencode编码，填入Content字段；</li>
<li> url：将待上传的url地址进行urlencode编码，填入Content字段，即时下载，内容不会自动更新。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 页面所属的模块，取值有：
<li> waf ：托管规则模块；</li>
<li> rate：自定义规则模块。</li>
                     */
                    std::string m_module;
                    bool m_moduleHasBeenSet;

                    /**
                     * 模板Id。当使用模板Id时可不填ZoneId和Entity，否则必须填写ZoneId和Entity。
                     */
                    std::string m_templateId;
                    bool m_templateIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CREATESECURITYDROPPAGEREQUEST_H_
