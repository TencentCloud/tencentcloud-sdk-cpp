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

#ifndef TENCENTCLOUD_CFW_V20190904_MODEL_SEARCHLOGTOPICS_H_
#define TENCENTCLOUD_CFW_V20190904_MODEL_SEARCHLOGTOPICS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cfw/v20190904/model/SearchLogErrors.h>
#include <tencentcloud/cfw/v20190904/model/SearchLogInfos.h>


namespace TencentCloud
{
    namespace Cfw
    {
        namespace V20190904
        {
            namespace Model
            {
                /**
                * 多主题检索返回信息
                */
                class SearchLogTopics : public AbstractModel
                {
                public:
                    SearchLogTopics();
                    ~SearchLogTopics() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取多日志主题检索对应的错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Errors 多日志主题检索对应的错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SearchLogErrors> GetErrors() const;

                    /**
                     * 设置多日志主题检索对应的错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _errors 多日志主题检索对应的错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetErrors(const std::vector<SearchLogErrors>& _errors);

                    /**
                     * 判断参数 Errors 是否已赋值
                     * @return Errors 是否已赋值
                     * 
                     */
                    bool ErrorsHasBeenSet() const;

                    /**
                     * 获取多日志主题检索各日志主题信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Infos 多日志主题检索各日志主题信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<SearchLogInfos> GetInfos() const;

                    /**
                     * 设置多日志主题检索各日志主题信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _infos 多日志主题检索各日志主题信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInfos(const std::vector<SearchLogInfos>& _infos);

                    /**
                     * 判断参数 Infos 是否已赋值
                     * @return Infos 是否已赋值
                     * 
                     */
                    bool InfosHasBeenSet() const;

                private:

                    /**
                     * 多日志主题检索对应的错误信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SearchLogErrors> m_errors;
                    bool m_errorsHasBeenSet;

                    /**
                     * 多日志主题检索各日志主题信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<SearchLogInfos> m_infos;
                    bool m_infosHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CFW_V20190904_MODEL_SEARCHLOGTOPICS_H_
