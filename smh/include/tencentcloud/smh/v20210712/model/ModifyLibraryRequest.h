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

#ifndef TENCENTCLOUD_SMH_V20210712_MODEL_MODIFYLIBRARYREQUEST_H_
#define TENCENTCLOUD_SMH_V20210712_MODEL_MODIFYLIBRARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/smh/v20210712/model/LibraryExtension.h>
#include <tencentcloud/smh/v20210712/model/ResourceTag.h>


namespace TencentCloud
{
    namespace Smh
    {
        namespace V20210712
        {
            namespace Model
            {
                /**
                * ModifyLibrary请求参数结构体
                */
                class ModifyLibraryRequest : public AbstractModel
                {
                public:
                    ModifyLibraryRequest();
                    ~ModifyLibraryRequest() = default;
                    std::string ToJsonString() const;


                    /**
                     * 获取<p>媒体库 ID</p>
                     * @return LibraryId <p>媒体库 ID</p>
                     * 
                     */
                    std::string GetLibraryId() const;

                    /**
                     * 设置<p>媒体库 ID</p>
                     * @param _libraryId <p>媒体库 ID</p>
                     * 
                     */
                    void SetLibraryId(const std::string& _libraryId);

                    /**
                     * 判断参数 LibraryId 是否已赋值
                     * @return LibraryId 是否已赋值
                     * 
                     */
                    bool LibraryIdHasBeenSet() const;

                    /**
                     * 获取<p>媒体库名称，最多 50 个字符。如不传则不修改。</p>
                     * @return Name <p>媒体库名称，最多 50 个字符。如不传则不修改。</p>
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置<p>媒体库名称，最多 50 个字符。如不传则不修改。</p>
                     * @param _name <p>媒体库名称，最多 50 个字符。如不传则不修改。</p>
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
                     * 获取<p>备注，最多 250 个字符。如不传则不修改。</p>
                     * @return Remark <p>备注，最多 250 个字符。如不传则不修改。</p>
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置<p>备注，最多 250 个字符。如不传则不修改。</p>
                     * @param _remark <p>备注，最多 250 个字符。如不传则不修改。</p>
                     * 
                     */
                    void SetRemark(const std::string& _remark);

                    /**
                     * 判断参数 Remark 是否已赋值
                     * @return Remark 是否已赋值
                     * 
                     */
                    bool RemarkHasBeenSet() const;

                    /**
                     * 获取<p>媒体库配置项，部分参数在新建后不可更改，且仅修改传入的参数。如不传该参数则不修改任何配置项。</p>
                     * @return LibraryExtension <p>媒体库配置项，部分参数在新建后不可更改，且仅修改传入的参数。如不传该参数则不修改任何配置项。</p>
                     * 
                     */
                    LibraryExtension GetLibraryExtension() const;

                    /**
                     * 设置<p>媒体库配置项，部分参数在新建后不可更改，且仅修改传入的参数。如不传该参数则不修改任何配置项。</p>
                     * @param _libraryExtension <p>媒体库配置项，部分参数在新建后不可更改，且仅修改传入的参数。如不传该参数则不修改任何配置项。</p>
                     * 
                     */
                    void SetLibraryExtension(const LibraryExtension& _libraryExtension);

                    /**
                     * 判断参数 LibraryExtension 是否已赋值
                     * @return LibraryExtension 是否已赋值
                     * 
                     */
                    bool LibraryExtensionHasBeenSet() const;

                    /**
                     * 获取<p>媒体库标签列表。</p>
                     * @return Tags <p>媒体库标签列表。</p>
                     * 
                     */
                    std::vector<ResourceTag> GetTags() const;

                    /**
                     * 设置<p>媒体库标签列表。</p>
                     * @param _tags <p>媒体库标签列表。</p>
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
                     * <p>媒体库 ID</p>
                     */
                    std::string m_libraryId;
                    bool m_libraryIdHasBeenSet;

                    /**
                     * <p>媒体库名称，最多 50 个字符。如不传则不修改。</p>
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * <p>备注，最多 250 个字符。如不传则不修改。</p>
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * <p>媒体库配置项，部分参数在新建后不可更改，且仅修改传入的参数。如不传该参数则不修改任何配置项。</p>
                     */
                    LibraryExtension m_libraryExtension;
                    bool m_libraryExtensionHasBeenSet;

                    /**
                     * <p>媒体库标签列表。</p>
                     */
                    std::vector<ResourceTag> m_tags;
                    bool m_tagsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_MODIFYLIBRARYREQUEST_H_
