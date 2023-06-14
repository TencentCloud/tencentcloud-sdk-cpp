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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_DROPPAGEDETAIL_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_DROPPAGEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
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
                * 拦截页面的配置信息
                */
                class DropPageDetail : public AbstractModel
                {
                public:
                    DropPageDetail();
                    ~DropPageDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取拦截页面的唯一Id。系统默认包含一个自带拦截页面，Id值为0。
该Id可通过创建拦截页面接口进行上传获取。如传入0，代表使用系统默认拦截页面。
                     * @return PageId 拦截页面的唯一Id。系统默认包含一个自带拦截页面，Id值为0。
该Id可通过创建拦截页面接口进行上传获取。如传入0，代表使用系统默认拦截页面。
                     * 
                     */
                    int64_t GetPageId() const;

                    /**
                     * 设置拦截页面的唯一Id。系统默认包含一个自带拦截页面，Id值为0。
该Id可通过创建拦截页面接口进行上传获取。如传入0，代表使用系统默认拦截页面。
                     * @param _pageId 拦截页面的唯一Id。系统默认包含一个自带拦截页面，Id值为0。
该Id可通过创建拦截页面接口进行上传获取。如传入0，代表使用系统默认拦截页面。
                     * 
                     */
                    void SetPageId(const int64_t& _pageId);

                    /**
                     * 判断参数 PageId 是否已赋值
                     * @return PageId 是否已赋值
                     * 
                     */
                    bool PageIdHasBeenSet() const;

                    /**
                     * 获取拦截页面的HTTP状态码。状态码范围是100-600。
                     * @return StatusCode 拦截页面的HTTP状态码。状态码范围是100-600。
                     * 
                     */
                    int64_t GetStatusCode() const;

                    /**
                     * 设置拦截页面的HTTP状态码。状态码范围是100-600。
                     * @param _statusCode 拦截页面的HTTP状态码。状态码范围是100-600。
                     * 
                     */
                    void SetStatusCode(const int64_t& _statusCode);

                    /**
                     * 判断参数 StatusCode 是否已赋值
                     * @return StatusCode 是否已赋值
                     * 
                     */
                    bool StatusCodeHasBeenSet() const;

                    /**
                     * 获取页面文件名或url。
                     * @return Name 页面文件名或url。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置页面文件名或url。
                     * @param _name 页面文件名或url。
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
                     * 获取页面的类型，取值有：
<li> file：页面文件内容；</li>
<li> url：上传的url地址。</li>
                     * @return Type 页面的类型，取值有：
<li> file：页面文件内容；</li>
<li> url：上传的url地址。</li>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置页面的类型，取值有：
<li> file：页面文件内容；</li>
<li> url：上传的url地址。</li>
                     * @param _type 页面的类型，取值有：
<li> file：页面文件内容；</li>
<li> url：上传的url地址。</li>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 拦截页面的唯一Id。系统默认包含一个自带拦截页面，Id值为0。
该Id可通过创建拦截页面接口进行上传获取。如传入0，代表使用系统默认拦截页面。
                     */
                    int64_t m_pageId;
                    bool m_pageIdHasBeenSet;

                    /**
                     * 拦截页面的HTTP状态码。状态码范围是100-600。
                     */
                    int64_t m_statusCode;
                    bool m_statusCodeHasBeenSet;

                    /**
                     * 页面文件名或url。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 页面的类型，取值有：
<li> file：页面文件内容；</li>
<li> url：上传的url地址。</li>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_DROPPAGEDETAIL_H_
