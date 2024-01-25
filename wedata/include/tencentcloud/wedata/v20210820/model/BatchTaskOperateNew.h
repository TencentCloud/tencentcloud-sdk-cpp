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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHTASKOPERATENEW_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHTASKOPERATENEW_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * 批量操作出参
                */
                class BatchTaskOperateNew : public AbstractModel
                {
                public:
                    BatchTaskOperateNew();
                    ~BatchTaskOperateNew() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return JobId 操作Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    uint64_t GetJobId() const;

                    /**
                     * 设置操作Id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _jobId 操作Id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetJobId(const uint64_t& _jobId);

                    /**
                     * 判断参数 JobId 是否已赋值
                     * @return JobId 是否已赋值
                     * 
                     */
                    bool JobIdHasBeenSet() const;

                private:

                    /**
                     * 操作Id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    uint64_t m_jobId;
                    bool m_jobIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_BATCHTASKOPERATENEW_H_
