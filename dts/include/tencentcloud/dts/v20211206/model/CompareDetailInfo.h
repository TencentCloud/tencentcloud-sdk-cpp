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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREDETAILINFO_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREDETAILINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/dts/v20211206/model/DifferenceDetail.h>
#include <tencentcloud/dts/v20211206/model/SkippedDetail.h>
#include <tencentcloud/dts/v20211206/model/DifferenceAdvancedObjectsDetail.h>
#include <tencentcloud/dts/v20211206/model/DifferenceDataDetail.h>
#include <tencentcloud/dts/v20211206/model/DifferenceRowDetail.h>
#include <tencentcloud/dts/v20211206/model/DifferenceSchemaDetail.h>
#include <tencentcloud/dts/v20211206/model/DifferenceOwnerDetail.h>
#include <tencentcloud/dts/v20211206/model/CompareTableInfo.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * 一致性校验详细信息
                */
                class CompareDetailInfo : public AbstractModel
                {
                public:
                    CompareDetailInfo();
                    ~CompareDetailInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>数据不一致的表详情</p>
                     * @return Difference <p>数据不一致的表详情</p>
                     * 
                     */
                    DifferenceDetail GetDifference() const;

                    /**
                     * 设置<p>数据不一致的表详情</p>
                     * @param _difference <p>数据不一致的表详情</p>
                     * 
                     */
                    void SetDifference(const DifferenceDetail& _difference);

                    /**
                     * 判断参数 Difference 是否已赋值
                     * @return Difference 是否已赋值
                     * 
                     */
                    bool DifferenceHasBeenSet() const;

                    /**
                     * 获取<p>跳过校验的表详情</p>
                     * @return Skipped <p>跳过校验的表详情</p>
                     * 
                     */
                    SkippedDetail GetSkipped() const;

                    /**
                     * 设置<p>跳过校验的表详情</p>
                     * @param _skipped <p>跳过校验的表详情</p>
                     * 
                     */
                    void SetSkipped(const SkippedDetail& _skipped);

                    /**
                     * 判断参数 Skipped 是否已赋值
                     * @return Skipped 是否已赋值
                     * 
                     */
                    bool SkippedHasBeenSet() const;

                    /**
                     * 获取<p>数据库不一致的详情，mongodb业务用到</p>
                     * @return DifferenceAdvancedObjects <p>数据库不一致的详情，mongodb业务用到</p>
                     * 
                     */
                    DifferenceAdvancedObjectsDetail GetDifferenceAdvancedObjects() const;

                    /**
                     * 设置<p>数据库不一致的详情，mongodb业务用到</p>
                     * @param _differenceAdvancedObjects <p>数据库不一致的详情，mongodb业务用到</p>
                     * 
                     */
                    void SetDifferenceAdvancedObjects(const DifferenceAdvancedObjectsDetail& _differenceAdvancedObjects);

                    /**
                     * 判断参数 DifferenceAdvancedObjects 是否已赋值
                     * @return DifferenceAdvancedObjects 是否已赋值
                     * 
                     */
                    bool DifferenceAdvancedObjectsHasBeenSet() const;

                    /**
                     * 获取<p>数据不一致的详情，mongodb业务用到</p>
                     * @return DifferenceData <p>数据不一致的详情，mongodb业务用到</p>
                     * 
                     */
                    DifferenceDataDetail GetDifferenceData() const;

                    /**
                     * 设置<p>数据不一致的详情，mongodb业务用到</p>
                     * @param _differenceData <p>数据不一致的详情，mongodb业务用到</p>
                     * 
                     */
                    void SetDifferenceData(const DifferenceDataDetail& _differenceData);

                    /**
                     * 判断参数 DifferenceData 是否已赋值
                     * @return DifferenceData 是否已赋值
                     * 
                     */
                    bool DifferenceDataHasBeenSet() const;

                    /**
                     * 获取<p>数据行不一致的详情，mongodb业务用到</p>
                     * @return DifferenceRow <p>数据行不一致的详情，mongodb业务用到</p>
                     * 
                     */
                    DifferenceRowDetail GetDifferenceRow() const;

                    /**
                     * 设置<p>数据行不一致的详情，mongodb业务用到</p>
                     * @param _differenceRow <p>数据行不一致的详情，mongodb业务用到</p>
                     * 
                     */
                    void SetDifferenceRow(const DifferenceRowDetail& _differenceRow);

                    /**
                     * 判断参数 DifferenceRow 是否已赋值
                     * @return DifferenceRow 是否已赋值
                     * 
                     */
                    bool DifferenceRowHasBeenSet() const;

                    /**
                     * 获取<p>表结构不一致详情，pg用</p>
                     * @return DifferenceSchema <p>表结构不一致详情，pg用</p>
                     * 
                     */
                    DifferenceSchemaDetail GetDifferenceSchema() const;

                    /**
                     * 设置<p>表结构不一致详情，pg用</p>
                     * @param _differenceSchema <p>表结构不一致详情，pg用</p>
                     * 
                     */
                    void SetDifferenceSchema(const DifferenceSchemaDetail& _differenceSchema);

                    /**
                     * 判断参数 DifferenceSchema 是否已赋值
                     * @return DifferenceSchema 是否已赋值
                     * 
                     */
                    bool DifferenceSchemaHasBeenSet() const;

                    /**
                     * 获取<p>对象owner不一致详情，pg用</p>
                     * @return DifferenceOwner <p>对象owner不一致详情，pg用</p>
                     * 
                     */
                    DifferenceOwnerDetail GetDifferenceOwner() const;

                    /**
                     * 设置<p>对象owner不一致详情，pg用</p>
                     * @param _differenceOwner <p>对象owner不一致详情，pg用</p>
                     * 
                     */
                    void SetDifferenceOwner(const DifferenceOwnerDetail& _differenceOwner);

                    /**
                     * 判断参数 DifferenceOwner 是否已赋值
                     * @return DifferenceOwner 是否已赋值
                     * 
                     */
                    bool DifferenceOwnerHasBeenSet() const;

                    /**
                     * 获取<p>全量阶段表的校验进度。该字段后续逐步取代Difference</p>
                     * @return FullProgress <p>全量阶段表的校验进度。该字段后续逐步取代Difference</p>
                     * 
                     */
                    CompareTableInfo GetFullProgress() const;

                    /**
                     * 设置<p>全量阶段表的校验进度。该字段后续逐步取代Difference</p>
                     * @param _fullProgress <p>全量阶段表的校验进度。该字段后续逐步取代Difference</p>
                     * 
                     */
                    void SetFullProgress(const CompareTableInfo& _fullProgress);

                    /**
                     * 判断参数 FullProgress 是否已赋值
                     * @return FullProgress 是否已赋值
                     * 
                     */
                    bool FullProgressHasBeenSet() const;

                    /**
                     * 获取<p>增量阶段表的校验进度</p>
                     * @return IncDifference <p>增量阶段表的校验进度</p>
                     * 
                     */
                    CompareTableInfo GetIncDifference() const;

                    /**
                     * 设置<p>增量阶段表的校验进度</p>
                     * @param _incDifference <p>增量阶段表的校验进度</p>
                     * 
                     */
                    void SetIncDifference(const CompareTableInfo& _incDifference);

                    /**
                     * 判断参数 IncDifference 是否已赋值
                     * @return IncDifference 是否已赋值
                     * 
                     */
                    bool IncDifferenceHasBeenSet() const;

                private:

                    /**
                     * <p>数据不一致的表详情</p>
                     */
                    DifferenceDetail m_difference;
                    bool m_differenceHasBeenSet;

                    /**
                     * <p>跳过校验的表详情</p>
                     */
                    SkippedDetail m_skipped;
                    bool m_skippedHasBeenSet;

                    /**
                     * <p>数据库不一致的详情，mongodb业务用到</p>
                     */
                    DifferenceAdvancedObjectsDetail m_differenceAdvancedObjects;
                    bool m_differenceAdvancedObjectsHasBeenSet;

                    /**
                     * <p>数据不一致的详情，mongodb业务用到</p>
                     */
                    DifferenceDataDetail m_differenceData;
                    bool m_differenceDataHasBeenSet;

                    /**
                     * <p>数据行不一致的详情，mongodb业务用到</p>
                     */
                    DifferenceRowDetail m_differenceRow;
                    bool m_differenceRowHasBeenSet;

                    /**
                     * <p>表结构不一致详情，pg用</p>
                     */
                    DifferenceSchemaDetail m_differenceSchema;
                    bool m_differenceSchemaHasBeenSet;

                    /**
                     * <p>对象owner不一致详情，pg用</p>
                     */
                    DifferenceOwnerDetail m_differenceOwner;
                    bool m_differenceOwnerHasBeenSet;

                    /**
                     * <p>全量阶段表的校验进度。该字段后续逐步取代Difference</p>
                     */
                    CompareTableInfo m_fullProgress;
                    bool m_fullProgressHasBeenSet;

                    /**
                     * <p>增量阶段表的校验进度</p>
                     */
                    CompareTableInfo m_incDifference;
                    bool m_incDifferenceHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_COMPAREDETAILINFO_H_
