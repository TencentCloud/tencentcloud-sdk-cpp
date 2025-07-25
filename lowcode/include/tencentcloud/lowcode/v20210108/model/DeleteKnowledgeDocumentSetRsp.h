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

#ifndef TENCENTCLOUD_LOWCODE_V20210108_MODEL_DELETEKNOWLEDGEDOCUMENTSETRSP_H_
#define TENCENTCLOUD_LOWCODE_V20210108_MODEL_DELETEKNOWLEDGEDOCUMENTSETRSP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Lowcode
    {
        namespace V20210108
        {
            namespace Model
            {
                /**
                * 删除文档出参
                */
                class DeleteKnowledgeDocumentSetRsp : public AbstractModel
                {
                public:
                    DeleteKnowledgeDocumentSetRsp();
                    ~DeleteKnowledgeDocumentSetRsp() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取删除文档数量。
                     * @return AffectedCount 删除文档数量。
                     * 
                     */
                    int64_t GetAffectedCount() const;

                    /**
                     * 设置删除文档数量。
                     * @param _affectedCount 删除文档数量。
                     * 
                     */
                    void SetAffectedCount(const int64_t& _affectedCount);

                    /**
                     * 判断参数 AffectedCount 是否已赋值
                     * @return AffectedCount 是否已赋值
                     * 
                     */
                    bool AffectedCountHasBeenSet() const;

                private:

                    /**
                     * 删除文档数量。
                     */
                    int64_t m_affectedCount;
                    bool m_affectedCountHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_LOWCODE_V20210108_MODEL_DELETEKNOWLEDGEDOCUMENTSETRSP_H_
