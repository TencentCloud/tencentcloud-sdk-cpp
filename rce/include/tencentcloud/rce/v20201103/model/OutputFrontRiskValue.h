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

#ifndef TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTFRONTRISKVALUE_H_
#define TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTFRONTRISKVALUE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Rce
    {
        namespace V20201103
        {
            namespace Model
            {
                /**
                * 风险趋势统计--值
                */
                class OutputFrontRiskValue : public AbstractModel
                {
                public:
                    OutputFrontRiskValue();
                    ~OutputFrontRiskValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取请求次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Requests 请求次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetRequests() const;

                    /**
                     * 设置请求次数
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _requests 请求次数
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRequests(const int64_t& _requests);

                    /**
                     * 判断参数 Requests 是否已赋值
                     * @return Requests 是否已赋值
                     * 
                     */
                    bool RequestsHasBeenSet() const;

                    /**
                     * 获取日期标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Index 日期标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIndex() const;

                    /**
                     * 设置日期标签
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _index 日期标签
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIndex(const std::string& _index);

                    /**
                     * 判断参数 Index 是否已赋值
                     * @return Index 是否已赋值
                     * 
                     */
                    bool IndexHasBeenSet() const;

                private:

                    /**
                     * 请求次数
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_requests;
                    bool m_requestsHasBeenSet;

                    /**
                     * 日期标签
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_index;
                    bool m_indexHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_RCE_V20201103_MODEL_OUTPUTFRONTRISKVALUE_H_
