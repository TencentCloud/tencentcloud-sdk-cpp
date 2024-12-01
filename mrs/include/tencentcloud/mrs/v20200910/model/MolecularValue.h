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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_MOLECULARVALUE_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_MOLECULARVALUE_H_

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
                * 分子病理详细信息
                */
                class MolecularValue : public AbstractModel
                {
                public:
                    MolecularValue();
                    ~MolecularValue() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取外显子
                     * @return Exon 外显子
                     * 
                     */
                    std::string GetExon() const;

                    /**
                     * 设置外显子
                     * @param _exon 外显子
                     * 
                     */
                    void SetExon(const std::string& _exon);

                    /**
                     * 判断参数 Exon 是否已赋值
                     * @return Exon 是否已赋值
                     * 
                     */
                    bool ExonHasBeenSet() const;

                    /**
                     * 获取点位
                     * @return Position 点位
                     * 
                     */
                    std::string GetPosition() const;

                    /**
                     * 设置点位
                     * @param _position 点位
                     * 
                     */
                    void SetPosition(const std::string& _position);

                    /**
                     * 判断参数 Position 是否已赋值
                     * @return Position 是否已赋值
                     * 
                     */
                    bool PositionHasBeenSet() const;

                    /**
                     * 获取类型
                     * @return Type 类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型
                     * @param _type 类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取阳性或阴性
                     * @return Positive 阳性或阴性
                     * 
                     */
                    std::string GetPositive() const;

                    /**
                     * 设置阳性或阴性
                     * @param _positive 阳性或阴性
                     * 
                     */
                    void SetPositive(const std::string& _positive);

                    /**
                     * 判断参数 Positive 是否已赋值
                     * @return Positive 是否已赋值
                     * 
                     */
                    bool PositiveHasBeenSet() const;

                    /**
                     * 获取基因名称原文
                     * @return Src 基因名称原文
                     * 
                     */
                    std::string GetSrc() const;

                    /**
                     * 设置基因名称原文
                     * @param _src 基因名称原文
                     * 
                     */
                    void SetSrc(const std::string& _src);

                    /**
                     * 判断参数 Src 是否已赋值
                     * @return Src 是否已赋值
                     * 
                     */
                    bool SrcHasBeenSet() const;

                private:

                    /**
                     * 外显子
                     */
                    std::string m_exon;
                    bool m_exonHasBeenSet;

                    /**
                     * 点位
                     */
                    std::string m_position;
                    bool m_positionHasBeenSet;

                    /**
                     * 类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 阳性或阴性
                     */
                    std::string m_positive;
                    bool m_positiveHasBeenSet;

                    /**
                     * 基因名称原文
                     */
                    std::string m_src;
                    bool m_srcHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_MOLECULARVALUE_H_
