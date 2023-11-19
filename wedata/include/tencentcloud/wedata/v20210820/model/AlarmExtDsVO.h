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

#ifndef TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMEXTDSVO_H_
#define TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMEXTDSVO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Wedata
    {
        namespace V20210820
        {
            namespace Model
            {
                /**
                * AlarmExtVO信息
                */
                class AlarmExtDsVO : public AbstractModel
                {
                public:
                    AlarmExtDsVO();
                    ~AlarmExtDsVO() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取告警策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return AlarmId 告警策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetAlarmId() const;

                    /**
                     * 设置告警策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _alarmId 告警策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetAlarmId(const std::string& _alarmId);

                    /**
                     * 判断参数 AlarmId 是否已赋值
                     * @return AlarmId 是否已赋值
                     * 
                     */
                    bool AlarmIdHasBeenSet() const;

                    /**
                     * 获取扩展字段key
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PropName 扩展字段key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPropName() const;

                    /**
                     * 设置扩展字段key
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _propName 扩展字段key
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPropName(const std::string& _propName);

                    /**
                     * 判断参数 PropName 是否已赋值
                     * @return PropName 是否已赋值
                     * 
                     */
                    bool PropNameHasBeenSet() const;

                    /**
                     * 获取扩展字段value
注意：此字段可能返回 null，表示取不到有效值。
                     * @return PropValue 扩展字段value
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetPropValue() const;

                    /**
                     * 设置扩展字段value
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _propValue 扩展字段value
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetPropValue(const std::string& _propValue);

                    /**
                     * 判断参数 PropValue 是否已赋值
                     * @return PropValue 是否已赋值
                     * 
                     */
                    bool PropValueHasBeenSet() const;

                    /**
                     * 获取告警创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return CreateTime 告警创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCreateTime() const;

                    /**
                     * 设置告警创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _createTime 告警创建时间
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
                     * 获取修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @return ModifyTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetModifyTime() const;

                    /**
                     * 设置修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _modifyTime 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetModifyTime(const std::string& _modifyTime);

                    /**
                     * 判断参数 ModifyTime 是否已赋值
                     * @return ModifyTime 是否已赋值
                     * 
                     */
                    bool ModifyTimeHasBeenSet() const;

                private:

                    /**
                     * 告警策略ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_alarmId;
                    bool m_alarmIdHasBeenSet;

                    /**
                     * 扩展字段key
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_propName;
                    bool m_propNameHasBeenSet;

                    /**
                     * 扩展字段value
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_propValue;
                    bool m_propValueHasBeenSet;

                    /**
                     * 告警创建时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_createTime;
                    bool m_createTimeHasBeenSet;

                    /**
                     * 修改时间
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_modifyTime;
                    bool m_modifyTimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_WEDATA_V20210820_MODEL_ALARMEXTDSVO_H_
