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

#ifndef TENCENTCLOUD_DLC_V20210125_MODEL_SPARKSESSIONBATCHLOGOPERATE_H_
#define TENCENTCLOUD_DLC_V20210125_MODEL_SPARKSESSIONBATCHLOGOPERATE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dlc/v20210125/model/KVPair.h>


namespace TencentCloud
{
    namespace Dlc
    {
        namespace V20210125
        {
            namespace Model
            {
                /**
                * SparkSQL批任务日志操作信息。
                */
                class SparkSessionBatchLogOperate : public AbstractModel
                {
                public:
                    SparkSessionBatchLogOperate();
                    ~SparkSessionBatchLogOperate() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取操作提示
                     * @return Text 操作提示
                     * 
                     */
                    std::string GetText() const;

                    /**
                     * 设置操作提示
                     * @param _text 操作提示
                     * 
                     */
                    void SetText(const std::string& _text);

                    /**
                     * 判断参数 Text 是否已赋值
                     * @return Text 是否已赋值
                     * 
                     */
                    bool TextHasBeenSet() const;

                    /**
                     * 获取操作类型：COPY、LOG、UI、RESULT、List、TAB
                     * @return Operate 操作类型：COPY、LOG、UI、RESULT、List、TAB
                     * 
                     */
                    std::string GetOperate() const;

                    /**
                     * 设置操作类型：COPY、LOG、UI、RESULT、List、TAB
                     * @param _operate 操作类型：COPY、LOG、UI、RESULT、List、TAB
                     * 
                     */
                    void SetOperate(const std::string& _operate);

                    /**
                     * 判断参数 Operate 是否已赋值
                     * @return Operate 是否已赋值
                     * 
                     */
                    bool OperateHasBeenSet() const;

                    /**
                     * 获取补充信息：如：taskid、sessionid、sparkui等
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Supplement 补充信息：如：taskid、sessionid、sparkui等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<KVPair> GetSupplement() const;

                    /**
                     * 设置补充信息：如：taskid、sessionid、sparkui等
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _supplement 补充信息：如：taskid、sessionid、sparkui等
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetSupplement(const std::vector<KVPair>& _supplement);

                    /**
                     * 判断参数 Supplement 是否已赋值
                     * @return Supplement 是否已赋值
                     * 
                     */
                    bool SupplementHasBeenSet() const;

                private:

                    /**
                     * 操作提示
                     */
                    std::string m_text;
                    bool m_textHasBeenSet;

                    /**
                     * 操作类型：COPY、LOG、UI、RESULT、List、TAB
                     */
                    std::string m_operate;
                    bool m_operateHasBeenSet;

                    /**
                     * 补充信息：如：taskid、sessionid、sparkui等
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<KVPair> m_supplement;
                    bool m_supplementHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DLC_V20210125_MODEL_SPARKSESSIONBATCHLOGOPERATE_H_
