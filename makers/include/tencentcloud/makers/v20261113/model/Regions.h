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

#ifndef TENCENTCLOUD_MAKERS_V20261113_MODEL_REGIONS_H_
#define TENCENTCLOUD_MAKERS_V20261113_MODEL_REGIONS_H_

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
                * 项目部署地域
                */
                class Regions : public AbstractModel
                {
                public:
                    Regions();
                    ~Regions() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>中国大陆地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Mainland <p>中国大陆地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetMainland() const;

                    /**
                     * 设置<p>中国大陆地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _mainland <p>中国大陆地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetMainland(const std::vector<std::string>& _mainland);

                    /**
                     * 判断参数 Mainland 是否已赋值
                     * @return Mainland 是否已赋值
                     * 
                     */
                    bool MainlandHasBeenSet() const;

                    /**
                     * 获取<p>海外地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @return Overseas <p>海外地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    std::vector<std::string> GetOverseas() const;

                    /**
                     * 设置<p>海外地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * @param _overseas <p>海外地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     * 
                     */
                    void SetOverseas(const std::vector<std::string>& _overseas);

                    /**
                     * 判断参数 Overseas 是否已赋值
                     * @return Overseas 是否已赋值
                     * 
                     */
                    bool OverseasHasBeenSet() const;

                private:

                    /**
                     * <p>中国大陆地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_mainland;
                    bool m_mainlandHasBeenSet;

                    /**
                     * <p>海外地域</p>
注意：此字段可能返回 null，表示取不到有效值。
                     */
                    std::vector<std::string> m_overseas;
                    bool m_overseasHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MAKERS_V20261113_MODEL_REGIONS_H_
