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

#ifndef TENCENTCLOUD_REDIS_V20180412_MODEL_BIGKEYINFO_H_
#define TENCENTCLOUD_REDIS_V20180412_MODEL_BIGKEYINFO_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Redis
    {
        namespace V20180412
        {
            namespace Model
            {
                /**
                * 大Key详情
                */
                class BigKeyInfo : public AbstractModel
                {
                public:
                    BigKeyInfo();
                    ~BigKeyInfo() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取所属的database
                     * @return DB 所属的database
                     * 
                     */
                    int64_t GetDB() const;

                    /**
                     * 设置所属的database
                     * @param _dB 所属的database
                     * 
                     */
                    void SetDB(const int64_t& _dB);

                    /**
                     * 判断参数 DB 是否已赋值
                     * @return DB 是否已赋值
                     * 
                     */
                    bool DBHasBeenSet() const;

                    /**
                     * 获取大Key
                     * @return Key 大Key
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置大Key
                     * @param _key 大Key
                     * 
                     */
                    void SetKey(const std::string& _key);

                    /**
                     * 判断参数 Key 是否已赋值
                     * @return Key 是否已赋值
                     * 
                     */
                    bool KeyHasBeenSet() const;

                    /**
                     * 获取类型
                     * @return Type 类型
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置类型
                     * @param _type 类型
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                    /**
                     * 获取大小
                     * @return Size 大小
                     * 
                     */
                    int64_t GetSize() const;

                    /**
                     * 设置大小
                     * @param _size 大小
                     * 
                     */
                    void SetSize(const int64_t& _size);

                    /**
                     * 判断参数 Size 是否已赋值
                     * @return Size 是否已赋值
                     * 
                     */
                    bool SizeHasBeenSet() const;

                    /**
                     * 获取数据时间戳
                     * @return Updatetime 数据时间戳
                     * 
                     */
                    int64_t GetUpdatetime() const;

                    /**
                     * 设置数据时间戳
                     * @param _updatetime 数据时间戳
                     * 
                     */
                    void SetUpdatetime(const int64_t& _updatetime);

                    /**
                     * 判断参数 Updatetime 是否已赋值
                     * @return Updatetime 是否已赋值
                     * 
                     */
                    bool UpdatetimeHasBeenSet() const;

                private:

                    /**
                     * 所属的database
                     */
                    int64_t m_dB;
                    bool m_dBHasBeenSet;

                    /**
                     * 大Key
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 类型
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                    /**
                     * 大小
                     */
                    int64_t m_size;
                    bool m_sizeHasBeenSet;

                    /**
                     * 数据时间戳
                     */
                    int64_t m_updatetime;
                    bool m_updatetimeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_REDIS_V20180412_MODEL_BIGKEYINFO_H_
