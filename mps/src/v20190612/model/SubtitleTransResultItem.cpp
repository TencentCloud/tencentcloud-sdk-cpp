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

#include <tencentcloud/mps/v20190612/model/SubtitleTransResultItem.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Mps::V20190612::Model;
using namespace std;

SubtitleTransResultItem::SubtitleTransResultItem() :
    m_statusHasBeenSet(false),
    m_transSrcHasBeenSet(false),
    m_transDstHasBeenSet(false),
    m_pathHasBeenSet(false)
{
}

CoreInternalOutcome SubtitleTransResultItem::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Status") && !value["Status"].IsNull())
    {
        if (!value["Status"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleTransResultItem.Status` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_status = string(value["Status"].GetString());
        m_statusHasBeenSet = true;
    }

    if (value.HasMember("TransSrc") && !value["TransSrc"].IsNull())
    {
        if (!value["TransSrc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleTransResultItem.TransSrc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transSrc = string(value["TransSrc"].GetString());
        m_transSrcHasBeenSet = true;
    }

    if (value.HasMember("TransDst") && !value["TransDst"].IsNull())
    {
        if (!value["TransDst"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleTransResultItem.TransDst` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_transDst = string(value["TransDst"].GetString());
        m_transDstHasBeenSet = true;
    }

    if (value.HasMember("Path") && !value["Path"].IsNull())
    {
        if (!value["Path"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `SubtitleTransResultItem.Path` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_path = string(value["Path"].GetString());
        m_pathHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void SubtitleTransResultItem::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_statusHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Status";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_status.c_str(), allocator).Move(), allocator);
    }

    if (m_transSrcHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransSrc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transSrc.c_str(), allocator).Move(), allocator);
    }

    if (m_transDstHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "TransDst";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_transDst.c_str(), allocator).Move(), allocator);
    }

    if (m_pathHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Path";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_path.c_str(), allocator).Move(), allocator);
    }

}


string SubtitleTransResultItem::GetStatus() const
{
    return m_status;
}

void SubtitleTransResultItem::SetStatus(const string& _status)
{
    m_status = _status;
    m_statusHasBeenSet = true;
}

bool SubtitleTransResultItem::StatusHasBeenSet() const
{
    return m_statusHasBeenSet;
}

string SubtitleTransResultItem::GetTransSrc() const
{
    return m_transSrc;
}

void SubtitleTransResultItem::SetTransSrc(const string& _transSrc)
{
    m_transSrc = _transSrc;
    m_transSrcHasBeenSet = true;
}

bool SubtitleTransResultItem::TransSrcHasBeenSet() const
{
    return m_transSrcHasBeenSet;
}

string SubtitleTransResultItem::GetTransDst() const
{
    return m_transDst;
}

void SubtitleTransResultItem::SetTransDst(const string& _transDst)
{
    m_transDst = _transDst;
    m_transDstHasBeenSet = true;
}

bool SubtitleTransResultItem::TransDstHasBeenSet() const
{
    return m_transDstHasBeenSet;
}

string SubtitleTransResultItem::GetPath() const
{
    return m_path;
}

void SubtitleTransResultItem::SetPath(const string& _path)
{
    m_path = _path;
    m_pathHasBeenSet = true;
}

bool SubtitleTransResultItem::PathHasBeenSet() const
{
    return m_pathHasBeenSet;
}

