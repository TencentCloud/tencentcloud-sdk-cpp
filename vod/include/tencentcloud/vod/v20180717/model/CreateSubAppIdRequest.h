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

#ifndef TENCENTCLOUD_VOD_V20180717_MODEL_CREATESUBAPPIDREQUEST_H_
#define TENCENTCLOUD_VOD_V20180717_MODEL_CREATESUBAPPIDREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/vod/v20180717/model/ResourceTag.h>


namespace TencentCloud
{
    namespace Vod
    {
        namespace V20180717
        {
            namespace Model
            {
                /**
                * CreateSubAppId请求参数结构体
                */
                class CreateSubAppIdRequest : public AbstractModel
                {
                public:
                    CreateSubAppIdRequest();
                    ~CreateSubAppIdRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>应用名称，长度限制：40个字符。</p>
                     * @return Name <p>应用名称，长度限制：40个字符。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>应用名称，长度限制：40个字符。</p>
                     * @param _name <p>应用名称，长度限制：40个字符。</p>
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
                     * 获取<p>应用简介，长度限制： 300个字符。不填则应用简介默认为空。</p>
                     * @return Description <p>应用简介，长度限制： 300个字符。不填则应用简介默认为空。</p>
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置<p>应用简介，长度限制： 300个字符。不填则应用简介默认为空。</p>
                     * @param _description <p>应用简介，长度限制： 300个字符。不填则应用简介默认为空。</p>
                     * 
                     */
                    void SetDescription(const std::string& _description);

                    /**
                     * 判断参数 Description 是否已赋值
                     * @return Description 是否已赋值
                     * 
                     */
                    bool DescriptionHasBeenSet() const;

                    /**
                     * 获取<p>应用类型， 取值有：<li>AllInOne：一体化；</li><li>Professional：专业版。</li>默认值为 AllInOne。</p>
                     * @return Type <p>应用类型， 取值有：<li>AllInOne：一体化；</li><li>Professional：专业版。</li>默认值为 AllInOne。</p>
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置<p>应用类型， 取值有：<li>AllInOne：一体化；</li><li>Professional：专业版。</li>默认值为 AllInOne。</p>
                     * @param _type <p>应用类型， 取值有：<li>AllInOne：一体化；</li><li>Professional：专业版。</li>默认值为 AllInOne。</p>
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取<p>此应用的模式，可选值为：</p><ul><li>fileid：仅FileID模式</li><li>fileid+path：FileID &amp; Path模式<br>留空时默认选择仅FileID模式</li></ul>
                     * @return Mode <p>此应用的模式，可选值为：</p><ul><li>fileid：仅FileID模式</li><li>fileid+path：FileID &amp; Path模式<br>留空时默认选择仅FileID模式</li></ul>
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置<p>此应用的模式，可选值为：</p><ul><li>fileid：仅FileID模式</li><li>fileid+path：FileID &amp; Path模式<br>留空时默认选择仅FileID模式</li></ul>
                     * @param _mode <p>此应用的模式，可选值为：</p><ul><li>fileid：仅FileID模式</li><li>fileid+path：FileID &amp; Path模式<br>留空时默认选择仅FileID模式</li></ul>
                     * 
                     */
                    void SetMode(const std::string& _mode);

                    /**
                     * 判断参数 Mode 是否已赋值
                     * @return Mode 是否已赋值
                     * 
                     */
                    bool ModeHasBeenSet() const;

                    /**
                     * 获取<p>Mode是仅fileid时，用于设置默认存储地域，可选。<br>Mode是fileid+path时，用于指定存储地域，必填。</p><p>取值参考：<a href="https://cloud.tencent.com/document/product/266/9760">已支持地域列表</a></p>
                     * @return StorageRegion <p>Mode是仅fileid时，用于设置默认存储地域，可选。<br>Mode是fileid+path时，用于指定存储地域，必填。</p><p>取值参考：<a href="https://cloud.tencent.com/document/product/266/9760">已支持地域列表</a></p>
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置<p>Mode是仅fileid时，用于设置默认存储地域，可选。<br>Mode是fileid+path时，用于指定存储地域，必填。</p><p>取值参考：<a href="https://cloud.tencent.com/document/product/266/9760">已支持地域列表</a></p>
                     * @param _storageRegion <p>Mode是仅fileid时，用于设置默认存储地域，可选。<br>Mode是fileid+path时，用于指定存储地域，必填。</p><p>取值参考：<a href="https://cloud.tencent.com/document/product/266/9760">已支持地域列表</a></p>
                     * 
                     */
                    void SetStorageRegion(const std::string& _storageRegion);

                    /**
                     * 判断参数 StorageRegion 是否已赋值
                     * @return StorageRegion 是否已赋值
                     * 
                     */
                    bool StorageRegionHasBeenSet() const;

                    /**
                     * 获取<p>此应用需要绑定的tag</p>
                     * @return Tags <p>此应用需要绑定的tag</p>
                     * 
                     */
                    std::vector<ResourceTag> GetTags() const;

                    /**
                     * 设置<p>此应用需要绑定的tag</p>
                     * @param _tags <p>此应用需要绑定的tag</p>
                     * 
                     */
                    void SetTags(const std::vector<ResourceTag>& _tags);

                    /**
                     * 判断参数 Tags 是否已赋值
                     * @return Tags 是否已赋值
                     * 
                     */
                    bool TagsHasBeenSet() const;

                private:

                    /**
                     * <p>应用名称，长度限制：40个字符。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>应用简介，长度限制： 300个字符。不填则应用简介默认为空。</p>
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * <p>应用类型， 取值有：<li>AllInOne：一体化；</li><li>Professional：专业版。</li>默认值为 AllInOne。</p>
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * <p>此应用的模式，可选值为：</p><ul><li>fileid：仅FileID模式</li><li>fileid+path：FileID &amp; Path模式<br>留空时默认选择仅FileID模式</li></ul>
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * <p>Mode是仅fileid时，用于设置默认存储地域，可选。<br>Mode是fileid+path时，用于指定存储地域，必填。</p><p>取值参考：<a href="https://cloud.tencent.com/document/product/266/9760">已支持地域列表</a></p>
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * <p>此应用需要绑定的tag</p>
                     */
                    std::vector<ResourceTag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATESUBAPPIDREQUEST_H_
