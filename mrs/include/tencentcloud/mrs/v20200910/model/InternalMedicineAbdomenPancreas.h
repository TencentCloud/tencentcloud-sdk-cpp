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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_INTERNALMEDICINEABDOMENPANCREAS_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_INTERNALMEDICINEABDOMENPANCREAS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/mrs/v20200910/model/KeyValueItem.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 体检报告-内科-腹部-胰腺
                */
                class InternalMedicineAbdomenPancreas : public AbstractModel
                {
                public:
                    InternalMedicineAbdomenPancreas();
                    ~InternalMedicineAbdomenPancreas() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取胰腺总体描述
                     * @return Src 胰腺总体描述
                     * 
                     */
                    KeyValueItem GetSrc() const;

                    /**
                     * 设置胰腺总体描述
                     * @param _src 胰腺总体描述
                     * 
                     */
                    void SetSrc(const KeyValueItem& _src);

                    /**
                     * 判断参数 Src 是否已赋值
                     * @return Src 是否已赋值
                     * 
                     */
                    bool SrcHasBeenSet() const;

                    /**
                     * 获取胰腺大小
                     * @return Size 胰腺大小
                     * 
                     */
                    KeyValueItem GetSize() const;

                    /**
                     * 设置胰腺大小
                     * @param _size 胰腺大小
                     * 
                     */
                    void SetSize(const KeyValueItem& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取胰腺触诊
                     * @return Palpation 胰腺触诊
                     * 
                     */
                    KeyValueItem GetPalpation() const;

                    /**
                     * 设置胰腺触诊
                     * @param _palpation 胰腺触诊
                     * 
                     */
                    void SetPalpation(const KeyValueItem& _palpation);

                    /**
                     * 判断参数 Palpation 是否已赋值
                     * @return Palpation 是否已赋值
                     * 
                     */
                    bool PalpationHasBeenSet() const;

                    /**
                     * 获取胰腺叩诊
                     * @return Percussion 胰腺叩诊
                     * 
                     */
                    KeyValueItem GetPercussion() const;

                    /**
                     * 设置胰腺叩诊
                     * @param _percussion 胰腺叩诊
                     * 
                     */
                    void SetPercussion(const KeyValueItem& _percussion);

                    /**
                     * 判断参数 Percussion 是否已赋值
                     * @return Percussion 是否已赋值
                     * 
                     */
                    bool PercussionHasBeenSet() const;

                    /**
                     * 获取肝脏压痛
                     * @return Tenderness 肝脏压痛
                     * 
                     */
                    KeyValueItem GetTenderness() const;

                    /**
                     * 设置肝脏压痛
                     * @param _tenderness 肝脏压痛
                     * 
                     */
                    void SetTenderness(const KeyValueItem& _tenderness);

                    /**
                     * 判断参数 Tenderness 是否已赋值
                     * @return Tenderness 是否已赋值
                     * 
                     */
                    bool TendernessHasBeenSet() const;

                    /**
                     * 获取胰腺质地
                     * @return Consistency 胰腺质地
                     * 
                     */
                    KeyValueItem GetConsistency() const;

                    /**
                     * 设置胰腺质地
                     * @param _consistency 胰腺质地
                     * 
                     */
                    void SetConsistency(const KeyValueItem& _consistency);

                    /**
                     * 判断参数 Consistency 是否已赋值
                     * @return Consistency 是否已赋值
                     * 
                     */
                    bool ConsistencyHasBeenSet() const;

                private:

                    /**
                     * 胰腺总体描述
                     */
                    KeyValueItem m_src;
                    bool m_srcHasBeenSet;

                    /**
                     * 胰腺大小
                     */
                    KeyValueItem m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 胰腺触诊
                     */
                    KeyValueItem m_palpation;
                    bool m_palpationHasBeenSet;

                    /**
                     * 胰腺叩诊
                     */
                    KeyValueItem m_percussion;
                    bool m_percussionHasBeenSet;

                    /**
                     * 肝脏压痛
                     */
                    KeyValueItem m_tenderness;
                    bool m_tendernessHasBeenSet;

                    /**
                     * 胰腺质地
                     */
                    KeyValueItem m_consistency;
                    bool m_consistencyHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_INTERNALMEDICINEABDOMENPANCREAS_H_
