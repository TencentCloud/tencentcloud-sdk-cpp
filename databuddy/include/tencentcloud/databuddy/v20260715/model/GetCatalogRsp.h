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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETCATALOGRSP_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETCATALOGRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/databuddy/v20260715/model/Catalog.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * 获取数据目录详情的响应
                */
                class GetCatalogRsp : public AbstractModel
                {
                public:
                    GetCatalogRsp();
                    ~GetCatalogRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取catalog详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Catalog catalog详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    Catalog GetCatalog() const;

                    /**
                     * 设置catalog详情
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _catalog catalog详情
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCatalog(const Catalog& _catalog);

                    /**
                     * 判断参数 Catalog 是否已赋值
                     * @return Catalog 是否已赋值
                     * 
                     */
                    bool CatalogHasBeenSet() const;

                private:

                    /**
                     * catalog详情
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    Catalog m_catalog;
                    bool m_catalogHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_GETCATALOGRSP_H_
