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

#include <tencentcloud/ims/v20201229/model/OcrHitInfo.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Ims::V20201229::Model;
using namespace std;

OcrHitInfo::OcrHitInfo() :
    m_typeHasBeenSet(false),
    m_keywordHasBeenSet(false),
    m_libNameHasBeenSet(false),
    m_positionsHasBeenSet(false)
{
}

CoreInternalOutcome OcrHitInfo::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Type") && !value["Type"].IsNull())
    {
        if (!value["Type"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OcrHitInfo.Type` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_type = string(value["Type"].GetString());
        m_typeHasBeenSet = true;
    }

    if (value.HasMember("Keyword") && !value["Keyword"].IsNull())
    {
        if (!value["Keyword"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OcrHitInfo.Keyword` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_keyword = string(value["Keyword"].GetString());
        m_keywordHasBeenSet = true;
    }

    if (value.HasMember("LibName") && !value["LibName"].IsNull())
    {
        if (!value["LibName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `OcrHitInfo.LibName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_libName = string(value["LibName"].GetString());
        m_libNameHasBeenSet = true;
    }

    if (value.HasMember("Positions") && !value["Positions"].IsNull())
    {
        if (!value["Positions"].IsArray())
            return CoreInternalOutcome(Core::Error("response `OcrHitInfo.Positions` is not array type"));

        const rapidjson::Value &tmpValue = value["Positions"];
        for (rapidjson::Value::ConstValueIterator itr = tmpValue.Begin(); itr != tmpValue.End(); ++itr)
        {
            Positions item;
            CoreInternalOutcome outcome = item.Deserialize(*itr);
            if (!outcome.IsSuccess())
            {
                outcome.GetError().SetRequestId(requestId);
                return outcome;
            }
            m_positions.push_back(item);
        }
        m_positionsHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void OcrHitInfo::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_typeHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Type";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_type.c_str(), allocator).Move(), allocator);
    }

    if (m_keywordHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Keyword";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_keyword.c_str(), allocator).Move(), allocator);
    }

    if (m_libNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "LibName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_libName.c_str(), allocator).Move(), allocator);
    }

    if (m_positionsHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Positions";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(rapidjson::kArrayType).Move(), allocator);

        int i=0;
        for (auto itr = m_positions.begin(); itr != m_positions.end(); ++itr, ++i)
        {
            value[key.c_str()].PushBack(rapidjson::Value(rapidjson::kObjectType).Move(), allocator);
            (*itr).ToJsonObject(value[key.c_str()][i], allocator);
        }
    }

}


string OcrHitInfo::GetType() const
{
    return m_type;
}

void OcrHitInfo::SetType(const string& _type)
{
    m_type = _type;
    m_typeHasBeenSet = true;
}

bool OcrHitInfo::TypeHasBeenSet() const
{
    return m_typeHasBeenSet;
}

string OcrHitInfo::GetKeyword() const
{
    return m_keyword;
}

void OcrHitInfo::SetKeyword(const string& _keyword)
{
    m_keyword = _keyword;
    m_keywordHasBeenSet = true;
}

bool OcrHitInfo::KeywordHasBeenSet() const
{
    return m_keywordHasBeenSet;
}

string OcrHitInfo::GetLibName() const
{
    return m_libName;
}

void OcrHitInfo::SetLibName(const string& _libName)
{
    m_libName = _libName;
    m_libNameHasBeenSet = true;
}

bool OcrHitInfo::LibNameHasBeenSet() const
{
    return m_libNameHasBeenSet;
}

vector<Positions> OcrHitInfo::GetPositions() const
{
    return m_positions;
}

void OcrHitInfo::SetPositions(const vector<Positions>& _positions)
{
    m_positions = _positions;
    m_positionsHasBeenSet = true;
}

bool OcrHitInfo::PositionsHasBeenSet() const
{
    return m_positionsHasBeenSet;
}

