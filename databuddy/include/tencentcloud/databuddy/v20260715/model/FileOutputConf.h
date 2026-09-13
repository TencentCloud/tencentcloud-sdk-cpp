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

#ifndef TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILEOUTPUTCONF_H_
#define TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILEOUTPUTCONF_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Databuddy
    {
        namespace V20260715
        {
            namespace Model
            {
                /**
                * Notebook/Python单元格输出配置
                */
                class FileOutputConf : public AbstractModel
                {
                public:
                    FileOutputConf();
                    ~FileOutputConf() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取单元格 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CellId 单元格 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCellId() const;

                    /**
                     * 设置单元格 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cellId 单元格 ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCellId(const std::string& _cellId);

                    /**
                     * 判断参数 CellId 是否已赋值
                     * @return CellId 是否已赋值
                     * 
                     */
                    bool CellIdHasBeenSet() const;

                    /**
                     * 获取Dashboard 图表配置，JSON 字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DashboardConf Dashboard 图表配置，JSON 字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDashboardConf() const;

                    /**
                     * 设置Dashboard 图表配置，JSON 字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _dashboardConf Dashboard 图表配置，JSON 字符串
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDashboardConf(const std::string& _dashboardConf);

                    /**
                     * 判断参数 DashboardConf 是否已赋值
                     * @return DashboardConf 是否已赋值
                     * 
                     */
                    bool DashboardConfHasBeenSet() const;

                    /**
                     * 获取执行结果文件的预签名下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OutputPath 执行结果文件的预签名下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOutputPath() const;

                    /**
                     * 设置执行结果文件的预签名下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _outputPath 执行结果文件的预签名下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOutputPath(const std::string& _outputPath);

                    /**
                     * 判断参数 OutputPath 是否已赋值
                     * @return OutputPath 是否已赋值
                     * 
                     */
                    bool OutputPathHasBeenSet() const;

                private:

                    /**
                     * 单元格 ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cellId;
                    bool m_cellIdHasBeenSet;

                    /**
                     * Dashboard 图表配置，JSON 字符串
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_dashboardConf;
                    bool m_dashboardConfHasBeenSet;

                    /**
                     * 执行结果文件的预签名下载链接
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_outputPath;
                    bool m_outputPathHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DATABUDDY_V20260715_MODEL_FILEOUTPUTCONF_H_
