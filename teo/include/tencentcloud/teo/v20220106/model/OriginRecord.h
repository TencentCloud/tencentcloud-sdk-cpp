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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_ORIGINRECORD_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_ORIGINRECORD_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/OriginRecordPrivateParameter.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * 源站组记录
                */
                class OriginRecord : public AbstractModel
                {
                public:
                    OriginRecord();
                    ~OriginRecord() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取记录值
                     * @return Record 记录值
                     */
                    std::string GetRecord() const;

                    /**
                     * 设置记录值
                     * @param Record 记录值
                     */
                    void SetRecord(const std::string& _record);

                    /**
                     * 判断参数 Record 是否已赋值
                     * @return Record 是否已赋值
                     */
                    bool RecordHasBeenSet() const;

                    /**
                     * 获取当源站配置类型Type=area时，表示区域
当源站类型Type=area时，为空表示默认区域
                     * @return Area 当源站配置类型Type=area时，表示区域
当源站类型Type=area时，为空表示默认区域
                     */
                    std::vector<std::string> GetArea() const;

                    /**
                     * 设置当源站配置类型Type=area时，表示区域
当源站类型Type=area时，为空表示默认区域
                     * @param Area 当源站配置类型Type=area时，表示区域
当源站类型Type=area时，为空表示默认区域
                     */
                    void SetArea(const std::vector<std::string>& _area);

                    /**
                     * 判断参数 Area 是否已赋值
                     * @return Area 是否已赋值
                     */
                    bool AreaHasBeenSet() const;

                    /**
                     * 获取当源站配置类型Type=weight时，表示权重
                     * @return Weight 当源站配置类型Type=weight时，表示权重
                     */
                    uint64_t GetWeight() const;

                    /**
                     * 设置当源站配置类型Type=weight时，表示权重
                     * @param Weight 当源站配置类型Type=weight时，表示权重
                     */
                    void SetWeight(const uint64_t& _weight);

                    /**
                     * 判断参数 Weight 是否已赋值
                     * @return Weight 是否已赋值
                     */
                    bool WeightHasBeenSet() const;

                    /**
                     * 获取端口
                     * @return Port 端口
                     */
                    uint64_t GetPort() const;

                    /**
                     * 设置端口
                     * @param Port 端口
                     */
                    void SetPort(const uint64_t& _port);

                    /**
                     * 判断参数 Port 是否已赋值
                     * @return Port 是否已赋值
                     */
                    bool PortHasBeenSet() const;

                    /**
                     * 获取记录ID
                     * @return RecordId 记录ID
                     */
                    std::string GetRecordId() const;

                    /**
                     * 设置记录ID
                     * @param RecordId 记录ID
                     */
                    void SetRecordId(const std::string& _recordId);

                    /**
                     * 判断参数 RecordId 是否已赋值
                     * @return RecordId 是否已赋值
                     */
                    bool RecordIdHasBeenSet() const;

                    /**
                     * 获取是否私有鉴权
当源站类型OriginType=third_part时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Private 是否私有鉴权
当源站类型OriginType=third_part时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool GetPrivate() const;

                    /**
                     * 设置是否私有鉴权
当源站类型OriginType=third_part时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param Private 是否私有鉴权
当源站类型OriginType=third_part时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPrivate(const bool& _private);

                    /**
                     * 判断参数 Private 是否已赋值
                     * @return Private 是否已赋值
                     */
                    bool PrivateHasBeenSet() const;

                    /**
                     * 获取私有鉴权参数
当源站类型Private=true时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PrivateParameter 私有鉴权参数
当源站类型Private=true时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OriginRecordPrivateParameter> GetPrivateParameter() const;

                    /**
                     * 设置私有鉴权参数
当源站类型Private=true时有效
注意：此字段可能返回 null，表示取不到有效值。
                     * @param PrivateParameter 私有鉴权参数
当源站类型Private=true时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    void SetPrivateParameter(const std::vector<OriginRecordPrivateParameter>& _privateParameter);

                    /**
                     * 判断参数 PrivateParameter 是否已赋值
                     * @return PrivateParameter 是否已赋值
                     */
                    bool PrivateParameterHasBeenSet() const;

                private:

                    /**
                     * 记录值
                     */
                    std::string m_record;
                    bool m_recordHasBeenSet;

                    /**
                     * 当源站配置类型Type=area时，表示区域
当源站类型Type=area时，为空表示默认区域
                     */
                    std::vector<std::string> m_area;
                    bool m_areaHasBeenSet;

                    /**
                     * 当源站配置类型Type=weight时，表示权重
                     */
                    uint64_t m_weight;
                    bool m_weightHasBeenSet;

                    /**
                     * 端口
                     */
                    uint64_t m_port;
                    bool m_portHasBeenSet;

                    /**
                     * 记录ID
                     */
                    std::string m_recordId;
                    bool m_recordIdHasBeenSet;

                    /**
                     * 是否私有鉴权
当源站类型OriginType=third_part时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    bool m_private;
                    bool m_privateHasBeenSet;

                    /**
                     * 私有鉴权参数
当源站类型Private=true时有效
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<OriginRecordPrivateParameter> m_privateParameter;
                    bool m_privateParameterHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_ORIGINRECORD_H_
