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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_DISCHARGEDIAGNOSIS_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_DISCHARGEDIAGNOSIS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/BlockInfo.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 出入院诊断
                */
                class DischargeDiagnosis : public AbstractModel
                {
                public:
                    DischargeDiagnosis();
                    ~DischargeDiagnosis() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取表格位置
                     * @return TableIndex 表格位置
                     * 
                     */
                    int64_t GetTableIndex() const;

                    /**
                     * 设置表格位置
                     * @param _tableIndex 表格位置
                     * 
                     */
                    void SetTableIndex(const int64_t& _tableIndex);

                    /**
                     * 判断参数 TableIndex 是否已赋值
                     * @return TableIndex 是否已赋值
                     * 
                     */
                    bool TableIndexHasBeenSet() const;

                    /**
                     * 获取出院诊断
                     * @return OutDiagnosis 出院诊断
                     * 
                     */
                    BlockInfo GetOutDiagnosis() const;

                    /**
                     * 设置出院诊断
                     * @param _outDiagnosis 出院诊断
                     * 
                     */
                    void SetOutDiagnosis(const BlockInfo& _outDiagnosis);

                    /**
                     * 判断参数 OutDiagnosis 是否已赋值
                     * @return OutDiagnosis 是否已赋值
                     * 
                     */
                    bool OutDiagnosisHasBeenSet() const;

                    /**
                     * 获取疾病编码
                     * @return DiseaseCode 疾病编码
                     * 
                     */
                    BlockInfo GetDiseaseCode() const;

                    /**
                     * 设置疾病编码
                     * @param _diseaseCode 疾病编码
                     * 
                     */
                    void SetDiseaseCode(const BlockInfo& _diseaseCode);

                    /**
                     * 判断参数 DiseaseCode 是否已赋值
                     * @return DiseaseCode 是否已赋值
                     * 
                     */
                    bool DiseaseCodeHasBeenSet() const;

                    /**
                     * 获取入院情况
                     * @return InStatus 入院情况
                     * 
                     */
                    BlockInfo GetInStatus() const;

                    /**
                     * 设置入院情况
                     * @param _inStatus 入院情况
                     * 
                     */
                    void SetInStatus(const BlockInfo& _inStatus);

                    /**
                     * 判断参数 InStatus 是否已赋值
                     * @return InStatus 是否已赋值
                     * 
                     */
                    bool InStatusHasBeenSet() const;

                    /**
                     * 获取出院情况
                     * @return OutStatus 出院情况
                     * 
                     */
                    BlockInfo GetOutStatus() const;

                    /**
                     * 设置出院情况
                     * @param _outStatus 出院情况
                     * 
                     */
                    void SetOutStatus(const BlockInfo& _outStatus);

                    /**
                     * 判断参数 OutStatus 是否已赋值
                     * @return OutStatus 是否已赋值
                     * 
                     */
                    bool OutStatusHasBeenSet() const;

                private:

                    /**
                     * 表格位置
                     */
                    int64_t m_tableIndex;
                    bool m_tableIndexHasBeenSet;

                    /**
                     * 出院诊断
                     */
                    BlockInfo m_outDiagnosis;
                    bool m_outDiagnosisHasBeenSet;

                    /**
                     * 疾病编码
                     */
                    BlockInfo m_diseaseCode;
                    bool m_diseaseCodeHasBeenSet;

                    /**
                     * 入院情况
                     */
                    BlockInfo m_inStatus;
                    bool m_inStatusHasBeenSet;

                    /**
                     * 出院情况
                     */
                    BlockInfo m_outStatus;
                    bool m_outStatusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_DISCHARGEDIAGNOSIS_H_
