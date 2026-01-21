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
                     * 获取应用名称，长度限制：40个字符。
                     * @return Name 应用名称，长度限制：40个字符。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置应用名称，长度限制：40个字符。
                     * @param _name 应用名称，长度限制：40个字符。
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
                     * 获取应用简介，长度限制： 300个字符。不填则应用简介默认为空。
                     * @return Description 应用简介，长度限制： 300个字符。不填则应用简介默认为空。
                     * 
                     */
                    std::string GetDescription() const;

                    /**
                     * 设置应用简介，长度限制： 300个字符。不填则应用简介默认为空。
                     * @param _description 应用简介，长度限制： 300个字符。不填则应用简介默认为空。
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
                     * 获取应用类型， 取值有：<li>AllInOne：一体化；</li><li>Professional：专业版。</li>默认值为 AllInOne。
                     * @return Type 应用类型， 取值有：<li>AllInOne：一体化；</li><li>Professional：专业版。</li>默认值为 AllInOne。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置应用类型， 取值有：<li>AllInOne：一体化；</li><li>Professional：专业版。</li>默认值为 AllInOne。
                     * @param _type 应用类型， 取值有：<li>AllInOne：一体化；</li><li>Professional：专业版。</li>默认值为 AllInOne。
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
                     * 获取此应用的模式，可选值为：
- fileid：仅FileID模式
- fileid+path：FileID & Path模式
留空时默认选择仅FileID模式
                     * @return Mode 此应用的模式，可选值为：
- fileid：仅FileID模式
- fileid+path：FileID & Path模式
留空时默认选择仅FileID模式
                     * 
                     */
                    std::string GetMode() const;

                    /**
                     * 设置此应用的模式，可选值为：
- fileid：仅FileID模式
- fileid+path：FileID & Path模式
留空时默认选择仅FileID模式
                     * @param _mode 此应用的模式，可选值为：
- fileid：仅FileID模式
- fileid+path：FileID & Path模式
留空时默认选择仅FileID模式
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
                     * 获取存储地域
                     * @return StorageRegion 存储地域
                     * 
                     */
                    std::string GetStorageRegion() const;

                    /**
                     * 设置存储地域
                     * @param _storageRegion 存储地域
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
                     * 获取此应用需要绑定的tag
                     * @return Tags 此应用需要绑定的tag
                     * 
                     */
                    std::vector<ResourceTag> GetTags() const;

                    /**
                     * 设置此应用需要绑定的tag
                     * @param _tags 此应用需要绑定的tag
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
                     * 应用名称，长度限制：40个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 应用简介，长度限制： 300个字符。不填则应用简介默认为空。
                     */
                    std::string m_description;
                    bool m_descriptionHasBeenSet;

                    /**
                     * 应用类型， 取值有：<li>AllInOne：一体化；</li><li>Professional：专业版。</li>默认值为 AllInOne。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 此应用的模式，可选值为：
- fileid：仅FileID模式
- fileid+path：FileID & Path模式
留空时默认选择仅FileID模式
                     */
                    std::string m_mode;
                    bool m_modeHasBeenSet;

                    /**
                     * 存储地域
                     */
                    std::string m_storageRegion;
                    bool m_storageRegionHasBeenSet;

                    /**
                     * 此应用需要绑定的tag
                     */
                    std::vector<ResourceTag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_VOD_V20180717_MODEL_CREATESUBAPPIDREQUEST_H_
