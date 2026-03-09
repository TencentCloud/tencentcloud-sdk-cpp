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

#ifndef TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCMODIFYTYPE_H_
#define TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCMODIFYTYPE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Ckafka
    {
        namespace V20190819
        {
            namespace Model
            {
                /**
                * 变配类型查询出参
                */
                class DescModifyType : public AbstractModel
                {
                public:
                    DescModifyType();
                    ~DescModifyType() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取变配类型
                     * @return ModifyType 变配类型
                     * 
                     */
                    int64_t GetModifyType() const;

                    /**
                     * 设置变配类型
                     * @param _modifyType 变配类型
                     * 
                     */
                    void SetModifyType(const int64_t& _modifyType);

                    /**
                     * 判断参数 ModifyType 是否已赋值
                     * @return ModifyType 是否已赋值
                     * 
                     */
                    bool ModifyTypeHasBeenSet() const;

                    /**
                     * 获取是否迁移标志
                     * @return MigrateFlag 是否迁移标志
                     * 
                     */
                    bool GetMigrateFlag() const;

                    /**
                     * 设置是否迁移标志
                     * @param _migrateFlag 是否迁移标志
                     * 
                     */
                    void SetMigrateFlag(const bool& _migrateFlag);

                    /**
                     * 判断参数 MigrateFlag 是否已赋值
                     * @return MigrateFlag 是否已赋值
                     * 
                     */
                    bool MigrateFlagHasBeenSet() const;

                private:

                    /**
                     * 变配类型
                     */
                    int64_t m_modifyType;
                    bool m_modifyTypeHasBeenSet;

                    /**
                     * 是否迁移标志
                     */
                    bool m_migrateFlag;
                    bool m_migrateFlagHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_CKAFKA_V20190819_MODEL_DESCMODIFYTYPE_H_
