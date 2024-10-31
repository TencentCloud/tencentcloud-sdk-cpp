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

#ifndef TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEREGISTRYINFO_H_
#define TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEREGISTRYINFO_H_

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
                * 镜像仓库详情
                */
                class ImageRegistryInfo : public AbstractModel
                {
                public:
                    ImageRegistryInfo();
                    ~ImageRegistryInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取仓库名称
                     * @return Name 仓库名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置仓库名称
                     * @param _name 仓库名称
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
                     * 获取仓库类型
aws
ccr
harbor
jfrog
other-tcr
quay
tcr
                     * @return Type 仓库类型
aws
ccr
harbor
jfrog
other-tcr
quay
tcr
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置仓库类型
aws
ccr
harbor
jfrog
other-tcr
quay
tcr
                     * @param _type 仓库类型
aws
ccr
harbor
jfrog
other-tcr
quay
tcr
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
                     * 获取仓库地址
                     * @return Address 仓库地址
                     * 
                     */
                    std::string GetAddress() const;

                    /**
                     * 设置仓库地址
                     * @param _address 仓库地址
                     * 
                     */
                    void SetAddress(const std::string& _address);

                    /**
                     * 判断参数 Address 是否已赋值
                     * @return Address 是否已赋值
                     * 
                     */
                    bool AddressHasBeenSet() const;

                private:

                    /**
                     * 仓库名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 仓库类型
aws
ccr
harbor
jfrog
other-tcr
quay
tcr
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 仓库地址
                     */
                    std::string m_address;
                    bool m_addressHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCSS_V20201101_MODEL_IMAGEREGISTRYINFO_H_
