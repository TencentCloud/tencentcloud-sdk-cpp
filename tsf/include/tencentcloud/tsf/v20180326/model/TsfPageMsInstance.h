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

#ifndef TENCENTCLOUD_TSF_V20180326_MODEL_TSFPAGEMSINSTANCE_H_
#define TENCENTCLOUD_TSF_V20180326_MODEL_TSFPAGEMSINSTANCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tsf/v20180326/model/MsInstance.h>


namespace TencentCloud
{
    namespace Tsf
    {
        namespace V20180326
        {
            namespace Model
            {
                /**
                * 微服务实例的分页内容
                */
                class TsfPageMsInstance : public AbstractModel
                {
                public:
                    TsfPageMsInstance();
                    ~TsfPageMsInstance() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取微服务实例总数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @return TotalCount 微服务实例总数目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetTotalCount() const;

                    /**
                     * 设置微服务实例总数目
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _totalCount 微服务实例总数目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetTotalCount(const int64_t& _totalCount);

                    /**
                     * 判断参数 TotalCount 是否已赋值
                     * @return TotalCount 是否已赋值
                     * 
                     */
                    bool TotalCountHasBeenSet() const;

                    /**
                     * 获取微服务实例列表内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Content 微服务实例列表内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<MsInstance> GetContent() const;

                    /**
                     * 设置微服务实例列表内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _content 微服务实例列表内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetContent(const std::vector<MsInstance>& _content);

                    /**
                     * 判断参数 Content 是否已赋值
                     * @return Content 是否已赋值
                     * 
                     */
                    bool ContentHasBeenSet() const;

                private:

                    /**
                     * 微服务实例总数目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_totalCount;
                    bool m_totalCountHasBeenSet;

                    /**
                     * 微服务实例列表内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<MsInstance> m_content;
                    bool m_contentHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TSF_V20180326_MODEL_TSFPAGEMSINSTANCE_H_
