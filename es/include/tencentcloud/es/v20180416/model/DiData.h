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

#ifndef TENCENTCLOUD_ES_V20180416_MODEL_DIDATA_H_
#define TENCENTCLOUD_ES_V20180416_MODEL_DIDATA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/es/v20180416/model/DiDataSourceCvm.h>
#include <tencentcloud/es/v20180416/model/DiDataSourceTke.h>
#include <tencentcloud/es/v20180416/model/DiDataSinkServerless.h>


namespace TencentCloud
{
    namespace Es
    {
        namespace V20180416
        {
            namespace Model
            {
                /**
                * 数据接入信息
                */
                class DiData : public AbstractModel
                {
                public:
                    DiData();
                    ~DiData() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取数据接入id
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiId 数据接入id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDiId() const;

                    /**
                     * 设置数据接入id
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diId 数据接入id
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiId(const std::string& _diId);

                    /**
                     * 判断参数 DiId 是否已赋值
                     * @return DiId 是否已赋值
                     * 
                     */
                    bool DiIdHasBeenSet() const;

                    /**
                     * 获取数据接入创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 数据接入创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置数据接入创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 数据接入创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCreateTime(const std::string& _createTime);

                    /**
                     * 判断参数 CreateTime 是否已赋值
                     * @return CreateTime 是否已赋值
                     * 
                     */
                    bool CreateTimeHasBeenSet() const;

                    /**
                     * 获取数据接入状态，0处理中，1正常，-2删除中，-3已删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Status 数据接入状态，0处理中，1正常，-2删除中，-3已删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    int64_t GetStatus() const;

                    /**
                     * 设置数据接入状态，0处理中，1正常，-2删除中，-3已删除
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _status 数据接入状态，0处理中，1正常，-2删除中，-3已删除
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetStatus(const int64_t& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取cvm数据源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiDataSourceCvm cvm数据源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DiDataSourceCvm GetDiDataSourceCvm() const;

                    /**
                     * 设置cvm数据源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diDataSourceCvm cvm数据源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiDataSourceCvm(const DiDataSourceCvm& _diDataSourceCvm);

                    /**
                     * 判断参数 DiDataSourceCvm 是否已赋值
                     * @return DiDataSourceCvm 是否已赋值
                     * 
                     */
                    bool DiDataSourceCvmHasBeenSet() const;

                    /**
                     * 获取tke数据源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiDataSourceTke tke数据源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DiDataSourceTke GetDiDataSourceTke() const;

                    /**
                     * 设置tke数据源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diDataSourceTke tke数据源信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiDataSourceTke(const DiDataSourceTke& _diDataSourceTke);

                    /**
                     * 判断参数 DiDataSourceTke 是否已赋值
                     * @return DiDataSourceTke 是否已赋值
                     * 
                     */
                    bool DiDataSourceTkeHasBeenSet() const;

                    /**
                     * 获取serverless目的端信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiDataSinkServerless serverless目的端信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    DiDataSinkServerless GetDiDataSinkServerless() const;

                    /**
                     * 设置serverless目的端信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diDataSinkServerless serverless目的端信息
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiDataSinkServerless(const DiDataSinkServerless& _diDataSinkServerless);

                    /**
                     * 判断参数 DiDataSinkServerless 是否已赋值
                     * @return DiDataSinkServerless 是否已赋值
                     * 
                     */
                    bool DiDataSinkServerlessHasBeenSet() const;

                    /**
                     * 获取数据接入类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @return DiDataSourceType 数据接入类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetDiDataSourceType() const;

                    /**
                     * 设置数据接入类型
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _diDataSourceType 数据接入类型
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetDiDataSourceType(const std::string& _diDataSourceType);

                    /**
                     * 判断参数 DiDataSourceType 是否已赋值
                     * @return DiDataSourceType 是否已赋值
                     * 
                     */
                    bool DiDataSourceTypeHasBeenSet() const;

                private:

                    /**
                     * 数据接入id
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_diId;
                    bool m_diIdHasBeenSet;

                    /**
                     * 数据接入创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 数据接入状态，0处理中，1正常，-2删除中，-3已删除
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    int64_t m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * cvm数据源信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiDataSourceCvm m_diDataSourceCvm;
                    bool m_diDataSourceCvmHasBeenSet;

                    /**
                     * tke数据源信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiDataSourceTke m_diDataSourceTke;
                    bool m_diDataSourceTkeHasBeenSet;

                    /**
                     * serverless目的端信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DiDataSinkServerless m_diDataSinkServerless;
                    bool m_diDataSinkServerlessHasBeenSet;

                    /**
                     * 数据接入类型
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_diDataSourceType;
                    bool m_diDataSourceTypeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_ES_V20180416_MODEL_DIDATA_H_
