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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_TESTITEM_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_TESTITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 检验指标内容
                */
                class TestItem : public AbstractModel
                {
                public:
                    TestItem();
                    ~TestItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取标准名称编号，利用该编号可以获取详细的指标含义和解释
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ID 标准名称编号，利用该编号可以获取详细的指标含义和解释
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetID() const;

                    /**
                     * 设置标准名称编号，利用该编号可以获取详细的指标含义和解释
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ID 标准名称编号，利用该编号可以获取详细的指标含义和解释
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取英文名称或简称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Code 英文名称或简称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCode() const;

                    /**
                     * 设置英文名称或简称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Code 英文名称或简称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCode(const std::string& _code);

                    /**
                     * 判断参数 Code 是否已赋值
                     * @return Code 是否已赋值
                     */
                    bool CodeHasBeenSet() const;

                    /**
                     * 获取项目指标名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Name 项目指标名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetName() const;

                    /**
                     * 设置项目指标名称
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Name 项目指标名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取检验结果值
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Result 检验结果值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetResult() const;

                    /**
                     * 设置检验结果值
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Result 检验结果值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetResult(const std::string& _result);

                    /**
                     * 判断参数 Result 是否已赋值
                     * @return Result 是否已赋值
                     */
                    bool ResultHasBeenSet() const;

                    /**
                     * 获取正常结果范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Range 正常结果范围
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetRange() const;

                    /**
                     * 设置正常结果范围
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Range 正常结果范围
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetRange(const std::string& _range);

                    /**
                     * 判断参数 Range 是否已赋值
                     * @return Range 是否已赋值
                     */
                    bool RangeHasBeenSet() const;

                    /**
                     * 获取指标单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Util 指标单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetUtil() const;

                    /**
                     * 设置指标单位
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Util 指标单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetUtil(const std::string& _util);

                    /**
                     * 判断参数 Util 是否已赋值
                     * @return Util 是否已赋值
                     */
                    bool UtilHasBeenSet() const;

                    /**
                     * 获取是否正常
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsNormal 是否正常
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetIsNormal() const;

                    /**
                     * 设置是否正常
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsNormal 是否正常
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsNormal(const bool& _isNormal);

                    /**
                     * 判断参数 IsNormal 是否已赋值
                     * @return IsNormal 是否已赋值
                     */
                    bool IsNormalHasBeenSet() const;

                    /**
                     * 获取是否超标
注意：此字段可能返回 null，表示取不到有效值。
                     * @return IsExceed 是否超标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetIsExceed() const;

                    /**
                     * 设置是否超标
注意：此字段可能返回 null，表示取不到有效值。
                     * @param IsExceed 是否超标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetIsExceed(const bool& _isExceed);

                    /**
                     * 判断参数 IsExceed 是否已赋值
                     * @return IsExceed 是否已赋值
                     */
                    bool IsExceedHasBeenSet() const;

                private:

                    /**
                     * 标准名称编号，利用该编号可以获取详细的指标含义和解释
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 英文名称或简称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_code;
                    bool m_codeHasBeenSet;

                    /**
                     * 项目指标名称
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 检验结果值
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_result;
                    bool m_resultHasBeenSet;

                    /**
                     * 正常结果范围
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_range;
                    bool m_rangeHasBeenSet;

                    /**
                     * 指标单位
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_util;
                    bool m_utilHasBeenSet;

                    /**
                     * 是否正常
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isNormal;
                    bool m_isNormalHasBeenSet;

                    /**
                     * 是否超标
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_isExceed;
                    bool m_isExceedHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_TESTITEM_H_
