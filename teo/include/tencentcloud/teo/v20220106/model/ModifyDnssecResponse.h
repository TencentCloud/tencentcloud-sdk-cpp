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

#ifndef TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYDNSSECRESPONSE_H_
#define TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYDNSSECRESPONSE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/teo/v20220106/model/DnssecInfo.h>


namespace TencentCloud
{
    namespace Teo
    {
        namespace V20220106
        {
            namespace Model
            {
                /**
                * ModifyDnssec返回参数结构体
                */
                class ModifyDnssecResponse : public AbstractModel
                {
                public:
                    ModifyDnssecResponse();
                    ~ModifyDnssecResponse() = default;
                    CoreInternalOutcome Deserialize(const std::string &payload);
                    std::string ToJsonString() const;


                    /**
                     * 获取站点 ID
                     * @return Id 站点 ID
                     */
                    std::string GetId() const;

                    /**
                     * 判断参数 Id 是否已赋值
                     * @return Id 是否已赋值
                     */
                    bool IdHasBeenSet() const;

                    /**
                     * 获取站点名称
                     * @return Name 站点名称
                     */
                    std::string GetName() const;

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                    /**
                     * 获取DNSSEC 状态
- enabled 开启
- disabled 关闭
                     * @return Status DNSSEC 状态
- enabled 开启
- disabled 关闭
                     */
                    std::string GetStatus() const;

                    /**
                     * 判断参数 Status 是否已赋值
                     * @return Status 是否已赋值
                     */
                    bool StatusHasBeenSet() const;

                    /**
                     * 获取DNSSEC 相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Dnssec DNSSEC 相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DnssecInfo GetDnssec() const;

                    /**
                     * 判断参数 Dnssec 是否已赋值
                     * @return Dnssec 是否已赋值
                     */
                    bool DnssecHasBeenSet() const;

                    /**
                     * 获取修改时间
                     * @return ModifiedOn 修改时间
                     */
                    std::string GetModifiedOn() const;

                    /**
                     * 判断参数 ModifiedOn 是否已赋值
                     * @return ModifiedOn 是否已赋值
                     */
                    bool ModifiedOnHasBeenSet() const;

                private:

                    /**
                     * 站点 ID
                     */
                    std::string m_id;
                    bool m_idHasBeenSet;

                    /**
                     * 站点名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                    /**
                     * DNSSEC 状态
- enabled 开启
- disabled 关闭
                     */
                    std::string m_status;
                    bool m_statusHasBeenSet;

                    /**
                     * DNSSEC 相关信息
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    DnssecInfo m_dnssec;
                    bool m_dnssecHasBeenSet;

                    /**
                     * 修改时间
                     */
                    std::string m_modifiedOn;
                    bool m_modifiedOnHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TEO_V20220106_MODEL_MODIFYDNSSECRESPONSE_H_
