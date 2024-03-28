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

#include <tencentcloud/lcic/v20220817/model/CustomMsgContent.h>

using TencentCloud::CoreInternalOutcome;
using namespace TencentCloud::Lcic::V20220817::Model;
using namespace std;

CustomMsgContent::CustomMsgContent() :
    m_dataHasBeenSet(false),
    m_descHasBeenSet(false),
    m_extHasBeenSet(false)
{
}

CoreInternalOutcome CustomMsgContent::Deserialize(const rapidjson::Value &value)
{
    string requestId = "";


    if (value.HasMember("Data") && !value["Data"].IsNull())
    {
        if (!value["Data"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomMsgContent.Data` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_data = string(value["Data"].GetString());
        m_dataHasBeenSet = true;
    }

    if (value.HasMember("Desc") && !value["Desc"].IsNull())
    {
        if (!value["Desc"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomMsgContent.Desc` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_desc = string(value["Desc"].GetString());
        m_descHasBeenSet = true;
    }

    if (value.HasMember("Ext") && !value["Ext"].IsNull())
    {
        if (!value["Ext"].IsString())
        {
            return CoreInternalOutcome(Core::Error("response `CustomMsgContent.Ext` IsString=false incorrectly").SetRequestId(requestId));
        }
        m_ext = string(value["Ext"].GetString());
        m_extHasBeenSet = true;
    }


    return CoreInternalOutcome(true);
}

void CustomMsgContent::ToJsonObject(rapidjson::Value &value, rapidjson::Document::AllocatorType& allocator) const
{

    if (m_dataHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Data";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_data.c_str(), allocator).Move(), allocator);
    }

    if (m_descHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Desc";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_desc.c_str(), allocator).Move(), allocator);
    }

    if (m_extHasBeenSet)
    {
        rapidjson::Value iKey(rapidjson::kStringType);
        string key = "Ext";
        iKey.SetString(key.c_str(), allocator);
        value.AddMember(iKey, rapidjson::Value(m_ext.c_str(), allocator).Move(), allocator);
    }

}


string CustomMsgContent::GetData() const
{
    return m_data;
}

void CustomMsgContent::SetData(const string& _data)
{
    m_data = _data;
    m_dataHasBeenSet = true;
}

bool CustomMsgContent::DataHasBeenSet() const
{
    return m_dataHasBeenSet;
}

string CustomMsgContent::GetDesc() const
{
    return m_desc;
}

void CustomMsgContent::SetDesc(const string& _desc)
{
    m_desc = _desc;
    m_descHasBeenSet = true;
}

bool CustomMsgContent::DescHasBeenSet() const
{
    return m_descHasBeenSet;
}

string CustomMsgContent::GetExt() const
{
    return m_ext;
}

void CustomMsgContent::SetExt(const string& _ext)
{
    m_ext = _ext;
    m_extHasBeenSet = true;
}

bool CustomMsgContent::ExtHasBeenSet() const
{
    return m_extHasBeenSet;
}

