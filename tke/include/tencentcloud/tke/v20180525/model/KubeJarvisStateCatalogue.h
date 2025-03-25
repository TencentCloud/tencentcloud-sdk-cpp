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

#ifndef TENCENTCLOUD_TKE_V20180525_MODEL_KUBEJARVISSTATECATALOGUE_H_
#define TENCENTCLOUD_TKE_V20180525_MODEL_KUBEJARVISSTATECATALOGUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Tke
    {
        namespace V20180525
        {
            namespace Model
            {
                /**
                * 集群巡检诊断的默认目录类型
                */
                class KubeJarvisStateCatalogue : public AbstractModel
                {
                public:
                    KubeJarvisStateCatalogue();
                    ~KubeJarvisStateCatalogue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取目录级别，支持参数：
first：一级目录
second：二级目录
                     * @return CatalogueLevel 目录级别，支持参数：
first：一级目录
second：二级目录
                     * 
                     */
                    std::string GetCatalogueLevel() const;

                    /**
                     * 设置目录级别，支持参数：
first：一级目录
second：二级目录
                     * @param _catalogueLevel 目录级别，支持参数：
first：一级目录
second：二级目录
                     * 
                     */
                    void SetCatalogueLevel(const std::string& _catalogueLevel);

                    /**
                     * 判断参数 CatalogueLevel 是否已赋值
                     * @return CatalogueLevel 是否已赋值
                     * 
                     */
                    bool CatalogueLevelHasBeenSet() const;

                    /**
                     * 获取目录名
                     * @return CatalogueName 目录名
                     * 
                     */
                    std::string GetCatalogueName() const;

                    /**
                     * 设置目录名
                     * @param _catalogueName 目录名
                     * 
                     */
                    void SetCatalogueName(const std::string& _catalogueName);

                    /**
                     * 判断参数 CatalogueName 是否已赋值
                     * @return CatalogueName 是否已赋值
                     * 
                     */
                    bool CatalogueNameHasBeenSet() const;

                private:

                    /**
                     * 目录级别，支持参数：
first：一级目录
second：二级目录
                     */
                    std::string m_catalogueLevel;
                    bool m_catalogueLevelHasBeenSet;

                    /**
                     * 目录名
                     */
                    std::string m_catalogueName;
                    bool m_catalogueNameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TKE_V20180525_MODEL_KUBEJARVISSTATECATALOGUE_H_
