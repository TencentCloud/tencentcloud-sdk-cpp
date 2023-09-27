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

#ifndef TENCENTCLOUD_CDWPG_V20201230_MODEL_RESOURCESPECNEW_H_
#define TENCENTCLOUD_CDWPG_V20201230_MODEL_RESOURCESPECNEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdwpg/v20201230/model/CBSSpec.h>


namespace TencentCloud
{
    namespace Cdwpg
    {
        namespace V20201230
        {
            namespace Model
            {
                /**
                * 资源规格
                */
                class ResourceSpecNew : public AbstractModel
                {
                public:
                    ResourceSpecNew();
                    ~ResourceSpecNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取资源名称
                     * @return SpecName 资源名称
                     * 
                     */
                    std::string GetSpecName() const;

                    /**
                     * 设置资源名称
                     * @param _specName 资源名称
                     * 
                     */
                    void SetSpecName(const std::string& _specName);

                    /**
                     * 判断参数 SpecName 是否已赋值
                     * @return SpecName 是否已赋值
                     * 
                     */
                    bool SpecNameHasBeenSet() const;

                    /**
                     * 获取资源数
                     * @return Count 资源数
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置资源数
                     * @param _count 资源数
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取磁盘信息
                     * @return DiskSpec 磁盘信息
                     * 
                     */
                    CBSSpec GetDiskSpec() const;

                    /**
                     * 设置磁盘信息
                     * @param _diskSpec 磁盘信息
                     * 
                     */
                    void SetDiskSpec(const CBSSpec& _diskSpec);

                    /**
                     * 判断参数 DiskSpec 是否已赋值
                     * @return DiskSpec 是否已赋值
                     * 
                     */
                    bool DiskSpecHasBeenSet() const;

                    /**
                     * 获取资源类型，DATA
                     * @return Type 资源类型，DATA
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置资源类型，DATA
                     * @param _type 资源类型，DATA
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
                     * 资源名称
                     */
                    std::string m_specName;
                    bool m_specNameHasBeenSet;

                    /**
                     * 资源数
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 磁盘信息
                     */
                    CBSSpec m_diskSpec;
                    bool m_diskSpecHasBeenSet;

                    /**
                     * 资源类型，DATA
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDWPG_V20201230_MODEL_RESOURCESPECNEW_H_
