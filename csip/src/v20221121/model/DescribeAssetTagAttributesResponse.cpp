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

#include <tencentcloud/csip/v20221121/model/DescribeAssetTagAttributesResponse.h>
#include <tencentcloud/core/utils/rapidjson/document.h>
#include <tencentcloud/core/utils/rapidjson/writer.h>
#include <tencentcloud/core/utils/rapidjson/stringbuffer.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Csip::V20221121::Model;
using namespace std;

DescribeAssetTagAttributesResponse::DescribeAssetTagAttributesResponse() :
    m_filterConditionsHasBeenSet(false),
    m_taggingAttributesHasBeenSet(false),
    m_tagKeyListHasBeenSet(false),
    m_colorOptionsHasBeenSet(false),
    m_assetTypeListHasBeenSet(false),
    m_tagTreeHasBeenSet(false)
{
}

CoreInternalOutcome DescribeAssetTagAttributesResponse::Deserialize(const string &payload)
{
    rapidjson::Document d;
    d.Parse(payload.c_str());
    if (d.HasParseError() || !d.IsObject())
    {
        return CoreInternalOutcome(Core::Error("response not json format"));
    }
    if (!d.HasMember("Response") || !d["Response"].IsObject())
    {
        return CoreInternalOutcome(Core::Error("response `Response` is null or not object"));
    }
    rapidjson::Value &rsp = d["Response"];
    if (!rsp.HasMember("RequestId") || !rsp["RequestId"].IsString())
    {
        return CoreInternalOutcome(Core::Error("response `Response.RequestId` is null or not string"));
    }
    string requestId(rsp["RequestId"].GetString());
    SetRequestId(requestId);

    if (rsp.HasMember("Error"))
    {
        if (!rsp["Error"].IsObject() ||
            !rsp["Error"].HasMember("Code") || !rsp["Error"]["Code"].IsString() ||
            !rsp["Error"].HasMember("Message") || !rsp["Error"]["Message"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `Response.Error` format error").SetRequestId(requestId));
        }
        string errorCode(rsp["Error"]["Code"].GetString());
        string errorMsg(rsp["Error"]["Message"].GetString());
        return CoreInternalOutcome(Core::Error(errorCode, errorMsg).SetRequestId(requestId));
    }


    if (rsp.HasMember("FilterConditions") && !rsp["FilterConditions"].IsNull())
    {
        if (!rsp["FilterConditions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `FilterConditions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["FilterConditions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterDataObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_filterConditions.push_back(item);
        }
        m_filterConditionsHasBeenSet = true;
    }

    if (rsp.HasMember("TaggingAttributes") && !rsp["TaggingAttributes"].IsNull())
    {
        if (!rsp["TaggingAttributes"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TaggingAttributes` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TaggingAttributes"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterDataObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_taggingAttributes.push_back(item);
        }
        m_taggingAttributesHasBeenSet = true;
    }

    if (rsp.HasMember("TagKeyList") && !rsp["TagKeyList"].IsNull())
    {
        if (!rsp["TagKeyList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TagKeyList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TagKeyList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterDataObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagKeyList.push_back(item);
        }
        m_tagKeyListHasBeenSet = true;
    }

    if (rsp.HasMember("ColorOptions") && !rsp["ColorOptions"].IsNull())
    {
        if (!rsp["ColorOptions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `ColorOptions` is not array type"));

        const rapidjson::Value &tmpValue = rsp["ColorOptions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterDataObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_colorOptions.push_back(item);
        }
        m_colorOptionsHasBeenSet = true;
    }

    if (rsp.HasMember("AssetTypeList") && !rsp["AssetTypeList"].IsNull())
    {
        if (!rsp["AssetTypeList"].IsArray())
            return CoreInternalOutcome(Core::Error("response `AssetTypeList` is not array type"));

        const rapidjson::Value &tmpValue = rsp["AssetTypeList"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            FilterDataObject item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_assetTypeList.push_back(item);
        }
        m_assetTypeListHasBeenSet = true;
    }

    if (rsp.HasMember("TagTree") && !rsp["TagTree"].IsNull())
    {
        if (!rsp["TagTree"].IsArray())
            return CoreInternalOutcome(Core::Error("response `TagTree` is not array type"));

        const rapidjson::Value &tmpValue = rsp["TagTree"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            AssetTagTreeNode item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_tagTree.push_back(item);
        }
        m_tagTreeHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

string DescribeAssetTagAttributesResponse::ToJsonString() const
{
    rapidjson::Document value;
    value.SetObject();
    rapidjson::Document::AllocatorType& allocator = value.GetAllocator();

    if (m_filterConditionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "FilterConditions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_filterConditions.begin(); itr != m_filterConditions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_taggingAttributesHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TaggingAttributes";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_taggingAttributes.begin(); itr != m_taggingAttributes.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tagKeyListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagKeyList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagKeyList.begin(); itr != m_tagKeyList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_colorOptionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "ColorOptions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_colorOptions.begin(); itr != m_colorOptions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_assetTypeListHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "AssetTypeList";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_assetTypeList.begin(); itr != m_assetTypeList.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    if (m_tagTreeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TagTree";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_tagTree.begin(); itr != m_tagTree.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

    rapidjson::Value iKey(rapidjson::kStringType);
    string key = "RequestId";
    iKey.SetString(key.c_str(), allocator);
    value.AddMember(iKey, rapidjson::Value().SetString(GetRequestId().c_str(), allocator), allocator);

    rapidjson::StringBuffer buffer;
    rapidjson::Writer<rapidjson::StringBuffer> writer(buffer);
    value.Accept(writer);
    return buffer.GetString();
}


vector<FilterDataObject> DescribeAssetTagAttributesResponse::GetFilterConditions() const
{
    return m_filterConditions;
}

bool DescribeAssetTagAttributesResponse::FilterConditionsHasBeenSet() const
{
    return m_filterConditionsHasBeenSet;
}

vector<FilterDataObject> DescribeAssetTagAttributesResponse::GetTaggingAttributes() const
{
    return m_taggingAttributes;
}

bool DescribeAssetTagAttributesResponse::TaggingAttributesHasBeenSet() const
{
    return m_taggingAttributesHasBeenSet;
}

vector<FilterDataObject> DescribeAssetTagAttributesResponse::GetTagKeyList() const
{
    return m_tagKeyList;
}

bool DescribeAssetTagAttributesResponse::TagKeyListHasBeenSet() const
{
    return m_tagKeyListHasBeenSet;
}

vector<FilterDataObject> DescribeAssetTagAttributesResponse::GetColorOptions() const
{
    return m_colorOptions;
}

bool DescribeAssetTagAttributesResponse::ColorOptionsHasBeenSet() const
{
    return m_colorOptionsHasBeenSet;
}

vector<FilterDataObject> DescribeAssetTagAttributesResponse::GetAssetTypeList() const
{
    return m_assetTypeList;
}

bool DescribeAssetTagAttributesResponse::AssetTypeListHasBeenSet() const
{
    return m_assetTypeListHasBeenSet;
}

vector<AssetTagTreeNode> DescribeAssetTagAttributesResponse::GetTagTree() const
{
    return m_tagTree;
}

bool DescribeAssetTagAttributesResponse::TagTreeHasBeenSet() const
{
    return m_tagTreeHasBeenSet;
}


