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

#ifndef TENCENTCLOUD_BILLING_V20180709_MODEL_COSDETAILSETS_H_
#define TENCENTCLOUD_BILLING_V20180709_MODEL_COSDETAILSETS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Billing
    {
        namespace V20180709
        {
            namespace Model
            {
                /**
                * cos产品用量明细返回数据结构
                */
                class CosDetailSets : public AbstractModel
                {
                public:
                    CosDetailSets();
                    ~CosDetailSets() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取存储桶名称
                     * @return BucketName 存储桶名称
                     * 
                     */
                    std::string GetBucketName() const;

                    /**
                     * 设置存储桶名称
                     * @param _bucketName 存储桶名称
                     * 
                     */
                    void SetBucketName(const std::string& _bucketName);

                    /**
                     * 判断参数 BucketName 是否已赋值
                     * @return BucketName 是否已赋值
                     * 
                     */
                    bool BucketNameHasBeenSet() const;

                    /**
                     * 获取用量开始时间
                     * @return DosageBeginTime 用量开始时间
                     * 
                     */
                    std::string GetDosageBeginTime() const;

                    /**
                     * 设置用量开始时间
                     * @param _dosageBeginTime 用量开始时间
                     * 
                     */
                    void SetDosageBeginTime(const std::string& _dosageBeginTime);

                    /**
                     * 判断参数 DosageBeginTime 是否已赋值
                     * @return DosageBeginTime 是否已赋值
                     * 
                     */
                    bool DosageBeginTimeHasBeenSet() const;

                    /**
                     * 获取用量结束时间
                     * @return DosageEndTime 用量结束时间
                     * 
                     */
                    std::string GetDosageEndTime() const;

                    /**
                     * 设置用量结束时间
                     * @param _dosageEndTime 用量结束时间
                     * 
                     */
                    void SetDosageEndTime(const std::string& _dosageEndTime);

                    /**
                     * 判断参数 DosageEndTime 是否已赋值
                     * @return DosageEndTime 是否已赋值
                     * 
                     */
                    bool DosageEndTimeHasBeenSet() const;

                    /**
                     * 获取子产品名称
                     * @return SubProductCodeName 子产品名称
                     * 
                     */
                    std::string GetSubProductCodeName() const;

                    /**
                     * 设置子产品名称
                     * @param _subProductCodeName 子产品名称
                     * 
                     */
                    void SetSubProductCodeName(const std::string& _subProductCodeName);

                    /**
                     * 判断参数 SubProductCodeName 是否已赋值
                     * @return SubProductCodeName 是否已赋值
                     * 
                     */
                    bool SubProductCodeNameHasBeenSet() const;

                    /**
                     * 获取计费项名称
                     * @return BillingItemCodeName 计费项名称
                     * 
                     */
                    std::string GetBillingItemCodeName() const;

                    /**
                     * 设置计费项名称
                     * @param _billingItemCodeName 计费项名称
                     * 
                     */
                    void SetBillingItemCodeName(const std::string& _billingItemCodeName);

                    /**
                     * 判断参数 BillingItemCodeName 是否已赋值
                     * @return BillingItemCodeName 是否已赋值
                     * 
                     */
                    bool BillingItemCodeNameHasBeenSet() const;

                    /**
                     * 获取用量
                     * @return DosageValue 用量
                     * 
                     */
                    std::string GetDosageValue() const;

                    /**
                     * 设置用量
                     * @param _dosageValue 用量
                     * 
                     */
                    void SetDosageValue(const std::string& _dosageValue);

                    /**
                     * 判断参数 DosageValue 是否已赋值
                     * @return DosageValue 是否已赋值
                     * 
                     */
                    bool DosageValueHasBeenSet() const;

                    /**
                     * 获取单位
                     * @return Unit 单位
                     * 
                     */
                    std::string GetUnit() const;

                    /**
                     * 设置单位
                     * @param _unit 单位
                     * 
                     */
                    void SetUnit(const std::string& _unit);

                    /**
                     * 判断参数 Unit 是否已赋值
                     * @return Unit 是否已赋值
                     * 
                     */
                    bool UnitHasBeenSet() const;

                private:

                    /**
                     * 存储桶名称
                     */
                    std::string m_bucketName;
                    bool m_bucketNameHasBeenSet;

                    /**
                     * 用量开始时间
                     */
                    std::string m_dosageBeginTime;
                    bool m_dosageBeginTimeHasBeenSet;

                    /**
                     * 用量结束时间
                     */
                    std::string m_dosageEndTime;
                    bool m_dosageEndTimeHasBeenSet;

                    /**
                     * 子产品名称
                     */
                    std::string m_subProductCodeName;
                    bool m_subProductCodeNameHasBeenSet;

                    /**
                     * 计费项名称
                     */
                    std::string m_billingItemCodeName;
                    bool m_billingItemCodeNameHasBeenSet;

                    /**
                     * 用量
                     */
                    std::string m_dosageValue;
                    bool m_dosageValueHasBeenSet;

                    /**
                     * 单位
                     */
                    std::string m_unit;
                    bool m_unitHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_BILLING_V20180709_MODEL_COSDETAILSETS_H_
