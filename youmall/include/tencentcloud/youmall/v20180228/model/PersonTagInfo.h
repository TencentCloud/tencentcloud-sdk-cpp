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

#ifndef TENCENTCLOUD_YOUMALL_V20180228_MODEL_PERSONTAGINFO_H_
#define TENCENTCLOUD_YOUMALL_V20180228_MODEL_PERSONTAGINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Youmall
    {
        namespace V20180228
        {
            namespace Model
            {
                /**
                * 修改顾客属性参数
                */
                class PersonTagInfo : public AbstractModel
                {
                public:
                    PersonTagInfo();
                    ~PersonTagInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取顾客原类型
                     * @return OldType 顾客原类型
                     * 
                     */
                    int64_t GetOldType() const;

                    /**
                     * 设置顾客原类型
                     * @param _oldType 顾客原类型
                     * 
                     */
                    void SetOldType(const int64_t& _oldType);

                    /**
                     * 判断参数 OldType 是否已赋值
                     * @return OldType 是否已赋值
                     * 
                     */
                    bool OldTypeHasBeenSet() const;

                    /**
                     * 获取顾客新类型
                     * @return NewType 顾客新类型
                     * 
                     */
                    int64_t GetNewType() const;

                    /**
                     * 设置顾客新类型
                     * @param _newType 顾客新类型
                     * 
                     */
                    void SetNewType(const int64_t& _newType);

                    /**
                     * 判断参数 NewType 是否已赋值
                     * @return NewType 是否已赋值
                     * 
                     */
                    bool NewTypeHasBeenSet() const;

                    /**
                     * 获取顾客face id
                     * @return PersonId 顾客face id
                     * 
                     */
                    int64_t GetPersonId() const;

                    /**
                     * 设置顾客face id
                     * @param _personId 顾客face id
                     * 
                     */
                    void SetPersonId(const int64_t& _personId);

                    /**
                     * 判断参数 PersonId 是否已赋值
                     * @return PersonId 是否已赋值
                     * 
                     */
                    bool PersonIdHasBeenSet() const;

                private:

                    /**
                     * 顾客原类型
                     */
                    int64_t m_oldType;
                    bool m_oldTypeHasBeenSet;

                    /**
                     * 顾客新类型
                     */
                    int64_t m_newType;
                    bool m_newTypeHasBeenSet;

                    /**
                     * 顾客face id
                     */
                    int64_t m_personId;
                    bool m_personIdHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_YOUMALL_V20180228_MODEL_PERSONTAGINFO_H_
