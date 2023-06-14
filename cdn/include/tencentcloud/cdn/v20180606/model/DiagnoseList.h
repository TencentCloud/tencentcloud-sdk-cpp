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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_DIAGNOSELIST_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_DIAGNOSELIST_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/cdn/v20180606/model/ClientInfo.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * 客户端访问诊断URL信息列表
                */
                class DiagnoseList : public AbstractModel
                {
                public:
                    DiagnoseList();
                    ~DiagnoseList() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取诊断任务标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiagnoseTag 诊断任务标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDiagnoseTag() const;

                    /**
                     * 设置诊断任务标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diagnoseTag 诊断任务标签。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiagnoseTag(const std::string& _diagnoseTag);

                    /**
                     * 判断参数 DiagnoseTag 是否已赋值
                     * @return DiagnoseTag 是否已赋值
                     * 
                     */
                    bool DiagnoseTagHasBeenSet() const;

                    /**
                     * 获取报告ID，用于获取详细诊断报告。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReportId 报告ID，用于获取详细诊断报告。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetReportId() const;

                    /**
                     * 设置报告ID，用于获取详细诊断报告。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reportId 报告ID，用于获取详细诊断报告。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReportId(const std::string& _reportId);

                    /**
                     * 判断参数 ReportId 是否已赋值
                     * @return ReportId 是否已赋值
                     * 
                     */
                    bool ReportIdHasBeenSet() const;

                    /**
                     * 获取客户端信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ClientInfo 客户端信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<ClientInfo> GetClientInfo() const;

                    /**
                     * 设置客户端信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _clientInfo 客户端信息。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetClientInfo(const std::vector<ClientInfo>& _clientInfo);

                    /**
                     * 判断参数 ClientInfo 是否已赋值
                     * @return ClientInfo 是否已赋值
                     * 
                     */
                    bool ClientInfoHasBeenSet() const;

                    /**
                     * 获取最终诊断结果。
-1：已提交
0  ：检测中
1  ：检测正常
2  ： 检测异常
3  ： 诊断页面异常关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FinalDiagnose 最终诊断结果。
-1：已提交
0  ：检测中
1  ：检测正常
2  ： 检测异常
3  ： 诊断页面异常关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetFinalDiagnose() const;

                    /**
                     * 设置最终诊断结果。
-1：已提交
0  ：检测中
1  ：检测正常
2  ： 检测异常
3  ： 诊断页面异常关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _finalDiagnose 最终诊断结果。
-1：已提交
0  ：检测中
1  ：检测正常
2  ： 检测异常
3  ： 诊断页面异常关闭
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFinalDiagnose(const int64_t& _finalDiagnose);

                    /**
                     * 判断参数 FinalDiagnose 是否已赋值
                     * @return FinalDiagnose 是否已赋值
                     * 
                     */
                    bool FinalDiagnoseHasBeenSet() const;

                    /**
                     * 获取诊断任务创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 诊断任务创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置诊断任务创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 诊断任务创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 诊断任务标签。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_diagnoseTag;
                    bool m_diagnoseTagHasBeenSet;

                    /**
                     * 报告ID，用于获取详细诊断报告。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_reportId;
                    bool m_reportIdHasBeenSet;

                    /**
                     * 客户端信息。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<ClientInfo> m_clientInfo;
                    bool m_clientInfoHasBeenSet;

                    /**
                     * 最终诊断结果。
-1：已提交
0  ：检测中
1  ：检测正常
2  ： 检测异常
3  ： 诊断页面异常关闭
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_finalDiagnose;
                    bool m_finalDiagnoseHasBeenSet;

                    /**
                     * 诊断任务创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_DIAGNOSELIST_H_
