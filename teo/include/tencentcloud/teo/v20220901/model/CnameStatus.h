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

#ifndef TENCENTCLOUD_TEO_V20220901_MODEL_CNAMESTATUS_H_
#define TENCENTCLOUD_TEO_V20220901_MODEL_CNAMESTATUS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220901
        {
            namespace Model
            {
                /**
                * CNAME 状态
                */
                class CnameStatus : public AbstractModel
                {
                public:
                    CnameStatus();
                    ~CnameStatus() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取记录名称。
                     * @return RecordName 记录名称。
                     * 
                     */
                    std::string GetRecordName() const;

                    /**
                     * 设置记录名称。
                     * @param _recordName 记录名称。
                     * 
                     */
                    void SetRecordName(const std::string& _recordName);

                    /**
                     * 判断参数 RecordName 是否已赋值
                     * @return RecordName 是否已赋值
                     * 
                     */
                    bool RecordNameHasBeenSet() const;

                    /**
                     * 获取CNAME 地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cname CNAME 地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置CNAME 地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cname CNAME 地址。
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetCname(const std::string& _cname);

                    /**
                     * 判断参数 Cname 是否已赋值
                     * @return Cname 是否已赋值
                     * 
                     */
                    bool CnameHasBeenSet() const;

                    /**
                     * 获取CNAME 状态信息，取值有：
<li>active：生效；</li>
<li>moved：不生效；</li>
                     * @return Status CNAME 状态信息，取值有：
<li>active：生效；</li>
<li>moved：不生效；</li>
                     * 
                     */
                    std::string GetStatus() const;

                    /**
                     * 设置CNAME 状态信息，取值有：
<li>active：生效；</li>
<li>moved：不生效；</li>
                     * @param _status CNAME 状态信息，取值有：
<li>active：生效；</li>
<li>moved：不生效；</li>
                     * 
                     */
                    void SetStatus(const std::string& _status);

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     * 
                     */
                    bool StatusHasBeenSet() const;

                private:

                    /**
                     * 记录名称。
                     */
                    std::string m_recordName;
                    bool m_recordNameHasBeenSet;

                    /**
                     * CNAME 地址。
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                    /**
                     * CNAME 状态信息，取值有：
<li>active：生效；</li>
<li>moved：不生效；</li>
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220901_MODEL_CNAMESTATUS_H_
