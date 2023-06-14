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

#ifndef TENCENTCLOUD_CDN_V20180606_MODEL_SHARECNAME_H_
#define TENCENTCLOUD_CDN_V20180606_MODEL_SHARECNAME_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Cdn
    {
        namespace V20180606
        {
            namespace Model
            {
                /**
                * ShareCname配置
ShareCname 为内测功能,如需使用,请联系腾讯云工程师开白.
                */
                class ShareCname : public AbstractModel
                {
                public:
                    ShareCname();
                    ~ShareCname() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取ShareCname 配置开关, 取值有：
on：开启，使用共享CNAME
off：关闭，使用默认CNAME

                     * @return Switch ShareCname 配置开关, 取值有：
on：开启，使用共享CNAME
off：关闭，使用默认CNAME

                     * 
                     */
                    std::string GetSwitch() const;

                    /**
                     * 设置ShareCname 配置开关, 取值有：
on：开启，使用共享CNAME
off：关闭，使用默认CNAME

                     * @param _switch ShareCname 配置开关, 取值有：
on：开启，使用共享CNAME
off：关闭，使用默认CNAME

                     * 
                     */
                    void SetSwitch(const std::string& _switch);

                    /**
                     * 判断参数 Switch 是否已赋值
                     * @return Switch 是否已赋值
                     * 
                     */
                    bool SwitchHasBeenSet() const;

                    /**
                     * 获取设置共享CNAME.
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Cname 设置共享CNAME.
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::string GetCname() const;

                    /**
                     * 设置设置共享CNAME.
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _cname 设置共享CNAME.
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

                private:

                    /**
                     * ShareCname 配置开关, 取值有：
on：开启，使用共享CNAME
off：关闭，使用默认CNAME

                     */
                    std::string m_switch;
                    bool m_switchHasBeenSet;

                    /**
                     * 设置共享CNAME.
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::string m_cname;
                    bool m_cnameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CDN_V20180606_MODEL_SHARECNAME_H_
