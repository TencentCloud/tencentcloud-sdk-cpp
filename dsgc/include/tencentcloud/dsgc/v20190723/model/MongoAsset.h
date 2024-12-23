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

#ifndef TENCENTCLOUD_DSGC_V20190723_MODEL_MONGOASSET_H_
#define TENCENTCLOUD_DSGC_V20190723_MODEL_MONGOASSET_H_

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
                * mongo的资产统计结果
                */
                class MongoAsset : public AbstractModel
                {
                public:
                    MongoAsset();
                    ~MongoAsset() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取DB总数量
                     * @return DbNums DB总数量
                     * 
                     */
                    int64_t GetDbNums() const;

                    /**
                     * 设置DB总数量
                     * @param _dbNums DB总数量
                     * 
                     */
                    void SetDbNums(const int64_t& _dbNums);

                    /**
                     * 判断参数 DbNums 是否已赋值
                     * @return DbNums 是否已赋值
                     * 
                     */
                    bool DbNumsHasBeenSet() const;

                    /**
                     * 获取敏感DB数量
                     * @return SensitiveDbNums 敏感DB数量
                     * 
                     */
                    int64_t GetSensitiveDbNums() const;

                    /**
                     * 设置敏感DB数量
                     * @param _sensitiveDbNums 敏感DB数量
                     * 
                     */
                    void SetSensitiveDbNums(const int64_t& _sensitiveDbNums);

                    /**
                     * 判断参数 SensitiveDbNums 是否已赋值
                     * @return SensitiveDbNums 是否已赋值
                     * 
                     */
                    bool SensitiveDbNumsHasBeenSet() const;

                    /**
                     * 获取集合数量
                     * @return ColNums 集合数量
                     * 
                     */
                    int64_t GetColNums() const;

                    /**
                     * 设置集合数量
                     * @param _colNums 集合数量
                     * 
                     */
                    void SetColNums(const int64_t& _colNums);

                    /**
                     * 判断参数 ColNums 是否已赋值
                     * @return ColNums 是否已赋值
                     * 
                     */
                    bool ColNumsHasBeenSet() const;

                    /**
                     * 获取敏感集合的数量
                     * @return SensitiveColNums 敏感集合的数量
                     * 
                     */
                    int64_t GetSensitiveColNums() const;

                    /**
                     * 设置敏感集合的数量
                     * @param _sensitiveColNums 敏感集合的数量
                     * 
                     */
                    void SetSensitiveColNums(const int64_t& _sensitiveColNums);

                    /**
                     * 判断参数 SensitiveColNums 是否已赋值
                     * @return SensitiveColNums 是否已赋值
                     * 
                     */
                    bool SensitiveColNumsHasBeenSet() const;

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
                     * DB总数量
                     */
                    int64_t m_dbNums;
                    bool m_dbNumsHasBeenSet;

                    /**
                     * 敏感DB数量
                     */
                    int64_t m_sensitiveDbNums;
                    bool m_sensitiveDbNumsHasBeenSet;

                    /**
                     * 集合数量
                     */
                    int64_t m_colNums;
                    bool m_colNumsHasBeenSet;

                    /**
                     * 敏感集合的数量
                     */
                    int64_t m_sensitiveColNums;
                    bool m_sensitiveColNumsHasBeenSet;

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

#endif // !TENCENTCLOUD_DSGC_V20190723_MODEL_MONGOASSET_H_
