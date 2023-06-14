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

#ifndef TENCENTCLOUD_IC_V20190307_MODEL_SMSSID_H_
#define TENCENTCLOUD_IC_V20190307_MODEL_SMSSID_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ic
    {
        namespace V20190307
        {
            namespace Model
            {
                /**
                * 短信流水信息
                */
                class SmsSid : public AbstractModel
                {
                public:
                    SmsSid();
                    ~SmsSid() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取卡片ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Iccid 卡片ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetIccid() const;

                    /**
                     * 设置卡片ID
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _iccid 卡片ID
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetIccid(const std::string& _iccid);

                    /**
                     * 判断参数 Iccid 是否已赋值
                     * @return Iccid 是否已赋值
                     * 
                     */
                    bool IccidHasBeenSet() const;

                    /**
                     * 获取信息流水ID
                     * @return Sid 信息流水ID
                     * 
                     */
                    std::string GetSid() const;

                    /**
                     * 设置信息流水ID
                     * @param _sid 信息流水ID
                     * 
                     */
                    void SetSid(const std::string& _sid);

                    /**
                     * 判断参数 Sid 是否已赋值
                     * @return Sid 是否已赋值
                     * 
                     */
                    bool SidHasBeenSet() const;

                private:

                    /**
                     * 卡片ID
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_iccid;
                    bool m_iccidHasBeenSet;

                    /**
                     * 信息流水ID
                     */
                    std::string m_sid;
                    bool m_sidHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_IC_V20190307_MODEL_SMSSID_H_
