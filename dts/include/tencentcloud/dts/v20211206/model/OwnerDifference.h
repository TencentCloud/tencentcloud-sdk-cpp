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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_OWNERDIFFERENCE_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_OWNERDIFFERENCE_H_

#include <string>
#include <vector>
#include <map>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>
#include <tencentcloud/core/AbstractModel.h>


namespace TencentCloud
{
    namespace Dts
    {
        namespace V20211206
        {
            namespace Model
            {
                /**
                * pg对象owner不一致信息
                */
                class OwnerDifference : public AbstractModel
                {
                public:
                    OwnerDifference();
                    ~OwnerDifference() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取owner不一致的pg对象所在库
                     * @return Db owner不一致的pg对象所在库
                     * 
                     */
                    std::string GetDb() const;

                    /**
                     * 设置owner不一致的pg对象所在库
                     * @param _db owner不一致的pg对象所在库
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
                     * 获取owner不一致的pg对象所在schema
                     * @return Schema owner不一致的pg对象所在schema
                     * 
                     */
                    std::string GetSchema() const;

                    /**
                     * 设置owner不一致的pg对象所在schema
                     * @param _schema owner不一致的pg对象所在schema
                     * 
                     */
                    void SetSchema(const std::string& _schema);

                    /**
                     * 判断参数 Schema 是否已赋值
                     * @return Schema 是否已赋值
                     * 
                     */
                    bool SchemaHasBeenSet() const;

                    /**
                     * 获取owner不一致的pg对象名
                     * @return ObjectName owner不一致的pg对象名
                     * 
                     */
                    std::string GetObjectName() const;

                    /**
                     * 设置owner不一致的pg对象名
                     * @param _objectName owner不一致的pg对象名
                     * 
                     */
                    void SetObjectName(const std::string& _objectName);

                    /**
                     * 判断参数 ObjectName 是否已赋值
                     * @return ObjectName 是否已赋值
                     * 
                     */
                    bool ObjectNameHasBeenSet() const;

                    /**
                     * 获取owner不一致的pg对象类型
                     * @return ObjectType owner不一致的pg对象类型
                     * 
                     */
                    std::string GetObjectType() const;

                    /**
                     * 设置owner不一致的pg对象类型
                     * @param _objectType owner不一致的pg对象类型
                     * 
                     */
                    void SetObjectType(const std::string& _objectType);

                    /**
                     * 判断参数 ObjectType 是否已赋值
                     * @return ObjectType 是否已赋值
                     * 
                     */
                    bool ObjectTypeHasBeenSet() const;

                    /**
                     * 获取源库对象owner
                     * @return SrcOwner 源库对象owner
                     * 
                     */
                    std::string GetSrcOwner() const;

                    /**
                     * 设置源库对象owner
                     * @param _srcOwner 源库对象owner
                     * 
                     */
                    void SetSrcOwner(const std::string& _srcOwner);

                    /**
                     * 判断参数 SrcOwner 是否已赋值
                     * @return SrcOwner 是否已赋值
                     * 
                     */
                    bool SrcOwnerHasBeenSet() const;

                    /**
                     * 获取目标库对象owner
                     * @return DstOwner 目标库对象owner
                     * 
                     */
                    std::string GetDstOwner() const;

                    /**
                     * 设置目标库对象owner
                     * @param _dstOwner 目标库对象owner
                     * 
                     */
                    void SetDstOwner(const std::string& _dstOwner);

                    /**
                     * 判断参数 DstOwner 是否已赋值
                     * @return DstOwner 是否已赋值
                     * 
                     */
                    bool DstOwnerHasBeenSet() const;

                private:

                    /**
                     * owner不一致的pg对象所在库
                     */
                    std::string m_db;
                    bool m_dbHasBeenSet;

                    /**
                     * owner不一致的pg对象所在schema
                     */
                    std::string m_schema;
                    bool m_schemaHasBeenSet;

                    /**
                     * owner不一致的pg对象名
                     */
                    std::string m_objectName;
                    bool m_objectNameHasBeenSet;

                    /**
                     * owner不一致的pg对象类型
                     */
                    std::string m_objectType;
                    bool m_objectTypeHasBeenSet;

                    /**
                     * 源库对象owner
                     */
                    std::string m_srcOwner;
                    bool m_srcOwnerHasBeenSet;

                    /**
                     * 目标库对象owner
                     */
                    std::string m_dstOwner;
                    bool m_dstOwnerHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_OWNERDIFFERENCE_H_
