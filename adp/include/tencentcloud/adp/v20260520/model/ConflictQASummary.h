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

#ifndef TENCENTCLOUD_ADP_V20260520_MODEL_CONFLICTQASUMMARY_H_
#define TENCENTCLOUD_ADP_V20260520_MODEL_CONFLICTQASUMMARY_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Adp
    {
        namespace V20260520
        {
            namespace Model
            {
                /**
                * 冲突问摘要信息
                */
                class ConflictQASummary : public AbstractModel
                {
                public:
                    ConflictQASummary();
                    ~ConflictQASummary() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>冲突组 ID</p>
                     * @return ConflictGroupId <p>冲突组 ID</p>
                     * 
                     */
                    std::string GetConflictGroupId() const;

                    /**
                     * 设置<p>冲突组 ID</p>
                     * @param _conflictGroupId <p>冲突组 ID</p>
                     * 
                     */
                    void SetConflictGroupId(const std::string& _conflictGroupId);

                    /**
                     * 判断参数 ConflictGroupId 是否已赋值
                     * @return ConflictGroupId 是否已赋值
                     * 
                     */
                    bool ConflictGroupIdHasBeenSet() const;

                private:

                    /**
                     * <p>冲突组 ID</p>
                     */
                    std::string m_conflictGroupId;
                    bool m_conflictGroupIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ADP_V20260520_MODEL_CONFLICTQASUMMARY_H_
