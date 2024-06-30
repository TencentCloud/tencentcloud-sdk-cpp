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

#ifndef TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TWECALLCATEGORYPKGINFO_H_
#define TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TWECALLCATEGORYPKGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Iotexplorer
    {
        namespace V20190423
        {
            namespace Model
            {
                /**
                * TWeCall分类统计数据
                */
                class TWeCallCategoryPkgInfo : public AbstractModel
                {
                public:
                    TWeCallCategoryPkgInfo();
                    ~TWeCallCategoryPkgInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PkgType 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetPkgType() const;

                    /**
                     * 设置类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _pkgType 类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPkgType(const int64_t& _pkgType);

                    /**
                     * 判断参数 PkgType 是否已赋值
                     * @return PkgType 是否已赋值
                     * 
                     */
                    bool PkgTypeHasBeenSet() const;

                    /**
                     * 获取总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return All 总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetAll() const;

                    /**
                     * 设置总数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _all 总数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAll(const int64_t& _all);

                    /**
                     * 判断参数 All 是否已赋值
                     * @return All 是否已赋值
                     * 
                     */
                    bool AllHasBeenSet() const;

                    /**
                     * 获取已使用数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Used 已使用数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetUsed() const;

                    /**
                     * 设置已使用数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _used 已使用数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUsed(const int64_t& _used);

                    /**
                     * 判断参数 Used 是否已赋值
                     * @return Used 是否已赋值
                     * 
                     */
                    bool UsedHasBeenSet() const;

                private:

                    /**
                     * 类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_pkgType;
                    bool m_pkgTypeHasBeenSet;

                    /**
                     * 总数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_all;
                    bool m_allHasBeenSet;

                    /**
                     * 已使用数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_used;
                    bool m_usedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IOTEXPLORER_V20190423_MODEL_TWECALLCATEGORYPKGINFO_H_
