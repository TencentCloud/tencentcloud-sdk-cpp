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

#ifndef TENCENTCLOUD_CII_V20210408_MODEL_UNDERWRITEITEM_H_
#define TENCENTCLOUD_CII_V20210408_MODEL_UNDERWRITEITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cii
    {
        namespace V20210408
        {
            namespace Model
            {
                /**
                * 机器核保结论子项
                */
                class UnderwriteItem : public AbstractModel
                {
                public:
                    UnderwriteItem();
                    ~UnderwriteItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取字段名
                     * @return Name 字段名
                     * 
                     */
                    std::string GetName() const;

                    /**
                     * 设置字段名
                     * @param _name 字段名
                     * 
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     * 
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取结果
                     * @return Result 结果
                     * 
                     */
                    std::string GetResult() const;

                    /**
                     * 设置结果
                     * @param _result 结果
                     * 
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     * 
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取风险值或者说明
                     * @return Value 风险值或者说明
                     * 
                     */
                    std::string GetValue() const;

                    /**
                     * 设置风险值或者说明
                     * @param _value 风险值或者说明
                     * 
                     */
                    void SetValue(const std::string& _value);

                    /**
                     * 判断参数 Value 是否已赋值
                     * @return Value 是否已赋值
                     * 
                     */
                    bool ValueHasBeenSet() const;

                    /**
                     * 获取参考范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Range 参考范围
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetRange() const;

                    /**
                     * 设置参考范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _range 参考范围
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetRange(const std::string& _range);

                    /**
                     * 判断参数 Range 是否已赋值
                     * @return Range 是否已赋值
                     * 
                     */
                    bool RangeHasBeenSet() const;

                    /**
                     * 获取报告时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ReportDate 报告时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetReportDate() const;

                    /**
                     * 设置报告时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _reportDate 报告时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetReportDate(const std::vector<std::string>& _reportDate);

                    /**
                     * 判断参数 ReportDate 是否已赋值
                     * @return ReportDate 是否已赋值
                     * 
                     */
                    bool ReportDateHasBeenSet() const;

                    /**
                     * 获取文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return FileType 文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetFileType() const;

                    /**
                     * 设置文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _fileType 文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetFileType(const std::string& _fileType);

                    /**
                     * 判断参数 FileType 是否已赋值
                     * @return FileType 是否已赋值
                     * 
                     */
                    bool FileTypeHasBeenSet() const;

                    /**
                     * 获取检查项目
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InspectProject 检查项目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetInspectProject() const;

                    /**
                     * 设置检查项目
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _inspectProject 检查项目
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetInspectProject(const std::string& _inspectProject);

                    /**
                     * 判断参数 InspectProject 是否已赋值
                     * @return InspectProject 是否已赋值
                     * 
                     */
                    bool InspectProjectHasBeenSet() const;

                    /**
                     * 获取单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Unit 单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _unit 单位
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                    /**
                     * 获取原名
注意：此字段可能返回 null，表示取不到有效值。
                     * @return OriginName 原名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetOriginName() const;

                    /**
                     * 设置原名
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _originName 原名
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOriginName(const std::string& _originName);

                    /**
                     * 判断参数 OriginName 是否已赋值
                     * @return OriginName 是否已赋值
                     * 
                     */
                    bool OriginNameHasBeenSet() const;

                    /**
                     * 获取阴阳性
注意：此字段可能返回 null，表示取不到有效值。
                     * @return YinYang 阴阳性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetYinYang() const;

                    /**
                     * 设置阴阳性
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _yinYang 阴阳性
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetYinYang(const std::string& _yinYang);

                    /**
                     * 判断参数 YinYang 是否已赋值
                     * @return YinYang 是否已赋值
                     * 
                     */
                    bool YinYangHasBeenSet() const;

                private:

                    /**
                     * 字段名
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 结果
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 风险值或者说明
                     */
                    std::string m_value;
                    bool m_valueHasBeenSet;

                    /**
                     * 参考范围
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_range;
                    bool m_rangeHasBeenSet;

                    /**
                     * 报告时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_reportDate;
                    bool m_reportDateHasBeenSet;

                    /**
                     * 文件类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_fileType;
                    bool m_fileTypeHasBeenSet;

                    /**
                     * 检查项目
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_inspectProject;
                    bool m_inspectProjectHasBeenSet;

                    /**
                     * 单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                    /**
                     * 原名
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_originName;
                    bool m_originNameHasBeenSet;

                    /**
                     * 阴阳性
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_yinYang;
                    bool m_yinYangHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CII_V20210408_MODEL_UNDERWRITEITEM_H_
