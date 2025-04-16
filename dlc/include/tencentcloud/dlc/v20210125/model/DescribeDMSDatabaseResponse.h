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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDMSDATABASERESPONSE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDMSDATABASERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/Asset.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * DescribeDMSDatabase返回参数结构体
                */
                class DescribeDMSDatabaseResponse : public AbstractModel
                {
                public:
                    DescribeDMSDatabaseResponse();
                    ~DescribeDMSDatabaseResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取数据库名称
                     * @return Name 数据库名称
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取schema名称
                     * @return SchemaName schema名称
                     * 
                     */
                    std::string GetSchemaName() const;

                    /**
                     * 判断参数 SchemaName 是否已赋值
                     * @return SchemaName 是否已赋值
                     * 
                     */
                    bool SchemaNameHasBeenSet() const;

                    /**
                     * 获取存储地址
                     * @return Location 存储地址
                     * 
                     */
                    std::string GetLocation() const;

                    /**
                     * 判断参数 Location 是否已赋值
                     * @return Location 是否已赋值
                     * 
                     */
                    bool LocationHasBeenSet() const;

                    /**
                     * 获取数据对象
                     * @return Asset 数据对象
                     * 
                     */
                    Asset GetAsset() const;

                    /**
                     * 判断参数 Asset 是否已赋值
                     * @return Asset 是否已赋值
                     * 
                     */
                    bool AssetHasBeenSet() const;

                private:

                    /**
                     * 数据库名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * schema名称
                     */
                    std::string m_schemaName;
                    bool m_schemaNameHasBeenSet;

                    /**
                     * 存储地址
                     */
                    std::string m_location;
                    bool m_locationHasBeenSet;

                    /**
                     * 数据对象
                     */
                    Asset m_asset;
                    bool m_assetHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_DESCRIBEDMSDATABASERESPONSE_H_
