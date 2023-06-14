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

#ifndef TENCENTCLOUD_SMH_V20210712_MODEL_MODIFYLIBRARYREQUEST_H_
#define TENCENTCLOUD_SMH_V20210712_MODEL_MODIFYLIBRARYREQUEST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/smh/v20210712/model/LibraryExtension.h>


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
                     * 获取媒体库 ID
                     * @return LibraryId 媒体库 ID
                     * 
                     */
                    std::string GetLibraryId() const;

                    /**
                     * 设置媒体库 ID
                     * @param _libraryId 媒体库 ID
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
                     * 获取媒体库名称，最多 50 个字符。如不传则不修改。
                     * @return Name 媒体库名称，最多 50 个字符。如不传则不修改。
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置媒体库名称，最多 50 个字符。如不传则不修改。
                     * @param _name 媒体库名称，最多 50 个字符。如不传则不修改。
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
                     * 获取备注，最多 250 个字符。如不传则不修改。
                     * @return Remark 备注，最多 250 个字符。如不传则不修改。
                     * 
                     */
                    std::string GetRemark() const;

                    /**
                     * 设置备注，最多 250 个字符。如不传则不修改。
                     * @param _remark 备注，最多 250 个字符。如不传则不修改。
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
                     * 获取媒体库配置项，部分参数在新建后不可更改，且仅修改传入的参数。如不传该参数则不修改任何配置项。
                     * @return LibraryExtension 媒体库配置项，部分参数在新建后不可更改，且仅修改传入的参数。如不传该参数则不修改任何配置项。
                     * 
                     */
                    LibraryExtension GetLibraryExtension() const;

                    /**
                     * 设置媒体库配置项，部分参数在新建后不可更改，且仅修改传入的参数。如不传该参数则不修改任何配置项。
                     * @param _libraryExtension 媒体库配置项，部分参数在新建后不可更改，且仅修改传入的参数。如不传该参数则不修改任何配置项。
                     * 
                     */
                    void SetLibraryExtension(const LibraryExtension& _libraryExtension);

                    /**
                     * 判断参数 LibraryExtension 是否已赋值
                     * @return LibraryExtension 是否已赋值
                     * 
                     */
                    bool LibraryExtensionHasBeenSet() const;

                private:

                    /**
                     * 媒体库 ID
                     */
                    std::string m_libraryId;
                    bool m_libraryIdHasBeenSet;

                    /**
                     * 媒体库名称，最多 50 个字符。如不传则不修改。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 备注，最多 250 个字符。如不传则不修改。
                     */
                    std::string m_remark;
                    bool m_remarkHasBeenSet;

                    /**
                     * 媒体库配置项，部分参数在新建后不可更改，且仅修改传入的参数。如不传该参数则不修改任何配置项。
                     */
                    LibraryExtension m_libraryExtension;
                    bool m_libraryExtensionHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_SMH_V20210712_MODEL_MODIFYLIBRARYREQUEST_H_
