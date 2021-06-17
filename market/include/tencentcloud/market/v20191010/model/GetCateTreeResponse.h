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

#ifndef TENCENTCLOUD_MARKET_V20191010_MODEL_GETCATETREERESPONSE_H_
#define TENCENTCLOUD_MARKET_V20191010_MODEL_GETCATETREERESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Market
    {
        namespace V20191010
        {
            namespace Model
            {
                /**
                * GetCateTree返回参数结构体
                */
                class GetCateTreeResponse : public AbstractModel
                {
                public:
                    GetCateTreeResponse();
                    ~GetCateTreeResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);


                    /**
                     * 获取分类ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CateId 分类ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t GetCateId() const;

                    /**
                     * 判断参数 CateId 是否已赋值
                     * @return CateId 是否已赋值
                     */
                    bool CateIdHasBeenSet() const;

                    /**
                     * 获取分类名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 分类名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 分类ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_cateId;
                    bool m_cateIdHasBeenSet;

                    /**
                     * 分类名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MARKET_V20191010_MODEL_GETCATETREERESPONSE_H_
