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

#ifndef TENCENTCLOUD_PTS_V20210728_MODEL_HOSTALIAS_H_
#define TENCENTCLOUD_PTS_V20210728_MODEL_HOSTALIAS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Pts
    {
        namespace V20210728
        {
            namespace Model
            {
                /**
                * 施压机域名绑定配置
                */
                class HostAlias : public AbstractModel
                {
                public:
                    HostAlias();
                    ~HostAlias() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取需绑定的域名列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @return HostNames 需绑定的域名列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetHostNames() const;

                    /**
                     * 设置需绑定的域名列表
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _hostNames 需绑定的域名列表
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetHostNames(const std::vector<std::string>& _hostNames);

                    /**
                     * 判断参数 HostNames 是否已赋值
                     * @return HostNames 是否已赋值
                     * 
                     */
                    bool HostNamesHasBeenSet() const;

                    /**
                     * 获取需绑定的 IP 地址
                     * @return IP 需绑定的 IP 地址
                     * 
                     */
                    std::string GetIP() const;

                    /**
                     * 设置需绑定的 IP 地址
                     * @param _iP 需绑定的 IP 地址
                     * 
                     */
                    void SetIP(const std::string& _iP);

                    /**
                     * 判断参数 IP 是否已赋值
                     * @return IP 是否已赋值
                     * 
                     */
                    bool IPHasBeenSet() const;

                private:

                    /**
                     * 需绑定的域名列表
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_hostNames;
                    bool m_hostNamesHasBeenSet;

                    /**
                     * 需绑定的 IP 地址
                     */
                    std::string m_iP;
                    bool m_iPHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_PTS_V20210728_MODEL_HOSTALIAS_H_
