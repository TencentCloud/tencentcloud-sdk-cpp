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

#ifndef TENCENTCLOUD_DBBRAIN_V20210527_MODEL_TOPHOTKEYS_H_
#define TENCENTCLOUD_DBBRAIN_V20210527_MODEL_TOPHOTKEYS_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dbbrain
    {
        namespace V20210527
        {
            namespace Model
            {
                /**
                * 热key分析返回信息
                */
                class TopHotKeys : public AbstractModel
                {
                public:
                    TopHotKeys();
                    ~TopHotKeys() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取访问频次。
                     * @return Count 访问频次。
                     * 
                     */
                    int64_t GetCount() const;

                    /**
                     * 设置访问频次。
                     * @param _count 访问频次。
                     * 
                     */
                    void SetCount(const int64_t& _count);

                    /**
                     * 判断参数 Count 是否已赋值
                     * @return Count 是否已赋值
                     * 
                     */
                    bool CountHasBeenSet() const;

                    /**
                     * 获取热Key所属数据库。
                     * @return Db 热Key所属数据库。
                     * 
                     */
                    std::string GetDb() const;

                    /**
                     * 设置热Key所属数据库。
                     * @param _db 热Key所属数据库。
                     * 
                     */
                    void SetDb(const std::string& _db);

                    /**
                     * 判断参数 Db 是否已赋值
                     * @return Db 是否已赋值
                     * 
                     */
                    bool DbHasBeenSet() const;

                    /**
                     * 获取Redis节点。
                     * @return InstanceNodeId Redis节点。
                     * 
                     */
                    std::string GetInstanceNodeId() const;

                    /**
                     * 设置Redis节点。
                     * @param _instanceNodeId Redis节点。
                     * 
                     */
                    void SetInstanceNodeId(const std::string& _instanceNodeId);

                    /**
                     * 判断参数 InstanceNodeId 是否已赋值
                     * @return InstanceNodeId 是否已赋值
                     * 
                     */
                    bool InstanceNodeIdHasBeenSet() const;

                    /**
                     * 获取热Key。
                     * @return Key 热Key。
                     * 
                     */
                    std::string GetKey() const;

                    /**
                     * 设置热Key。
                     * @param _key 热Key。
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
                     * 获取数据类型。
                     * @return Type 数据类型。
                     * 
                     */
                    std::string GetType() const;

                    /**
                     * 设置数据类型。
                     * @param _type 数据类型。
                     * 
                     */
                    void SetType(const std::string& _type);

                    /**
                     * 判断参数 Type 是否已赋值
                     * @return Type 是否已赋值
                     * 
                     */
                    bool TypeHasBeenSet() const;

                private:

                    /**
                     * 访问频次。
                     */
                    int64_t m_count;
                    bool m_countHasBeenSet;

                    /**
                     * 热Key所属数据库。
                     */
                    std::string m_db;
                    bool m_dbHasBeenSet;

                    /**
                     * Redis节点。
                     */
                    std::string m_instanceNodeId;
                    bool m_instanceNodeIdHasBeenSet;

                    /**
                     * 热Key。
                     */
                    std::string m_key;
                    bool m_keyHasBeenSet;

                    /**
                     * 数据类型。
                     */
                    std::string m_type;
                    bool m_typeHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DBBRAIN_V20210527_MODEL_TOPHOTKEYS_H_
