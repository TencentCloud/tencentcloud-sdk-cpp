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

#ifndef TENCENTCLOUD_MRS_V20200910_MODEL_KINDITEM_H_
#define TENCENTCLOUD_MRS_V20200910_MODEL_KINDITEM_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Mrs
    {
        namespace V20200910
        {
            namespace Model
            {
                /**
                * 类型描述
                */
                class KindItem : public AbstractModel
                {
                public:
                    KindItem();
                    ~KindItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取等级，分为1，2，3级别，类型逐级细分
                     * @return Level 等级，分为1，2，3级别，类型逐级细分
                     */
                    int64_t GetLevel() const;

                    /**
                     * 设置等级，分为1，2，3级别，类型逐级细分
                     * @param Level 等级，分为1，2，3级别，类型逐级细分
                     */
                    void SetLevel(const int64_t& _level);

                    /**
                     * 判断参数 Level 是否已赋值
                     * @return Level 是否已赋值
                     */
                    bool LevelHasBeenSet() const;

                    /**
                     * 获取类型编号，对应唯一的类型编号
                     * @return ID 类型编号，对应唯一的类型编号
                     */
                    int64_t GetID() const;

                    /**
                     * 设置类型编号，对应唯一的类型编号
                     * @param ID 类型编号，对应唯一的类型编号
                     */
                    void SetID(const int64_t& _iD);

                    /**
                     * 判断参数 ID 是否已赋值
                     * @return ID 是否已赋值
                     */
                    bool IDHasBeenSet() const;

                    /**
                     * 获取类型名称
                     * @return Name 类型名称
                     */
                    std::string GetName() const;

                    /**
                     * 设置类型名称
                     * @param Name 类型名称
                     */
                    void SetName(const std::string& _name);

                    /**
                     * 判断参数 Name 是否已赋值
                     * @return Name 是否已赋值
                     */
                    bool NameHasBeenSet() const;

                private:

                    /**
                     * 等级，分为1，2，3级别，类型逐级细分
                     */
                    int64_t m_level;
                    bool m_levelHasBeenSet;

                    /**
                     * 类型编号，对应唯一的类型编号
                     */
                    int64_t m_iD;
                    bool m_iDHasBeenSet;

                    /**
                     * 类型名称
                     */
                    std::string m_name;
                    bool m_nameHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_MRS_V20200910_MODEL_KINDITEM_H_
