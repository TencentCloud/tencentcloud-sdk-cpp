/*
 * Copyright (c) 2017-2025 Tencent. All Rights Reserved.
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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MODEL_NSVERIFICATION_H_
#define TENCENTCLOUD_MAKERS_V20261113_MODEL_NSVERIFICATION_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Makers
    {
        namespace V20261113
        {
            namespace Model
            {
                /**
                * NS 归属校验信息。Makers 目前恒为 null
                */
                class NsVerification : public AbstractModel
                {
                public:
                    NsVerification();
                    ~NsVerification() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>NS 服务器</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return NameServers <p>NS 服务器</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetNameServers() const;

                    /**
                     * 设置<p>NS 服务器</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _nameServers <p>NS 服务器</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetNameServers(const std::vector<std::string>& _nameServers);

                    /**
                     * 判断参数 NameServers 是否已赋值
                     * @return NameServers 是否已赋值
                     * 
                     */
                    bool NameServersHasBeenSet() const;

                private:

                    /**
                     * <p>NS 服务器</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_nameServers;
                    bool m_nameServersHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MODEL_NSVERIFICATION_H_
