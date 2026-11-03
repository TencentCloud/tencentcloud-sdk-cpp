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

#ifndef TENCENTCLOUD_EMR_V20190103_MODEL_MCPPASSWORDINFO_H_
#define TENCENTCLOUD_EMR_V20190103_MODEL_MCPPASSWORDINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Emr
    {
        namespace V20190103
        {
            namespace Model
            {
                /**
                * mcp是否需要密码
                */
                class McpPasswordInfo : public AbstractModel
                {
                public:
                    McpPasswordInfo();
                    ~McpPasswordInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取<p>hive是否需要密码</p>
                     * @return HivePasswordRequired <p>hive是否需要密码</p>
                     * 
                     */
                    bool GetHivePasswordRequired() const;

                    /**
                     * 设置<p>hive是否需要密码</p>
                     * @param _hivePasswordRequired <p>hive是否需要密码</p>
                     * 
                     */
                    void SetHivePasswordRequired(const bool& _hivePasswordRequired);

                    /**
                     * 判断参数 HivePasswordRequired 是否已赋值
                     * @return HivePasswordRequired 是否已赋值
                     * 
                     */
                    bool HivePasswordRequiredHasBeenSet() const;

                    /**
                     * 获取<p>trino是否需要密码</p>
                     * @return TrinoPasswordRequired <p>trino是否需要密码</p>
                     * 
                     */
                    bool GetTrinoPasswordRequired() const;

                    /**
                     * 设置<p>trino是否需要密码</p>
                     * @param _trinoPasswordRequired <p>trino是否需要密码</p>
                     * 
                     */
                    void SetTrinoPasswordRequired(const bool& _trinoPasswordRequired);

                    /**
                     * 判断参数 TrinoPasswordRequired 是否已赋值
                     * @return TrinoPasswordRequired 是否已赋值
                     * 
                     */
                    bool TrinoPasswordRequiredHasBeenSet() const;

                private:

                    /**
                     * <p>hive是否需要密码</p>
                     */
                    bool m_hivePasswordRequired;
                    bool m_hivePasswordRequiredHasBeenSet;

                    /**
                     * <p>trino是否需要密码</p>
                     */
                    bool m_trinoPasswordRequired;
                    bool m_trinoPasswordRequiredHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_EMR_V20190103_MODEL_MCPPASSWORDINFO_H_
