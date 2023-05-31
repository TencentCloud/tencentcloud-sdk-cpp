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

#ifndef TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PACKAGEDETAIL_H_
#define TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PACKAGEDETAIL_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cynosdb
    {
        namespace V20190107
        {
            namespace Model
            {
                /**
                * 资源包明细说明
                */
                class PackageDetail : public AbstractModel
                {
                public:
                    PackageDetail();
                    ~PackageDetail() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取AppId账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AppId AppId账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t GetAppId() const;

                    /**
                     * 设置AppId账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param AppId AppId账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetAppId(const int64_t& _appId);

                    /**
                     * 判断参数 AppId 是否已赋值
                     * @return AppId 是否已赋值
                     */
                    bool AppIdHasBeenSet() const;

                    /**
                     * 获取资源包唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageId 资源包唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetPackageId() const;

                    /**
                     * 设置资源包唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PackageId 资源包唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPackageId(const std::string& _packageId);

                    /**
                     * 判断参数 PackageId 是否已赋值
                     * @return PackageId 是否已赋值
                     */
                    bool PackageIdHasBeenSet() const;

                    /**
                     * 获取实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetInstanceId() const;

                    /**
                     * 设置实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceId 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceId(const std::string& _instanceId);

                    /**
                     * 判断参数 InstanceId 是否已赋值
                     * @return InstanceId 是否已赋值
                     */
                    bool InstanceIdHasBeenSet() const;

                    /**
                     * 获取成功抵扣容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return SuccessDeductSpec 成功抵扣容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetSuccessDeductSpec() const;

                    /**
                     * 设置成功抵扣容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param SuccessDeductSpec 成功抵扣容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetSuccessDeductSpec(const double& _successDeductSpec);

                    /**
                     * 判断参数 SuccessDeductSpec 是否已赋值
                     * @return SuccessDeductSpec 是否已赋值
                     */
                    bool SuccessDeductSpecHasBeenSet() const;

                    /**
                     * 获取截止当前，资源包已使用的容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PackageTotalUsedSpec 截止当前，资源包已使用的容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double GetPackageTotalUsedSpec() const;

                    /**
                     * 设置截止当前，资源包已使用的容量
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PackageTotalUsedSpec 截止当前，资源包已使用的容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPackageTotalUsedSpec(const double& _packageTotalUsedSpec);

                    /**
                     * 判断参数 PackageTotalUsedSpec 是否已赋值
                     * @return PackageTotalUsedSpec 是否已赋值
                     */
                    bool PackageTotalUsedSpecHasBeenSet() const;

                    /**
                     * 获取抵扣开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return StartTime 抵扣开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetStartTime() const;

                    /**
                     * 设置抵扣开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param StartTime 抵扣开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetStartTime(const std::string& _startTime);

                    /**
                     * 判断参数 StartTime 是否已赋值
                     * @return StartTime 是否已赋值
                     */
                    bool StartTimeHasBeenSet() const;

                    /**
                     * 获取抵扣结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return EndTime 抵扣结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetEndTime() const;

                    /**
                     * 设置抵扣结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param EndTime 抵扣结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetEndTime(const std::string& _endTime);

                    /**
                     * 判断参数 EndTime 是否已赋值
                     * @return EndTime 是否已赋值
                     */
                    bool EndTimeHasBeenSet() const;

                    /**
                     * 获取扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ExtendInfo 扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetExtendInfo() const;

                    /**
                     * 设置扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param ExtendInfo 扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetExtendInfo(const std::string& _extendInfo);

                    /**
                     * 判断参数 ExtendInfo 是否已赋值
                     * @return ExtendInfo 是否已赋值
                     */
                    bool ExtendInfoHasBeenSet() const;

                private:

                    /**
                     * AppId账户ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_appId;
                    bool m_appIdHasBeenSet;

                    /**
                     * 资源包唯一ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_packageId;
                    bool m_packageIdHasBeenSet;

                    /**
                     * 实例ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_instanceId;
                    bool m_instanceIdHasBeenSet;

                    /**
                     * 成功抵扣容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_successDeductSpec;
                    bool m_successDeductSpecHasBeenSet;

                    /**
                     * 截止当前，资源包已使用的容量
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    double m_packageTotalUsedSpec;
                    bool m_packageTotalUsedSpecHasBeenSet;

                    /**
                     * 抵扣开始时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_startTime;
                    bool m_startTimeHasBeenSet;

                    /**
                     * 抵扣结束时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_endTime;
                    bool m_endTimeHasBeenSet;

                    /**
                     * 扩展信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_extendInfo;
                    bool m_extendInfoHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CYNOSDB_V20190107_MODEL_PACKAGEDETAIL_H_
