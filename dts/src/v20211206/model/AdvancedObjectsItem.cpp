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

#include <tencentcloud/dts/v20211206/model/AdvancedObjectsItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Dts::V20211206::Model;
using namespace std;

AdvancedObjectsItem::AdvancedObjectsItem() :
    m_objectTypeHasBeenSet(false),
    m_srcChunkHasBeenSet(false),
    m_dstChunkHasBeenSet(false),
    m_srcItemHasBeenSet(false),
    m_dstItemHasBeenSet(false)
{
}

CoreInternalOutcome AdvancedObjectsItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("ObjectType") && !value["ObjectType"].IsNull())
    {
        if (!value["ObjectType"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedObjectsItem.ObjectType` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_objectType = string(value["ObjectType"].GetString());
        m_objectTypeHasBeenSet = true;
    }

    if (value.HasMember("SrcChunk") && !value["SrcChunk"].IsNull())
    {
        if (!value["SrcChunk"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedObjectsItem.SrcChunk` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcChunk = string(value["SrcChunk"].GetString());
        m_srcChunkHasBeenSet = true;
    }

    if (value.HasMember("DstChunk") && !value["DstChunk"].IsNull())
    {
        if (!value["DstChunk"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedObjectsItem.DstChunk` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstChunk = string(value["DstChunk"].GetString());
        m_dstChunkHasBeenSet = true;
    }

    if (value.HasMember("SrcItem") && !value["SrcItem"].IsNull())
    {
        if (!value["SrcItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedObjectsItem.SrcItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcItem = string(value["SrcItem"].GetString());
        m_srcItemHasBeenSet = true;
    }

    if (value.HasMember("DstItem") && !value["DstItem"].IsNull())
    {
        if (!value["DstItem"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `AdvancedObjectsItem.DstItem` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstItem = string(value["DstItem"].GetString());
        m_dstItemHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void AdvancedObjectsItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_objectTypeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ObjectType";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_objectType.c_str(), allocator).Move(), allocator);
    }

    if (m_srcChunkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcChunk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcChunk.c_str(), allocator).Move(), allocator);
    }

    if (m_dstChunkHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstChunk";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstChunk.c_str(), allocator).Move(), allocator);
    }

    if (m_srcItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcItem.c_str(), allocator).Move(), allocator);
    }

    if (m_dstItemHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstItem";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstItem.c_str(), allocator).Move(), allocator);
    }

}


string AdvancedObjectsItem::GetObjectType() const
{
    return m_objectType;
}

void AdvancedObjectsItem::SetObjectType(const string& _objectType)
{
    m_objectType = _objectType;
    m_objectTypeHasBeenSet = true;
}

bool AdvancedObjectsItem::ObjectTypeHasBeenSet() const
{
    return m_objectTypeHasBeenSet;
}

string AdvancedObjectsItem::GetSrcChunk() const
{
    return m_srcChunk;
}

void AdvancedObjectsItem::SetSrcChunk(const string& _srcChunk)
{
    m_srcChunk = _srcChunk;
    m_srcChunkHasBeenSet = true;
}

bool AdvancedObjectsItem::SrcChunkHasBeenSet() const
{
    return m_srcChunkHasBeenSet;
}

string AdvancedObjectsItem::GetDstChunk() const
{
    return m_dstChunk;
}

void AdvancedObjectsItem::SetDstChunk(const string& _dstChunk)
{
    m_dstChunk = _dstChunk;
    m_dstChunkHasBeenSet = true;
}

bool AdvancedObjectsItem::DstChunkHasBeenSet() const
{
    return m_dstChunkHasBeenSet;
}

string AdvancedObjectsItem::GetSrcItem() const
{
    return m_srcItem;
}

void AdvancedObjectsItem::SetSrcItem(const string& _srcItem)
{
    m_srcItem = _srcItem;
    m_srcItemHasBeenSet = true;
}

bool AdvancedObjectsItem::SrcItemHasBeenSet() const
{
    return m_srcItemHasBeenSet;
}

string AdvancedObjectsItem::GetDstItem() const
{
    return m_dstItem;
}

void AdvancedObjectsItem::SetDstItem(const string& _dstItem)
{
    m_dstItem = _dstItem;
    m_dstItemHasBeenSet = true;
}

bool AdvancedObjectsItem::DstItemHasBeenSet() const
{
    return m_dstItemHasBeenSet;
}

