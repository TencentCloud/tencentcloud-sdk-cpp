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

#ifndef TENCENTCLOUD_LIVE_V20180801_MODEL_AUDITIMAGE_H_
#define TENCENTCLOUD_LIVE_V20180801_MODEL_AUDITIMAGE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Live
    {
        namespace V20180801
        {
            namespace Model
            {
                /**
                * 向图库提交的图片数据类型。
                */
                class AuditImage : public AbstractModel
                {
                public:
                    AuditImage();
                    ~AuditImage() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>提交的图片顺序索引。</p>
                     * @return Index <p>提交的图片顺序索引。</p>
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置<p>提交的图片顺序索引。</p>
                     * @param _index <p>提交的图片顺序索引。</p>
                     * 
                     */
                    void SetIndex(const std::string& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                    /**
                     * 获取<p>图片地址。</p>
                     * @return Url <p>图片地址。</p>
                     * 
                     */
                    std::string GetUrl() const;

                    /**
                     * 设置<p>图片地址。</p>
                     * @param _url <p>图片地址。</p>
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
                     * 获取<p>图片 md5 值。</p>
                     * @return Md5 <p>图片 md5 值。</p>
                     * 
                     */
                    std::string GetMd5() const;

                    /**
                     * 设置<p>图片 md5 值。</p>
                     * @param _md5 <p>图片 md5 值。</p>
                     * 
                     */
                    void SetMd5(const std::string& _md5);

                    /**
                     * 判断参数 Md5 是否已赋值
                     * @return Md5 是否已赋值
                     * 
                     */
                    bool Md5HasBeenSet() const;

                    /**
                     * 获取<p>图片名称。</p>
                     * @return Name <p>图片名称。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>图片名称。</p>
                     * @param _name <p>图片名称。</p>
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
                     * 获取<p>违规类型。<br>可取值：Normal: 正常 ，Polity: 政治，Porn: 色情，Sexy：性感，Ad: 广告，Illegal: 违法，Abuse: 谩骂，Terror: 暴恐，Spam: 灌水，Moan:呻吟。</p>
                     * @return Label <p>违规类型。<br>可取值：Normal: 正常 ，Polity: 政治，Porn: 色情，Sexy：性感，Ad: 广告，Illegal: 违法，Abuse: 谩骂，Terror: 暴恐，Spam: 灌水，Moan:呻吟。</p>
                     * 
                     */
                    std::string GetLabel() const;

                    /**
                     * 设置<p>违规类型。<br>可取值：Normal: 正常 ，Polity: 政治，Porn: 色情，Sexy：性感，Ad: 广告，Illegal: 违法，Abuse: 谩骂，Terror: 暴恐，Spam: 灌水，Moan:呻吟。</p>
                     * @param _label <p>违规类型。<br>可取值：Normal: 正常 ，Polity: 政治，Porn: 色情，Sexy：性感，Ad: 广告，Illegal: 违法，Abuse: 谩骂，Terror: 暴恐，Spam: 灌水，Moan:呻吟。</p>
                     * 
                     */
                    void SetLabel(const std::string& _label);

                    /**
                     * 判断参数 Label 是否已赋值
                     * @return Label 是否已赋值
                     * 
                     */
                    bool LabelHasBeenSet() const;

                private:

                    /**
                     * <p>提交的图片顺序索引。</p>
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                    /**
                     * <p>图片地址。</p>
                     */
                    std::string m_url;
                    bool m_urlHasBeenSet;

                    /**
                     * <p>图片 md5 值。</p>
                     */
                    std::string m_md5;
                    bool m_md5HasBeenSet;

                    /**
                     * <p>图片名称。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>违规类型。<br>可取值：Normal: 正常 ，Polity: 政治，Porn: 色情，Sexy：性感，Ad: 广告，Illegal: 违法，Abuse: 谩骂，Terror: 暴恐，Spam: 灌水，Moan:呻吟。</p>
                     */
                    std::string m_label;
                    bool m_labelHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LIVE_V20180801_MODEL_AUDITIMAGE_H_
