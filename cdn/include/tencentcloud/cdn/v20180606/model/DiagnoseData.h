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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DIAGNOSEDATA_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DIAGNOSEDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/DiagnoseUnit.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 诊断报告内容数据
                */
                class DiagnoseData : public AbstractModel
                {
                public:
                    DiagnoseData();
                    ~DiagnoseData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取诊断报告内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Data 诊断报告内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<DiagnoseUnit> GetData() const;

                    /**
                     * 设置诊断报告内容
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _data 诊断报告内容
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetData(const std::vector<DiagnoseUnit>& _data);

                    /**
                     * 判断参数 Data 是否已赋值
                     * @return Data 是否已赋值
                     * 
                     */
                    bool DataHasBeenSet() const;

                    /**
                     * 获取当前诊断项是否正常。
"ok"：正常
"error"：异常
"warning"："警告"
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 当前诊断项是否正常。
"ok"：正常
"error"：异常
"warning"："警告"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置当前诊断项是否正常。
"ok"：正常
"error"：异常
"warning"："警告"
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 当前诊断项是否正常。
"ok"：正常
"error"：异常
"warning"："警告"
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 诊断报告内容
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<DiagnoseUnit> m_data;
                    bool m_dataHasBeenSet;

                    /**
                     * 当前诊断项是否正常。
"ok"：正常
"error"：异常
"warning"："警告"
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DIAGNOSEDATA_H_
