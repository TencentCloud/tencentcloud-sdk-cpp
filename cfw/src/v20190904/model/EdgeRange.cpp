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

#include <tencentcloud/cfw/v20190904/model/EdgeRange.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Cfw::V20190904::Model;
using namespace std;

EdgeRange::EdgeRange() :
    m_edgeIdHasBeenSet(false),
    m_edgeNameHasBeenSet(false),
    m_srcIdHasBeenSet(false),
    m_srcRegionHasBeenSet(false),
    m_srcNameHasBeenSet(false),
    m_srcCidrHasBeenSet(false),
    m_dstIdHasBeenSet(false),
    m_dstRegionHasBeenSet(false),
    m_dstNameHasBeenSet(false),
    m_dstCidrHasBeenSet(false)
{
}

CoreInternalOutcome EdgeRange::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("EdgeId") && !value["EdgeId"].IsNull())
    {
        if (!value["EdgeId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeRange.EdgeId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_edgeId = string(value["EdgeId"].GetString());
        m_edgeIdHasBeenSet = true;
    }

    if (value.HasMember("EdgeName") && !value["EdgeName"].IsNull())
    {
        if (!value["EdgeName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeRange.EdgeName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_edgeName = string(value["EdgeName"].GetString());
        m_edgeNameHasBeenSet = true;
    }

    if (value.HasMember("SrcId") && !value["SrcId"].IsNull())
    {
        if (!value["SrcId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeRange.SrcId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcId = string(value["SrcId"].GetString());
        m_srcIdHasBeenSet = true;
    }

    if (value.HasMember("SrcRegion") && !value["SrcRegion"].IsNull())
    {
        if (!value["SrcRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeRange.SrcRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcRegion = string(value["SrcRegion"].GetString());
        m_srcRegionHasBeenSet = true;
    }

    if (value.HasMember("SrcName") && !value["SrcName"].IsNull())
    {
        if (!value["SrcName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeRange.SrcName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcName = string(value["SrcName"].GetString());
        m_srcNameHasBeenSet = true;
    }

    if (value.HasMember("SrcCidr") && !value["SrcCidr"].IsNull())
    {
        if (!value["SrcCidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeRange.SrcCidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_srcCidr = string(value["SrcCidr"].GetString());
        m_srcCidrHasBeenSet = true;
    }

    if (value.HasMember("DstId") && !value["DstId"].IsNull())
    {
        if (!value["DstId"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeRange.DstId` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstId = string(value["DstId"].GetString());
        m_dstIdHasBeenSet = true;
    }

    if (value.HasMember("DstRegion") && !value["DstRegion"].IsNull())
    {
        if (!value["DstRegion"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeRange.DstRegion` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstRegion = string(value["DstRegion"].GetString());
        m_dstRegionHasBeenSet = true;
    }

    if (value.HasMember("DstName") && !value["DstName"].IsNull())
    {
        if (!value["DstName"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeRange.DstName` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstName = string(value["DstName"].GetString());
        m_dstNameHasBeenSet = true;
    }

    if (value.HasMember("DstCidr") && !value["DstCidr"].IsNull())
    {
        if (!value["DstCidr"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `EdgeRange.DstCidr` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_dstCidr = string(value["DstCidr"].GetString());
        m_dstCidrHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void EdgeRange::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_edgeIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_edgeId.c_str(), allocator).Move(), allocator);
    }

    if (m_edgeNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "EdgeName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_edgeName.c_str(), allocator).Move(), allocator);
    }

    if (m_srcIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcId.c_str(), allocator).Move(), allocator);
    }

    if (m_srcRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_srcNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcName.c_str(), allocator).Move(), allocator);
    }

    if (m_srcCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "SrcCidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_srcCidr.c_str(), allocator).Move(), allocator);
    }

    if (m_dstIdHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstId";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstId.c_str(), allocator).Move(), allocator);
    }

    if (m_dstRegionHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstRegion";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstRegion.c_str(), allocator).Move(), allocator);
    }

    if (m_dstNameHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstName";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstName.c_str(), allocator).Move(), allocator);
    }

    if (m_dstCidrHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "DstCidr";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_dstCidr.c_str(), allocator).Move(), allocator);
    }

}


string EdgeRange::GetEdgeId() const
{
    return m_edgeId;
}

void EdgeRange::SetEdgeId(const string& _edgeId)
{
    m_edgeId = _edgeId;
    m_edgeIdHasBeenSet = true;
}

bool EdgeRange::EdgeIdHasBeenSet() const
{
    return m_edgeIdHasBeenSet;
}

string EdgeRange::GetEdgeName() const
{
    return m_edgeName;
}

void EdgeRange::SetEdgeName(const string& _edgeName)
{
    m_edgeName = _edgeName;
    m_edgeNameHasBeenSet = true;
}

bool EdgeRange::EdgeNameHasBeenSet() const
{
    return m_edgeNameHasBeenSet;
}

string EdgeRange::GetSrcId() const
{
    return m_srcId;
}

void EdgeRange::SetSrcId(const string& _srcId)
{
    m_srcId = _srcId;
    m_srcIdHasBeenSet = true;
}

bool EdgeRange::SrcIdHasBeenSet() const
{
    return m_srcIdHasBeenSet;
}

string EdgeRange::GetSrcRegion() const
{
    return m_srcRegion;
}

void EdgeRange::SetSrcRegion(const string& _srcRegion)
{
    m_srcRegion = _srcRegion;
    m_srcRegionHasBeenSet = true;
}

bool EdgeRange::SrcRegionHasBeenSet() const
{
    return m_srcRegionHasBeenSet;
}

string EdgeRange::GetSrcName() const
{
    return m_srcName;
}

void EdgeRange::SetSrcName(const string& _srcName)
{
    m_srcName = _srcName;
    m_srcNameHasBeenSet = true;
}

bool EdgeRange::SrcNameHasBeenSet() const
{
    return m_srcNameHasBeenSet;
}

string EdgeRange::GetSrcCidr() const
{
    return m_srcCidr;
}

void EdgeRange::SetSrcCidr(const string& _srcCidr)
{
    m_srcCidr = _srcCidr;
    m_srcCidrHasBeenSet = true;
}

bool EdgeRange::SrcCidrHasBeenSet() const
{
    return m_srcCidrHasBeenSet;
}

string EdgeRange::GetDstId() const
{
    return m_dstId;
}

void EdgeRange::SetDstId(const string& _dstId)
{
    m_dstId = _dstId;
    m_dstIdHasBeenSet = true;
}

bool EdgeRange::DstIdHasBeenSet() const
{
    return m_dstIdHasBeenSet;
}

string EdgeRange::GetDstRegion() const
{
    return m_dstRegion;
}

void EdgeRange::SetDstRegion(const string& _dstRegion)
{
    m_dstRegion = _dstRegion;
    m_dstRegionHasBeenSet = true;
}

bool EdgeRange::DstRegionHasBeenSet() const
{
    return m_dstRegionHasBeenSet;
}

string EdgeRange::GetDstName() const
{
    return m_dstName;
}

void EdgeRange::SetDstName(const string& _dstName)
{
    m_dstName = _dstName;
    m_dstNameHasBeenSet = true;
}

bool EdgeRange::DstNameHasBeenSet() const
{
    return m_dstNameHasBeenSet;
}

string EdgeRange::GetDstCidr() const
{
    return m_dstCidr;
}

void EdgeRange::SetDstCidr(const string& _dstCidr)
{
    m_dstCidr = _dstCidr;
    m_dstCidrHasBeenSet = true;
}

bool EdgeRange::DstCidrHasBeenSet() const
{
    return m_dstCidrHasBeenSet;
}

