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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_ESASSET_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_ESASSET_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dsgc
    {
        namespace V20190723
        {
            namespace Model
            {
                /**
                * es的资产统计结果
                */
                class ESAsset : public AbstractModel
                {
                public:
                    ESAsset();
                    ~ESAsset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取索引总数量
                     * @return IndexNums 索引总数量
                     * 
                     */
                    int64_t GetIndexNums() const;

                    /**
                     * 设置索引总数量
                     * @param _indexNums 索引总数量
                     * 
                     */
                    void SetIndexNums(const int64_t& _indexNums);

                    /**
                     * 判断参数 IndexNums 是否已赋值
                     * @return IndexNums 是否已赋值
                     * 
                     */
                    bool IndexNumsHasBeenSet() const;

                    /**
                     * 获取敏感索引的数量
                     * @return SensitiveIndexNums 敏感索引的数量
                     * 
                     */
                    int64_t GetSensitiveIndexNums() const;

                    /**
                     * 设置敏感索引的数量
                     * @param _sensitiveIndexNums 敏感索引的数量
                     * 
                     */
                    void SetSensitiveIndexNums(const int64_t& _sensitiveIndexNums);

                    /**
                     * 判断参数 SensitiveIndexNums 是否已赋值
                     * @return SensitiveIndexNums 是否已赋值
                     * 
                     */
                    bool SensitiveIndexNumsHasBeenSet() const;

                    /**
                     * 获取字段数量
                     * @return FieldNums 字段数量
                     * 
                     */
                    int64_t GetFieldNums() const;

                    /**
                     * 设置字段数量
                     * @param _fieldNums 字段数量
                     * 
                     */
                    void SetFieldNums(const int64_t& _fieldNums);

                    /**
                     * 判断参数 FieldNums 是否已赋值
                     * @return FieldNums 是否已赋值
                     * 
                     */
                    bool FieldNumsHasBeenSet() const;

                    /**
                     * 获取敏感的字段数量
                     * @return SensitiveFieldNums 敏感的字段数量
                     * 
                     */
                    int64_t GetSensitiveFieldNums() const;

                    /**
                     * 设置敏感的字段数量
                     * @param _sensitiveFieldNums 敏感的字段数量
                     * 
                     */
                    void SetSensitiveFieldNums(const int64_t& _sensitiveFieldNums);

                    /**
                     * 判断参数 SensitiveFieldNums 是否已赋值
                     * @return SensitiveFieldNums 是否已赋值
                     * 
                     */
                    bool SensitiveFieldNumsHasBeenSet() const;

                private:

                    /**
                     * 索引总数量
                     */
                    int64_t m_indexNums;
                    bool m_indexNumsHasBeenSet;

                    /**
                     * 敏感索引的数量
                     */
                    int64_t m_sensitiveIndexNums;
                    bool m_sensitiveIndexNumsHasBeenSet;

                    /**
                     * 字段数量
                     */
                    int64_t m_fieldNums;
                    bool m_fieldNumsHasBeenSet;

                    /**
                     * 敏感的字段数量
                     */
                    int64_t m_sensitiveFieldNums;
                    bool m_sensitiveFieldNumsHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_ESASSET_H_
