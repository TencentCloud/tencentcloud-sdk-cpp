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

#ifndef TENCENTCLOUD_DTS_V20211206_MODEL_ADVANCEDOBJECTSITEM_H_
#define TENCENTCLOUD_DTS_V20211206_MODEL_ADVANCEDOBJECTSITEM_H_

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
                * 数据库不一致的详情，mongodb业务用到
                */
                class AdvancedObjectsItem : public AbstractModel
                {
                public:
                    AdvancedObjectsItem();
                    ~AdvancedObjectsItem() = default;
                    void ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const;
                    CoreInternalOutcome Deserialize(const rapidjson::Value &value);


                    /**
                     * 获取对象类型,可能得值有：account,index,shardkey,schema
                     * @return ObjectType 对象类型,可能得值有：account,index,shardkey,schema
                     * 
                     */
                    std::string GetObjectType() const;

                    /**
                     * 设置对象类型,可能得值有：account,index,shardkey,schema
                     * @param _objectType 对象类型,可能得值有：account,index,shardkey,schema
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
                     * 获取源端分块
                     * @return SrcChunk 源端分块
                     * 
                     */
                    std::string GetSrcChunk() const;

                    /**
                     * 设置源端分块
                     * @param _srcChunk 源端分块
                     * 
                     */
                    void SetSrcChunk(const std::string& _srcChunk);

                    /**
                     * 判断参数 SrcChunk 是否已赋值
                     * @return SrcChunk 是否已赋值
                     * 
                     */
                    bool SrcChunkHasBeenSet() const;

                    /**
                     * 获取目标端分块
                     * @return DstChunk 目标端分块
                     * 
                     */
                    std::string GetDstChunk() const;

                    /**
                     * 设置目标端分块
                     * @param _dstChunk 目标端分块
                     * 
                     */
                    void SetDstChunk(const std::string& _dstChunk);

                    /**
                     * 判断参数 DstChunk 是否已赋值
                     * @return DstChunk 是否已赋值
                     * 
                     */
                    bool DstChunkHasBeenSet() const;

                    /**
                     * 获取源端值
                     * @return SrcItem 源端值
                     * 
                     */
                    std::string GetSrcItem() const;

                    /**
                     * 设置源端值
                     * @param _srcItem 源端值
                     * 
                     */
                    void SetSrcItem(const std::string& _srcItem);

                    /**
                     * 判断参数 SrcItem 是否已赋值
                     * @return SrcItem 是否已赋值
                     * 
                     */
                    bool SrcItemHasBeenSet() const;

                    /**
                     * 获取目标端值
                     * @return DstItem 目标端值
                     * 
                     */
                    std::string GetDstItem() const;

                    /**
                     * 设置目标端值
                     * @param _dstItem 目标端值
                     * 
                     */
                    void SetDstItem(const std::string& _dstItem);

                    /**
                     * 判断参数 DstItem 是否已赋值
                     * @return DstItem 是否已赋值
                     * 
                     */
                    bool DstItemHasBeenSet() const;

                private:

                    /**
                     * 对象类型,可能得值有：account,index,shardkey,schema
                     */
                    std::string m_objectType;
                    bool m_objectTypeHasBeenSet;

                    /**
                     * 源端分块
                     */
                    std::string m_srcChunk;
                    bool m_srcChunkHasBeenSet;

                    /**
                     * 目标端分块
                     */
                    std::string m_dstChunk;
                    bool m_dstChunkHasBeenSet;

                    /**
                     * 源端值
                     */
                    std::string m_srcItem;
                    bool m_srcItemHasBeenSet;

                    /**
                     * 目标端值
                     */
                    std::string m_dstItem;
                    bool m_dstItemHasBeenSet;

                };
            }
        }
    }
}

#endif // !TENCENTCLOUD_DTS_V20211206_MODEL_ADVANCEDOBJECTSITEM_H_
