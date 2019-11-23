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

#ifndef TENCENTCLOUD_CVM_V20170312_MODEL_DISASTERRECOVERGROUP_H_
#define TENCENTCLOUD_CVM_V20170312_MODEL_DISASTERRECOVERGROUP_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cvm
    {
        namespace V20170312
        {
            namespace Model
            {
                /**
                * 容灾组信息
                */
                class DisasterRecoverGroup : public AbstractModel
                {
                public:
                    DisasterRecoverGroup();
                    ~DisasterRecoverGroup() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取分散置放群组id。
                     * @return DisasterRecoverGroupId 分散置放群组id。
                     */
                    std::string GetDisasterRecoverGroupId() const;

                    /**
                     * 设置分散置放群组id。
                     * @param DisasterRecoverGroupId 分散置放群组id。
                     */
                    void SetDisasterRecoverGroupId(const std::string& _disasterRecoverGroupId);

                    /**
                     * 判断参数 DisasterRecoverGroupId 是否已赋值
                     * @return DisasterRecoverGroupId 是否已赋值
                     */
                    bool DisasterRecoverGroupIdHasBeenSet() const;

                    /**
                     * 获取分散置放群组名称，长度1-60个字符。
                     * @return Name 分散置放群组名称，长度1-60个字符。
                     */
                    std::string GetName() const;

                    /**
                     * 设置分散置放群组名称，长度1-60个字符。
                     * @param Name 分散置放群组名称，长度1-60个字符。
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取分散置放群组类型，取值范围：<br><li>HOST：物理机<br><li>SW：交换机<br><li>RACK：机架
                     * @return Type 分散置放群组类型，取值范围：<br><li>HOST：物理机<br><li>SW：交换机<br><li>RACK：机架
                     */
                    std::string GetType() const;

                    /**
                     * 设置分散置放群组类型，取值范围：<br><li>HOST：物理机<br><li>SW：交换机<br><li>RACK：机架
                     * @param Type 分散置放群组类型，取值范围：<br><li>HOST：物理机<br><li>SW：交换机<br><li>RACK：机架
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取分散置放群组内最大容纳云服务器数量。
                     * @return CvmQuotaTotal 分散置放群组内最大容纳云服务器数量。
                     */
                    int64_t GetCvmQuotaTotal() const;

                    /**
                     * 设置分散置放群组内最大容纳云服务器数量。
                     * @param CvmQuotaTotal 分散置放群组内最大容纳云服务器数量。
                     */
                    void SetCvmQuotaTotal(const int64_t& _cvmQuotaTotal);

                    /**
                     * 判断参数 CvmQuotaTotal 是否已赋值
                     * @return CvmQuotaTotal 是否已赋值
                     */
                    bool CvmQuotaTotalHasBeenSet() const;

                    /**
                     * 获取分散置放群组内云服务器当前数量。
                     * @return CurrentNum 分散置放群组内云服务器当前数量。
                     */
                    int64_t GetCurrentNum() const;

                    /**
                     * 设置分散置放群组内云服务器当前数量。
                     * @param CurrentNum 分散置放群组内云服务器当前数量。
                     */
                    void SetCurrentNum(const int64_t& _currentNum);

                    /**
                     * 判断参数 CurrentNum 是否已赋值
                     * @return CurrentNum 是否已赋值
                     */
                    bool CurrentNumHasBeenSet() const;

                    /**
                     * 获取分散置放群组内，云服务器id列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return InstanceIds 分散置放群组内，云服务器id列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> GetInstanceIds() const;

                    /**
                     * 设置分散置放群组内，云服务器id列表。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param InstanceIds 分散置放群组内，云服务器id列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetInstanceIds(const std::vector<std::string>& _instanceIds);

                    /**
                     * 判断参数 InstanceIds 是否已赋值
                     * @return InstanceIds 是否已赋值
                     */
                    bool InstanceIdsHasBeenSet() const;

                    /**
                     * 获取分散置放群组创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 分散置放群组创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置分散置放群组创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param CreateTime 分散置放群组创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     */
                    bool CreateTimeHasBeenSet() const;

                private:

                    /**
                     * 分散置放群组id。
                     */
                    std::string m_disasterRecoverGroupId;
                    bool m_disasterRecoverGroupIdHasBeenSet;

                    /**
                     * 分散置放群组名称，长度1-60个字符。
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * 分散置放群组类型，取值范围：<br><li>HOST：物理机<br><li>SW：交换机<br><li>RACK：机架
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 分散置放群组内最大容纳云服务器数量。
                     */
                    int64_t m_cvmQuotaTotal;
                    bool m_cvmQuotaTotalHasBeenSet;

                    /**
                     * 分散置放群组内云服务器当前数量。
                     */
                    int64_t m_currentNum;
                    bool m_currentNumHasBeenSet;

                    /**
                     * 分散置放群组内，云服务器id列表。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_instanceIds;
                    bool m_instanceIdsHasBeenSet;

                    /**
                     * 分散置放群组创建时间。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CVM_V20170312_MODEL_DISASTERRECOVERGROUP_H_
