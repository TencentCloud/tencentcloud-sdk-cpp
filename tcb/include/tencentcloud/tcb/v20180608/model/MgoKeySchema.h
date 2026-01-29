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

#ifndef TENCENTCLOUD_TCB_V20180608_MODEL_MGOKEYSCHEMA_H_
#define TENCENTCLOUD_TCB_V20180608_MODEL_MGOKEYSCHEMA_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>
#include <tencentcloud/tcb/v20180608/model/MgoIndexKeys.h>


namespace TencentCloud
{
    namespace Tcb
    {
        namespace V20180608
        {
            namespace Model
            {
                /**
                * 本类型用于接口中描述待创建索引结构
                */
                class MgoKeySchema : public AbstractModel
                {
                public:
                    MgoKeySchema();
                    ~MgoKeySchema() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取索引字段
                     * @return MgoIndexKeys 索引字段
                     * 
                     */
                    std::vector<MgoIndexKeys> GetMgoIndexKeys() const;

                    /**
                     * 设置索引字段
                     * @param _mgoIndexKeys 索引字段
                     * 
                     */
                    void SetMgoIndexKeys(const std::vector<MgoIndexKeys>& _mgoIndexKeys);

                    /**
                     * 判断参数 MgoIndexKeys 是否已赋值
                     * @return MgoIndexKeys 是否已赋值
                     * 
                     */
                    bool MgoIndexKeysHasBeenSet() const;

                    /**
                     * 获取是否唯一索引
                     * @return MgoIsUnique 是否唯一索引
                     * 
                     */
                    bool GetMgoIsUnique() const;

                    /**
                     * 设置是否唯一索引
                     * @param _mgoIsUnique 是否唯一索引
                     * 
                     */
                    void SetMgoIsUnique(const bool& _mgoIsUnique);

                    /**
                     * 判断参数 MgoIsUnique 是否已赋值
                     * @return MgoIsUnique 是否已赋值
                     * 
                     */
                    bool MgoIsUniqueHasBeenSet() const;

                    /**
                     * 获取是否稀疏索引
                     * @return MgoIsSparse 是否稀疏索引
                     * 
                     */
                    bool GetMgoIsSparse() const;

                    /**
                     * 设置是否稀疏索引
                     * @param _mgoIsSparse 是否稀疏索引
                     * 
                     */
                    void SetMgoIsSparse(const bool& _mgoIsSparse);

                    /**
                     * 判断参数 MgoIsSparse 是否已赋值
                     * @return MgoIsSparse 是否已赋值
                     * 
                     */
                    bool MgoIsSparseHasBeenSet() const;

                private:

                    /**
                     * 索引字段
                     */
                    std::vector<MgoIndexKeys> m_mgoIndexKeys;
                    bool m_mgoIndexKeysHasBeenSet;

                    /**
                     * 是否唯一索引
                     */
                    bool m_mgoIsUnique;
                    bool m_mgoIsUniqueHasBeenSet;

                    /**
                     * 是否稀疏索引
                     */
                    bool m_mgoIsSparse;
                    bool m_mgoIsSparseHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_TCB_V20180608_MODEL_MGOKEYSCHEMA_H_
